#include <iostream>
#include <string>
#include <vector>



using namespace std;

string solution(int num) {
    string answer = "";
    if (num == 0 || num % 2 == 0)
        return "Even";
    else
        return "Odd";
}

int main(void) {

    int test1 = 3;
    int test2 = 4;


    std::cout << solution(test1) << std::endl;
    std::cout << solution(test2) << std::endl;
    return 0;
}
