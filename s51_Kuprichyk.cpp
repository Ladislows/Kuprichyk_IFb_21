#include<iostream>
#include<string>
#include <clocale>
using namespace std;

string reverse(string str);

int main(){
   setlocale(LC_ALL, "RUS");
   string str;
   cout << "Введите строчку :" << endl;
   cin >> str;
   cout << "Строчка в обратном порядке:" << endl;
   cout << reverse(str);
   return 0;
}

string reverse(string str) {
    int i;
    for (i = str.length() - 1; i >= 0; i--) {
        cout <<  str[i];
    }
}
