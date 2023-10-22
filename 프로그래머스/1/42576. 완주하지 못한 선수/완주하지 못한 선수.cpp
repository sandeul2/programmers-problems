#include <string>
#include <vector>
#include <unordered_map> //hash table 라이브러리

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string, int> d;
    for(auto & i : participant){ //참가자의 이름을 담고 1씩 증가
        d[i]++;
    }
    
    for(auto &i : completion){ // 완주자 내에 참가자 명단이 나오면 1 감소
        d[i]--;
    }
    
    for(auto &i : d){
        if(i.second>0){  
            answer =i.first;
            break;
        }
    }
    return answer;
}