#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

const float PI = 3.1415;
float Tan(int a, int n);

float area(int a, int n) {
    float S;
    if (n == 3) {
        S = (sqrt(3) * a * a) / 4; // частный случай, когда n-угольник - треугольник
        return S;
    }
    else if (n == 4) {
        S = a * a;   // частный случай, когда n-угольник - квадрат
        return S;
    }
    else if (n > 4) {
        S = (a * a * n) / (4 * Tan(a, n)); // общая формула площади n-угольника
        cout << S << endl;
        return S;
    }
return S;}
float Tan(int a, int n) {
    float Tan = tan((180 / n) * PI / 180);
    return Tan;
} 

int main() {
    setlocale(LC_ALL, "Russian");
    float a, n;
    cout << "Введите длину стороны 'a' " << endl;
    cin >> a;
    cout << "Введите чилсо сторон 'n' " << endl;
    cin >> n;
    cout << "Площадь многоугольника" << " "  << area(a, n) << endl; // Выводим площадь многоугольника
    return 0;
}