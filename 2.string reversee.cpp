#include<iostream>

#include<string.h>

using namespace std;

int main ()
{
    char a[50], temp; // an array which can store 50 characters
    
    int i, j;
    
    cout << "Enter a string : ";
    gets(str);
    
    j = strlen(str) - 1;
    
    for (i = 0; i < j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    cout << "\nReverse string : " << str;
    return 0;
}
