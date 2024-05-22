#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num; if (num < 100000 || num > 999999) {
        cout << "need six digit number" << endl;
        return 0;
    }

    int part_1 = num / 1000;
    int part_2 = num % 1000;
    int sum_part_1 = 0, sum_part_2 = 0;

    for (int i = 0; i < 3; i++) {
        sum_part_1 += part_1 % 10;
        part_1 /= 10;
    }
    
    for (int i = 0; i < 3; i++) {
        sum_part_2 += part_2 % 10;
        part_2 /= 10;
    }

    if (sum_part_1 == sum_part_2) {
        cout <<"equal" << endl;
    } 
    else {
        cout << "not equal" << endl;
    }

    return 0;
}
