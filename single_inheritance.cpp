#include <iostream>
using namespace std;
// Base class
class Parent
{
private:
    string surname;

public:
    string getSurname()
    {
        return surname;
    }
    void setSurname(string _surname)
    {
        surname = _surname;
    }
};
// Dervied Class
class Child : public Parent
{
};

int main()
{
    Child child;
    child.setSurname("Gupta");
    cout << child.getSurname() << endl;
}