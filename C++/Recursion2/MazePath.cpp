#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0; // index out of bound
    if(sr==er && sc==ec) return 1; // goal state reached
    int RightWays = maze(sr,sc+1,er,ec);
    int DownWays = maze(sr+1,sc,er,ec);
    int TotalWays = RightWays + DownWays;
    return TotalWays;
}
void mazePath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return; // index out of bound
    if(sr==er && sc==ec){ // goal state reached
        cout<<s<<endl;
        return;
    }
    mazePath(sr,sc+1,er,ec,s+'R'); //right moved
    mazePath(sr+1,sc,er,ec,s+'D'); //left moved;
    return;
}
int maze2(int row ,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int RightWays = maze2(row,col-1);
    int DownWays = maze2(row-1,col);
    int TotalWays = RightWays + DownWays;
    return TotalWays;
}
int main(){
    // cout<<maze(1,1,3,3);
    // mazePath(1,1,3,3,"");
    cout<<maze2(3,3);
}