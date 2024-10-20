#include <iostream>
using namespace std;

long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int num;
    
    cout << "Enter num: ";
    cin >> num;

    long result = factorial(num);
    cout << result;
 
    cout << "\n";
    return 0;
}
