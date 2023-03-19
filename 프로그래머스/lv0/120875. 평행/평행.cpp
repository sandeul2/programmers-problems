#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer=0;
    
    double a=dots[0][0]-dots[1][0];
    double b=dots[0][1]-dots[1][1];
    double c=dots[2][0]-dots[3][0];
    double d=dots[2][1]-dots[3][1];
    
    if(a/b==c/d) return 1;
    
    a=dots[0][0]-dots[2][0];
    b=dots[0][1]-dots[2][1];
    c=dots[1][0]-dots[3][0];
    d=dots[1][1]-dots[3][1];
    
    if(a/b==c/d) return 1;
    
    a=dots[0][0]-dots[3][0];
    b=dots[0][1]-dots[3][1];
    c=dots[1][0]-dots[2][0];
    d=dots[1][1]-dots[2][1];
    
    if(a/b==c/d) return 1;
    
    return answer;
}