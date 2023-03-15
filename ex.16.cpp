#include<iostream>
using namespace std;
int main()
{
    char choice;
    cout<<"Enter vehicle category: ";
    cin>>choice;

    if(choice=='M')
    {
        cout<<"   M     = Motorcycle"<<endl;
        cout<<"   Motorcycle   Rs.10 per day"<<endl;
    }
    else if(choice=='C')
    {
        cout<<"   C     =  Car"<<endl;
        cout<<"   Car          Rs.20 per day"<<endl;
    }
    else if(choice=='B')
    {
        cout<<"   B     = Bus"<<endl;
        cout<<"   Bus          Rs.30 per day"<<endl;
    }
    else
    {
        cout<<"Invalid Chracter!";
    }
    return 0;
}
