#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int a, b;
    char c;
    cin >> a >> b>> c;
    if(c=='+'){
        cout<< a + b << endl;
    }
    else if(c=='-'){
        cout << a-b << endl;
    }
    else if(c=='*'){
        cout << a*b <<endl;
    }
    return 0;
}