#include <string>
#include <vector>

using namespace std;

/* 1. 최대공약수 */
int gcd (int a ,int b) {
    int n;
    while (b != 0){
        n = a%b;
        a = b;
        b = n;
    }
    return a;
}
/* 2. 최소공배수 */
int lcm (int a, int b) {
    return (a * b) / gcd(a, b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n, m));
    answer.push_back(lcm(n, m));
    return answer;
}