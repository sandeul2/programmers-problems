#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer; string temp;
    reverse(my_string.begin(),my_string.end());
    for(int i=my_string.size(); i>0; i--){
        temp = my_string.substr(0,i);
        reverse(temp.begin(),temp.end());
        answer.push_back(temp);
        reverse(answer.begin(),answer.end());
    }
    sort(answer.begin(), answer.end());
    return answer;
}