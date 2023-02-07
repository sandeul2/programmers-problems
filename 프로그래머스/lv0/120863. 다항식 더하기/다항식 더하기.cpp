#include <string>
#include <sstream>
using namespace std;

string solution(string poly)
{
    stringstream ss(poly);
    string s;
    int a=0, b=0;
    while(ss >> s)
    {
        switch(s.back())
        {
            case 'x':
                if(s.size() == 1)
                    ++a;
                else
                    s.pop_back(), a += stoi(s);
                break;
            case '+':
                break;
            default:
                b += stoi(s);
        }
    }

    if(a == 0)
        return to_string(b);

    string ans = "";
    if(a == 1)
        ans = "x";
    else
        ans = to_string(a) + "x";

    if(b == 0)
        return ans;
    return ans + " + " + to_string(b);
}
