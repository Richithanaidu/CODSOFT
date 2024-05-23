#include <iostream>
#include <map>
#include <limits>
#include <string>

int main() {
    std::map<std::string, double> students;
    std::string name;
    double grade;
    while (true) {
        std::cout << "Enter student name (or type 'done' to finish): ";
        std::getline(std::cin, name);
        
        if (name == "done") break;
        
        std::cout << "Enter grade: ";
        std::cin >> grade;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid grade. Please enter a numeric value." << std::endl;
            continue;
        }
        
        students[name] = grade;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
	 if (students.empty()) {
        std::cout << "No students entered." << std::endl;
        return 0;
    }

    double total = 0.0;
    double highest = std::numeric_limits<double>::min();
    double lowest = std::numeric_limits<double>::max();
    for (const auto& student : students) {
        total += student.second;
        if (student.second > highest) highest = student.second;
        if (student.second < lowest) lowest = student.second;
    }
    
    double average = total / students.size();
    std::cout << "Average grade: " << average << std::endl;
    std::cout << "Highest grade: " << highest << std::endl;
    std::cout << "Lowest grade: " << lowest << std::endl;
    return 0;
}
