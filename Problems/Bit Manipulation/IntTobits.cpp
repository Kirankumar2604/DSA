#include<bits/stdc++.h>
using namespace std;
string CvtBits(int n,string bitss){
    while(n != 0){
        if(n%2 == 0) bitss += "0";
        else{
            bitss += "1";
        }
        n = n/2;
    }
    reverse(bitss.begin(), bitss.end());
    return bitss;
}

int main(){
    string bitss = "";
    int n = 5;
    cout<<CvtBits(n, bitss)<<endl;
}