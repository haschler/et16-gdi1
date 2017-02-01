#include <iostream>

using namespace std;

// Zieht die Quadratwurzel aus einer reellen Zahl.
// Parameter:
//  zahl: Die Zahl, aus der die Wurzel gezogen wird
//  fehler: Der maximale Fehler für die Berechnung
// Rückgabe: Das Ergebnis der Berechnung
double wurzel(double zahl, double fehler)
{
    double a = 1;
    double b = zahl;
    // Schleife ergibt sich aus Muster im PAP
    do
    {
        b = (a + b) / 2;
        a = zahl / b;
    }
    while(!(b - a < fehler));
    
    return b;
}

int main()
{   // entspricht Start im PAP
    double zahl;
    cout << "Zahl: ";
    cin >> zahl;
    double fehler;
    cout << "Fehler: ";
    cin >> fehler;
    
    cout << wurzel(zahl, fehler) << endl;
    return 0; // entspricht Stop im PAP
}