#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    stringstream s(my_string);
    string str;
    while(s >> str){
        answer.emplace_back(str);
    }
    return answer;
}