#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> q;
    
    for(auto& i : scoville){
        q.push(i);
    }
    
    while(1){
        int min1 = q.top();
        q.pop();
        
        if(min1 >= K){
            break;
        }
        
        else if(q.empty()){
            answer = -1;
            break;
        }
        int min2 = q.top();
        q.pop();
            
        q.push(min1 + min2 * 2);
        answer++;
        
    }
    return answer;
}