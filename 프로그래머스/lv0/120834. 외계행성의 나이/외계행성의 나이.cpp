#include <string>
#include <vector>
#include <regex>

using namespace std;

string solution(int age) {
    string answer = "";
    answer = to_string(age);
    answer = regex_replace(answer, regex("0"), "a");
    answer = regex_replace(answer, regex("1"), "b");
    answer = regex_replace(answer, regex("2"), "c");
    answer = regex_replace(answer, regex("3"), "d");
    answer = regex_replace(answer, regex("4"), "e");
    answer = regex_replace(answer, regex("5"), "f");
    answer = regex_replace(answer, regex("6"), "g");
    answer = regex_replace(answer, regex("7"), "h");
    answer = regex_replace(answer, regex("8"), "i");
    answer = regex_replace(answer, regex("9"), "j");
    return answer;
}