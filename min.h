#ifndef MIN_H
#define MIN_H
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
#endif
