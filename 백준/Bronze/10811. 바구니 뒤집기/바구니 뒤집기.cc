#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=1; i<=n; i++) {
        arr[i-1]=i;
    }
    while(m--) {
        int a,b;
        cin>>a>>b;
        reverse(arr+(a-1),arr+b);
    }
    for(int i:arr) {
        cout<<i<<" ";
    }
}