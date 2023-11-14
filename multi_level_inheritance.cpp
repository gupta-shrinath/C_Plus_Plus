#include <iostream>
using namespace std;

class GrandParents
{
public:
    string grandFatherCulture = "Bengali";
    string grandMotherCulture = "Marathi";
};

class Parents : public GrandParents
{
public:
    string fatherCulture = "Bengali";
    string motherCulture = "Kokani";
};
class Children : public Parents
{
};

int main()
{
    Children child;
    cout << child.grandFatherCulture << endl;
    cout << child.grandMotherCulture << endl;
    cout << child.fatherCulture << endl;
    cout << child.motherCulture << endl;
    return 0;
}