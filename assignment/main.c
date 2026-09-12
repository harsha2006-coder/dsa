#include<stdio.h>

int main(){
int n,i,key,comparisons=0;
int found=0;
printf("Enter the no of employee id\n");
scanf("%d",&n);
int id[n];
printf("Enter the id in ascending order\n");
for(i=0;i<n;i++){
scanf("%d",&id[i]);
}
printf("Enter the employee id\n");
scanf("%d",&key);
int high=n-1,low=0;
while(low<=high){
int mid=(high+low)/2;
comparisons++;
if(id[mid]==key){
found=1;
printf("Employee id is found at position %d\n",mid+1);
break;
}
else if(id[mid]>key){
high=mid-1;
}
else{
low=mid+1;
}
}
if(!found)
printf("employee id not found\n");
printf("No of comparisons=%d\n",comparisons);
return 0;
}
