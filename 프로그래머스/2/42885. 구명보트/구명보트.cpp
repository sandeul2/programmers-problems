#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    
    int answer = 0; 
    int index = 0; 
    while(people.size() > index) {
        int back = people.back();
        people.pop_back();
        
        if(people[index] + back <= limit) { 
            answer++;     
            index++;  
        } else
            answer++;   //혼자타는 경우
    }
    return answer;
}