#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    if(num_list.size()>=11){
        for(int i=0; i<num_list.size(); i++)
            answer += num_list[i];
        }
    else{
        answer = 1;
        for(int j=0; j<num_list.size(); j++)
            answer *= num_list[j];
        }

    return answer;
}