#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int has_Temp = x; int has_Sum = 0;
    while (has_Temp > 0)
    {
        has_Sum += has_Temp % 10;
        has_Temp /= 10;
    }

    return x % has_Sum == 0 ? true : false;
}
