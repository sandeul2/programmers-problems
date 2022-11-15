#include <string>
#include <vector>
#include <set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    set<char> s;
    for(const auto v : my_string){
        if(!s.count(v)){
            answer.push_back(v);
            s.insert(v);
        }
    }
    return answer;
}