#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int pizza; int answer;
    
    for(int i=1; i<=14; i++){
        pizza = 7*i;
        answer = 0;
        if(pizza < n)
            continue;
        else if (pizza >= n){
            answer = i;
            return answer;
        }
    }
}