#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numero[9],pos,aux;
    for(int i=0; i<9;i++){
        cout<<"Ingrese el numero de la pieza: "<<i<<endl;
        cin>>numero[i];
    }

    cout<<"-------Rompecabezas--------"<<endl;

    for(int i=0; i<9;i++){
        cout<<numero[i]<<" ";
        if(i==2||i==5){
            cout<<"\n";
        }
    }

    cout << "\n------ORDENAMIENTO------" << endl;
    for(int i=0; i<9; i++){
        pos=i;
        aux=numero[i];
        while(pos>0&&numero[pos-1]>aux&& aux!=0){
            numero[pos]=numero[pos-1];
            pos--;
        }
        numero[pos]=aux;
    }
    cout<<"-------Rompecabezas Ordenado--------"<<endl;
    for(int i=0; i<9;i++){
        cout<<numero[i]<<" ";
        if(i==2||i==5){
            cout<<"\n";
        }
    }
    return 0;
}
