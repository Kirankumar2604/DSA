#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "racecarr";
    int n = s.size();
    int begin = 0;
    int end = n-1;
    bool palindrome = true;

    while(begin < end){
        if(s[begin] != s[end]){
            palindrome = false;
            break;
        }
        begin++;
        end--;
    }
    if(palindrome){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}