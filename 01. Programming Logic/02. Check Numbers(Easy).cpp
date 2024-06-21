#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;
    if(a>b){
        cout <<"First";
    }
    else if(a == b){
        cout <<"Equal";
    }
    else{
        cout <<"Second";
    }
    return 0;
}