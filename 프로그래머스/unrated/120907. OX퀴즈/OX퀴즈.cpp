#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz){
    vector<string> ans;
    for(auto& s : quiz){
        stringstream ss(s);
        int a,b,c;
        char op,eq;
        ss >> a >> op >> b >> eq >> c;

        if(op == '+'){
            if(a + b == c)
                ans.push_back("O");
            else
                ans.push_back("X");
            continue;
        }

        if(a - b == c)
            ans.push_back("O");
        else
            ans.push_back("X");
    }
    return ans;
}