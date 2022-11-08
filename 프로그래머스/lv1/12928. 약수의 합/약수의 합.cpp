#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if(n>=0 && n<=3000){
        int answer = 0; int sum=0;
        for(int i=1; i<=n; i++){
            if(n%i==0)
                sum= sum+i;
        }
        return sum;
}
}