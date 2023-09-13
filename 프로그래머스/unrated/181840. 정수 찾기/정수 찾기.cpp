#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    for(int i=0; i<num_list.size(); i++){
        if(n == num_list[i])
            answer =1;
    }
    return answer;
}