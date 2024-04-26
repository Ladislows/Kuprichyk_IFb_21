#include <iostream>

using namespace std;

int print (int a){ return a;}
float print (float a){return a;}
char print (char a){return a;}
int print (int a, int b){ return a+b;}

int main()
{
 cout<<print(6,3);
    return 0;
}

