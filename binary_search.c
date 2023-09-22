#include<stdio.h>

int binary_search(int arr[],int size,int element);
int main()
{
	int size,element,res;
    int arr[]={10,20,30,40,50,60,70,80,90,100};//the array must be sorted for binary search to work 
    size=sizeof(arr)/sizeof(arr[0]);
    printf("enter the element you want to search in the array");
    scanf("%d",&element);
    
    res=binary_search(arr,size,element);
    
    if(res==-1)
    {
    	printf("element not found");
    }
        
    printf("the element %d was found at %dth position of the array",element,res+1);
    return 0;
}
int binary_search(int arr[],int size,int element)
{
	int l=0;
    int r=size-1;
    int m;
    
    while(l<=r)
    {
    	m=(l+r)/2;
        
        if(arr[m]==element)
        {
        	return m;
        }   
        else if(arr[m]<element)
        {
        	l=m+1;
        }
        else
        {
        	r=m-1;
        }
     }
     return -1;   
}