#include <iostream>
using namespace std;

class Person {
private:
    string fullName;
    int age;

public:
    Person() : fullName("Unknown"), age(0) {}

    Person(const string &n, int a) : fullName(n), age(a) {}

    void setName(const string &n) {
        fullName = n;
    }

    string getName() const {
        return fullName;
    }

    void setAge(int a) {
        age = a;
    }

    int getAge() const {
        return age;
    }

    void showPerson() const {
        cout << "----------------------------------" << endl;
        cout << "   Profile Summary" << endl;
        cout << "----------------------------------" << endl;
        cout << " Name : " << fullName << endl;
        cout << " Age  : " << age << endl;
        cout << "----------------------------------" << endl;
    }
};

class Student : public Person {
private:
    string department;
    float cgpa;

public:
    Student() : Person(), department("None"), cgpa(0.0f) {}

    Student(const string &n, int a, const string &d, float c)
        : Person(n, a), department(d), cgpa(c) {}

    void setDepartment(const string &d) {
        department = d;
    }

    void setCgpa(float c) {
        cgpa = c;
    }

    string getDepartment() const {
        return department;
    }

    float getCgpa() const {
        return cgpa;
    }

    void showStudent() const {
        showPerson();
        cout << " Department : " << department << endl;
        cout << " CGPA       : " << cgpa << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() {
    Student st("Hasham Hassan", 19, "Computer Science", 3.52f);
    st.showStudent();
    return 0;
}
