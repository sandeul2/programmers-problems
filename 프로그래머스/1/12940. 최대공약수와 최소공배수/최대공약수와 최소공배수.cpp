#include <string>
#include <vector>

using namespace std;

int max_isprime(int a ,int b) {
    int n;
    while(b!=0){
        n = a%b;
        a = b;
        b = n;
    }
    return a;
}

int min_multiple(int a , int b) {
    return a*b / max_isprime(a,b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(max_isprime(n,m));
    answer.push_back(min_multiple(n,m));
    return answer;
}