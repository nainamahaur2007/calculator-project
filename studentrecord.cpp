#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[50];
    int n, searchRoll, found = 0;

    cout << "Enter number of students: ";
    cin >> n;

    // ADD STUDENTS
    for(int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i+1 << endl;
        cout << "Roll No: ";
        cin >> s[i].roll;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Marks: ";
        cin >> s[i].marks;
    }

    // DISPLAY STUDENTS
    cout << "\n--- Student Records ---\n";
    for(int i = 0; i < n; i++) {
        cout << s[i].roll << " | " << s[i].name << " | " << s[i].marks << endl;
    }

    // SEARCH STUDENT
    cout << "\nEnter roll number to search: ";
    cin >> searchRoll;

    for(int i = 0; i < n; i++) {
        if(s[i].roll == searchRoll) {
            cout << "Found: " << s[i].name << " with marks " << s[i].marks << endl;
            found = 1;
            break;
        }
    }

    if(found == 0) {
        cout << "Student not found!";
    }

    return 0;
}