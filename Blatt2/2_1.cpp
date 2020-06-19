#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    cout << "    (''`-''-/'').___..--''''`-._       " << endl
         << "     `6_ 6  )   `-.  (     ).`-.__.`)  " << endl
         << "     (_Y_.)'  ._   )  `._ `. ``-..-'   " << endl
         << "   _..`--'_..-_/  /--'_.' ,'           " << endl
         << "  (il),-''  (li),'  ((!.-'	            " << endl;

    //Mit cin
    {
        string vorname;
        cout << "Vorname: ";
        cin >> vorname;

        string nachname;
        cout << "Nachname: ";
        cin >> nachname;

        cout << "Hallo " << vorname << " " << nachname << endl;
    }
    cin.ignore(); //benoetigen wir da wir voher cin >> str verwendet haben und nun noch in '\n' im buffer ist.
    //Mit getline
    {
        string vorname;
        cout << "Vorname: ";
        getline(cin, vorname);

        string nachname;
        cout << "Nachname: ";
        getline(cin, nachname);

        cout << "Hallo " << vorname << " " << nachname << endl;
    }
    return 0;
}