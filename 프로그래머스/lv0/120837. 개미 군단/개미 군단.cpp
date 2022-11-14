#include <string>
#include <vector>

//그리디?
using namespace std;

int solution(int hp) {
    int answer = 0; 
    
    while(hp >0){
        if(hp>=5){
            hp -=5;
            answer++;
        }
        else if(hp>=3){
            hp -=3;
            answer++;
        }
        else{
            hp--;
            answer++;
        }
    }
    return answer;
}