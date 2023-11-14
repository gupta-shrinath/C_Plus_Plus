#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream textFile("text.txt");
    string text;
    cout<<"Enter text to enter in file"<<endl;
    cin>>text;
    textFile<<text;
    textFile.close();
}