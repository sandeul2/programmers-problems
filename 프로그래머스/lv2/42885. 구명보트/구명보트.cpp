#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end()); //그리디를 위한 정렬
    
    int answer = 0; // 보트의 개수  
    int idx = 0; 
    while(people.size() > idx){
        int back = people.back();
        people.pop_back(); 
        if(people[idx] + back <= limit){ 
            answer++;     
            idx++;  
        }
        else        
            answer++;   //혼자타는 경우
    }
    return answer;
}