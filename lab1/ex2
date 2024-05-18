// Write a C++ program to store and print the roll no., name, age, and marks
// a student using structures.


#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    int age;
    float marks;
};

int main() {
    Student student;
    cout << "Enter Roll Number: ";
    cin >> student.rollNumber;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, student.name);

    cout << "Enter Age: ";
    cin >> student.age;

    cout << "Enter Marks: ";
    cin >> student.marks;

    cout << "\nStudent Details:\n";
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Marks: " << student.marks << endl;

    return 0;
}
