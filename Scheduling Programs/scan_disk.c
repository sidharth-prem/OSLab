//SCAN ALGORITHM

#include<stdio.h>
#include<stdlib.h>
int main(){
	int rq[100],i,j,n,tothead=0,init,size,move;
	printf("Enter the number of Requests: \n");
	scanf("%d",&n);
	printf("Enter the Requests sequence: \n");
	for(i=0;i<n;i++){
		scanf("%d",&rq[i]);
	}
	printf("Enter the initial head position: \n");
	scanf("%d",&init);
	printf("Enter the total Disk size: \n");
	scanf("%d",&size);
	printf("Enter the head movement direction for high 1 and low 0: \n");
	scanf("%d",&move);
	
	//Logic for SCAN Disk Scheduling
	
		/*Logic for sort request array*/
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(rq[j]>rq[j+1]){
				int temp;
				temp=rq[j];
				rq[j]=rq[j+1];
				rq[j+1]=temp;
			}
		}
	}
	
	int index;
	for(i=0;i<n;i++){
		if(init<rq[i]){
			index=i;
			break;
		}
	}
	
	//if movement is towards high value
	
	if(move==1){
		for(i=index;i<n;i++){
			tothead=tothead+abs(rq[i]-init);
			init=rq[i];
		}
		//last movement for max size
		tothead=tothead+abs(size-rq[i-1]-1);
		init=size-1;
		for(i=index;i>=0;i--){
			tothead=tothead+abs(rq[i]-init);
			init=rq[i];
		}
	}
	
	//If movement is towards low value
	
	else{
		for(i=index;i>=0;i--){
			tothead=tothead+abs(rq[i]-init);
			init=rq[i];
		}
		
		//last movement for min size
		tothead=tothead+abs(rq[i+1]-0);
		init=0;
		for(i=index;i<n;i++){
			tothead=tothead+abs(rq[i]-init);
			init=rq[i];
		}
	}
	
	printf("Total head movement is: %d Cylinders.\n",tothead);
	return 0;

}	
