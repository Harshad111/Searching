#include<stdio.h>
int LinearSearch(int a[], int key , int start , int stop){
	while(start!=stop)
	{
		if(a[start]==key)
			return start;
		start++;
	}
	return -1;
}
void main(){
	int n,key;
	printf("****************************************\n\n");
	printf("----------Linear Search Program---------\n\n");
	printf("Enter Size of List: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter list data one by one: ");
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("Enter Key to find : ");
	scanf("%d",&key);
	int res = LinearSearch(a, key, 0, n);
	if(res == -1)
		printf("Key Not Found ... \n");
	else
		printf("Key found at position: %d \n",(res+1));
	printf("****************************************\n");
}
