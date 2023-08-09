#include<iostream>

 using namespace std;
int main(){
int t;
 int a[20];
 int n;
 cin>> t;
 while(t--){

    cin>>n;

    for(int i=1;i<=2*n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=2*n;i+=2){
       if (((a[i]+a[i+1])%2)==1){
            cout<<"Yes"<<endl;
       }
            else{
                 cout<< "No"<<endl;
            }




        }
    }
}


