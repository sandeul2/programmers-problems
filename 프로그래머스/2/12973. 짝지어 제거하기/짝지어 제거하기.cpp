#include <string>
#include <stack>

using namespace std;

int solution(string s){
    stack<char> stack;
    for (int i = 0; i < s.length(); i++) {
        if (stack.empty()) {
            stack.push(s[i]);
        } else {
            if (stack.top() == s[i]) {
                stack.pop();
                continue;
            } else {
                stack.push(s[i]);
            }
        }
    }
    return stack.empty() ? 1 : 0;
}