#include <cstdlib>
#include <cstdio>
#include <ctime>
int[] random()
{
	int [] tab=new tab[10];
	srand( time( NULL ) );
    for( int i = 0; i < 10; i++ )
         tab[i]=rand();
	return tab;
}
