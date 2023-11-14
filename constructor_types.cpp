#include <iostream>
using namespace std;

class Parent
{
private:
    string surname;

public:
    // Default Constructor
    Parent()
    {
        cout << "Parent default constructor called!";
        surname = "Sharma";
    }
    // Parameterized Constructor
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
};

int main()
{
    // parameterized constructor is executing
    Parent parentOne("Patil");
    cout << parentOne.getSurname() << endl;
    // default constructor is executing
    Parent parentTwo;
    cout << parentOne.getSurname() << endl;
    return 0;
}