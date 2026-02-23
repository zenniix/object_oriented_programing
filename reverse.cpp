#include<iostream>
using namespace std;
int main()
{
    int x=10;
    char y='a';
    void *ptr=&x;
    cout<<*(int*)ptr;
    ptr =&y;
    cout<<*(char*)ptr;
}