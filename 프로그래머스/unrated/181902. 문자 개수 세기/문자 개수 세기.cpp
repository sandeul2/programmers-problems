#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52,0); int tmp;
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]>='a' && my_string[i]<='z')
            answer[my_string[i]-'a'+26]++;
        else
            answer[my_string[i]-'A']++;
    }
    return answer;
}