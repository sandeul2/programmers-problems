#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(int i=0; i<strArr.size(); i++){
        for(int j=0; j<strArr[i].size(); j++){
            if(i%2==0){
                if(strArr[i][j]>='A' && strArr[i][j]<='Z')
                    strArr[i][j]+=32;
            }
            else
                if(strArr[i][j]>='a' && strArr[i][j]<='z')
                    strArr[i][j]-=32;
        }
    }
    return strArr;
}