#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int supoza1[5] = {1,2,3,4,5};
int supoza2[8] = {2,1,2,3,2,4,2,5};
int supoza3[10] = {3,3,1,1,2,2,4,4,5,5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> score(3);
    int maxScore = 0;
    
    for(int i=0; i < answers.size(); i++){
        if(supoza1[i % 5] == answers[i]) score[0]++; 
        if(supoza2[i % 8] == answers[i]) score[1]++;     
        if(supoza3[i % 10] == answers[i]) score[2]++;
    }

    maxScore = *max_element(score.begin(), score.end());
    
    for (int i=0; i<3; i++){
        if(score[i] == maxScore) 
            answer.push_back(i+1);
    }
    
    return answer;
}
