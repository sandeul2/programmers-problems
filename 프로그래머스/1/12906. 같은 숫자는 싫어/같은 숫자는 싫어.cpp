#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    for(int i=0; i<arr.size(); i++) {
        /* 1. answer가 비어있다면 추가 */
        if(answer.empty()) {
            answer.push_back(arr[i]);
        /* 2. 연속된 숫자 제거 */
        } else {
            if(arr[i] != answer.back()) {
                answer.push_back(arr[i]);
            }
        }
    }
    return answer;
}