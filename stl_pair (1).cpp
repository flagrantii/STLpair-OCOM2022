#include <bits/stdc++.h>
using namespace std;
int n=0;
void show(vector<pair<string,vector<int>>> A) {
    for (int i=0;i<A.size();i++) {
        cout << A[i].first << " " << A[i].second[0] << " " << A[i].second[1] << " ";
    }
}

bool cmp(pair<string,vector<int>> x, pair<string,vector<int>> y) {
    if (x.second[0] != y.second[0]) {
        return x.second[0] < y.second[0];
    } else {
        return x.second[1] < y.second[1];
    }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,q,x,y;
    string str;
    char cmd;
    cin >> t;
    while(t--) {
        pair<string,vector<int>> p;
        vector<pair<string,vector<int>>> A;
        cin >> q;
        while(q--) {
            cin >> cmd;
            vector<int> a;
            if (cmd=='a') {
                cin >> str >> x >> y;
                a.push_back(x);
                a.push_back(y);
                p.first = str;
                p.second = a;
                A.push_back(p);
            }
            if (cmd=='b') {
                cout << A.size() << " ";
            }
            if (cmd=='c') {
                show(A);
            }
            if (cmd=='d') {
                sort(A.begin(), A.end(), cmp);
            }
        }
        cout << "\n";
    }
}
/*
2
5
a ga 4 5 a ra 1 2 a sh 1 1 d c
4
a geeks 10 12 a code 11 11 b c
*/