#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream textFile;
    string text;
    cout<<"Enter text to enter in file"<<endl;
    cin>>text;
    textFile.open("text2.txt",ios::out);
    textFile<<text;
    textFile.close();
}