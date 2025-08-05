#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include <climits>

int main(){
long long t;
cin>>t;
while(t--){
   long long n,x;
   cin>>n>>x;
   vector<long long>track;
   track.push_back(0)
;   for(int i=0;i<n;++i){
    long long ele;
cin>>ele;
track.push_back(ele);
   }
   track.push_back(x);
n+=2;
   long long maxdist=INT_MIN;
   for(int i=1;i<n;++i){
    if(i==n-1){
 maxdist = max(maxdist,2*(track[i] - track[i-1]) );
    }else{

    maxdist = max(maxdist,track[i] - track[i-1] );
 
   }
   cout<<maxdist<<endl;
}
}

    return 0;
}