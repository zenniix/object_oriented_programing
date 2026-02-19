#include<iostream>
using namespace std;
struct Address{

  string city;
  string country;

};
struct contactinfo{
    string name;
    string phone;
    Address address;
    
};
int main ()
{
    contactinfo p[10];
    for(int i=1;i<10;i++)
    {
        cout<<"Enter details for Person "<<i+1<<endl;
        cout<<endl;
        cout<<"City";
        cin>>p[i].address.city;
        cout<<endl;
        cout<<"Country";
        cin>>p[i].address.country;
    }
       for(int i=1;i<10;i++)
    {
        cout<<"Enter details for Person 1"<<endl;

        cout<<"Name:";
        cout<<p[i].name;
        cout<<endl;
        cout<<"Phone Number";
        cout<<p[i].phone;
        cout<<endl;
        cout<<"City";
        cout<<p[i].address.city;
        cout<<endl;
        cout<<"Country";
        cout<<p[i].address.country;
    }
}