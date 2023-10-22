#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s){
    map<char, int> mp;
    vector<int> answer;
    for (int i = 0; i < s.size(); ++i){
        if (mp.find(s[i]) != mp.end()) 
            answer.push_back(i - mp[s[i]]);
        else 
            answer.push_back(-1);
        mp[s[i]] = i;
    }
    return answer;
}