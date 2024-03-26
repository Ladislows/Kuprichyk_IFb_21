//Cycle through the numbers from 0 to 100.
//If the number is divisible by 3, display it on the screen: `0 3 6 ... 99'


#include <iostream>
using namespace std;
int main() {
    for(int i = 0; i <= 100; i++)
        if(i%3 == 0)
            cout << i << endl;
    return 0;
}
