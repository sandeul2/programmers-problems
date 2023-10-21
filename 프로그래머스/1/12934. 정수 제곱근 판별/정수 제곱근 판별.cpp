#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0; long long a=0;
    a = sqrt(n);
    if(a*a ==n)
        answer = (a+1)*(a+1);
    else
        answer =-1;
    
    return answer;
}