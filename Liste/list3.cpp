//
// list3.c: Beispiel fuer ADT Liste (Header)
//			(doppelt) verkettete Speicherung
// Autor: Ingo Haschler <lehre@itih.de>
// 

#include "list3.h"

#include <cstdlib>
#include <iostream>

using namespace std;

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
	L->head->prev = NULL;
	L->tail->next = NULL;
	L->tail->prev = L->head;
	L->n = 0;
	return 0;
}	

bool listEmpty(List* L) {
	return (L->n == 0);
}

int insertList(List* L, Listnode* ptr, int x) {
	// Zeiger auf erstes Element? 
	if (ptr == L->head) return 1;
	Listnode* newnode = new Listnode;
	if (newnode == NULL) return 2;
	// Füge neues Element ein 
	newnode->key = x;
	newnode->next = ptr;
	newnode->prev = ptr->prev;
	ptr->prev = newnode;
	newnode->prev->next = newnode;
	L->n += 1;
	return 0;
}

int deleteList(List* L, Listnode* ptr) {
	// Unzulässige Position? 
	if (ptr == L->head || ptr == L->tail) return 1;
	// Entferne Element und gib Speicher frei 
	ptr->prev->next = ptr->next;
	ptr->next->prev = ptr->prev;
	delete(ptr);
	L->n -= 1;
	return 0;
}

int searchList(List* L, int x, Listnode*& ptr) {
	ptr = NULL; // nicht gefunden 
	if (listEmpty(L)) return 1;
	Listnode* node = L->head->next; // Anfangsposition 
	do {
		// Gefunden? 
		if(node->key == x) {
			ptr = node;
			return 0;
		}
		node = node->next; // Naechstes Element 
	} while (node != L->tail);
	return 0;
}

int getList(Listnode* L, int& x) {
	// Liefere Schluessel 
	x = L->key;
	return 0;
}

void sortList(List* L) {
	// Hier sind Sie gefragt :-)
	return;
}

void printList(List* L) {
	Listnode* node = L->head->next;
	while(node != L->tail) {
		int v;
		getList(node, v);
		cout << v << endl;
		node = node->next;
	}
	return;
}
