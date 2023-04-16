#include <bits/stdc++.h>
#include <string.h>


using namespace std;

int main() {
 	int n;
  	string s;

  	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;
		int largo = s.length();
		if (largo > 10) { 
			cout << s[0] << largo-2 << s[s.length()-1] << endl;
		} else {
			cout << s << endl;
	  	}
	}
	return 0;
}
