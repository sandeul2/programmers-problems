#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int n) {
    int answer = 0;
    long long a = sqrt(n);
    if(a*a==n)
        answer = 1;
    else
        answer = 2;
    return answer;
}