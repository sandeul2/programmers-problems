#include <string>
#include <vector>

using namespace std;

string day[7]={"THU","FRI","SAT","SUN","MON","TUE","WED"};
int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};

string solution(int a, int b) {
    string answer = "";
    int sum = 0;
    for(int i=0;i<a-1;i++){
        sum+=month[i];
    }
    answer = day[(sum+b)%7];
    return answer;
}