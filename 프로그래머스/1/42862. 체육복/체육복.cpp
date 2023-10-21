#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> u(n+2, 1); //1번 학생과 마지막 학생 옆에 가상의 학생을 만들어 배열에 추가
    
    for(int i=0; i<reserve.size(); i++){
        u[reserve[i]]++; //여분으로 체육복을 가져온 학생
    }
    
    for(int i=0; i<lost.size(); i++){
        u[lost[i]]--; //체육복이 없어진 학생
    }
    
    for(int i=1; i<=n; i++){
        if(u[i-1] == 0 && u[i] ==2){ //여분 체육복이 있고, 앞번호 학생이 체육복이 없는 경우
            u[i-1] = u[i] = 1;
        }
        else if(u[i] ==2 && u[i+1] ==0){//여분 체육복이 있고, 뒷번호 학생이 체육복이 없는 경우
            u[i] = u[i+1] = 1;    
        }    
    }
    
    for(int i=1; i<=n; i++){
        if(u[i] >0){
            answer++;
        }
    }
    return answer;
}