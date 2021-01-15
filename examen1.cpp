#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
string palabra;
int t;
int a=0,e=0,i=0,o=0,u=0;
          cout<<"Dime una palabra y te digo las vocales que contiene"<<endl;
            cin>>palabra;
    tamanio=palabra.size();


      cout<<"TAMANIO"<<tamanio<<endl;

    for (int y=1 ; y=tamanio; y++)

    letra = palabra.substr(palabra.size()-1, palabra.size());
    palabra=palabra.substr(0,palabra.size()-1);

            if (letra=='a'){
                  

            } 
            switch(palabra){
		case 'a': a=a+1; 
            break;
		case 'e': e=e+1; 
            break;
		case 'i': i=i+1;
            break;
		case 'o': o=o+1;
            break;
		case 'u': u=u+1;
            break;
	 }
return 0;
}
