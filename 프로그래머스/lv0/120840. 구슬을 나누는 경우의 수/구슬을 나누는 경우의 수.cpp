#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int balls, int share) {
    long long answer = 0;
    share = min(balls - share, share);
    if (share == 0)
            return 1;
    
    answer = solution(balls - 1, share - 1);
        answer *= balls;
        answer /= share;

        return answer;
    }
