#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string s) {
    int answer = 0;
    istringstream ss(s);
    string stringBuffer;
    vector<string> cz;
    
    while(getline(ss, stringBuffer, ' ')) {
        cz.push_back(stringBuffer);
    }
    
    for(int i = 0; i < cz.size(); i++) {
        if(cz[i] == "Z")
            answer -= stoi(cz[i-1]);
        
        else
            answer += stoi(cz[i]);
    }
    return answer;
}