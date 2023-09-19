#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0; int temp=0;
    for(int i=0; i<number.size(); i++){
        temp +=(number[i]-'0');
    }
    answer = temp%9;
    return answer;
}