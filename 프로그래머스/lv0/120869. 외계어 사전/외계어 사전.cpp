#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;

    for(const auto& v : dic){
        bool test = true;
        for(const auto& t : spell){
            if(v.find(t) == string::npos){
                test= false;
                break;
            }
        }

        if(test){
            answer = 1;
            break;
        }
    }
    return answer;
}