#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>

void check(vector<long long>&arr,long long k){
if(is_sorted(arr.begin(),arr.end()) ){
cout<< "YES"<<endl;
}else{
if(k==1) 
cout<< "NO"<<endl;
else
cout<<"YES"<<endl;
}
}

int main(){
    int t;
    cin>>t;
    while(t--){
long long n,k,ele;
   
cin>>n>>k;
vector<long long>arr(n);
for(int i=0;i<n;++i){
    cin>>arr[i];
}
check(arr,k);

    }

    return 0;
}