#include<iostream>
using namespace std;
struct dob{
int day=2;
int month=4;
int year=2026;
};
struct student
{
    string name;
    dob DOB;
};
int main ()
{
    student s1;
    cin>>s1.name;
    cout<<s1.name;
    cout<<s1.DOB.day;
    cout<<s1.DOB.month;
    cout<<s1.DOB.year;
}
