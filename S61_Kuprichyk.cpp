#include <iostream>
using namespace std;

class Bucket {
private:

public:
    int volume;
    int used;
    Bucket(int v, int u) {
        volume = v;
        used = u;
    }
    void flush() {
        used = 0;
    }
    int fill(int v) {
        if (used + v <= volume) {
            used += v;
            return 0;
        }
        else {
            int diff = volume - used;
            used = volume;
            return v - diff;
        }
    }
};

int main() {
    setlocale(0, "RUSSIAN");
       Bucket test_01(12, 3);
    cout << "1) " << test_01.volume << ", " << test_01.used << "\n";
    int rest = test_01.fill(14);
    cout << "2) " << test_01.used << ", " << rest << "\n";

    test_01.flush();
    rest = test_01.fill(8);
    cout << "3) " << test_01.used << ", " << rest << "\n";


    return 0;
}
