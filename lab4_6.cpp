#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <string>
#include "lab05.hpp"
using namespace std;

string replace(const string& str, const string& old, const string& new_string){
    string strcopy = str;
    cout<<strcopy<<endl;
    int n = str.find(old);
    while (std::string::npos != n){
        int oldindex = strcopy.find(old);
        strcopy.erase(oldindex,old.length());
        strcopy.insert(oldindex,new_string);
        n = strcopy.find(old);
    }
    return strcopy;
}



int main() {
    string original = "";
    string oldWord = "";
    string newWord = "";
    getline(cin, original);
    getline(cin, oldWord);
    getline(cin, newWord);
    cout<<replace(original,oldWord,newWord)<<endl;
    return 0;
}
