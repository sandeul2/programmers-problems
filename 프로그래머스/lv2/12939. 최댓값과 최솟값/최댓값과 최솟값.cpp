#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;

string solution(string s) {
    string answer = "";
    
    vector<int> arr;
    string tmp;
    for(int i=0;i<s.length();i++){
        if(s[i]!= ' '){
            tmp += s[i];
        }
        else{
            arr.push_back(stoi(tmp));
            tmp.clear();
        }
    }
    arr.push_back(stoi(tmp));
    
    sort(arr.begin(),arr.end());
    
    answer += to_string(arr.front())+ " " + to_string(arr.back());
    return answer;
}
