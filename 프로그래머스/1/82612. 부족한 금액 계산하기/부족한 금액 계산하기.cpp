

using namespace std;

long long solution(int price, int money, int count) {
    long long answer = money;
    
    /* 1. N번의 놀이기구 탑승 */
    for (int i = 1; i <= count; i++) {
        answer -= price * i;
    }
    
    /* 2. 부족한 금액 계산 */
    if (answer >= 0) {
        return 0;
    } else {
        return answer * -1;
    }
    
}
