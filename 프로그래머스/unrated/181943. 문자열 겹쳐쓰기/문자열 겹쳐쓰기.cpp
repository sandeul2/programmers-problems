#include <string>
using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    // s부터 overwrite_string의 길이만큼을 overwrite_string으로 대체
    my_string.replace(s, overwrite_string.length(), overwrite_string);
    return my_string;
}