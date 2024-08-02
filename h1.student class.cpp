#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    Student() : name("Unknown") {}

    Student(string name) : name(name) {}

    void printName() {
        cout << name << endl;
    }
};

int main() {
    Student student1("John");
    Student student2;

    student1.printName();
    student2.printName();

    Student test1("SSE");
    Student test2("AABBCC");
    Student test3("%78^&*");
    Student test4("34.22");
    Student test5("SA--");

    test1.printName();
    test2.printName();
    test3.printName();
    test4.printName();
    test5.printName();

    return 0;
}