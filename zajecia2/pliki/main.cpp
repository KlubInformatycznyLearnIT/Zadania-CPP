#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    fstream nazwa;
    nazwa.open("plik.txt");
    string tekst;
    if(nazwa.is_open())
    {
        string imie = "Jasiek";
        nazwa << imie;
        while(!nazwa.eof())
        {
            getline(nazwa,tekst);

            cout << tekst  << "\n";
            //cout << "nowa linia";
        }
    }
    nazwa.close();
    return 0;
}
