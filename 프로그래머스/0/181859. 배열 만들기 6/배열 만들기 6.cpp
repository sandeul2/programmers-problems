#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i = 0;
    
    while(i < arr.size()) {
        if(answer.empty()) {
            answer.emplace_back(arr[i++]);
        } else if(answer.back() != arr[i]) {
            answer.emplace_back(arr[i++]);
        } else {
            answer.pop_back();
            i++;
        }        
    }
    if(answer.empty()) 
        answer.emplace_back(-1);
    return answer;
}