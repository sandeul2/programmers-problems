#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer; vector<int> temp;
    
    for(int i=0; i<emergency.size(); i++){
        temp.push_back(emergency[i]);
    }
    
    sort(temp.begin(), temp.end());
    for(int j=0; j<temp.size(); j++){
        for(int k=0; k<temp.size(); k++){
            if(emergency[j] == temp[k])
                answer.push_back(temp.size()-k);
        }
    }
    return answer;
}