#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0; int a;
    while(n > 0){
        a = n%10;
        answer = answer + a;
        n = n/10;
    }
       
    return answer;
}