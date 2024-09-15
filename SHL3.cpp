#include <bits/stdc++.h>
using namespace std;

int countUncommon(list<int> &list1, list<int> &list2) {
    int uncommonCount = 0;

    for (int x : list1) {
        bool found = false;
        for (int y : list2) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            uncommonCount++;
        }
    }

    for (int x : list2) {
        bool found = false;
        for (int y : list1) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            uncommonCount++;
        }
    }

    return uncommonCount;
}

int main() {
    int list1_size, list2_size;
    
    cin >> list1_size;
    list<int> list1;
    for (int i = 0; i < list1_size; i++) {
        int temp;
        cin >> temp;
        list1.push_back(temp);
    }
    
    cin >> list2_size;
    list<int> list2;
    for (int i = 0; i < list2_size; i++) {
        int temp;
        cin >> temp;
        list2.push_back(temp);
    }
    
    int result = countUncommon(list1, list2);
    cout << result << endl;

    return 0;
}

