#include <iostream>
#include <unistd.h>
#include <stdio.h>

using namespace std;


int main() {
	while(1) {
		fork();
		cout << "Don't try this at home. ;)" << endl;
	}
}
