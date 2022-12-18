#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer; int count1 =0; int count2 =0;
    for(int i=0; i<num_list.size(); i++){
        if(num_list[i] % 2 == 0){
            count1++;
        }
        else{
            count2++;
        }
    }
    answer.push_back(count1);
    answer.push_back(count2);
    return answer;
}