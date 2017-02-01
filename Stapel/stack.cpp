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



