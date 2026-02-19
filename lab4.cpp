#include<iostream>
using namespace std;

struct car{
    string Model;
    int year;
    float Price;
};
int main ()
{
    car c[3];
    for(int i=0;i<3;i++)
    {
        cout<<"ENTER MODEL OF CAR "<<i+1;
        cin>>c[i].Model;
        cout<<"ENTER YEAR OF CAR "<<i+1;
        cin>>c[i].year;
        cout<<"ENTER PRICE OF CAR "<<i+1;
        cin>>c[i].Price;
    }
    for(int i=0;i<3;i++)
    {
        if(c->Price>500000)
        {
            cout<<"Model : "<<c[i].Model<<endl;
            cout<<"Year : "<<c[i].year<<endl;
            cout<<"Price : "<<c[i].Price<<endl;
        }
    }
}