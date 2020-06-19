#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a1[],int a)
{
   int i,j;
   int t;
   for(i=0;i<a-1;i++)
   {
	   for(j=0;j<a-i-1;j++)
	   {
		   if(a1[j]>a1[j+1])
		   {
			  t=a1[j];
			  a1[j]=a1[j+1];
			  a1[j+1]=t; 
		   }
}
}
}

int main()
{
        cout<<"Hi";
	int n=7;
    int arr[7]={13,5,2,7,12,1,10};
    cout<<"Array before sort";
    for(int i=0;i<n;i++)
    {
		cout<<arr[i]<<"\t";
	}
    bubblesort(arr,n);
    cout<<"Array after sort";
    for(int i=0;i<n;i++)
    {
		cout<<arr[i]<<"\t";
	}
	return 0;
}

