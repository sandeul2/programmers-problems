#include <string>
#include <vector>
#include <sstream>
#include <regex>

using namespace std;

vector<string> solution(string myStr) {
    myStr = regex_replace(myStr, regex("[abc]"), " ");    
    vector<string> answer;
    stringstream ss(myStr);
    string str;
    while(ss >> str) answer.emplace_back(str);
    if(answer.empty()) answer.emplace_back("EMPTY");
    return answer;
}