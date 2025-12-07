
#include <iostream>
using namespace std;
int main()
{
    int tab1[5], tab2[5];
    
    cout<<"Podaj 5 liczb do pierwszej tablicy:"<<endl;
    for (int i=0; i<5;i++)
    {
        cin>>tab1[i];
        
    }

    cout<<"Podaj 5 liczb do drugiej tablicy:"<<endl;
    for (int i=0; i<5;i++)
    {
        cin>>tab2[i];
        
    }

bool sprawdz = true;
for (int i=0; i<5;i++)
{
    if (tab1[i] != tab2[i]){
        sprawdz=false;
        break;
    }
}

if (sprawdz)
cout<<"Tablice sa identyczne";
else
cout<<"Tablice nie sa identyczne";
    return 0;
}
