#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true; int temp = x; int digit = 0;
    
    while(temp > 0) {
        digit += (temp % 10);
        temp /= 10;
        
    }
    if(x % digit == 0) {
        answer = true;
    } else
        answer = false;
    
    return answer;
}