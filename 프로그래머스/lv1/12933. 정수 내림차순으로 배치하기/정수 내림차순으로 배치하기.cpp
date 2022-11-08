#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    for(int i=0; i<s.size(); i++){
         sort(s.rbegin(), s.rend());
    }

   return stoll(s);
}