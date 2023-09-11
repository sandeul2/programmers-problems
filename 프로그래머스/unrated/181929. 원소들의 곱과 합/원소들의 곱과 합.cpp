#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0; int sum =0; int mul =1;
    for(int i=0; i<num_list.size(); i++){
        mul *= num_list[i];
        sum += num_list[i];
    }
    sum *= sum;
    
    if(mul <sum){
        answer = 1;
    }
    else
        answer = 0;
    return answer;
}