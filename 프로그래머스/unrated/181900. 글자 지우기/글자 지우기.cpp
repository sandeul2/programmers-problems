#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    sort(indices.begin(), indices.end());
    reverse(indices.begin(), indices.end());
    for(int i : indices){
        my_string.erase(i, 1);
    }
    return my_string;
}