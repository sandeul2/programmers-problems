#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false; int temp=x; int a=0;
    while(temp>0){
        a += temp%10;
        temp/=10;
    }
    if(x % a == 0){
        answer =true;
    }
    else
        answer =false;
    
    return answer;
}