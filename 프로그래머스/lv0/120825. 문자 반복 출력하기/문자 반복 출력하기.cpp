#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for(int i=0; i<my_string.size(); i++){
        for(int j=0; j<n; j++)
            answer.push_back(my_string[i]);
    }
    return answer;
}