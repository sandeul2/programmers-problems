#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

map<string, char> mp;
string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",
				".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                "...","-","..-","...-",".--","-..-","-.--","--.."};

string solution(string letter) {
    string answer = "";
    string str="";
    stringstream ss(letter);
    char c='a';
    
    for(int i=0; i<26; i++)
        mp[arr[i]]=c+i;
    
    while(ss >> str){
        answer+=mp[str];
    }
    
    return answer;
}