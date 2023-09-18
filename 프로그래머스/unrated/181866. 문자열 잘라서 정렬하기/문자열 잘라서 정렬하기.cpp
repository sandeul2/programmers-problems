#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString){
    vector<string> answer;
    int idx=0; string tmp;
    myString+="x";
    for(int i=0; i<myString.length(); i++){
        if(myString[i]=='x'){
            tmp=myString.substr(idx, i-idx);
            if(!tmp.empty())
                answer.push_back(tmp);
            idx=i+1;
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
