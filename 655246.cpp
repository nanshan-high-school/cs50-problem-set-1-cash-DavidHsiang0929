#include <iostream>
using namespace std;

int main() {
    int amount = 0;
    int total = 0;

    cout << "請輸入您的金額:";
    cin >> amount;

    if (amount > 1000) {
        total = amount % 10 + amount / 10 % 10 + amount / 100 % 10 + amount / 1000 % 10 + amount / 10000 % 10;
    } 
    cout << "共個會有" << total << "樣錢幣";
}
