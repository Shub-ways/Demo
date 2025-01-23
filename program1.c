#include <iostream>
#include <string>
using namespace std;

// Class to represent a student
class Student {
private:
    string name;
    int rollNo;
    float marks[3]; // Array to store marks in 3 subjects

public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter marks in 3 subjects (separated by spaces): ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
        cin.ignore(); // To clear the newline from input buffer
    }

    // Function to calculate the average marks of the student
    float calculateAverage() {
        float sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        return sum / 3;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nAverage Marks: " << calculateAverage() << endl;
    }
};

// Main function to handle multiple students
int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;
    cin.ignore(); // To clear the newline from input buffer

    // Create an array of Student objects
    Student students[numStudents];

    // Input details for all students
    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].inputDetails();
    }

    // Display details for all students
    cout << "\nStudent Details:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "\nDetails of student " << i + 1 << ":\n";
        students[i].displayDetails();
    }

    return 0;
}
}
