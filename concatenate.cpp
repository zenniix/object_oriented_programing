#include <iostream>
using namespace std;

void concatenate(char *str1, char *str2)
{
    char *ptr1 = str1;
    while (*ptr1 != '\0')
        ptr1++;

    char *ptr2 = str2;
    while (*ptr2 != '\0')
    {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0';
}

int main()
{
    char str1[100] = "Hello, ";
    char str2[100] = "world!";

    concatenate(str1, str2);

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}