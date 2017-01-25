#include <iostream>
#include <time.h>

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

// Ruft die Funktion wurzel mit einer vorgegebenen Genauigkeit auf
// Parameter, Rückgabe: s. dort...
double wurzel(double zahl)
{
    return wurzel(zahl, 0.000001);
}

int main()
{
    // Messschleife
    for(int i = 0; i < 10000; i += 10)
    {
        clock_t start = clock();
        double x = i / 10000;
        for(int j = 0; j < 100000; j += 1)
            wurzel(x);
        clock_t end = clock();

        double runtime = (double)(end - start) ;

        cout << i << ", " << runtime << endl;
    }

}
