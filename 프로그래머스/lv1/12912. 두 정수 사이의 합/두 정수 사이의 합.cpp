#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0; long long sum = 0; int i;
    if(a<b){
        for(i=a; i<=b; i++)
        sum += i; 
    }
    else{
        for(i=b; i<=a; i++){
        sum += i; 
    }
}
    return sum;
}