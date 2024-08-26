/* 8) Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation */

#include <iostream>
#include <string>

using namespace std;

// Address class (to be aggregated in the Student class)
class Address {
	private:
    string street;
    string city;
    string state;
    string zipCode;
    
	public:
    // Constructor to initialize Address
    Address(string street, string city, string state, string zipCode)
        : street(street), city(city), state(state), zipCode(zipCode) {}

    // Function to display the address
    void display() const {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << zipCode << endl;
    }
};

// Student class
class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;
    Address address;  // Aggregated Address object

public:
    
    Student(string name, string studentClass, int rollNumber, float marks, Address addr)
        : name(name), studentClass(studentClass), rollNumber(rollNumber), marks(marks), address(addr) {}

    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

    // Function to display student information
    void display() const {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.display(); 
    }
};

int main() {
   
    Address addr("123 Main St", "Springfield", "IL", "62704");
    Student student("John Doe", "10th Grade", 23, 85.5, addr);

    student.display();

    return 0;
}
