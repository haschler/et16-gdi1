#include <iostream>

using namespace std;

// Fallen Ihnen irgendwelche Aehnlichkeiten auf?

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
    
    int feld2[] = {1, 3, 5, 7};
    // bilde die Summe
    int summe2 = 0;
    for(int i = 0; i < 4; i +=1) {
        summe2 += feld2[i];
    }
    cout << summe2 << endl;
    
    int feld3[] = {1, 3, 5, 23, 5, 8};
    // bilde die Summe
    int summe3 = 0;
    for(int i = 0; i < 6; i +=1) {
        summe3 += feld3[i];
    }
    cout << summe3 << endl;
    
    return 0;
}