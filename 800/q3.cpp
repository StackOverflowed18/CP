
//Template cpp
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
typedef string str;
typedef pair<int, int> ii;
typedef pair<string, int> si;
typedef pair<int, ii> iii;
typedef vector<si> vsi;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef map<string, vs> msvs;
typedef map<string, int> msi;
typedef map<string, string> mss;
#define INF 1000000000
#define deb(x) cout << #x << ": " << x << endl;
#define printArray(arr) \
  for (auto x : arr) {  \
    cout << x << ", ";  \
  }
#define printMatrix(mat) \
  for (auto x : mat) {   \
    cout << " ";         \
    printArray(x);       \
    cout << endl;        \
  }

void solve(str s,ll n){
bool three_consecutive_empty_count= false;
int count_of_all_empty_cells=0;
for(int i=0;i<n;++i){
if(i-1>=0 && i+1<n && s[i-1]=='.' && s[i]=='.' && s[i+1]=='.' ){
three_consecutive_empty_count= true;
break;
}

if(s[i]=='.')
count_of_all_empty_cells++;
}

if(three_consecutive_empty_count)
cout<<2<<endl;
else
cout<<count_of_all_empty_cells<<endl;
}
int main() {
    long long t;
    cin>>t;
    while(t--){
        int n;
        str s;
        cin>>n>>s;
        solve(s,n);

    }
  
  return 0;
}

