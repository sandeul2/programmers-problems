#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr){
    vector<string> answer;
    int idx=0;
    string tmp;
    myStr+="a";
    for(int i=0; i<myStr.length(); i++){
        if(myStr[i]=='a' || myStr[i]=='b' || myStr[i]=='c'){
            tmp=myStr.substr(idx, i-idx);
            if(!tmp.empty()) answer.push_back(tmp);
            idx=i+1;
        }
    }
    if(answer.empty()) answer.push_back("EMPTY");

    return answer;
}