class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        // Brute Force --> TLE
        // using difference array technique 
        int n = s.size();
        vector<int> arr(n);
        // step 1 : fill the array using difference array technique
        for(int i=0; i<shifts.size(); i++){
            int start = shifts[i][0];
            int end = shifts[i][1];
            int x = (shifts[i][2]==0) ? -1 : 1
           
            arr[start] += x;
            if(end+1<n) arr[end+1] -= x;
        }

        //finding prefix/cumilative sum
        for(int i=1; i<n; i++) arr[i] += arr[i-1];

        // handling +ve/-ve wrapping around
        for(int i=0; i<n; i++){
            if(arr[i]<0) arr[i] = (arr[i]%26)+26;
            else arr[i] = arr[i]%26;
            s[i] = 'a' + (s[i]-'a' + arr[i])%26;
        }

        return s;
    }
};