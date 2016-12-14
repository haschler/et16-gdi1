#include <iostream>

using namespace std;

// Erhoeht alle Werte eines Feldes um 1.
// Parameter:
//  feld: Das Feld (s.o.)
//  laenge: Die Laenge des Feldes
// Rueckgabe: keine
void pluseins(int feld[], int laenge) {
    // Fuer jedes Element: erhoehe Summe
    for(int i = 0; i < laenge; i += 1) {
        feld[i] += 1;
    }
    return;
}

// Quadriert eine Ganzzahl
// Parameter:
//  x: die Zahl
// Rueckgabe: Das Ergebnis
int quadrat(int x) {
    x = x * x;
    return x;
}


int main() {
    
    // Feld mit Startwerten
    int f[] = {2, 4, 6, 8, 10};
    pluseins(f, 5);
    
    cout << f[0] << endl;
 
    int wert = 6;
    cout << quadrat(wert) << endl;
    cout << wert << endl;
    
    cout << f << endl;
    return 0;
}