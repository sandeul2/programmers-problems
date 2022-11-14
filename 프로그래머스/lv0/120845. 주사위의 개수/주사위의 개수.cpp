#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0; int garo = 0; int sero = 0; int nopi = 0;
    
    garo = box[0]/n;
    sero = box[1]/n;
    nopi = box[2]/n;
    
    answer = garo * sero * nopi;
    return answer;
}