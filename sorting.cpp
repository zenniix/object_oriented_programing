#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,3,4,2,5};
    int *ptr=arr;
    for(int i=0;i<5;i++)
    {
        if(*(ptr +i)> *(ptr +i+1))
        {
            *(ptr +i) = *(ptr +i+1);
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<*(ptr+i);
    }
}