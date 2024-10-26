#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> split(const string& str, char sep) {
    vector<string> out;
    string cur;
    for (char ch : str) {
        if (ch == sep) {
            if (cur.size() != 0) {
                out.push_back(cur);
                cur = "";
            }
        }
        else cur += ch;
    }
    if (cur.size() != 0) {
        out.push_back(cur);
    }
    return out;
}

int main() {
    vector<string> arr = split("Can you can a can as a canner can can a can?", ' ');
    for (string word : arr) cout << word <<  endl;
    return 0;
}