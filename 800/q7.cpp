#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>
#include <algorithm>
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
#define REP(i,a,b) for(int i=a;i<=b;++i)

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
bool check(string s , string x){//s->x
    if(s.size() > x.size()){
        return false;
    }else{

        REP(i,0,x.size()-s.size()+1){
if(x.substr(i,s.size()) == s)
return true;
        }
      
    }  return false;
}
int main() {
    fast_io();

    ll T;
    cin >> T;
    while (T--) {
        // Solve each test case
        ll n,m;
        cin>>n>>m;
        string s,x;
        cin>>x>>s;
string x1 =x +x ;
string x2 =x1 +x1 ;
string x3 =x2 +x2 ;
string x4 =x3 +x3 ;
string x5 =x4 +x4 ;

ll ans =-1;
if(check(s,x)){
    ans=0;
}else if(check(s,x1)){
    ans=1;

    }else if(check(s,x2)){
    ans=2;

    }else if(check(s,x3)){
    ans=3;

    }else if(check(s,x4)){
    ans=4;

    }else if(check(s,x5)){
    ans=5;
    }
        cout<<ans<<endl;
    }

    

    return 0;
}