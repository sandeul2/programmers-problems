#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    if(num%2 == 1){
        for(int i=-num/2; i<=num/2; i++){
            answer.push_back(total/num+i);
        }
    }
    else{
        for(int i=-num/2+1; i<=num/2; i++){
            answer.push_back(total/num+i);
        }
    }
    return answer;
}