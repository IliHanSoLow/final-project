#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

typedef struct { // Datenstruktur für das Datum
    int tag;
    int monat;
    int jahr;
} Datum;

typedef struct student{ // Datenstruktur für Studenten
    char nachname[51];
    char vorname[51];
    char studiengang[51];
    char matrikelnummer[9];
    Datum geburtstag;
    Datum startdatum;
    Datum enddatum;
    struct student *nextStudent; // Zuweisung des Zeigers auf die nächste Studentenstruktur
} Student;

int validesDatum(int monat, int tag, int jahr);

Datum stringToDate(char *dateStr);

Student* inputStudentFromCSV(FILE *file);

int validesDatum(int monat, int tag, int jahr);

Datum stringToDate(char *dateStr);

Student* inputStudentFromCSV(FILE *file);

void addStudent(Student *neuerStudent);

void readCSVAndAddStudents(char *filename);