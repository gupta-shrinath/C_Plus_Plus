#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream textFile("/Users/guptashrinath/Projects/C_Plus_Plus/text2.txt");
    string text;
    while(!textFile.eof()) {
        textFile>>text;
        cout<<text<<endl;
    }
}