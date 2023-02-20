#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

string getcomputeroption()
{
    srand(time(NULL));
    int num = rand()%3+1;
    if(num == 1)
    {
        return "stone";
    }
    if(num == 2){
            return "paper";
    }
    if(num== 3)
    {
        return "scissor";
    }
}



int main()
{
    string person1;
    string person2;
    cout<<"----play--stone--paper--scissor----"<<endl;
    cout<<"enter the input of user1"<<endl;
    cin>>person1;
    cout<<"computer chice"<<endl;
    cout<<getcomputeroption()<<endl;
    person2 = getcomputeroption();
//    showoption(person2);

    cout<<"Result :-"<<endl;
    if(person1=="stone"&&person2=="stone")
    {
        cout<<"Draw !! , play try again"<<endl;
    }
    else if(person1 == "paper"&& person2=="paper")
    {
        cout<<"Draw!!, play try again"<<endl;
    }
    else if(person1 == "scissor"&& person2=="scissor")
    {
        cout<<"Draw !!, play again"<<endl;
    }
     else if(person1 == "scissor"&& person2=="paper")
    {
        cout<<"you win !! ,excellent job"<<endl;
    }
    else if(person1 == "paper"&& person2=="scissor")
    {
        cout<<"you lost !!, better luck next time"<<endl;
    }
     else if(person1 == "paper"&& person2=="stone")
    {
        cout<<"you win !! ,excellent job"<<endl;
    }
     else if(person1 == "stone"&& person2=="paper")
    {
        cout<<"you lost !!, better luck next time"<<endl;
    }
     else if(person1 == "paper"&& person2=="scissor")
    {
        cout<<"you lost !!, better luck next time"<<endl;
    }
     else if(person1 == "scissor"&& person2=="paper")
    {
        cout<<"you win !! ,excellent job"<<endl;
    }



    return 0;
}
