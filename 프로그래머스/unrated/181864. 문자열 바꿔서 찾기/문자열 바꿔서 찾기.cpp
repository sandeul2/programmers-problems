#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 1;
    for(int i=0; i<myString.size(); i++){
        if(myString[i]=='A')
            myString[i] = 'B';
        else
            myString[i] = 'A';
    }
    if(myString.find(pat) == string ::npos)
        answer =0;
    return answer;
}