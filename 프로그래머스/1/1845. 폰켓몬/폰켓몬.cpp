#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums){
    int answer = 0;
    int N = nums.size()/2;
    set<int> a;
    for(int i=0; i<nums.size(); i++){
        a.insert(nums[i]);
    }
    if(a.size() <=N){
        answer = a.size();
    }
    else{
        answer = N;
    }
    
    return answer;
}