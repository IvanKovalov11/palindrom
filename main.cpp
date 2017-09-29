#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string st, st1;
	getline(cin, st);
	int dl = st.size(), b = 0;

	for (int i = 0; i < dl; i++) {
		if (((st[i] >= 65) && (st[i] <= 90)) || ((st[i] >= 97) && (st[i] <= 122)) || ((st[i] >= 48) && (st[i] <= 57)))
			st1 += st[i];
	}

	dl = st1.size();

	if (dl == 0) {
		cout << 0;
		cin.get();
		return 0;
	}

	for (int i = 0; i < (dl / 2); i++) {
		if (st1[i] == st1[dl - 1 - i]) b += 1;
		else if (st1[i] == st1[dl - 1 - i] - 32) b += 1;
		else if (st1[i] == st1[dl - 1 - i] + 32) b += 1;
	}

	if (b == (dl / 2)) cout << "1" << endl;
	else cout << "0" << endl;

	cin.get();
	return 0;
}
