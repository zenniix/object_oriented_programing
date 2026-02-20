#include<iostream>
using namespace std;
struct stud{

    int regno;
    string name;
}std1,std2;
int main ()
{
 
 std1={67,"aliyan"};
 std2=std1;
 cout<<std1.name;
 cout<<std2.name;
 
}