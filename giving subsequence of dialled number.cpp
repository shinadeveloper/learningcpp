#include <bits/stdc++.h>
using namespace std;

void givesequence(int number, vector<string>& sequences, string current, int idx) {
    if(idx == to_string(number).size()) {
        cout << current << endl;
        return;
    }

    string sequence = sequences[to_string(number)[idx] - '0'];
    for(char c : sequence) {
        givesequence(number, sequences, current + c, idx + 1);
    }
}

int main(){
    vector<string> sequences = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz", ""};

    int number = 23;

    givesequence(number, sequences, "", 0);
}