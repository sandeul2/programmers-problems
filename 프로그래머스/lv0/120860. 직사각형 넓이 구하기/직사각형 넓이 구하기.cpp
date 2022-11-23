#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0; int nopi = 0; int nubi = 0;
    
    for(int i=0; i<dots.size(); i++){
        for(int j=i+1; j<dots.size(); j++){
            if(dots[i][0] == dots[j][0])
                nopi = abs(dots[i][1] - dots[j][1]);
            if(dots[i][1] == dots[j][1])
                nubi = abs(dots[i][0] - dots[j][0]);
        }
    }
    answer = nopi * nubi;
    return answer;
}