#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    sort(sides.begin(), sides.end());
    
    if(sides[0] + sides[1] > sides[2]){
        return 1;
    }
    else
        return 2;
}