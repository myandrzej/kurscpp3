#include <iostream>
using namespace std;
int main()
{
    int tab[10];

    cout<<"Podaj 10 liczb: "<<endl;
    for (int i=0; i<10;i++)
    {
        cin>>tab[i];
    }
    
    int suma=0, licznik=0;
    
    for (int i=0;i<10;i++)
    {
        if (tab[i] > 0)
        {
            suma = suma+tab[i];
            licznik++;
        }
    }
    
    if (licznik > 0)
    {
        double srednia=(double)suma/licznik;
        cout<<"Srednia z dodatnich wartosci= " <<srednia<<endl;
    }
    else {
        cout<<"Brak dodatnich wartosci w tablicy! ";
    }
    
    return 0;
}
