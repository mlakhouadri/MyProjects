/*
Angabe
 (4 Punkte) Sortieren
Schreiben Sie ein Programm, das die Effizienz von Quicksort und Mergesort vergleicht
Lesen Sie einen Wert N ein,
erzeugen Sie ein Array mit N zufälligen Elementen vom Typ int
Duplizieren Sie das Array und
sortieren Sie ein Array dann mit Mergesort und eines mit Quicksort
Zählen Sie dabei jeweils die Anzahl der benötigten Vergleiche
sowie der effektiven Vertauschungen.
*/


//Include-Direktiven
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Defines

//Defintion der globalen Variablen
int N;

//Funktionsprototypen
void swap(int *a, int *b);

int partition(int random_number_array_original[], int low, int high);

void *quicksort(int random_number_array_original[], int low, int high);

void merge(int random_number_array_copy[], int l, int m, int r);

void mergesort(int random_number_array_copy[], int l, int r);

//Funktion zur Vertauschung von Elementen
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

//Funktion zur Teilung mit Pivotelement
int partition(int random_number_array_original[], int low, int high) {
    int pivot = random_number_array_original[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (random_number_array_original[j] < pivot) {
            i++;
            swap(&random_number_array_original[i], &random_number_array_original[j]);
        }
    }
    swap(&random_number_array_original[i + 1], &random_number_array_original[high]);
    return (i + 1);
}

//Funktion Quicksort
void *quicksort(int *random_number_array_original, int low, int high) {
    if (low < high) {
        //pi bedeutet partitioning index
        int pi = partition(random_number_array_original, low, high);
        quicksort(random_number_array_original, low, pi - 1);
        quicksort(random_number_array_original, pi + 1, high);
    }
    return 0;
}

//Funktion zum Zusammenfuegen des Arrays
void merge(int random_number_array_copy[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    //Hilfsarrays
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) {
        L[i] = random_number_array_copy[l + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = random_number_array_copy[m + 1 + j];
    }
    //Hilfsarrays zusammenfuegen
    i = 0; //erster Index des ersten Hilfsarrays
    j = 0; //erster Index des zweiten Hilfsarrays
    k = l; //erster Index des zusammengefuegten Arrays
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            random_number_array_copy[k] = L[i];
            i++;
        } else {
            random_number_array_copy[k] = R[j];
            j++;
        }
        k++;
    }
    //restliche Elemente kopieren wenn vorhanden in L[i]
    while (i < n1) {
        random_number_array_copy[k] = L[i];
        i++;
        k++;
    }
    //restliche Elemente kopieren wenn vorhanden in R[j]
    while (j < n2) {
        random_number_array_copy[k] = R[j];
        j++;
        k++;
    }
    return;
}

//Funktion Mergesort
void mergesort(int random_number_array_copy[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        //erste und zweite Haelften sortieren
        mergesort(random_number_array_copy, l, m);
        mergesort(random_number_array_copy, m + 1, r);

        merge(random_number_array_copy, l, m, r);
    }
    return;
}

//Hauptprogramm
int main() {
    //Aufforderung eine Zahl einzugeben und diese einlesen
    printf("Bitte geben Sie eine Zahl ein:  ");
    scanf("%d", &N);

    //Zufallszahlen generieren
    srand(time(NULL));
    int random_number_array_original[N];
    int i;
    int size = sizeof(random_number_array_original) / sizeof((random_number_array_original[0]));
    for (i = 0; i < size; i++) {
        random_number_array_original[i] = rand() % 9;
    }

    //Durch das array iterieren
    int random_number_array_copy[N];
    int loop;
    for (loop = 0; loop < N; loop++) {
        random_number_array_copy[loop] = random_number_array_original[loop];
    }
    printf("original -> copied \n");
    for (loop = 0; loop < N; loop++) {
        printf("   %2d        %2d\n", random_number_array_original[loop], random_number_array_copy[loop]);
    }
    int count;
    for (i = 0; i < count; i++) {
        scanf("%d", &random_number_array_original[i]);
    }
    int n = sizeof(random_number_array_original) / sizeof(random_number_array_original[0]);
    quicksort(random_number_array_original, 0, n - 1);
    //Quicksorted array ausgeben
    printf("Quicksorted random_number_array_original: %d", random_number_array_original[i]);
    for (i = 1; i < N; i++) {
        printf("%d", random_number_array_original[i]);
    }


    size = sizeof(random_number_array_copy) / sizeof(random_number_array_copy[0]);

    //Mergesorted array ausgeben
    mergesort(random_number_array_copy, 0, size - 1);
    printf("\nMergesorted random_number_array_copy: ");
    for (int i = 0; i < size; i++) {
        printf("%d", random_number_array_copy[i]);
    }

    return 0;
}