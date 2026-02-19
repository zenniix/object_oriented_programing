#include<iostream>
using namespace std;
struct camera{
int megapixels;
};

struct mobile
{
 float price;
 camera cam;   
};
void function()
{
    mobile mbl [3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter data for Mobile :"<<i+1<<endl;
        
        cout<<"Enter Megapixels(>0):";
        cin>>mbl[i].cam.megapixels;
        cout<<endl;
        cout<<"Enter Price(>=0):";
        cin>>mbl[i].price;

    }
    for(int i=0;i<5;i++)
    {

     cout<<"Enter Megapixels(>0):";
        cout<<mbl[i].cam.megapixels;
        cout<<endl;
        cout<<"Enter Price(>=0):";
        cout<<mbl[i].price;
    }

}
int main ()
{
 function();
}
