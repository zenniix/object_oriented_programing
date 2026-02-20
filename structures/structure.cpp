#include<iostream>
using namespace std;

struct student{
   
    string name;
    int regno;
    float marks[5];
};
int main()
{
    student s1;
    cin>>s1.name;
    cin>>s1.regno;
    for(int i=0;i<5;i++)
    {
        cin>>s1.marks[i];
    }
    student s2 {"aliyan",79,{10,20,30,40,50}};
    student s3;
    s3.name="ALIYAN";
    s3.regno=79;
    s3.marks[0]=20;
     s3.marks[1]=20;
      s3.marks[2]=20;
       s3.marks[3]=20;
        s3.marks[4]=20;    

        cout<<s1.name<<endl;
        cout<<s2.name<<endl;
        cout<<s3.name<<endl;

}