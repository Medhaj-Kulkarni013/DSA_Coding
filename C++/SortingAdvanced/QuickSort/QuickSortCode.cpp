#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& v, int startidx, int endidx){
    int pivotele = v[startidx];
    int count = 0;
    for(int i=startidx+1; i<=endidx; i++){
        if(v[i] <= pivotele) count++;
    }
    int pivotidx = count+startidx;
    swap(v[startidx],v[pivotidx]);
    int i = startidx;
    int j = endidx;
    while(i<pivotidx && j>pivotidx){
        if(v[i] <= pivotele) i++;
        if(v[j] >= pivotele) j--;
        else if(v[i] > pivotele && v[j] < pivotele){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicksort(vector<int>& v, int startidx, int endidx){
    if(startidx>=endidx) return;
    // 5 1 8 2 7 6 3 4
    int pivotidx = partition(v,startidx,endidx);
    // 4 1 3 2 5 6 8 7
    quicksort(v,startidx,pivotidx-1);
    quicksort(v,pivotidx+1,endidx);
}
int main(){
    vector<int> v = {5,1,8,2,7,6,3,4};
    int n = v.size();
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl;
    quicksort(v,0,n-1);
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
}