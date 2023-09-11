#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0; 
    for(int i=0; i<control.size(); i++){
        if(control[i] =='w')
            n++;
        else if(control[i]=='s')
            n--;
        else if(control[i]=='d')
            n+=10;
        else if(control[i]=='a')
            n-=10;
    }
    answer = n;
    return answer;
}