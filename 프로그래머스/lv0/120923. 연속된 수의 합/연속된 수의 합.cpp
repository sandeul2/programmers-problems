#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int n =total/num;
    int m =num/2;
    int idx=0;
    
    if(num%2==0) 
        idx=n-m+1;
    else 
        idx=n-m;
    
    for(int i=idx; i<=n+m; i++)
        answer.push_back(i);
    
    return answer;
}