#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer; 
    for(int i=0; i<commands.size(); i++){
        vector<int> arr;
        for(int j=commands[i][0]; j<= commands[i][1]; j++){
            arr.push_back(array[j-1]);
        }
        sort(arr.begin(), arr.end());
        answer.push_back(arr[commands[i][2]-1]);
    }
    return answer;
}