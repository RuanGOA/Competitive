//questao OPI 2019
#include <bits/stdc++.h>
#define INF 1000000007
#define MAXS 100007
#define IN freopen("input.txt", "r", stdin);
#define OU freopen("output.txt", "w", stdout);
#define mp(a, b) make_pair(a, b)
     
using namespace std;
     
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef queue<pii> qpi;

string s;

int main() {
    cin >> s;

    char cache = '0'; int cont = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != cache) {
            cache = s[i];
            cont = 1;
        } else cont++;

        if(cont >= 7) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}