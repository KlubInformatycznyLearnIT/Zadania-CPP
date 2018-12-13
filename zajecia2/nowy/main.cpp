#include <iostream>

using namespace std;
int czesc(string imie, int wiek); //deklaracja
int czesc(string imie);
int main()
{
    string imie = "Jan";
    int liczba = czesc(imie);
    cout << liczba << endl;
    int liczba2 = czesc(imie, 20);
    cout << liczba2 << endl;
    return 0;
}
//typ_zwracany nazwa(typ_parametru nazwa_parametru)
//{}
int czesc(string imie, int wiek) //definicja
{
    cout << "Witaj "<< imie <<"! czesc 1" << endl;
    cout << "Slyszalem ze masz " << wiek << " lat!" << endl;
    return wiek;
}
int czesc(string imie)
{
    cout << "Witaj "<< imie <<"! czesc 2" << endl;
    return 10;
}
