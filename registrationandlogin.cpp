#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forget();

int main()
{
    int choice;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"                             welcome to login page"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                  [ MENU-CART ]                                                                          "<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n";
    cout<<"\n\n 1)   LOGIN            |"<<endl;
    cout<<"\n\n 2)   REGISTRATION     |"<<endl;
    cout<<"\n\n 3)   FORGET PASSWORD  |"<<endl;
    cout<<"\n\n 4)   EXIT             |"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n ---------------------------------------------------------------------------------------------------------------------"<<endl;

    cout<<"\n \n enter your choice :"<<endl;
    cin>>choice;
    cout<<endl;
    switch(choice)
    {
    case 1:

         login();
         break;

    case 2:

         registration();
         break;

    case 3:

         forget();
         break;

    case 4:

        cout<<"   Thank-you!!"<<endl;
        break;
     default:

         system("cls");
        cout<<"\t\t\t please select the given option "<<endl;
        main();


    }
    //return 0;
}

void login()
{
    int cont;
    string userid,password,id,pass;
    system("cls");
    cout<<"\t\t\t please enter the user name ans password"<<endl;
    cout<<"\t\t USERNAME "<<endl;
    cin>>userid;
    cout<<"\t\t PASSWORD "<<endl;
    cin>>password;

    ifstream input("records.txt");

    while(input>>id>>pass)
    {
        if(id == userid&& pass==password)
        {

            cont =1;
            system("cls");
        }
    }
    input.close();
    if(cont==1)
    {
        cout<<userid<<"\n Your login is successful .\n Thanks For subscription !! \n";
        main();
    }
    else
    {
        cout<<"\n Login error .\n please check your username and password \n"<<endl;
        main();
    }
}
void registration()
{
    string ruserid,rpassword,rid,rpass ;
    system("cls");
    cout<<"\t\t\t enter the USERNAME "<<endl;
    cin>>ruserid;
    cout<<"\t\t PASSWORD "<<endl;
    cin>>rpassword;
    ofstream f1("records.txt",ios::app);
    f1<<ruserid<<" "<<rpassword<<endl;
    system("cls");
    cout<<"\t\t Your Registration is successful "<<endl;
    main();
}
void forget()
{
    int option;
    system("cls");
    cout<<"  you forget the password ? No worries "<<endl;
    cout<<" press 1 to search your id  by username"<<endl;
    cout<<"press 2 to go back to the main menu"<<endl;
    cout<<"\t\t enter your choice"<<endl;
    cin>>option;
    switch(option)
    {
    case 1  :
    {
        int cont =0;
        string suser,sid,spass;
        cout<<"\n\t\t enter the  username which you remember "<<endl;
        cin>>suser;

        ifstream f2("record.txt");
        while(f2>>sid>>spass)
        {
            if(sid == suser)
            {
                cont =1;
            }
        }
        f2.close();
        if(cont == 1)
        {

            cout<<"\n\n your account is found \n";
            cout<<"\n\n your password is : "<<spass<<endl;
            main();
        }
        else{
            cout<<"\n\t Sorry! your account is not found "<<endl;
            main();
        }
        break;
    }
    case 2 :
    {
        main();
    }
    break;
    default:
        cout<<"\t\t wrong choice ! please try again "<<endl;
        forget();
    }
}

