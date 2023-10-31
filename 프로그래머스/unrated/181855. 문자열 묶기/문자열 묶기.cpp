#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0; vector<int> temp(31);
    for(int i=0; i<strArr.size(); i++){
       temp[strArr[i].size()]++; 
    }
    sort(temp.rbegin(), temp.rend());
    answer = temp[0];
    return answer;
}