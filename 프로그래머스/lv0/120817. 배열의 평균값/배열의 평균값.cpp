#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    for(int i = 0; i < numbers.size(); i++)
        answer += numbers[i];
    answer = answer / numbers.size();
    return answer;
}