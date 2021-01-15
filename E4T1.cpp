#include <iostream>
#include <windows.h>
using namespace std;
int main(){
string p,l;
int n,m,t,ii,io,x=0;

    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"                                      Welcome to Apolo XI                                                      "<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;

    

     cout<<"Enter your username: ";      
            cin>>p; 
 {  
    if (p=="Armstrong"){
        cout<<"Enter your password: ";      
            cin>>l; 
    
    if (l=="Eagle")
    
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"                          Welcome Armstrong                                                     "<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;

    }
     
    if (p=="Collins"){
        cout<<"Enter your password: ";      
            cin>>l; 
    
    if (l=="Columbia")
    
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"                          Welcome Collins                                                     "<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;

    }

    if (p=="Aldrin"){
        cout<<"Enter your password: ";      
            cin>>l; 
    
    if (l=="Buzz")
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"                          Welcome Aldrin                                                     "<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;

    }

    else if(p!="Aldrin" or "Armstrong" or "Collins")
    {
       exit(-1);
    }
    else if(l!="Columbia" or "Eagle" or "Buzz")
    {
        exit(-1);
    }
}
cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
cout<<"                                                                              "<<endl;
cout<<"                             OPTIONS:                                         "<<endl;
cout<<"                                                                              "<<endl;
cout<<"                            1.Start sequence                                  "<<endl;
cout<<"                            2.Countdown                                       "<<endl;
cout<<"                            3.Leave                                           "<<endl;
cout<<"                                                                              "<<endl;
cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;

    cin>>m;
    system("cls");
switch (m)
{
    case 1:     
   
cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
cout<<"                                                                              "<<endl;
cout<<"                             Checklist:                                         "<<endl;
Sleep (2000);
cout<<"                                                                              "<<endl;
cout<<"                            1.Moon Earth Distance                             "<<endl;
Sleep (2000);
cout<<"                            2.Estimated travel time                           "<<endl;
Sleep (2000);
cout<<"                            3.Motor temperature                               "<<endl;
Sleep (2000);
cout<<"                            4.Vital signs                                     "<<endl;
Sleep (2000);
cout<<"                            5.Ignition systems                                "<<endl;
Sleep (2000);
cout<<"                            6.Hydraulic systems                               "<<endl;
Sleep (2000);
cout<<"                            7.Radio Test                                      "<<endl;
Sleep (2000);
cout<<"                            8.Emergency Batteries                             "<<endl;
Sleep (2000);
cout<<"                            9.Reentry System                                  "<<endl;
Sleep (2000);
cout<<"                            10.Countdown                                      "<<endl;
cout<<"                                                                              "<<endl;
cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
     Sleep (2000);
         cout<<"\t That distance was 380.000 km"<<endl;
            Sleep (3000);
         cout<<"\t Estimated time: 127,2 hours "<<endl;
            Sleep (3000);
   
         cout<<"\t What is the temperature? ";
            cin>>t;
                if(t<400 or t>800)
                {
                    cout<<"Systems failing"<<endl;
                    exit(-1);
                }
               Sleep (3000);
    
         cout<<"\t  Vital signs are normal"<<endl;
             Sleep (3000);
         cout<<"\t Ignition systems corrects"<<endl;
             Sleep (3000);
         cout<<"\t Hydraulic systems corrects "<<endl;
             Sleep (3000);
         cout<<"\t  Radio Test correct"<<endl;
             Sleep (3000);
         cout<<"\t Emergency Batteries are in the sites "<<endl;
             Sleep (3000);
         cout<<"\t Reentry System correct "<<endl;
             Sleep (3000);
 
        for(int j=1-1 ; j>= 0; j--){
            ii = 59;
                for(int i = ii;  i >= 0; i--){
                    system("cls");
                         cout << j << ":" << i << endl;
                            cout << "\a";
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"                          Taking off                                          "<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                              "<<endl;
                                Sleep(1000);
                                        }
                                        
    cout<<"\n\t                ****                                                 ";
	cout<<"\n\t               ******                                                ";
	cout<<"\n\t              ********                                               ";
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t            ************                                             ";
	cout<<"\n\t           **************                                            ";
	cout<<"\n\t          ****************                                           ";
	cout<<"\n\t         ******************                                          ";
	cout<<"\n\t        ********************                                         ";
	cout<<"\n\t       **********************                                        ";
	cout<<"\n\t             ***   ***                                               ";
	cout<<"\n\t             ***   ***                                               "<<endl;
	x++;
}

break;


case 2:
    for(int c=1-1 ; c>= 0; c--){
                io = 59;
                    for(int f = io;  f >= 0; f--){
                        system("cls");
                            cout << c << ":" << f << endl;
                                cout << "\a";
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"                          Taking off                                          "<<endl;
    cout<<"                                                                                                               "<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                              "<<endl;
                                    Sleep(1000);
                                            }
                                            
        cout<<"\n\t                ****                                                 ";
        cout<<"\n\t               ******                                                ";
        cout<<"\n\t              ********                                               ";
        cout<<"\n\t             **********                                              ";
        cout<<"\n\t             **********                                              ";
        cout<<"\n\t             **********                                              ";
        cout<<"\n\t             **********                                              ";
        cout<<"\n\t             **********                                              ";
        cout<<"\n\t             **********                                              ";
        cout<<"\n\t             **********                                              ";
        cout<<"\n\t             **********                                              ";
        cout<<"\n\t             **********                                              ";
        cout<<"\n\t             **********                                              ";
        cout<<"\n\t             **********                                              ";
        cout<<"\n\t            ************                                             ";
        cout<<"\n\t           **************                                            ";
        cout<<"\n\t          ****************                                           ";
        cout<<"\n\t         ******************                                          ";
        cout<<"\n\t        ********************                                         ";
        cout<<"\n\t       **********************                                        ";
        cout<<"\n\t             ***   ***                                               ";
        cout<<"\n\t             ***   ***                                               "<<endl;
    }


    break;
default:  
         cout<<"We don't hire you for this"<<endl;
    
  break;
}



cout<<"                                                           "<<endl;
cout<<" ooooo      ooo       .o.        .oooooo..o       .o.      "<<endl;
cout<<" `888b.     `8'      .888.      d8P'    `Y8      .888.     "<<endl;
cout<<"  8 `88b.    8      .8 888.     Y88bo.          .8 888.    "<<endl;
cout<<"  8   `88b.  8     .8  `888.       Y8888o.     .8   888.   "<<endl;
cout<<"  8     `88b.8    .88ooo8888.          Y88b   .88ooo8888.  "<<endl;
cout<<"  8       `888   .8'     `888.  oo     .d8P  .8       888. "<<endl;
cout<<" o8o        `8  o88o     o8888o 8""88888P'  o88o     o8888o"<<endl;


}