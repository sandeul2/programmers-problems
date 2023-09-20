#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int _min = arr.size(), _max = -1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==2){
            _min = min(_min,i);
            _max = max(_max,i);
        }
    }

    if(_max-_min<0) 
        answer.push_back(-1);
    else{
        for(int i=_min;i<=_max;i++) 
            answer.push_back(arr[i]);
    }
    return answer;
}