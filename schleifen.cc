#include <iostream>

int main() {
    unsigned int summe = 0;
    
    unsigned int zaehler = 1;
    while(zaehler <= 999)
    {
        // Summe aktualisieren
        summe = summe + zaehler;
        // Zähler erhöhen
        zaehler += 2;
    }
    
    summe = 0;
    
    for(int i = 1; i <= 999; i += 2)
    {
        // Summe aktualisieren
        summe += i;
    }
    
    return 0;
}
