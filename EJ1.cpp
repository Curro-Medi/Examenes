#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){
int i,c,d,random,m;
int we=1,uno=0,dos=0,tres=0,cuatro=0,cinco=0,seis=0;
char a=177, b=219;
cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
cout<<"                                                                              "<<endl;
cout<<"                             Opciones:                                        "<<endl;
cout<<"                                                                              "<<endl;
cout<<"                            1.Probar suerte                                   "<<endl;
cout<<"                            2.Irte habiendo perdido en la loteria             "<<endl;
cout<<"                                                                              "<<endl;
cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
 cin>>m;
    system("cls");




switch (m)
{
    case 1:     
   

system ("color 07");

cout<<"\n\n\n\n\t\t\t\tTirando el dado 100 veces...";
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
do
{
   random=1+rand() %(7-1);
   we=we+1;

   cout<<"\t"<<random<<endl;

   if (random==1)
{
    uno=uno+1;
}

            else
            {
                if (random==2)
            {
                dos=dos+1;
            }

            else
            {
                    if (random==3)
            {
                tres=tres+1;
            }
            else
            {
                        if (random==4)
            {
                cuatro=cuatro+1;
            }
                        if (random==5)
            {
                cinco=cinco+1;
            }
            else
            {
                            if (random==6)
            {
                seis=seis+1;
            }
            }

            }

            }


            }

} while (we<101);


cout<<"Has sacado "<<uno<<" unos"<<endl;
cout<<"Has sacado "<<dos<<" doses"<<endl;
cout<<"Has sacado "<<tres<<" treses"<<endl;
cout<<"Has sacado "<<cuatro<<" cuatros"<<endl;
cout<<"Has sacado "<<cinco<<" cincos"<<endl;
cout<<"Has sacado "<<seis<<" seises"<<endl;



if (uno>dos, uno>tres, uno>cuatro, uno>cinco, uno>seis)
{
    cout<<"El numero que mas veces ha salido es el uno"<<endl;
}
else
{
    if (dos>uno, dos>tres, dos>cuatro, dos>cinco, dos>seis)
    {
        cout<<"El numero que mas veces ha salido es el dos"<<endl;
    }
    else
    {
                if (tres>dos, tres>uno, tres>cuatro, tres>cinco, tres>seis)
        {
            cout<<"El numero que mas veces ha salido es el tres"<<endl;
        }
        else
        {
                        if (cuatro>dos, cuatro>tres, cuatro>uno, uno>cinco, uno>seis)
            {
                cout<<"El numero que mas veces ha salido es el cuatro"<<endl;
            }
            else
            {
                                        if (cinco>dos, cinco>tres, cinco>cuatro, cinco>uno, cinco>seis)
            {
                cout<<"El numero que mas veces ha salido es el cinco"<<endl;
            }
            else
            {
                                            if (seis>dos, seis>tres, seis>cuatro, seis>cinco, seis>uno)
                {
                    cout<<"El numero que mas veces ha salido es el seis"<<endl;
                }

                
            }
            
            }
            
        }
        
    }
    
}



if (uno<dos, uno<tres, uno<cuatro, uno<cinco, uno<seis)
{
    cout<<"El numero que menos veces ha salido es el uno"<<endl;
}
else
{
    if (dos<uno, dos<tres, dos<cuatro, dos<cinco, dos<seis)
    {
        cout<<"El numero que menos veces ha salido es el dos"<<endl;
    }
    else
    {
                if (tres<dos, tres<uno, tres<cuatro, tres<cinco, tres<seis)
        {
            cout<<"El numero que menos veces ha salido es el tres"<<endl;
        }
        else
        {
                        if (cuatro<dos, cuatro<tres, cuatro<uno, uno<cinco, uno<seis)
            {
                cout<<"El numero que menos veces ha salido es el cuatro"<<endl;
            }
            else
            {
                                        if (cinco<dos, cinco<tres, cinco<cuatro, cinco<uno, cinco<seis)
            {
                cout<<"El numero que menos veces ha salido es el cinco"<<endl;
            }
            else
            {
                                            if (seis<dos, seis<tres, seis<cuatro, seis<cinco, seis<uno)
                {
                    cout<<"El numero que menos veces ha salido es el seis"<<endl;
                }

                
            }
            
            }
            
        }
        
    }
    
}

 
 break;


 case 2:
    cout<<"Cobarde"<<endl;
    exit(-1);
 break;
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
    return 0;
}