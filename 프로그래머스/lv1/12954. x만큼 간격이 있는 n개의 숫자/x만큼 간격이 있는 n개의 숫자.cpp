#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer; int array=0;
    for(int i=1; i<=n; i++){
        array = i*x;
        answer.push_back(array);
    }
return answer;
}