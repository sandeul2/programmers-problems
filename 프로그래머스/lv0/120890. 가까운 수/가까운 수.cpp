#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    sort(array.begin(), array.end());
    int new_Arr = abs(array[0] - n);
    int index = 0;
    for(int i = 1; i<array.size(); i++){
        if(new_Arr > abs(array[i] - n)) {
            new_Arr = abs(array[i] - n);
            index = i;
        }
    }
    return array[index];
}