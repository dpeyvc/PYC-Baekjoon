#include <bits/stdc++.h>
using namespace std;

string add(string a, string b){
    string result;
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while(i >= 0 || j >= 0 || carry > 0){
        int sum = carry;
        if(i >= 0) sum += a[i--] - '0';
        if(j >= 0) sum += b[j--] - '0';
        carry = sum / 10;
        sum = sum % 10;
        result += to_string(sum);
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;
    cin>>a>>b;
    cout<<add(a,b);
}