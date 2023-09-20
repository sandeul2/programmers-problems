#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    auto pos_a = find(arr.begin(), arr.end(), 2);
    auto pos_b = find(arr.rbegin(), arr.rend(), 2).base();
    vector<int> answer;
    if(pos_a == arr.end()){
        answer.emplace_back(-1);
    } 
    else{
        answer.insert(answer.end(), pos_a, pos_b);
    }
    return answer;
}