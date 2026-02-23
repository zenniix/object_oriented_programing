#include<iostream>
using namespace std;

void concatenate(char *str1,char *str2)
{
    char *ptr1=str1;
    while(*ptr1 !='\0')
    {
        ptr1++;
    }
    char*ptr2=str2;
    while (*ptr2 != '\0')
    {
        *ptr1=*ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1='\0';
}
int main ()
{
    char str1[50];
    char str2[50];
    cin.getline(str1,50);
    cin.getline(str2,50);
    concatenate(str1,str2);
    cout<<"final"<<str1;
    
}