#include <string>
#include <vector>

using namespace std;

int arr[26];

string solution(string s) {
    string answer = "";
    
    for(int i=0; i<s.size(); i++){
        arr[s[i]-'a']++;
    }
    
    for(int i=0; i<26; i++)
        if(arr[i]==1)
            answer+=(i+97);
    
    return answer;
}