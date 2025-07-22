// P37_SplitString
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString(string Message = "Enter a string: ") {
    string S = "";
    cout << Message;
    getline(cin, S);
    return S;
}

vector<string> SplitString(string S, string delimter = " ") {
    short pos = 0;
    string word = "";
    vector<string> vSplit;
    while ((pos = S.find(delimter)) != string::npos) {
        word = S.substr(0, pos);
        if (word != "") {
            vSplit.push_back(word);
        }
        S.erase(0, pos + delimter.length());
    }

    if (S != "") {
        vSplit.push_back(S);
    }
    return vSplit;
}

int main() {
    string S = ReadString();

    vector<string> vSplit = SplitString(S);
    short token = vSplit.size();
    cout << "Tokens = " << token << endl;
    for (string& i : vSplit) {
        cout << i << endl;
    }

    return 0;
}