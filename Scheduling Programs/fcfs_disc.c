//FCFS Disk Scheduling

#include<stdio.h>
#include<stdlib.h>
int main(){

	int RQ[100],i,n,Tothead=0,initial;
	printf("Enter the number of requests: \n");
	scanf("%d",&n);
	printf("Enter the Requests sequence: \n");	
	for(i=0; i<n;i++){
		scanf("%d",&RQ[i]);
	}
	printf("Enter initial head position:: \n");
	scanf("%d",&initial);
	
	//Logic for FCFS Disk Scheduling:
	
	for(i=0;i<n;i++){
		Tothead=Tothead+abs(RQ[i]-initial);
		initial=RQ[i];
	}
	
	printf("Total Head moments is: %d cylinders.\n",Tothead);
	return 0;
	
}
