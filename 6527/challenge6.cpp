#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // No hardcoded size; array grows based on n
    std::vector<int> arr(n);
    int sum = 0;

    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
        sum += arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) largest = arr[i];
        if(arr[i] < smallest) smallest = arr[i];
    }

    double average = static_cast<double>(sum) / n;

    std::cout << "\nResults:\n";
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << average << "\n";
    std::cout << "Largest: " << largest << "\n";
    std::cout << "Smallest: " << smallest << "\n";

    return 0;
}