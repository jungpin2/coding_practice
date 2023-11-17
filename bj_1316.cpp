#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
	int y = 0;
	int ans;
	cin >> num;

	for (int i = 0; i < num; i++) {
		string s = {};
		string c = {};
		int a = 0;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] != s[j + 1]){
				c.push_back(s[j]);
			}
		}
		for (int k = 0; k < c.length(); k++) {
			for (int u = 1; k + u < c.length(); u++) {
				if (c[k] == c[k + u]) {
					a++;
				}
			}
		}
		if (a != 0){
			y++;
		}
	}
	
	ans = num - y;
	cout << ans;
}