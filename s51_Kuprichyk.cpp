#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string reverse="Testing"; 
    int i;
    for(i = reverse.length() - 1; i >= 0; i--)
    {
       cout<<reverse[i];
    }
    return 0;
}