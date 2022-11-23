#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

int solution(int a, int b) {
    int answer = 0;
    b/=gcd(b, a);
    
    while(1){
        if(b%2==0) b/=2;
        else if(b%5==0) b/=5;
        else break;
    }
    
    if(b==1) answer=1;
    else answer=2;
    
    return answer;
}