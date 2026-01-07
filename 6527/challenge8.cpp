#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int rollNumber;
    float marks;
    char grade;
};

int main() {
    int n;
    std::cout << "Enter number of students: ";
    std::cin >> n;

    // Array of structures
    std::vector<Student> classList(n);

    // Input loop
    for(int i = 0; i < n; i++) {
        std::cout << "\nStudent " << i + 1 << " Name: ";
        std::cin.ignore(); // Clear buffer
        std::getline(std::cin, classList[i].name);
        
        std::cout << "Roll Number: ";
        std::cin >> classList[i].rollNumber;
        
        std::cout << "Marks: ";
        std::cin >> classList[i].marks;

        // Calculate Grade
        if (classList[i].marks >= 90) classList[i].grade = 'A';
        else if (classList[i].marks >= 80) classList[i].grade = 'B';
        else if (classList[i].marks >= 70) classList[i].grade = 'C';
        else classList[i].grade = 'F';
    }

    // Display loop
    std::cout << "\n--- Student Records ---\n";
    for(int i = 0; i < n; i++) {
        std::cout << "Roll #" << classList[i].rollNumber << " | " 
                  << classList[i].name << " | Grade: " 
                  << classList[i].grade << "\n";
    }

    return 0;
}