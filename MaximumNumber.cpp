#include<iostream>
using namespace std;
int main(){
int t,a,b,c;
cin>>t;
for(int i = 0; i<t; i++){
    cin>>a;
    cin>>b;
    cin>>c;
    if((a>b) && (a>c)){
      cout<<"Case "<< i+1 <<": " <<a<<endl;
    }else if((b>a) && (b>c)){
        cout<<"Case "<< i+1 <<": " <<b<<endl;
    }else{
      cout<<"Case "<< i+1 <<": " <<c<<endl;

     }


}
return 0;
}

