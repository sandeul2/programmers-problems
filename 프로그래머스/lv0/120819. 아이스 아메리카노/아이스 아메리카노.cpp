#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer; int ahah = 5500;
    int count = -1;
    while(money>=0){
        money -= ahah;
            count++;
    }
    answer.push_back(count);
    answer.push_back(money + 5500);
    return answer;
}