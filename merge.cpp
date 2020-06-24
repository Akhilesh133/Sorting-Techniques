#include<bits/stdc++.h>
using namespace std;
void mergesort(int a[],int b,int m,int c)
{
	int i,j,k,nl,nr;
	//size of left and right subarrays
    nl=m-b+1;
    nr=c-m;
    //create arrays with that size
    int lr[nl],rr[nr];
    //add elements to this subarrays
    for(i=0;i<nl;i++)
       lr[i]=a[b+i];
    for(j=0;j<nr;j++)
       rr[j]=a[m+1+j];   
	i=0,j=0,k=b;
	while(i<nl && j< nr)
	{
		if(lr[i]<rr[j])
		{
			a[k]=lr[i];
			i++;
		}
		else 
		{
			a[k]=rr[j];
			j++;
		}
		k++;
	}
	while(i<nl)
	{
		a[k]=lr[i];
		i++,k++;
	}
	while(j<nr)
	{
		a[k]=rr[j];
		j++,k++;
	}
}	
void merge(int a[],int b,int c)
{
	if(b<c)
	{
		int m=b+(c-b)/2;
		merge(a,b,m);
		merge(a,m+1,c);
		mergesort(a,b,m,c);
	}
}
void display(int a[], int n)
{
	for(int i=0;i<n;i++)
	   cout<<a[i]<<"\t";
}

int main()
{
	int a[]= {22,11,4,2,7,12,0,3};
	int n= sizeof(a)/sizeof(a[0]);
	cout<<n<<"\n";
	cout<<"Array before sort :"<<"\n";
	display(a,n);
	merge(a,0,n-1);
	cout<<"Array after sort:"<<"\n";
	display(a,n);
	return 0;
}


