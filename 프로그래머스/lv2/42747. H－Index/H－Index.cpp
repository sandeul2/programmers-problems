#include <vector>
#include <algorithm>
 
using namespace std;
 
int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());
    //제일 큰값이 0이라면 H-index 는 0이다
    if (!citations[0])        
        return 0;
    for (int i = 0; i < citations.size(); i++) {
        //h-index범위 안이라면
        if (citations[i] > i)    
            answer++;
        //최대값을 벗어났다면
        else    
            break;
    }
    return answer;
}