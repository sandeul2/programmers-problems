#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr(2010);

int solution(vector<int> array) {
    int answer = 0;
    for(int i = 0; i < array.size(); i++){
        arr[array[i]]++;
    }

    int max = 0;
    for(int i = 0; i < arr.size(); i++){
        if(max < arr[i])
            max = arr[i];
    }

    int cnt = 0;
    for(int i = 0; i < arr.size(); i++){
        if(max == arr[i]){
            answer = i;
            cnt++;
            if(cnt > 1)
                return -1;
        }
    }

    return answer;
}