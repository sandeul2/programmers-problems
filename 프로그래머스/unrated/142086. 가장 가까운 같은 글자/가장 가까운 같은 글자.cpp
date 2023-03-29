#include <string>
#include <vector>
#include <unordered_map>
 
using namespace std;
 
vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> umap;
 
    for(int i = 0; i < s.length(); i++) {    // 1)
        if(umap.find(s[i]) != umap.end()) {    // 2-2)
            // 찾음
            int index = umap[s[i]];
            answer.push_back(i - index);
            umap[s[i]] = i;
        } else {                            // 2-1)
            // 못 찾음
            umap[s[i]] = i;
            answer.push_back(-1);
        }
    }
 
    return answer;
}
