#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings){
    vector<string> answer;

    map<string, int> m;
    for(int i=0; i<players.size(); i++)
        m[players[i]] = i;

    int s1, s2;
    string tmp;
    for(int i=0; i<callings.size(); i++){
        s2 = m[callings[i]]; 
        s1 = s2-1;
        m[players[s2]]--; 
        m[players[s1]]++;
        //cout << s1 << " " << s2 << endl;
        tmp = players[s2];
        players[s2] = players[s1];
        players[s1] = tmp;
    }

    answer = players;

    return answer;
}
