#include<iostream>
using namespace std;
int main()
{
    int valorInicial;
    int valorFinal;
    cout<<("ingrese un valor inicial ");
    cin>>valorInicial;
    cout<<("ingrese un valor final ");
    cin>>valorFinal;
    for(int i = valorInicial; i <= valorFinal; i++)
    {
        if(i % 2 != 0){
            cout<<(i)<<endl;
        }
        else if(valorInicial == valorFinal)
        {
            cout<<("incorrecto\n");
        }
        else if(valorInicial > valorFinal)
        {
            cout<<("incorrecto\n");
        }

    }
 return 0;
}
