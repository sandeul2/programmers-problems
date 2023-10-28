#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0; int sum_value =0; int mul_value=0;
    string aa =to_string(a); string bb = to_string(b);
    sum_value = stoi(aa+bb); mul_value = 2 * a * b;
    if(sum_value>mul_value)
        answer = sum_value;
    else
        answer = mul_value;
    return answer;
}