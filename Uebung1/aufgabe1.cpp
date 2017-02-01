#include <iostream>

using namespace std;

int suche(char* text, char* such)
{
    // Sequentielle Suche nach dem ersten Zeichen
    // des Suchbegriffes
    for(int i = 0; text[i] != 0; i += 1)
    {
        if(text[i] == such[0])
        {
            // restliche Zeichen vergleichen
            bool abgebrochen = false;
            for(int j = 1; such[j] != 0; j += 1)
            {
                if(such[j] != text[i + j])
                {
                    abgebrochen = true;
                    break;
                }
            }
            if(!abgebrochen)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    char* feld = "Elektrotechnik";
    char* suchbegriff = "technik";
    int pos = suche(feld, suchbegriff);
    if(pos == -1)
    {
        cout << "Suchbegriff nicht gefunden" << endl;
    }
    else
    {
        cout << "Suchbegriff an Position " << pos << " gefunden" << endl;
    }
}