#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    for(int i=0; i<str_list.size(); i++){
        if(str_list[i]=="l"){
            for(int j=0; j<i; j++){
                answer.push_back(str_list[j]);
            }
            return answer;
        }
        else if(str_list[i]=="r"){
            for(int k=i+1; k<str_list.size(); k++){
                answer.push_back(str_list[k]);
            }
            return answer;
        }      
    }
  return answer;
}