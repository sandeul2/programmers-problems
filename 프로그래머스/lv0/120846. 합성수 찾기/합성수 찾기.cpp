#include <string>
#include <vector>

int jungsangsu(int i){
    int count = 0;
    for(int j=1; j<=i; j++){
        if(i%j==0)
            count++;
    }
    if(count>=3)
        return 1;
    else 
        return 0;
}

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1; i<=n; i++){
        answer += jungsangsu(i);         
    }
    return answer;
}