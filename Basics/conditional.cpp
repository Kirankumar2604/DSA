#include <iostream>
using namespace std;
int main(){
    string choice, name;
    cout<<" Enter Your Name : ";
    cin>>name;
    cout<<endl;
    cout<<"books or movies type bellow: "<<endl;
    cin>>choice;
    if(choice == "books"){
        cout<<"your like books more that movies "<<name<<endl;
    }else if(choice == "movies"){
        cout<<"your like movies more that books "<<name<<endl;
    }else{
        cout<<"type wrong or choose anyone "<<name<<endl;
    }

}