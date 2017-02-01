#include <iostream>

using namespace std;

int main()
{
    char feld = "Elektrotechnik";
    char suchbegriff = "technik";
    int pos = suche(feld, suchbegriff);
    if(pos == -1)
        cout << "Suchbegriff nicht gefunden" << endl;
    else
        cout << "Suchbegriff an Position "<< pos  << "gefunden" << endl;
}