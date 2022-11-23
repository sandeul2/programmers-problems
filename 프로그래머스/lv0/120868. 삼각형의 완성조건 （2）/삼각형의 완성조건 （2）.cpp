#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int solution(vector<int> sides){
    int count = 0; int max1; int min1;
    max1 = max(sides[0], sides[1]);
    min1 = min(sides[0], sides[1]);
    
    for(int i = max1-min1+1; i <= max1; i++){
        count++;
    }
    
    for(int j = max1+1; j < max1+min1; j++){
        count++;
    }
    return count;
}