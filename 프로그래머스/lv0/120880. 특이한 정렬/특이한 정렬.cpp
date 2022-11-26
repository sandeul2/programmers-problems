#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num;

bool compare(int prev, int next) {
    if (abs(prev - num) == abs(next - num)) 
        return prev > next;
    return abs(prev - num) < abs(next - num);
}

vector<int> solution(vector<int> numlist, int n) {
    num = n;
    sort(numlist.begin(), numlist.end(), compare);
    return numlist;
}