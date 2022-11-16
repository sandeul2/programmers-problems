#include <string>
#include <vector>

using namespace std;

int binary_to_decimal(string str){
    int dec = 0, bi = 1;
    for(int i = str.size() - 1; i >= 0; i--)
    {
        dec += (str[i] - 48) * bi;
        bi *= 2;
    }

    return dec;
}

string decimal_to_binary(int i){
    string str = "";
    if(i == 0) return "0";
    while(i > 0){
        if(i % 2 == 1)
            str = '1' + str;
        else
            str = '0' + str;
        i /= 2;
    }
    return str;
}
string solution(string bin1, string bin2) {
    string answer = "";
    int dec1 = binary_to_decimal(bin1);
    int dec2 = binary_to_decimal(bin2);
    answer = decimal_to_binary(dec1 + dec2);
    return answer;
}