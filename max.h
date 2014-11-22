int max( int[] t, int n)
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
