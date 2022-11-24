#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, tmp = 0;
    for(int i = 1; i <= n; i++){
        tmp = i;
        for(int j = i + 1; j <= n; j++){
            if(tmp == n) {
                answer++; 
                break;
            }
            if(tmp + j > n)
                break;
            tmp += j;
        }
    }
    return answer + 1;
}