#include <iostream>

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin >> str;

    // 1. Find length manually
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // 2. Count Vowels
    int vowels = 0;
    for (int i = 0; i < length; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        }
    }

    // 3. Check Palindrome (before reversing)
    bool isPalindrome = true;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    // 4. Reverse String (In-place)
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    std::cout << "\n--- Results ---" << "\n";
    std::cout << "Vowel Count: " << vowels << "\n";
    std::cout << "Is Palindrome: " << (isPalindrome ? "Yes" : "No") << "\n";
    std::cout << "Reversed String: " << str << "\n";

    return 0;
}