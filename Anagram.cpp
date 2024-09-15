//Anagram of the string 
//to do this we have to check that both the strings must have the same char 
//and their count also should be same.

#include <bits/stdc++.h>
using namespace std;

bool Anagram(string &s1, string &s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    
    if (n1 != n2) {
        return false;
    }

    unordered_map<char, int> m1, m2;

    for (char c : s1) {
        m1[c]++;
    }

    for (char c : s2) {
        m2[c]++;
    }

    for (auto p : m1) {
        if (m2[p.first] != p.second) {
            return false;
        }
    }

    return true;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    if (Anagram(s1, s2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

