#include <bits/stdc++.h>
using namespace std;

int checkPalindrome(string palinds, int first, int last) {
	int res = 0;
	if (first < last + 1) {
		first++;
		last--;
		return checkPalindrome(palinds, first, last);
	}
	
	if (first == last) {
		return res;
	}
	if (palinds[first] != palinds[last]) {
		res++;
	}
	
	return res;
}

int main () {
	string palindrome;
	int k, panjangString, diff, result;
	cin>>palindrome;
	cin>>k;
	panjangString = palindrome.length();
	
	if (panjangString == 0) {
		cout<<-1<<endl;
	} else {
		result = checkPalindrome(palindrome, 0, panjangString);
		if (result == k) {
			cout<<"Bisa replacement"<<endl;
		}
	}
}
