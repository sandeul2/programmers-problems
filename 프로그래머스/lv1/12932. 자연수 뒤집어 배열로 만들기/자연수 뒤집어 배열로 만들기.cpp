#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int temp;
    while (n) {
    	temp = n % 10;
        n /= 10;
        answer.push_back(temp);
    }
    return answer;
}