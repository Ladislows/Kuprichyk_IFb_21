#include <iostream>
#include <cmath>
#include <string>
using namespace std;

const float PI = 3.1415;
int get_angle(int a,int b,int c)
{
    if (a<=0 || b<=0 || c<=0 ){
        cout << "Стороны не могут иметь отрицательное значение"; // проверка
        return 0;
    }
    else {
        float D, r;
        int degrees;
        D=((b*b)+(c*c)-(a*a))/(2*b*c); 
        r=acos(D);
        degrees=r*180/PI;
        return degrees;
    }
}

int main(){
    cout<< get_angle(5.,4.,3.);
    return 0;
}
