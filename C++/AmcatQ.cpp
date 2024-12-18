// Header Files
#include<iostream>
#include<string>
#include<vector>
using namespace std;


/*
 * 
 */
void reverse(vector<int>& members, int i, int j){
	while(i<=j){
		swap(members[i],members[j]);
		i++;
		j--;
	}
}
int bandMemberAtK (int totalMembers, vector<vector<int> > SwapMembers, int posMember)
{
    int  answer;
    vector<int> members(totalMembers+1);
	for(int i=1; i<=totalMembers; i++) members[i] = i; 
	for(int i=0; i<SwapMembers.size(); i++){
		reverse(members,SwapMembers[i][0],SwapMembers[i][1]);
	}
	answer = members[posMember];
    return answer;
}

int main()
{
    //input for totalMembers
	int totalMembers;
	cin >> totalMembers;
	
	//input for SwapMembers
	int SwapMembers_row;
	int SwapMembers_col;
	cin >> SwapMembers_row;
	cin >> SwapMembers_col;
	
	vector<vector<int> > SwapMembers;
	for ( int idx = 0; idx < SwapMembers_row; idx++ )
	{
		vector<int> temp_vector;
		for ( int jdx = 0; jdx < SwapMembers_col; jdx++ )
		{
			int temp;
			cin >> temp;
			temp_vector.push_back(temp);
		}
		SwapMembers.push_back(temp_vector);
	}
	
	//input for posMember
	int posMember;
	cin >> posMember;
	
	
    int result = bandMemberAtK(totalMembers, SwapMembers, posMember);
	cout << result;
	
	
    return 0;
}
