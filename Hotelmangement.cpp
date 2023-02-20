#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
     //it represent the total quantity in hotel...
    int qrooms= 0 ,qpasta = 0,qburger = 0,qchicken=0,qnoodle=0,qshake = 0;
     // it represnt no of food item has been sold
    int  Srooms= 0 ,Spasta = 0,Sburger = 0,Schicken=0,Snoodle=0,Sshake = 0;
    //it store the total price of each item....
    int total_rooms= 0 ,total_pasta = 0,total_burger = 0,total_chicken=0,total_noodle=0,total_shake = 0;

    //now,here we ask user to enter the no of quantities of fooditems ,room in hotel;

    cout<<"\n\t Quantity of items we have ";
    cout<<"\n Rooms available : ";
    cin>>qrooms;
    cout<<"\n Quantity of pasta : ";
    cin>>qpasta;
    cout<<"\n Quantity of burger : ";
    cin>>qburger;
    cout<<"\n Quantity of chicken-roll : ";
    cin>>qchicken;
    cout<<"\n Quantity of noodle : ";
    cin>>qnoodle;
    cout<<"\n Quantity of shake : ";
    cin>>qshake;

  m:
    cout<<"\n\t\t\t   please select the from the menu option ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta ";
    cout<<"\n3) Burger ";
    cout<<"\n4) Chickens-roll ";
    cout<<"\n5) Noodle";
    cout<<"\n6) Shake ";
    cout<<"\n7) Information regarding sales and collection "; //particular day
    cout<<"\n8) exit ";

    cout<<"\n\n  Please enter your choice! ";
    cin>>choice;
    switch(choice)
    {
    case 1 :
        cout<<"enter the no rooms you wants : ";
        cin>>quant;
        if(qrooms-Srooms >= quant)
        {
            Srooms += quant;
            total_rooms += quant*1200;  //price of room per day =1200..
            cout<<"\n\n\t"<<quant<<" room /rooms have been alloted to you !!";
        }
        else
        {
            cout<<"\n\\t Only "<<qrooms-Srooms<<"Rooms remaining in Hotel";

        }
        break;

    case 2 :
        cout<<"enter the pasta quantity you wants : ";
        cin>>quant;
        if(qpasta-Spasta >= quant)
        {
            Spasta += quant;
            total_pasta += quant*250;  //price of past = 250..
            cout<<"\n\n\t"<<quant<<" your pasta is order !!";
        }
        else
        {
            cout<<"\n\\t Only "<<qpasta-Spasta<<"pasta remaining in hotel ";
        }break;

    case 3 :
        cout<<"enter the burger quantity you wants : ";
        cin>>quant;
        if(qburger-Sburger >= quant)
        {
            Sburger += quant;
            total_burger += quant*120;  //price of Burger  = 120..
            cout<<"\n\n\t"<<quant<<" your Burger is order !!";
        }
        else
        {
            cout<<"\n\\t Only "<<qburger-Sburger<<"Burger remaining in hotel ";
        }break;
    case 4 :
        cout<<"enter the chicken-roll quantity you wants : ";
        cin>>quant;
        if(qchicken-Schicken >= quant)
        {
            Schicken += quant;
            total_chicken += quant*150;  //price of past = 150..
            cout<<"\n\n\t"<<quant<<" your chicken-roll is order !!";
        }
        else
        {
            cout<<"\n\\t Only "<<qchicken -Schicken<<"chicken-roll remaining in hotel ";
            }break;
    case 5 :
        cout<<"enter the noodle quantity you wants : ";
        cin>>quant;
        if(qnoodle-Snoodle >= quant)
        {
            Snoodle += quant;
            total_noodle += quant*140;  //price of past = 250..
            cout<<"\n\n\t"<<quant<<" your noodle is order !!";
        }
        else
        {
            cout<<"\n\\t Only "<<qnoodle-Snoodle<<"noodle remaining in hotel ";
            }break;
    case 6 :
        cout<<"enter the shake quantity you wants : ";
        cin>>quant;
        if(qshake-Sshake >= quant)
        {
            Sshake += quant;
            total_shake += quant*120;  //price of past = 250..
            cout<<"\n\n\t"<<quant<<" your shake is order !!";
        }
        else
        {
            cout<<"\n\\t Only "<<qshake-Sshake<<"shake remaining in hotel ";
           }break;
    case 7 :
cout<<"----------------------------------------------------------------------------------------------"<<endl;
cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"\n\tDetail pf sales and collection "<<endl;
         cout<<"\n\n Number of rooms we had : "<<qrooms;
         cout<<"\n\n number of rooms we gave for rent "<<Srooms;
         cout<<"\n\n Remaining rooms "<<qrooms - Srooms;
         cout<<"\n\nTotal rooms collection of day  Rs"<<total_rooms;

          //cout<<"\n\tDetail pf sales and collection "<<endl;
         cout<<"\n\n Number of pasta we had : "<<qpasta;
         cout<<"\n\n number of pasta we sold "<<Spasta;
         cout<<"\n\n Remaining pasta "<<qpasta - Spasta;
         cout<<"\n\nTotal pasta collection of day Rs"<<total_pasta;


         // cout<<"\n\tDetail pf sales and collection "<<endl;
         cout<<"\n\n Number of burger we had : "<<qburger;
         cout<<"\n\n number of burger we sold  "<<Sburger;
         cout<<"\n\n Remaining burger "<<qburger - Sburger;
         cout<<"\n\nTotal burger collection of day Rs"<<total_burger;

         cout<<"\n\n Number of chicken-roll we had : "<<qchicken;
         cout<<"\n\n number of chicken-roll we sold "<<Schicken;
         cout<<"\n\n Remaining chicken-roll "<<qchicken - Schicken;
         cout<<"\n\nTotal chicken-roll collection of day Rs "<<total_chicken;

          cout<<"\n\n Number of Noodle we had : "<<qnoodle;
         cout<<"\n\n number of Noodle we sold "<<Snoodle;
         cout<<"\n\n Remaining Noodle "<<qnoodle - Snoodle;
         cout<<"\n\nTotal Noodle collection of day Rs"<<total_noodle;

          cout<<"\n\n Number of shake we had : "<<qshake;
         cout<<"\n\n number of shake we sold "<<Sshake;
         cout<<"\n\n Remaining shake "<<qshake - Sshake;
         cout<<"\n\nTotal shake collection of day Rs"<<total_shake<<endl;
         cout<<"----------------------------------------------------------------------------------------------"<<endl;
         cout<<"\n\n total collection of amount of the day "<<total_rooms+total_pasta+total_burger+total_chicken+total_noodle+total_shake;
         cout<<endl;
            cout<<"----------------------------------------------------------------------------------------------"<<endl;
              cout<<"----------------------------------------------------------------------------------------------"<<endl;
          break;


    case 8:
        exit(0);

    default:
        cout<<"please select the number mentioned adove !!"<<endl;
    }
    goto m;

    //return 0;
}
