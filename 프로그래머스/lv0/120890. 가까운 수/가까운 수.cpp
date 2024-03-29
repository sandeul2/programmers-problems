#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    sort(array.begin(), array.end());
    
    int new_arr = abs(array[0] - n);
    int index = 0;
    
    for(int i = 1; i<array.size(); i++){
        if(new_arr > abs(array[i] - n)) {
            new_arr = abs(array[i] - n);
            index = i;
        }
    }
    return array[index];
}