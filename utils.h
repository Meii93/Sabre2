#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void display (int* t, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<t[i]<<" ";
	}
	cout<<endl;
}
int sum (int* t, int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum = sum + t[i];
	}
	return sum;
}
int min( int* arr, int len)
{
	int min = arr[0];
	for( int i= 1;  i< len; i++ )
	{
		if( min > arr[i] )
			min = arr[i];
	}
	return min;
}
int max( int* t, int n)
{
	int max=t[0];
	for(int i=1;i<n;i++)
	{
		if(t[i]>t[0])
		{
			max=t[i];
		}
	}
	return max;
}
int* random()
{
	int* tab=new int[10];
	srand( time( NULL ) );
    for( int i = 0; i < 10; i++ )
         tab[i]=rand()%100 + 1;
	return tab;
}
