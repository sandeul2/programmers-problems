#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int ind = 0;
    while(k>1)
    {
        k--;
        ind += 2;
        ind %= numbers.size();
    }
    answer = numbers[ind];
    return answer;
}