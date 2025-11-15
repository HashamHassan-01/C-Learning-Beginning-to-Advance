#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string name = "") : name(name) {}
    virtual void display() const = 0;
    virtual ~Person() {}
};

class Student : public Person {
private:
    int rollNo;
public:
    Student(string name = "", int rollNo = 0) : Person(name), rollNo(rollNo) {}

    void display() const override {
        cout << "Student Name: " << name << "\nRoll No: " << rollNo << endl;
    }

    int getRoll() const { return rollNo; }
};

class Book {
private:
    string title, author;
    int id;
    bool isIssued;
public:
    Book(string t = "", string a = "", int i = 0)
        : title(t), author(a), id(i), isIssued(false) {}

    void display() const {
        cout << "Book ID: " << id
             << "\nTitle: " << title
             << "\nAuthor: " << author
             << "\nStatus: " << (isIssued ? "Issued" : "Available") << endl;
    }

    int getID() const { return id; }
    bool getStatus() const { return isIssued; }
    void issue() { isIssued = true; }
    void returnBack() { isIssued = false; }
    string getTitle() const { return title; }
};

class Library {
private:
    vector<Book> books;
    vector<Student> students;
public:
    void addBook() {
        string t, a;
        int id;
        cout << "\nEnter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, t);
        cout << "Enter Author: ";
        getline(cin, a);
        books.push_back(Book(t, a, id));
        cout << "Book Added Successfully!\n";
    }

    void addStudent() {
        string name;
        int roll;
        cin.ignore();
        cout << "\nEnter Student Name: ";
        getline(cin, name);
        cout << "Enter Roll No: ";
        cin >> roll;
        students.push_back(Student(name, roll));
        cout << "Student Added Successfully!\n";
    }

    void issueBook() {
        int id, roll;
        cout << "\nEnter Book ID: ";
        cin >> id;
        cout << "Enter Student Roll No: ";
        cin >> roll;

        for (auto &b : books) {
            if (b.getID() == id) {
                if (b.getStatus()) {
                    cout << "Book Already Issued!\n";
                    return;
                }
                b.issue();
                cout << "Book Issued Successfully!\n";
                return;
            }
        }
        cout << "Book Not Found!\n";
    }

    void returnBook() {
        int id;
        cout << "\nEnter Book ID: ";
        cin >> id;

        for (auto &b : books) {
            if (b.getID() == id) {
                if (!b.getStatus()) {
                    cout << "Book is Already Available!\n";
                    return;
                }
                b.returnBack();
                cout << "Book Returned Successfully!\n";
                return;
            }
        }
        cout << "Book Not Found!\n";
    }

    void showBooks() const {
        cout << "\n--- Book List ---\n";
        for (const auto &b : books) {
            b.display();
            cout << "------------------\n";
        }
    }

    void showStudents() const {
        cout << "\n--- Student List ---\n";
        for (const auto &s : students) {
            s.display();
            cout << "---------------------\n";
        }
    }
};

int main() {
    Library lib;
    int choice;

    while (true) {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n2. Add Student\n3. Issue Book\n4. Return Book\n";
        cout << "5. Show All Books\n6. Show All Students\n7. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: lib.addBook(); break;
            case 2: lib.addStudent(); break;
            case 3: lib.issueBook(); break;
            case 4: lib.returnBook(); break;
            case 5: lib.showBooks(); break;
            case 6: lib.showStudents(); break;
            case 7: cout << "Exiting... Thank you!\n"; return 0;
            default: cout << "Invalid Choice! Try Again.\n";
        }
    }
}
