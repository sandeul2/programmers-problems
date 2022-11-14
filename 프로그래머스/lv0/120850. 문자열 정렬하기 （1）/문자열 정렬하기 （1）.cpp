#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i] >='a' && my_string[i] <='z'){
            continue;
        }
        if(my_string[i] >='A' && my_string[i] <='Z'){
            continue;
        }
        else
            answer.push_back(my_string[i]-'0');
    }
    sort(answer.begin(), answer.end());
    return answer;
}