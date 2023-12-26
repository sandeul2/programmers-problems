#include <string>
#include <vector>

using namespace std;

int to_binary(int n)
{
    string r; int count = 0;
    while (n != 0) {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    for(int i=0; i<r.size(); i++){
        if(r[i] == '1')
            count++;
    }
    return count;
}

int solution(int n) {
    int count1 = to_binary(n); int count2 = 0;
    
    while(count1 != count2){
        n++;
        count2 = to_binary(n);
    }
    return n;
}