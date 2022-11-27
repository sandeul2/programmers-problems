#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int n=common.size();
    
    if(common[n-1]-common[n-2]==common[n-2]-common[n-3])
        answer=common[n-1]+common[n-1]-common[n-2];
    else if(common[n-1]/common[n-2]==common[n-2]/common[n-3])
        answer=common[n-1]*(common[n-1]/common[n-2]);
    
    return answer;
}