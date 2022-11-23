#include <string>
#include <vector>

using namespace std;

int factorial(int n, int m){
    if(n == m || m == 0) 
        return 1; 
    else 
        return factorial(n - 1, m - 1) + factorial(n - 1, m);
}

int solution(int balls, int share) {
    int answer = 0;

    answer = factorial(balls, share);

    return answer;
}