//
// list.cpp: Beispiel fuer ADT Liste (sequentiell)
// Autor: Ingo Haschler <lehre@itih.de>
//

#include "list.h"

#include <cstdlib>

int createList(List*& L, int n)
{
    // n positiv?
    if (n <= 0) return 1;
    // Lege Datenstruktur an
    L = new List;
    if (L == NULL) return 2;
    // Reserviere Platz für Inhalt
    L->l = new int[n];
    if (L->l == NULL) return 2;
    // Initialisiere leere Liste
    L->size = n;
    L->n = 0;
    return 0;
}

bool listEmpty(List* L)
{
    return (L->n == 0);
}

int insertList(List* L, int p, int x)
{
    // Noch Platz?
    if (L->n == L->size) return 1;
    // Position gültig?
    if (p < 1 || p > L-> n + 1) return 2;
    // Verschiebe Elemente
    if (!listEmpty(L))
        for (int i = L->n; i >= p; i -= 1)
            L->l[i] = L->l[i - 1];
    // Füge neues Element ein
    L->l[p - 1] = x;
    L->n += 1;
    return 0;
}

int deleteList(List* L, int p)
{
    // Position gültig?
    if (p < 1 || p > L-> n) return 2;
    // Verschiebe Elemente
    for (int i = p - 1; i < L->n - 1; i += 1)
        L->l[i] = L->l[i + 1];
    L->n -= 1;
    return 0;
}

int searchList(List* L, int x, int& p)
{
    // Liste leer?
    if (listEmpty(L)) return 1;
    // Durchsuche Liste
    for (int i = 0; i < L->n; i += 1)
    {
        if (L->l[i] == x)
        {
            p = i + 1; /* gefunden */
            return 0;
        }
    }
    p = -1; /* nicht gefunden */
    return 0;
}

int getList(List* L, int p, int& x)
{
    // Position gültig?
    if(p < 1 || p > L-> n + 1) return 2;
    // Liefere Element
    x = L->l[p - 1];
    return 0;
}

int joinLists(List* L1, List* L2, List*& L)
{
    // Initialisiere neue Liste
    if (createList(L, L1->n + L2->n)) return 1;
    // Kopiere erste Liste
    for (int i = 0; i < L1->n; i += 1)
        insertList(L, L->n + 1, L1->l[i]);
    // Kopiere zweite Liste
    for (int i = 0; i < L2->n; i += 1)
        insertList(L, L->n + 1, L2->l[i]);
    return 0;
}
