#include<string>
#include <iostream>

using namespace std;

bool solution(string s) {
    int n = 0;
    
    for (int i = 0; i < s.length(); i++) {
        
        if(s.front() ==')'){
            return false;
        } if (n < 0) {
            return false;
        } if (s[i] == '(')
            n++; 
        else if (s[i] == ')')
            n--;
    }   
    return n == 0;
}