#include<iostream>
using namespace std;
struct student{
int regno;
string name;
int marks[5];
};
int main ()
{
    student s[3]={{79,"aliyan",{1,2,3,4,5}},
                   {89,"abdullah",{6,7,8,9,10}},
                {99,"khan",{1,3,4,6,7}}};
    for(int i=0;i<3;i++)
    {
        cout<<s[i].regno<<endl;
        cout<<s[i].name<<endl;
        for(int j=0;j<5;j++)
        cout<<s[i].marks[j]<<endl;
        cout<<endl;
    }            


}