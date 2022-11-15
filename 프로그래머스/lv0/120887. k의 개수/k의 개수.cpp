#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for(int q=i; q<=j; q++){
        int q1 =q;
        while(q1>0){

            if(q1%10 == k){
                answer++;
            }
        q1 /= 10;
        }
    }
    return answer;
}