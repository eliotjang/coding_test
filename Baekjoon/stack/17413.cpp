#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    stack<char> stack;
    string s;
    getline(cin, s);
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '<') {
            if (!stack.empty()) {
                while(stack.size()) {
                    std::cout << stack.top();
                    stack.pop();
                }
            }
            string str;
            std::cout << '<';
            while (true) {
                i++;
                if (s[i] == '>') {
                    std::cout << str << '>';
                    break;
                }
                str += s[i];
            }
        } else if (s[i] == ' ') {
            while(stack.size()) {
                std::cout << stack.top();
                stack.pop();
            }
            std::cout << ' ';
        } else {
            stack.push(s[i]);
        }
    }
    if (!stack.empty()) {
        while(stack.size()) {
            std::cout << stack.top();
            stack.pop();
        }
    }
    return 0;
}