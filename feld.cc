#include <iostream>

using namespace std;

int main() {
    
    //Leeres Feld (enthaelt Garbage)
    //int feld[5];
    /*Element einzeln fuellen
    feld[0] = 4;
    feld[1] = 7;
    */
    // Feld mit Startwerten
    int feld[] = {2, 4, 6, 8};
    cout << sizeof(feld) << "=" << sizeof(int*) << endl;
    cout << sizeof(int) << endl;
    // bilde die Summe aller Elemente
    // Variable fuer die Summe
    int summe = 0;
    // Fuer jedes Element: erhoehe Summe
    for(int i = 0; i < 5; i += 1) {
        // cout << i << endl;
        summe += feld[i];
    }
    
    cout << summe << endl;
    
    // Zugriff auf Element Nr. 10
    // (gibt es nicht)
    feld[9] = 42;
    cout << feld[9] << endl;
    return 0;
}