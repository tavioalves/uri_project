#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b;
	
	cin >> a;
	cin >> b;
	
	if (a%b == 0 || b%a == 0)
		cout << "Sao Multiplos" << "\n";
	else
		cout << "Nao sao Multiplos" << "\n";
    
    return 0;
}