//
// list.h: Beispiel fuer ADT Liste (Header)
// Autor: Ingo Haschler <lehre@itih.de>
//

// Datenstruktur fuer Liste (lineare Speicherung)
struct LIST {
	int size;	// Maximale Länge
	int n;		// Aktuelle Länge
	int *l;		// Menge der Elemente (Zeiger)
};
// Definition neuer Datentyp
typedef struct LIST List;

// Erzeugt eine neue (leere) Liste
// Parameter
//  inout L: Zeiger auf die Liste (Datenstruktur)
//  in n: Maximale Größe fuer die neue Liste
// Rückgabe: 0 bei Erfolg, sonst 1 (n<1) oder 2 (Speicher voll)
int createList(List*& L, int n);

// Prüft, ob eine Liste leer ist
// Parameter
//  inout L: Zeiger auf die Liste (Datenstruktur)
// Rückgabe: true falls leer, sonst false
bool listEmpty(List* L);

// Fuegt einer Liste ein Element hinzu
// Parameter
//  in L: Zeiger auf die Liste (Datenstruktur)
//  in p: Die Position, an der eingefügt wird
//  in x: Das Element
// Rückgabe: 0 bei Erfolg, sonst 1 (Liste voll) oder 2 (Position ungültig)
int insertList(List* L, int p, int x);

// Löscht ein Element aus einer Liste
// Parameter
//  in L: Zeiger auf die Liste (Datenstruktur)
//  in p: Die Position, an der gelöscht wird
// Rückgabe: 0 bei Erfolg, sonst 2 (Position ungültig)
int deleteList(List* L, int p);

// Sucht in einer Liste nach einem Element
// Parameter
//  in L: Zeiger auf die Liste (Datenstruktur)
//  in x: Suchbegriff
//  out p: Die Position, an der der Suchbegriff gefunden wurde bzw. -1 bei erfolgloser Suche
// Rückgabe: 0 bei Erfolg, sonst 1 (Liste leer)
int searchList(List* L, int x, int& p);

// Zugriff auf ein Element einer Liste
// Parameter
//  in L: Zeiger auf die Liste (Datenstruktur)
//  in p: Die Position des gewünschten Elements (1-basiert)
//  out x: Das gewünschte Element
// Rueckgabe: 0 bei Erfolg, sonst 2 (Position ungültig)
int getList(List* L, int p, int& x);

// Verbindung zweier Listen zu einer neuen Liste
// Parameter
//  in L1: Zeiger auf die Datenstruktur der ersten Liste
//  in L2: Zeiger auf die Datenstruktur der zweiten Liste
//  inout L: Zeiger auf die Datenstruktur der neuen Liste
// Rückgabe: 0 bei Erfolg, sonst 1 (Speicher voll)
int joinLists(List* L1, List* L2,  List*& L);
