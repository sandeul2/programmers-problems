#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer; int max1; int max2;
    sort(numbers.begin(), numbers.end());
    
    if(numbers[0]<0 && numbers[1] <0)
        max1 = numbers[0] * numbers[1];
    if(numbers.size()-1 >0){
        max2 = numbers[numbers.size()-2] * numbers[numbers.size()-1];
    }
    answer = max(max1, max2);
    return answer;
}