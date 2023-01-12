#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer; int j = my_str.size();
    while(j>0){
        answer.push_back(my_str.substr(0,n));
        my_str.erase(0,n);
        j -= n;    
        
    }
    return answer;
}