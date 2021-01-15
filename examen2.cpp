#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
int n,p,m;
/*Damos la bienvenida*/
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"                                             Bienvenido                                                        "<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;
/*Pedimos los numeros*/
    cout<<"Dame un primer numero"<<endl;
      cin>>n ;
    cout<<"Dame otro numero"<<endl;
      cin>>p;
    cout<<"Dame un ultimo numero"<<endl;
      cin>>m;
/*Hay que comprobar todas las posibilidades*/
    if (n<p and p<m) 
    {
        
        
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
            cout<<                                  ""                                  <<endl;
            cout<<"                               Orden:"                               <<endl;
            cout<<"\t\t\t\t"<<                     n                                    <<endl;
            cout<<"\t\t\t\t"<<                     p                                    <<endl;
            cout<<"\t\t\t\t"<<                     m                                    <<endl;
            cout<<"                                                                    "<<endl;
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl; 
    }
    
    if (n>p and n<m)
    {
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
            cout<<                                  ""                                  <<endl;
            cout<<"                               Orden:"                               <<endl;
            cout<<"\t\t\t\t"<<                     p                                    <<endl;
            cout<<"\t\t\t\t"<<                     n                                    <<endl;
            cout<<"\t\t\t\t"<<                     m                                    <<endl;
            cout<<"                                                                    "<<endl;
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl; 
    }
    
    if (n>p and n>m)
    {
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
            cout<<                                  ""                                  <<endl;
            cout<<"                               Orden:"                               <<endl;
            cout<<"\t\t\t\t"<<                     p                                    <<endl;
            cout<<"\t\t\t\t"<<                     m                                    <<endl;
            cout<<"\t\t\t\t"<<                     n                                   <<endl;
            cout<<"                                                                    "<<endl;
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl; 
    }
    
    if (n>p and p>m)
    {
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
            cout<<                                  ""                                  <<endl;
            cout<<"                               Orden:"                               <<endl;
            cout<<"\t\t\t\t"<<                     m                                    <<endl;
            cout<<"\t\t\t\t"<<                     p                                    <<endl;
            cout<<"\t\t\t\t"<<                     n                                    <<endl;
            cout<<"                                                                    "<<endl;
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl; 
    }
    
    if (p>n and n>m)
    {
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
            cout<<                                  ""                                  <<endl;
            cout<<"                               Orden:"                               <<endl;
            cout<<"\t\t\t\t"<<                     m                                    <<endl;
            cout<<"\t\t\t\t"<<                     n                                    <<endl;
            cout<<"\t\t\t\t"<<                     p                                    <<endl;
            cout<<"                                                                    "<<endl;
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl; 
    }
    
    if (p>m and n<m)
    {
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
            cout<<                                  ""                                  <<endl;
            cout<<"                               Orden:"                               <<endl;
            cout<<"\t\t\t\t"<<                     n                                    <<endl;
            cout<<"\t\t\t\t"<<                     m                                    <<endl;
            cout<<"\t\t\t\t"<<                     p                                    <<endl;
            cout<<"                                                                    "<<endl;
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl; 
    }

return 0;
}