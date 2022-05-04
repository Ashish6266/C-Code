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
    employee1.Age = 26;
    employee1.Name = "John";
    employee1.Company = "Comcast";
    cout << employee1.Age << " " << employee1.Name << " " << employee1.Company;
}