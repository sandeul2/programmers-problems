#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer; int temp=0;
    for(int i=0; i<intStrs.size(); i++){
        temp = stoi(intStrs[i].substr(s,l));
        if(temp >k)
            answer.push_back(stoi(intStrs[i].substr(s,l)));
    }
    return answer;
}