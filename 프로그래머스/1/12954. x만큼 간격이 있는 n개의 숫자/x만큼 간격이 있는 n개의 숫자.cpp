#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer; int a=0;
    for(int i=1; i<=n; i++){
        a = x*i;
        answer.push_back(a);
    }
    
    return answer;
}