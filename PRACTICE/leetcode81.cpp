#include<iostream>
using namespace std;
bool isPresent(){
    int nums[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
    int target = 2;
        int n = 19;
        int lo = 0;
        int hi = n-1;
        if(n==1){
            if(nums[0]==target) return true;
            else return false;
        }
        if(n==2){
            if(nums[0]==target || nums[1]==target) return true;
            else return false;
        }
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]<=nums[hi] && nums[mid]<target){
                // if(target>=nums[hi] || nums[hi]>=target) 
                lo = mid + 1;
                // else hi = mid - 1;
            }
            else if(nums[mid]>=nums[hi] && nums[mid]<=target) hi = mid-1;
            else if(nums[mid]>=target && nums[mid]<=nums[hi]) hi = mid-1;
            else lo = mid + 1;

        }
        return false;
    }
    int main(){
        bool b = isPresent();
        cout<<b;
    }