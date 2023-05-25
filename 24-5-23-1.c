//24-5-23
/*
Arrays
Arrays are used to store multiple values in a single variable, 
instead of declaring separate variables for each value.

To create an array, 
	-->define the data type (like int) and 
	-->specify the name of the array 
	-->followed by square brackets [].
	
To insert values to it, use a comma-separated list, inside curly braces:
	-->int ages[] = {22, 45, 15, 10};
	
Arrays are divided in two categories.

	-->One-dimensional array
	-->Multi-dimensional array
*/

//create an array
#include<stdio.h>
main()
/*{
	int arr[5]; //  [   10    20     30    40     50   ]
	arr[0]=10;
	arr[1]=20;
	arr[2]=30;
	arr[3]=40;
	arr[4]=50;
	
	printf("\n%d",arr[0]);
	printf("\n%d",arr[3]);
}
*/
// sum of all elemnts
/*
{
	int arr[100];
	int i,sum=0,n;
	
	printf("Enter number of elements:");
	scanf("%d",&n);   //5
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);  //   10 20 30 40 50
		sum+=arr[i];
	}
	
	//for(i=0;i<n;i++)
	//	sum+=arr[i];
	
	printf("\nSum : %d",sum);
}
*/

// to delete an element from the array
// 10 30 40 50 50
//  0  1  2  3  4
/*
{
	int arr[100];
	int i,n,ind;
	
	printf("\nEnter Number of Elements:");
	scanf("%d",&n);
	
	printf("\nEnter %d Elements below:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("\nEnter index of element to be removed:");
	scanf("%d",&ind);
	if(ind>=0 && ind<=n)
	{
		for(i=ind;i<n;i++)
			arr[i]=arr[i+1];
		n--;
	}
	else
	{
		printf("\nIndex out of bounds!\n");
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
*/
// two dimensional arrays
/*
{
	int arr[3][3];  // declaration
	int r,c;
	
	for(r=0;r<3;r++){
		for(c=0;c<3;c++)
			scanf("%d",&arr[r][c]);   // storing values
	}
	for(r=0;r<3;r++){
		for(c=0;c<3;c++)
			printf("%d ",arr[r][c]);   // accessing elements
		
		printf("\n");
	}
}
*/
// find sum for each row and col
{
	int arr[3][3];  // declaration
	int r,c,rsum=0,csum=0;
	
	for(r=0;r<3;r++){
		for(c=0;c<3;c++)
			scanf("%d",&arr[r][c]);   // storing values
	}

	for(r=0;r<3;r++)
	{
		rsum=0;
		for(c=0;c<3;c++)
		{
			printf("%d ",arr[r][c]);
			rsum+=arr[r][c];
		}
		printf("%d",rsum);
		printf("\n");
			
	}
}

/*
assignment-1:
  merge two arrays and store it into third array
  a={1,2,3}, b={10,20,30}, c={1,2,3,10,20,30}
assignment-2:
  find frequency of the given element
  arr=[10 20 10 20 30 20 40]
  input:10
  output:2 times
  input:20
  output:3 times
*/

