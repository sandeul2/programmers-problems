#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0; int temp=a;
    for(int i=0; i<included.size(); i++){
        if(included[i]==true)
            answer +=a;
        a+=d;
    }
    return answer;
}