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
    mobile mbl [5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter data for Mobile :"<<i+1<<endl;
        cout<<"Enter Megapixels(>0):";
        cin>>mbl[i].cam.megapixels;
        cout<<"Enter Price(>=0):";
        cin>>mbl[i].price;

    }
    float max=mbl[0].price;
    int maxxx=mbl[0].cam.megapixels;
    float sum=0;
    for(int i=0;i<5;i++)
    {

      if(mbl[i].price<mbl[i+1].price)
      {
        max=mbl[i+1].price;
      }
      if(mbl[i].cam.megapixels<mbl[i+1].cam.megapixels)
      {
         maxxx=mbl[i+1].cam.megapixels;
      }
      sum+=mbl[i].price;
    }
    cout<<"Max Camera:"<<maxxx<<endl;
      cout<<"Max Price:"<<max<<endl;
      cout<<"AVERAGE:"<<sum/5;

}
int main ()
{
 function();
}
