#include<iostream>
using namespace std;

struct rectangle
{
   int wedith;
   int height;
} rect ;
int main ()
{
    rectangle *ptr;
 ptr=&rect;
 cin>>ptr->wedith;
 cin>>ptr->height;
 cout<<ptr->height;
 cout<<ptr->wedith;
 cout<<(*ptr).height;
 cout<<(*ptr).wedith;
}