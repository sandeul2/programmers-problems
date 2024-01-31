#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0; long long root = sqrt(n);
    
    if((root * root) == n) {
        answer = (root + 1) * (root + 1);
    } else
        answer = -1;
    
    return answer;
}