#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer; vector<int> answer1;
    for(int i=0; i<score.size(); i++){
            answer1.push_back(score[i][0] + score[i][1]);
            answer.push_back(1);
    }	
        
    for(int j=0; j<answer1.size(); j++){
        for(int k=0; k<answer1.size(); k++){
            if(answer1[j] < answer1[k]){
                answer[j]++;
            }
        }
    }
    return answer;
}