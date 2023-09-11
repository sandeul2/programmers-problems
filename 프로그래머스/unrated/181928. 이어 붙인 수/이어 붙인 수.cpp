#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0; string iseven =""; string odd ="";
    for(int i=0; i<num_list.size(); i++){
        if(num_list[i]%2 ==1)
            odd += to_string(num_list[i]);
        else
            iseven += to_string(num_list[i]);
    }
    answer = stoi(odd)+ stoi(iseven);
    return answer;
}