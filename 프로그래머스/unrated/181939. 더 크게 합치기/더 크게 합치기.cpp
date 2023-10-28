#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0; string aa =""; string bb="";
    aa = to_string(a); bb = to_string(b);
    if(stoi(aa+bb) > stoi(bb+aa))
        answer = stoi(aa+bb);
    else
        answer = stoi(bb+aa);
    return answer;
}