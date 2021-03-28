#include <stdio.h>

int menue_option_einlesen(void);

int main(void)
{
    int option;
    option = menue_option_einlesen();
    printf("Sie haben die Menue-Option %d gewaehlt\n", option);

    return 0;
}

int menue_option_einlesen(void)
{
    int auswahl = 0;

    do
    {
      printf("\n");
      printf("\n1 - Datensatz hinzufuegen");
      printf("\n2 - Datensatz aendern");
      printf("\n3 - Datensatz loeschen");
      printf("\n4 - Verlassen");
      printf("\n");
      printf("\nGeben Sie Ihre Wahl ein: ");
      scanf("%d", &auswahl);

    }while (auswahl < 1 || auswahl > 4);

    return auswahl;
}