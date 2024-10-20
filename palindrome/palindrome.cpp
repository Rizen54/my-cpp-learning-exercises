#include <string>
#include <iostream>
#include <algorithm>

int main()
{
    std::string word;    
    std::cout << "Enter word: ";
    std::cin >> word;
    std::string reversed = word;

    reverse(reversed.begin(), reversed.end());
    
    if (reversed == word){
        std::cout << "It's a palindrome! :D";
    } else {
        std::cout << "It's not a palindrome! D:";
    }

    std::cout << "\n";
    return 0;
}
