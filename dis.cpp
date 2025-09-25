//this is code of codeforces;
//now i will do init git this file;

#include<bits/stdc++.h>
using namespace std;

void solve(){
     int n,k;
     cin>>n>>k;
     vector<long long>v(n);
     vector<int>d(k);

     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     sort(v.rbegin(),v.rend());

     for(int i=0;i<k;i++){
        cin>>d[i];
     }
     sort(d.begin(),d.end());
     int num=0;
     long long sum=0;

     for(int i=0;i<k;i++){
           num+=d[i];
           if(num<=n){
               v[num-1]=0;
           }else{
               break;
           }
     }
     for(int i=0;i<n;i++){
        sum+=v[i];
     }
     cout<<sum<<endl;
}



int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
