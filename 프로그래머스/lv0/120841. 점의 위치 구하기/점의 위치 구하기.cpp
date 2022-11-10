#include <string>
#include <vector>

using namespace std;

int sabunmyun(int x, int y){
    if(x>0 && y>0)
        return 1;
    else if(x<0 && y>0)
        return 2;
    else if(x<0 && y<0)
        return 3;
    else if(x>0 && y<0)
        return 4;
}

int solution(vector<int> dot) {
    int answer = 0; int x = dot[0]; int y = dot[1];
    answer = sabunmyun(x, y);
    return answer;
}