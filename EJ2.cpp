#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){ 

int i,c,d,loteria,random;
int we=0,t=1;
system ("color 07");
char a=177, b=219;
cout<<"\n\n\n\n\t\t\t\tGENERANDO BOLETOS...";
cout<<"\n";
cout<<"\t\t\t\t";

    for (i = 0; i < 25; i++)
    {
            cout<<a;
            c=rand()%150;
            Sleep(c);
            cout<<"\r";
            cout<<"\t\t\t\t";
    }
    
   for (i = 0; i < 25; i++)
    {
            cout<<b;
            d=rand()%100;
            Sleep(d);}
           
    
 
 
 system("cls"); 
 
 
srand((int) time(0));


    cout<<"El boleto premiado ha sido el ";
    loteria=rand() %99999;
    cout<<loteria<<endl;

if (loteria<=9999, loteria>1000)
{
cout<<"El boleto numero "<<t<<" es "<<"0"<<loteria<<endl;
}
    else
    {
                    if (loteria<=999, loteria>100)
            {
cout<<"El boleto numero "<<t<<" es "<<"00"<<loteria<<endl;
            }
            else
            {
                           if (loteria<=99, loteria>10)
                {
cout<<"El boleto numero "<<t<<" es "<<"000"<<loteria<<endl;
                }
                else
               {
                        if (loteria<=9, loteria>1)
                    {
cout<<"El boleto numero "<<t<<" es "<<"0000"<<loteria<<endl;
                }
             else
                {
                   if (loteria=0)
                  {
cout<<"El boleto numero "<<t<<" es "<<"00000"<<endl;
                            }
                          else
            {
                    if (loteria=0)
 {
cout<<"El boleto numero "<<t<<" es "<<"00000"<<endl;
     }
        }
                        
     }

    }
      }
            
    }




do
{

    random=rand() %99999;
   
    t=t+1;
    we=we+1;

if (random<=9999, random>1000)
{
     cout<<"El boleto numero "<<t<<" es "<<"0"<<random<<endl;
}
    else
    {
                    if (random<=999, random>100)
     {
cout<<"El boleto numero "<<t<<" es "<<"00"<<random<<endl;
   }
  else
   {
 if (random<=99, random>10)
   {
  cout<<"El boleto numero "<<t<<" es "<<"000"<<random<<endl;
     }
   else
  {
   if (random<=9, random>1)
 {
cout<<"El boleto numero "<<t<<" es "<<"0000"<<random<<endl;
      }
     else
    {
     if (random=0)
     {
   cout<<"El boleto numero "<<t<<" es "<<"00000"<<endl;
        }
    }
                     
     }
   }
            
    }
    
       


        if (loteria==random)
        {
 cout<<"Te ha tocado la loteria"<<endl;
         
        }
   
        





} while (we<5);




 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}