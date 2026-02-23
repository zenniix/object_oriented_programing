#include<iostream>
using namespace std;

int *  newarr(int size)
{
    int *arr1= new int [size];
    for(int i=0;i<size;i++)
    {
        *(arr1+i)=i;
    }
    return arr1;
}
int main ()
{
    int size =10;
    int *arr2=newarr(size);
    for (int i = 0; i < size; i++)
    {
        cout<< *(arr2+i);
    }
    delete [] arr2;

    return 0;
    
}