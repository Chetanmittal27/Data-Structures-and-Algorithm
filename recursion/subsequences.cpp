#include <bits/stdc++.h> 

void solve(string str , vector<string> &ans , string output , int index){

	// base case
	if (index >= str.length()){
		if (output.length() > 0){
			ans.push_back(output);
		}
		return ;
	}

	// exclude
	solve(str , ans , output , index + 1);

	// include
	char str2 = str[index];
	output.push_back(str2);
	solve(str , ans ,output , index + 1);
	
}
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string>ans;
	string output = "";
	int index = 0;
	solve(str , ans , output , index);

	return ans;
	
}
