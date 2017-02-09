//
// list2.c: Beispiel fuer ADT Liste
//			(einfach) verkettete Speicherung
// Autor: Ingo Haschler <lehre@itih.de>
// 

#include "list2.h"

#include <stdlib.h>

int createList(List*& L) {
	// Datenstruktur erzeugen
	L = new List;
	if (L == NULL) return 2;
	// Start- u. Endelement erzeugen
	L->head = new Listnode;
	if (L->head == NULL) return 2;
	L->tail = new Listnode;
	if (L->tail == NULL) return 2;
	// Verketten...
	L->head->next = L->tail;
	L->tail->next = NULL;
	L->n = 0;
	return 0;
}	

bool listEmpty(List *L) {
	return (L->n == 0);
}

int insertList(List*L, Listnode* ptr, int x) {
	// Zeiger auf letztes Element?
	if (ptr == L->tail) return 1;
	Listnode* newnode = new Listnode;
	if (newnode == NULL) return 2;
	// Füge neues Element ein
	newnode->key = x;
	newnode->next = ptr->next;
	ptr->next = newnode;
	L->n += 1;
	return 0;
}

int deleteList(List *L, Listnode *ptr) {
	// Unzulässige Position?
	if (ptr == L->tail || ptr->next == L->tail) return 1;
	// Entferne Element und gib Speicher frei
	Listnode *oldnode = ptr->next;
	ptr->next = oldnode->next;
	delete(oldnode);
	L->n -= 1;
	return 0;
}

int searchList(List* L, int x, Listnode*& ptr) {
	ptr = NULL; // nicht gefunden
	if (listEmpty (L)) return 1;
	Listnode* node = L->head->next; // Anfangsposition
	do {
		// Gefunden?
		if (node->key == x) {
			ptr = node;
			return 0;
		}
		node = node->next; // NÄchstes Element
	} while (node != L->tail);
	return 0;
}

int getList(Listnode* L, int& x) {
	// Liefere Schlüssel
	x = L->key;
	return 0;
}

int joinLists(List* L1, List* L2, List*& L) {
	// Erzeuge neue Liste
	if (createList(L)) return 1;
	L->head = L1->head;
	L1->tail->next = L2->head;
	L->tail = L2->tail;
	L->n = L1->n + L2->n;
	return 0;
}

int joinLists2(List* L1, List* L2, 
		List*& L) {
	/* Erzeuge neue Liste */
	if(createList(L)) return 1;
	/* Listenanfang */
	Listnode* lptr = L->head;
	/* Kopiere Liste 1 */
	Listnode* ptr = L1->head->next;
	while(ptr != L1->tail) {
		insertList(L, lptr, ptr->key);
		lptr = lptr->next;
		ptr = ptr->next;
	}
	/* Kopiere Liste 2 */
	ptr = L2->head->next;
	while(ptr != L2->tail) {
		insertList(L, lptr, ptr->key);
		lptr = lptr->next;
		ptr = ptr->next;
	}
	return 0;
}
