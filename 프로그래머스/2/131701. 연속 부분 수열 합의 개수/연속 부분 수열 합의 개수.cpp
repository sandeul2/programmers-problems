#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> s;
    int len = elements.size();
    vector<int> copyelement(elements);
    copy(copyelement.begin(), copyelement.end(), back_inserter(elements));
    for(int start = 0; start < len; ++start){
        int sum = elements[start];
        s.insert(sum);
        int cnt = 1;
        int end = start;
        while(cnt < len){
            cnt += 1;
            end += 1;
            sum += elements[end];
            s.insert(sum);
        }
    }
    answer = s.size();
    return answer;
}