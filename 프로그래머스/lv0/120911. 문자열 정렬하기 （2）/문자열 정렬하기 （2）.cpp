#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i=0; i<my_string.size(); i++){
        my_string[i] = tolower(my_string[i]);
        answer += my_string[i];
    }
    sort(answer.begin(), answer.end());
    return answer;
}