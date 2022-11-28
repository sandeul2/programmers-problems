#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0; int coupon = chicken; int eaten;

    while (coupon >= 10){
        eaten = coupon/10; 
        answer += eaten;
        coupon = coupon%10 + eaten; 
    }
    return answer;
}