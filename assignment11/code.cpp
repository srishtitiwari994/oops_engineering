 #include <iostream>
using namespace std;

template <class T>
class Employee
{
    T id;
    T salary;

public:
    Employee(T i, T s)
    {
        id = i;
        salary = s;
    }

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee<int> e1(101, 30000);

    e1.display();

    return 0;
}
