#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    void Introduce(){
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};

int main(){
    Employee employee1;
    employee1.Age = 1;
    employee1.Name = "John";
    employee1.Company = "Comcast";
    int a = 1;
    int b = 2;
    int& ref = a;
    int* ptr = &ref;
    ptr = &b;

    cout << ptr << ' ' << &a << ' ' << &ref;
}