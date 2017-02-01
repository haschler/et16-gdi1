#include <iostream>

using namespace std;

//
// Umsetzung des ADT Stapel in C++
//
// Plan:
//  * Speicherung der Daten in einer struct,
//      benötigte Informationen:
//   + ein Feld für die Zahlen
//   + Variable für die Feldgröße
//  * Umsetzung der Operationen mit Funktionen
//   1.) Nichts benötigt (Feld der Größe 0)
//      -> O(1)
//   2.) Feldgröße=0?
//      -> O(1)
//   3.) Ein neues Feld (n+1) erzeugen
//      Alle Elemente kopieren
//      Neues Element ans Ende einfügen
//      -> O(n)
//   4.) Letztes Element herausgeben
//      Ein neues Feld (n-1) erzeugen
//      Alle Elemente kopieren
//      -> O(n)

// s.o.; Plan ausführen...
struct STAPEL
{
    int* feld;
    int n;
};
typedef struct STAPEL Stapel;

void neuerStapel(Stapel*& neu)
{
    neu = new Stapel;
    neu->n = 0;
}

bool stapelLeer(Stapel* stapel)
{
    return(stapel->n == 0);
}

void stapelPush(Stapel* stapel, int zahl)
{
    // neues Feld (n+1) anlegen
    int* neu = new int[stapel->n + 1];
    // alle Elemente kopieren
    for(int i = 0; i < stapel->n; i += 1)
        neu[i] = stapel->feld[i];
    // neues Element anfügen
    neu[stapel->n] = zahl;
    // Feldgröße aktualisieren
    stapel->n += 1;
    // altes Feld löschen
    delete(stapel->feld);
    // Zeiger anpassen
    stapel->feld = neu;
}


// Hauptprogramm
int main()
{
    Stapel* s;
    neuerStapel(s);    
    if(stapelLeer(s))
        cout << "Stapel ist leer" << endl;
    stapelPush(s, 1);
    stapelPush(s, 2);
    stapelPush(s, 3);
    if(stapelLeer(s))
        cout << "Stapel ist leer" << endl;
    
    return 0;    
}




