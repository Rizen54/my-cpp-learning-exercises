#include <string>
#include <iostream>
using namespace std;

int k_to_c(int kelvintemp){
    return kelvintemp - 273;
}

int f_to_c(int ftemp){
    return (ftemp-32)*5/9;
}

int main()
{
    string temp;
    cout << "Enter temp (example 273k or 32f): ";
    cin >> temp;

    if ((char)tolower(temp.back()) == 'f') {
        cout << f_to_c(stoi(temp.substr(0, temp.length() - 1)));
    } else if ((char)tolower(temp.back()) == 'k') {
        cout << k_to_c(stoi(temp.substr(0, temp.length() - 1)));
    } else {
        cout << "Invalid format.";
    }

    cout << "\n";
    return 0;
}
