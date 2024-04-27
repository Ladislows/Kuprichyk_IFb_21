#include <iostream>
using namespace std;

class CreditCard {
private:   

public:
    int Number;
    float Balance;
    CreditCard(int num, float bal) {
        Number = num;
        Balance = bal;
    }
    void Put(float v) {
        Balance += v;
    }
    void Take(float v) {
        if (v <= Balance) {
            Balance -=v;
        }
        else {
            cout << "Недостаточно средств" << endl; //проверка
        }
    }
};

int main() {
    setlocale(0, "RUSSIAN");
    CreditCard card(1234, 50);
    CreditCard* ucard = &card;
    ucard->Put(2000);
    ucard->Take(1945);
    cout << "Баланс: " << ucard->Balance << endl;
    return 0;
}
