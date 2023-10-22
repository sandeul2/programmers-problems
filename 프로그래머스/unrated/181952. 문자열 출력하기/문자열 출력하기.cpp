#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    getline(cin, str);
    cin.ignore();
    cout << str << endl; 
}