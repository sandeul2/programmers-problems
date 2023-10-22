#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    int j = 0;
    vector <int> str;
    while(n!=0){
        str.push_back(n % 3);
        n = n / 3;
    }

    for(int i = str.size() -1 ;i>-1;i--){
        answer += str[i] * pow(3,j);
        j++;
    }
    return answer;
}