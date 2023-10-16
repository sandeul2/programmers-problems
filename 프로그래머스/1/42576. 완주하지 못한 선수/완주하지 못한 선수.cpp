#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = ""; int size=participant.size();
    //1. 참가자와 완주자 정렬
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    //2. 두 배열이 다를때까지 찾기
    for(int i=0; i<completion.size(); i++){
        if(participant[i] != completion[i]){
            answer = participant[i];
            return answer;
        }
    }
    //3. 같은값을 찾지 못하면 마지막 인덱스값 리턴
    return participant[size-1];
}