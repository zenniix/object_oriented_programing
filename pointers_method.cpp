#include<iostream>
using namespace std;
void reversewhole(char *strat,char *end)
{
    char temp;
    while(strat<end)
    {
      temp=*strat;
      *strat=*end;
      *end=temp;
      strat++;
      end--;
    }
    
}
void reversedwords(char *str)
{
    char *start=str;
    char *end=str;
    while(*end!='\0')
    {
        end++;
    }
    end--;
    reversewhole(start,end);
    start=str;
    char *ptr=str;
    while(*ptr!='\0')
    {
        if(*ptr==' ')
        {
            reversewhole(start,ptr-1);
            start=ptr+1;
        }
        ptr++;
    }
    reversewhole(start,ptr-1);
}
int main ()
{
    char str[100];
    cout<<"Enter the sentence";
    cin.getline(str,100);
    reversedwords(str);
    cout<<"REVERSED WORD"<<endl<<str;
}