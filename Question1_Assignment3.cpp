#include <iostream>
using namespace std;

struct Student {
    int studentID;
    double GPA;
};

void printStudentInfo(Student s) {
    // A function to print the student's ID and GPA
     // using call by value. Write the function definition here.
    
    std::cout << "Student ID is: " << s.studentID << ", GPA is: " << s.GPA << std::endl;
}

int main() {
    Student alice = {101, 3.8};
    printStudentInfo(alice);
    return 0;
}