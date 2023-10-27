#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(string ss) {
    int answer = 0;
    int len = ss.size();
    ss+=ss;
    for(int i=0;i<len;i++){
        int idx=i;
        stack<char> s;
        while(idx<i+len){
            char c = ss[idx++];
            if(c=='[' || c=='{' || c=='(') s.push(c);
            else if(c==']'){
                if(s.top()=='[') s.pop();
                else s.push(c);
            }
            else if(c=='}'){
                if(s.top()=='{') s.pop();
                else s.push(c);
            }
            else if(c==')'){
                if(s.top()=='(') s.pop();
                else s.push(c);
            }
        }
        if(s.empty()) answer++;
    }
    return answer;
}