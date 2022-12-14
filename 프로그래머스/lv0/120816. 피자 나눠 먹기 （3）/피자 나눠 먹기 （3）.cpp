#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    while(n>0){
        n-=slice;
        answer++;
    }
    return answer;
}