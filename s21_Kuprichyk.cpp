#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;

    int A,B, i;
    cout <<"Введите А ";
    cin >> A;
    cout <<"Введите B ";
    cin >> B;
     for (int i = A; i <=B;  i++){
    cout << i*3 << " ";
    }
    file.open("output.txt");
    file  << i*3 << " ";
    file.close();
    cin.get();
    return 0;
}
