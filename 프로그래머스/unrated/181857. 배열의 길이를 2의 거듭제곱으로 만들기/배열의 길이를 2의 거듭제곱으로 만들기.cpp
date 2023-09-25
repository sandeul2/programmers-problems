#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<int> solution(vector<int> arr) {
       int size=1;
        while(size < arr.size()){
            size *=2;
        }
    vector<int> answer = arr;
    while(answer.size() < size){
        answer.push_back(0);
        }
    return answer;
}