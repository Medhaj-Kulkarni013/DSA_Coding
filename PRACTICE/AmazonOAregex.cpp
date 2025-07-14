#include<bits/stdc++.h>
using namespace std;

string findLongestRegex(string x, string y, string z) {
    string full_set = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string full_token = "[" + full_set + "]";
    int n = x.length();
    int last_eligible = -1;
    for (int i = 0; i < n; i++) {
        if (z[i] != x[i] && z[i] != y[i]) {
            last_eligible = i;
        }
    }
    if (last_eligible == -1) {
        return "-1";
    }
    string reduced_set = full_set;
    char c_remove = z[last_eligible];
    size_t pos = reduced_set.find(c_remove);
    if (pos != string::npos) {
        reduced_set.erase(pos, 1);
    }
    string reduced_token = "[" + reduced_set + "]";
    string result = "";
    for (int i = 0; i < last_eligible; i++) {
        result += full_token;
    }
    result += reduced_token;
    for (int i = last_eligible + 1; i < n; i++) {
        result += full_token;
    }
    return result;
}

int main() {
    string x, y, z;
    cin >> x >> y >> z;
    cout << findLongestRegex(x, y, z) << endl;
    return 0;
}