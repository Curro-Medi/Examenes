#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std ;
int main (){ 
int n;
/*Damos entrada al programa*/
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"                                             Bienvenido                                                        "<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"Dame un numero, mientras el numero introducido cumpla la condicion 2*N+N^3<320 seguire pidiendo numeros        "<<endl;
    cin>>n ;
/*ahora un do while para la condicion*/
if (2*n+n^3<320)
{
     cout<<"Vale pichita vale dame otro numero"<<endl;
     cin>>n;
}


     cout<<":::::::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"    Ese supera el 320, asi que se acabo "<<endl;
     cout<<":::::::::::::::::::::::::::::::::::::::::"<<endl;

return 0;
}