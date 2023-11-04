#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0; int target_size = target.size();
    for(int i=0; i<my_string.size(); i++){ 
        if(my_string[i]==target[0]){
            if(target == my_string.substr(i,target_size))
                answer = 1;
        }
    }
    return answer;
}