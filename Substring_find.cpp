#include <bits/stdc++.h>
using namespace std;

string new_string(string s, int x, int n, vector<char> a) {
    string ne = s.substr(0, x);
    for (char c : a) {
        ne += c;
    }
    int p = ne.size();
    int t = s.size() - p;

    if (p < s.size()) {
        ne += s.substr(p);
    }

    return ne;
}

int main() {
    string s;
    vector<char> a;
    cout << "Enter the string: " << endl;
    cin >> s;

    cout << "Enter the part of the string: " << endl;
    string input; 
    cin >> input;

    for (char c : input) {
        a.push_back(c);
    }

    int n = a.size();
    string a_string(a.begin(), a.end());
    int x = s.find(a_string);

    if (x != string::npos) {
        for (int i = 0; i < n; i++) {
            a[i] = char(int(a[i]) - 1);
        }
        cout << new_string(s, x, n, a) << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}

