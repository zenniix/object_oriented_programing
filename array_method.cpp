#include<iostream>
using namespace std;

void wholereverse(char str[],int start,int end)
{
    char temp;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }

}

void reversingwords(char str[])
{

    int length =0;
    while(str[length]!='\0')
    {
        length++;
    }
    // it will reverse the whole sentence/string.
    wholereverse(str,0,length-1);

    int start=0;
    for(int i=0;i<=length;i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            wholereverse(str,start,i-1);
            start=i+1;
        }
    }

}
int main ()
{
    char str [100];
    cout<<"Enter the sentence";
    cin.getline(str,100);
    reversingwords(str);
    cout<<"Reversed"<<str;
}