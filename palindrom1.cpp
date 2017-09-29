#include "stdafx.h"
#include <string>
#include <iostream> 
#include <stdio.h>
using namespace std;

int main()

{
	string st, kt;
	int i, p;
	cin >> st;
	p = st.length();
	for (i = p - 1; i >= 0; --i) {
		kt = kt + st[i];
	}
	if (st == kt) {
		cout << '1';
	}
	else {
		cout << '0';
	}
	system("pause");

	return 0;
}
