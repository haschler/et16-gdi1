//
// list2.h: Beispiel fuer ADT Liste (Header)
//			(einfach) verkettete Speicherung
// Autor: Ingo Haschler <lehre@itih.de>
// 

// Datenstruktur fuer ein Listenelement
struct LISTNODE {
	int key; 				// Schlüssel
	struct LISTNODE* next;	// -> nächstes Element
};
typedef struct LISTNODE Listnode;
// Datenstruktur für Liste (verkettete Speicherung)
struct LIST {
	Listnode *head; // -> 0. Element
	Listnode *tail; // -> letztes Element
	int n;			// Aktuelle Länge
};
// Definition neuer Datentyp
typedef struct LIST List;

// Erzeugt eine neue (leere) Liste
// Parameter
//  inout L: Zeiger auf die Liste (Datenstruktur)
//  in n: Maximale Größe fuer die neue Liste
// Rückgabe: 0 bei Erfolg, sonst 1 (n<1) oder 2 (Speicher voll)
int createList(List*& L);

// Prüft, ob eine Liste leer ist
// Parameter
//  inout L: Zeiger auf die Liste (Datenstruktur)
// Rückgabe: true falls leer, sonst false
bool listEmpty(List* L);

// Fügt einer Liste ein Element hinzu
// Parameter
//  in L: Zeiger auf die Liste (Datenstruktur)
//  in ptr: Zeiger auf das Element, hinter dem eingefügt wird
//  in x: Das Element
// Rückgabe: 0 bei Erfolg, sonst 1 (ungültige Position) oder 2 (Speicher voll)
int insertList(List* L, Listnode* ptr, int x);

// Löscht ein Element aus einer Liste
// Parameter
//  in L: Zeiger auf die Liste (Datenstruktur)
//  in p: Zeiger auf das Element, dessen Nachfolger gelöscht wird
// Rückgabe: 0 bei Erfolg, sonst 1 (ungültige Position)
int deleteList(List* L, Listnode* ptr);

// Sucht in einer Liste nach einem Element
// Parameter
//  in L: Zeiger auf die Liste (Datenstruktur)
//  in x: Suchbegriff
//  out p: Zeiger auf das gefundene Element, bzw. NULL bei erfolgloser Suche
// Rückgabe: 0 bei Erfolg, sonst 1 (Liste leer)
int searchList(List* L, int x, Listnode*& ptr);

// Zugriff auf den Inhalt eines Listenelementes
// Parameter
//  in L: Zeiger auf das Element
//  out x: Das gewünschte Element
// Rückgabe: 0 bei Erfolg
int getList(Listnode* L, int& x);

// Verbindung zweier Listen zu einer neuen Liste
// Parameter
//  in L1: Zeiger auf die Datenstruktur der ersten Liste
//  in L2: Zeiger auf die Datenstruktur der zweiten Liste
//  inout L: Zeiger auf die Datenstruktur der neuen Liste
int joinLists(List* L1, List* L2, List*& L);
