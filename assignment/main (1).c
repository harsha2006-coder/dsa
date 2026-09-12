#include<stdio.h>

int main()
{
int n,i,j,key,shift=0;
printf("Enter number of marks: ");
scanf("%d",&n);
int a[n];
printf("Enter the marks:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
key=a[i];
j=i-1;

while(j>=0&&a[j]>key)
{
a[j+1]=a[j];
shift++;
j--;
}

a[j+1]=key;
printf("After pass %d: ",i);
for(int k=0;k<n;k++)
printf("%d ",a[k]);
printf("\n");
}

printf("Sorted list: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\nTotal shifts=%d",shift);

return 0;
}