#include <iostream>
using namespace std;

class Parent
{
private:
    string surname;

public:
    Parent(string _surname)
    {
        surname = _surname;
    }
    string getSurname()
    {
        return surname;
    }
};

class Child : public Parent
{
public:
    string name;
    Child(string _name, string _surname) : Parent(_surname)
    {
        name = _name;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    Child child("Akash", "Patil");
    cout << "Name " << child.getName() << endl;
    cout << "Surname " << child.getSurname() << endl;
    return 0;
}
