#include <iostream>
#include "utils.h"
using namespace std;
int main()
{
	int tab* = random();
	display( tab, 10 );
	cout << min( tab, 10 ) << " " << max( tab, 10 ) << " " << sum( tab, 10 )<< endl;
	return 0;
}
