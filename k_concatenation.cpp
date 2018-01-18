#include<bits/stdc++.h>
using namespace std;


int max_subarray(int a[],int n);

int main()
{
	int T;
	unsigned int N,K;
	cin>>T;
	
	while(T--)
	{
		cin>>N>>K;
		int A[N];
		int B[(N*K)];
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
		}

		for(int i=0;i<(N*K);i++)
		{
			if(i<N)
			{
				B[i]=A[i];
			}
			else
			{
				B[i]=B[i-N];
			}
		}
		for(int i=0;i<(N*K);i++)
		{
			cout<<B[i]<<" ";
		}
		cout<<endl;
		int m=max_subarray(B,(N*K));
		cout<<m<<endl;
	}
	return 0;
}


int max_subarray(int a[],int n)
{
	int sum=0,max_sum=0;

	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];

		if(sum>max_sum)
		{
			max_sum=sum;
		}

		if(sum<0)
		{
			sum=0;
		}
	}
	return max_sum;
}
