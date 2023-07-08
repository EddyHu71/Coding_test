#include <bits/stdc++.h>
using namespace std;

main () {
	string bracket;
	stack<char> temp;
	cin>>bracket;
	for (int i = 0 ;i <bracket.length();i++) {
		if (temp.empty()) {
			temp.push(bracket[i]);
		} else 
		if ((temp.top() == '(' && bracket[i] == ')' ) || 
		(temp.top() == '{' && bracket[i] == '}') ||
		(temp.top() == '[' && bracket[i] == ']')) {
			temp.pop();
		} else {
			temp.push(bracket[i]);
		}
	}
	
	if (temp.empty()) {
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
