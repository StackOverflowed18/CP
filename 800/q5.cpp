
#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<string, int> si;
typedef pair<int, ii> iii;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ii> vii;
typedef vector<si> vsi;

typedef map<string, int> msi;
typedef map<string, string> mss;
typedef map<string, vs> msvs;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define F first
#define S second
#define endl '\n'

#ifdef LOCAL
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int x) {cerr << x;}
void _print(long x) {cerr << x;}
void _print(ll x) {cerr << x;}
void _print(unsigned x) {cerr << x;}
void _print(float x) {cerr << x;}
void _print(double x) {cerr << x;}
void _print(char x) {cerr << '\'' << x << '\'';}
void _print(const string &x) {cerr << '"' << x << '"';}
template <class T, class V> void _print(const pair<T, V> &x) {
    cerr << '{'; _print(x.first); cerr << ", "; _print(x.second); cerr << '}';
}
template <class T> void _print(const vector<T> &v) {
    cerr << '[';
    for (size_t i = 0; i < v.size(); ++i) {_print(v[i]); if (i != v.size() - 1) cerr << ", ";}
    cerr << ']';
}

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    fast_io();

    ll T;
    cin >> T;
    while (T--) {
        // Solve each test case
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;++i){
cin>>a[i];
        }
        if(a[0]==1)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
    }

    return 0;
}