#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0; int size = numbers.size();
    
    sort(numbers.begin(), numbers.end());
    answer = numbers[size-1] * numbers[size-2];
    return answer;
}