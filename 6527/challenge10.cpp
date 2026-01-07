#include <iostream>

// Function to swap using pointers
void swap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 10, b = 20;
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    // 1. Swap and Print Addresses/Values
    std::cout << "Before Swap: a = " << a << " (&" << &a << "), b = " << b << " (&" << &b << ")\n";
    
    swap(&a, &b);
    
    std::cout << "After Swap:  a = " << a << ", b = " << b << "\n\n";

    // 2. Traverse array using pointers (No indexing)
    std::cout << "Array Traversal via Pointers:\n";
    int* p = arr; // p points to the start of the array

    for (int i = 0; i < size; i++) {
        // *(p + i) accesses the value, (p + i) accesses the address
        std::cout << "Value: " << *(p + i) << " at Address: " << (p + i) << "\n";
    }

    return 0;
}