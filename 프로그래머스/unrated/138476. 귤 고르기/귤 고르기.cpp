#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int &a, int &b) {
    return a>b;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> count(10000001);
    for(int i=0; i<tangerine.size(); i++) {
        count[tangerine[i]] += 1;
    }
    sort(count.begin(), count.end(), cmp);
    int i=0; 
    while(k>0) {
        k -= count[i];
        i+=1;
        answer += 1;
    }
    return answer;
}