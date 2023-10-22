#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int number){
    // 1. 0과 1은 소수가 아니다 (소수의 정의)
    if (number == 0 || number == 1)
        return false;

    // 2. 에라토스테네스의 체
    int lim = sqrt(number);
    for (int i = 2; i <= lim; i++)
        if (number % i == 0)
            return false;

    return true;
}

int solution(int n) {
    int answer=0; vector <int> count; 
  
    for(int i=1; i<=n; i++){
    if(isPrime(i)){
        answer++;
    }
    }
    return answer;
}