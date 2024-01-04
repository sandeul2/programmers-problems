#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer=0;

    for(auto s : babbling) {
        int flag=0;
        for(int i=0; i<s.length();) {
            if(s.compare(i, 3, "aya") == 0 && flag!=1) {
                flag=1; i+=3; 
            } else if(s.compare(i, 2, "ye") == 0 && flag!=2) { 
                flag=2; i+=2; 
            } else if(s.compare(i, 3, "woo") == 0 & flag!=3) {
                flag=3; i+=3; 
            } else if(s.compare(i, 2, "ma") == 0 && flag!=4) {
                flag=4; i+=2; 
            } else {
                flag = 0; 
                break; 
            }
        }
        if(flag) 
            answer++;
    }
    
    return answer;
}