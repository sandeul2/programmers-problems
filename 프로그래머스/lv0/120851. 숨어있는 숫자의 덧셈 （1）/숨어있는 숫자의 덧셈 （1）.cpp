#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0; int answer1 = 0;
    
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i] >= 'a' && my_string[i] <= 'z')
            continue;
        else if(my_string[i] >= 'A' && my_string[i] <= 'Z')
            continue;
        else
            answer1 = my_string[i]- '0';
            answer += answer1;
    }
    return answer;
}