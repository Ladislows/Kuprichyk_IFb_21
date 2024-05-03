#include <iostream>

using namespace std;

int main(){
    int Sum=0 , Sum1=0;
    for (int i = 0; i <1000 ; i+=4){
            if (i%7==0){
                Sum+=i;    // counting from 0
            }
    }
   for (int i = 1; i <1000 ; i+=4){
            if (i%7==0){
                Sum1+=i;  // counting from 1
            }
    }
    cout<<Sum<< endl;
    cout<<Sum1;
    return 0;
}
