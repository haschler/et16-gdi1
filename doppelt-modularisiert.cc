#include <iostream>

using namespace std;

// Bildet die Summe eines Feldes.
// Parameter:
//  feld: Das Feld (s.o.)
//  laenge: Die Laenge des Feldes
// Rueckgabe: Die Summe aller Feldelemte
int summe(int feld[], int laenge) {
    // bilde die Summe aller Elemente
    // Variable fuer die Summe
    int summe = 0;
    // Fuer jedes Element: erhoehe Summe
    for(int i = 0; i < laenge; i += 1) {
        // cout << i << endl;
        summe += feld[i];
    }
    return summe;
}

int main() {
    
    // Feld mit Startwerten
    int f[] = {2, 4, 6, 8, 10};
    cout << summe(f, 5) << endl;
    
    int feld2[] = {1, 3, 5, 7};
    cout << summe(feld2, 4) << endl;
    
    int feld3[] = {1, 3, 5, 23, 5, 8};
    cout << summe(feld3, 6) << endl;
    
    return 0;
}