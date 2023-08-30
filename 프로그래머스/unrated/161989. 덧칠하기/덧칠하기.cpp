#include <string>
#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section){
    int answer = 0, cur = 0;
    for(int i=0;i<section.size();i++){
        if (cur > section[i]) 
            continue;// 현재 칠해진부분이 타겟부분보다 클때
        answer++;
        cur = section[i] + m;// 현재 칠해진 부분 갱신
    }
    return answer;
}