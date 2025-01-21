#include<iostream>
using namespace std;
int MazePath(int startRow, int startCol, int row, int col){
    if(startRow==row && startCol==col) return 1;
    else if(startCol>col || startRow>row) return 0;
    int right = MazePath(startRow,startCol+1,row,col);
    int down = MazePath(startRow+1,startCol,row,col);
    return right+down;
}
void MazePathPrint(int startRow, int startCol, int row, int col, string s){
    if(startRow==row && startCol==col){
        cout<<s<<" "<<endl;
        return;
    }
    else if(startCol>col || startRow>row) return;
    MazePathPrint(startRow, startCol+1, row, col, s+'R');
    MazePathPrint(startRow+1, startCol, row, col, s+'D');
}
int main(){
    int row, col;
    cout<<"Enter the matrix rows : ";
    cin>>row;
    cout<<"Enter the matrix cols : ";
    cin>>col;
    cout<<"The Total ways are : "<<MazePath(1,1,row,col)<<endl;
    MazePathPrint(1,1,row,col,"");
}