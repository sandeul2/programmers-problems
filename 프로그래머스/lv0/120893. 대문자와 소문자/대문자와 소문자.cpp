#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    
    for (int i = 0; i < my_string.size(); i++) {
        if(my_string[i] >='a' && my_string[i] <='z')
        answer += toupper(my_string[i]);
        else if(my_string[i] >='A' && my_string[i] <='Z')
        answer += tolower(my_string[i]);
    }
    return answer;
}