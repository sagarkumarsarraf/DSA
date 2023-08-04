#include<iostream>
using namespace std;

int main()
{
	int n,i,j=0,unsorted[20],sorted[20],k,val,temp,count=0;
	cout<<"Enter the no. of element:";
	cin>>n;
	cout<<"Enter the element:\n";
	for(i=0;i<n;i++)
	{
		cin>>unsorted[i];
		
	}
	for(i=0;i<n;i++)
	{
		j=count;
		while(j!=n)
		{
		
			if(unsorted[i]>unsorted[j])
			{
				temp=unsorted[i];
				unsorted[i]=unsorted[j];
				unsorted[j]=temp;
			
		    }
		    
	      j++;  
	    }
	    count++;
        
	}
	
	cout<<"sorted element:";
	for(i=0;i<n;i++)
	{
		cout<<unsorted[i]<<endl;
	}
	
	
	return 0;
}
