using namespace std;
void display (int[] t, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<t[i]<<" ";
	}
	cout<<endl;
}
int sum (int[] t, int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum = sum + t[i];
	}
	return sum;
}
