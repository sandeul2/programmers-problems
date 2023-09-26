#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i=0;i<myString.size();i++){
        if(myString[i]<97)
            myString[i]+=32;
    }
    for(int i=0;i<pat.size();i++){
        if(pat[i]<97)
            pat[i]+=32;
    }
    if(myString.find(pat)!=string::npos)
        answer=1;
    return answer;
}