#include<iostream>
#include<cstdlib>
using namespace std;
int main ()
{
    int **arr=new int *[3];
    for(int i=0;i<3;i++)
    {
        arr[i]=new int [3];
    }

    cout<<"start";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(*(arr+i)+j) = rand() % 2;
        }
    }

   int alive=0; 
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
 if(*(*(arr+i)+j)==1)
     {
        alive++;
     }
    }
   }
   do{ 
   cout<<"ALIVE ENEMY"<<alive<<endl;
   int k=0;

    int i;
    int j;
    cout<<"ENTER NUMBER OF ROWS AND COLUMN = ";
    
    cin>>i>>j;
    
    if(*(*(arr+i)+j)==1)
    {
        alive--;
        k++;
        cout<<k<<"ENEMY DESTROYED"<<endl;
    }
    else{
        cout<<"NO ENEMY DESTROYED"<<endl;
          
    }
}
    while(alive!=0);

cout<<"ALL ENEMIES DESTROYED"<<endl;
}   