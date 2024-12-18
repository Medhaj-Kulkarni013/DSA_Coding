#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows : ";
    cin>>n;
    int m;
    cout<<"Enter the cols : ";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
           if(i==1 || i==n || j==1 || j==2) cout<<"* ";
           else cout<<"  ";
        }
        cout<<endl;
    }
}
