#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer; int max = 0;
    max = *max_element(array.begin(), array.end());
    
    for(int i=0; i<array.size(); i++){
        if(array[i] == max){
            answer.push_back(array[i]);
            answer.push_back(i);
        }
    }
    return answer;
}