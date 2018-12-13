#include <iostream>
#include <fstream>
using namespace std;
//ZAD1
int AbsoluteValue(int number)
{
    if(number >= 0)
        return number;
    else
        return number * -1;
}
//ZAD2
void Calls()
{
    static int Calls = 0;
    cout << "Calls: " << ++Calls << endl;
}
//ZAD3
int sum(int one, int two, int three=0, int four=0, int five=0)
{
    return one+two+three+four+five;
}
//ZAD4 - REKURENCJA
int power(int x, int y)
{
    if(y == 0)
        return 1;
    return x*power(x,y-1);
}
//ZAD4 - PETLA
int powerPetla(int x, int y)
{
    int suma = 1;
    for(int i=y; i>0; i--)
        suma *= x;
    return suma;
}
//ZAD7
int table[128];
void setZeros()
{
    for(int i=0; i<128; i++)
        table[i]=0;
}

int main()
{
    //cout << AbsoluteValue(-18); DO ZAD 1

    //int i = 0; DO ZAD 2
    //while(i < 40)
    //{
    //    Calls();
    //    i++;
    //}
    //cout << sum(1,2,3); DO ZAD 3
    //cout << power(2,4) << endl; DO ZAD 4
    //cout << powerPetla(2,4);
    setZeros();
    fstream plik;
    plik.open("plik.txt");
    if(plik.good())
    {
        //odczyt z pliku
        //dla ka¿dej linii sprawdzamy ile jest w niej znakow
        //liczymy kazdy znak w linii
        //petla przechodzaca przez kazda linie
        //rzutujemy dany znak w linii -  (int)znak
    }
    return 0;
}
