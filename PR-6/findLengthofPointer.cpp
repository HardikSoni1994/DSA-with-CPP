#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[50];
    char *ptr;
    int length = 0;

    cout << " Enter Your Name : ";
    gets(name);

    ptr = name;
    for (int i = 0; *ptr != '\0'; i++)
    {
        length++;
        ptr++;
    }
    cout << endl
         << " The length of String is : " << length << endl;
}