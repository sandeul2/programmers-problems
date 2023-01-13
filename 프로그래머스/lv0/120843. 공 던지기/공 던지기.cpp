#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int num = 0;
    while(k>1){
        k--;
        num += 2;
        num %= numbers.size();
    }
    answer = numbers[num];
    return answer;
}