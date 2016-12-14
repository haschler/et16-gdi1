#include <iostream>

using namespace std;

int main() {
    
    // Feld mit Startwerten
    int feld[] = {2, 4, 6, 8, 10};
    // bilde die Summe aller Elemente
    // Variable fuer die Summe
    int summe = 0;
    // Fuer jedes Element: erhoehe Summe
    for(int i = 0; i < 5; i += 1) {
        // cout << i << endl;
        summe += feld[i];
    }
    
    cout << summe << endl;
    
    return 0;
}