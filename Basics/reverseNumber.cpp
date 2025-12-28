#include<bits/stdc++.h>
using namespace std;

int main(){
    int OGN = 123;
    int number = OGN; 
    int Number = OGN;
    int value, reverse = 0, Reverse = 0;
    for(int i = 0; i < 3; i++){
        value = number % 10;
        reverse = reverse * 10 + value;
        number = number / 10;
    }
    while(Number > 0){
        value = Number % 10;
        Reverse = Reverse * 10 + value;
        Number = Number / 10;
    }

    cout<<reverse<<endl;
    cout<<Reverse<<endl;

}
