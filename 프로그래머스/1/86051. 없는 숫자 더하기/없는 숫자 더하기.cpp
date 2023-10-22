#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    sort(numbers.begin(), numbers.end());

    int index = 0;
    for (int i = 0; i < 10; i++){
        if (i != numbers[index]){
            answer += i;
        }
        else
            index++;
    }


    return answer;
}