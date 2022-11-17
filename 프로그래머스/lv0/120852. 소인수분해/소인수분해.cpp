#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer; 
    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            answer.push_back(i);
            n /= i;
        }
    }
    
    unordered_set <int> int_set(answer.begin(), answer.end());
    vector<int> answer1(int_set.begin(), int_set.end());
    sort(answer1.begin(), answer1.end());
    return answer1;
}