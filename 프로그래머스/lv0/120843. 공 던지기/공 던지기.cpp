#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0; int sum = 1;
    for(int i=0; i<k; i++){
        answer =sum;
        if(numbers.size()<sum)
            sum = 1;
        else if(numbers.size() == sum)
            sum = 0;
        sum +=2;
        }
    return answer;
}