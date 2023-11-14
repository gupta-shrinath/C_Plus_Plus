#include <iostream>
using namespace std;

class Employee
{
public:
    string role;

private:
    int salary;

public:
    int getSalary()
    {
        return salary;
    }
    void setSalary(int _salary)
    {
        salary = _salary;
    }
};

class Manager : public Employee
{
public:
    Manager()
    {
        role = "Manager";
    }
};

class Associate : public Employee
{
public:
    Associate()
    {
        role = "Associate";
    }
};

int main()
{
    Manager manager, managerTwo;
    manager.setSalary(20000);
    cout << "The role of manager object is " << manager.role << " and the salary is " << manager.getSalary() << endl;
    Associate associate;
    associate.setSalary(10000);
    cout << "The role of associate object is " << associate.role << " and the salary is " << associate.getSalary() << endl;
}