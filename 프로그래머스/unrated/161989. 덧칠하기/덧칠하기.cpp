#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int done = 0;
    for (const auto & a : section) {
        if (a > done) {
            done = a + m - 1;
            answer++;
        }
    }
    return answer;
}