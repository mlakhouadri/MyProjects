/*
Aufgabe 1 Angabe
(4 Punkte) Zufälliger Text
Schreiben Sie ein Programm, das zwei ganze Zahlen M und N einliest,
einen binären Zufallstextstring (z.B. “011001010001101…”) der Länge N erzeugt
und dann die Anzahl weiterer Vorkommen der letzten M Bits irgendwo sonst im String zählt
*/

//Include-Direktiven
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//Defines

//Defintion der globalen Variablen
int N;
int M;
int nMax = 2;
int nMin = 0;
int nNumOfNumsToGenerate;
int random_number;
//int array_random_number[];
char *txt[];
char *pat[];

//Funktionsprototypen
int generate_random_number(const int nMin, const int nMax, const int nNumOfNumsToGenerate);

void printArray(int array_random_number[], int random_number);

char convertIntegerArrayToCharArray(int array_random_number[], char *pat[], char *txt[]);

char search(char *pat[], char *txt[]);

//Funktion zur Generierung des binaeren Zufallsstrings
int generate_random_number(const int nMin, const int nMax, const int nNumOfNumsToGenerate) {
    srand(time(NULL));
    generate_random_number(0, 2, N);
    return random_number;
}

//Funktion zur Konvertierung von int random_number nach int array_random_number
void printArray(int array_random_number[], int random_number) {
    array_random_number[N];
    for (int i = 0; i < N; i++) {
        sprintf(array_random_number, random_number);
    }
    return;
}

//Funktion zur Umwandlung des int random_number in ein char[]
char convertIntegerToChar(int random_number, char *pat[], char *txt[]) {
    //bestimmen der Anzahl der Zahlen
    int m = N;
    int digit = 0;
    while (m) {
        digit++;
        m /= 10;
    }
    //Array duplizieren
    char arr1[digit];
    //Memory allocaton
    txt = (char) malloc(digit);
    //Aufteilung des int in Zahlen
    int index = 0;
    while (N) {
        arr1[++index] = N % 10 + '0';
        N /= 10;
    }
    //Zahlen im Array vertauschen
    int i;
    for (i = 0; i < index; i++) {
        txt[i] = arr1[index - i];
    }
    //Char [] mit Null terminieren
    txt[i] = '\0';
    //Char [] zurueckgeben
    return txt;
}

//Funktion zum Vergleichen von Pattern mit Text
char search(char *pat[], char *txt[]) {
    int i;
    int j;
    int counter = 0;
    M = strlen(pat); //Länge Muster
    N = strlen(txt);   //Länge Text
    while (i <= N - M) {      //solange i kleiner als N-M
        //solange Muster und Text gleich j++;
        for (j = 0; j < M && pat[j] == txt[i + j]; j++) {
            if (j == M)  //Ist die Länge von j gleich der vom Muster?
                counter++;
            i++;//im Text eine Position weiter
        }
        printf("Das Pattern kommt %d mal vor", counter);
    }
    return counter;
}

//Hauptprogramm
int main() {
    //Aufforderung Zahlen einzugeben und diese einzulesen
    printf("Bitte geben Sie zwei ganze Zahlen ein: ");
    scanf("%d.%d", &N, &M);

    //Zufallszahl erzeugen
    for (int i = 0; i < N; i++) {
        int random_number = rand() % (nMax - nMin) + nMin;
        printf("%d", random_number);
    }
    printf("\n");

    //array_random_number erstellen
    int array_random_number[random_number];
    memset(array_random_number, random_number, random_number * sizeof(array_random_number[0]));
    printArray(array_random_number, random_number);
    sprintf(array_random_number, random_number);

    //Funktion convertIntegerToChar aufrufen
    char txt = convertIntegerToChar(random_number, pat, txt);

    //Array ausgeben
    for (int i = 0; i < N; i++) {
        printf("%s, ", txt);

    }

    //Funktion zur Textsuche aufrufen
    pat[0] = txt;
    search(pat, txt);

    return 0;
}
