#include<stdio.h>
void main()
{

int i,j,n,temp;
int a[100];



printf("enter the number of elements: ");
scanf("%d",&n);

printf("enter the elements from the user");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

printf("the entered  elements are as follows: ");
for(i=0;i<n;i++)
{
        printf("%d",a[i]);
}




for(i=0;i<n;i++)
{
	for(j=0;j<n-1;j++)
{
	if (a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	
}
}
}

printf("the bubble sorted elements are: ");

for(i=0;i<n;i++)
{
	printf("%d\t ",a[i]);

}
}

