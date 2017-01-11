#include <iostream>

using namespace std;

int main()
{   // entspricht Start im PAP
    double zahl;
    cout << "Zahl: ";
    cin >> zahl;
    double fehler;
    cout << "Fehler: ";
    cin >> fehler;
    double a = 1;
    double b = zahl;
    // Schleife ergibt sich aus Muster im PAP
    do
    {
        b = (a + b) / 2;
        a = zahl / b;
    }
    while(!(b - a < fehler));

    cout << b << endl;
    return 0; // entspricht Stop im PAP
}