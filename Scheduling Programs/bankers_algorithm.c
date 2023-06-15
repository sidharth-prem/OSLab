#include<stdio.h>
void main()
{
	int r,n,i,j,t[10][10],inst[10],cnt,op[100],k,need[100][100],po,a=0,b=0,avail[100],p[10],allo[100][100],maxi[100][100];
	printf("\t ***** BANKER'S ALGORITHM ***** \n");
	printf("Enter the Number of Instances:");
	scanf("%d",&r);
	for (i=0;i<r;i++)
	{
		avail[i]=0;
		printf("%c= ",(i+97));
		scanf("%d",&inst[i]);
	}
	printf("\n Enter the no of Processes: ");
	scanf("%d", &n);
	printf("\n Enter the allocation matrix: \n     ");
	for (i=0;i<r;i++)
	printf(" %c",(i+97));
	printf("\n");
	for (i=0;i <n;i++) {
		p[i]=i;
		printf("P[%d]  ",i+1);
		for (j=0;j<r;j++) 
		{
			scanf("%d",&allo[i][j]);
			avail[j]+=allo[i][j];
		}
	}
	printf("\n Enter the max matrix: \n     ");
	for (i=0;i<r;i++) {
		printf(" %c",(i+97));
		avail[i]=inst[i]-avail[i];
		t[0][i]=avail[i];
	}

	printf("\n");
	for (i=0;i <n;i++) {
		printf("P[%d]  ",i+1);
		for (j=0;j<r;j++)
		 scanf("%d",&maxi[i][j]);
	}
	int g=0,f=0;
	po=n;
	A: a=-1;
	g++;
	for (i=0;i<po;i++) {
		cnt=0;
		b=p[i];
		for (j=0;j<r;j++) {
			need[b][j] = maxi[b][j]-allo[b][j];
			if(need[b][j]<=avail[j])
			 cnt++;
			 
		}
		if(cnt==r)
		{
			op[k++]=p[i];
			for (j=0;j<r;j++){
				avail[j]+=allo[b][j];
				}
			f++;
		} else
		 p[++a]=p[i];
	}
	if((a!=-1)&&(g<=n))
	{
		po=a+1;
		goto A;
	}
	else
	{
	if(f==n)
	{
	 
	printf(" SYSTEM IS SAFE!!\n");
	printf("\t <");
	for (i=0;i<k;i++)
	{
		printf(" P[%d] ",op[i]);
		b=op[i];
		for(j=0;j<r;j++)
		{
			t[i+1][j]=t[i][j]+allo[b][j];
		}
		
	}
	
	printf(">\n");
	printf("Process\t Allocation\t Max\t Need\t Available\t");
	for(i=0;i<n;i++)
	{
		printf("\nP%d\t ",i);
		for(j=0;j<r;j++)
		{
			printf("%d ",allo[i][j]);
		}
		printf("\t\t");
		for(j=0;j<r;j++)
		{
			printf("%d ",maxi[i][j]);
		}
		printf("\t  ");
		for(j=0;j<r;j++)
		{
			printf("%d ",need[i][j]);
		}
		printf("\t  ");
		for(j=0;j<r;j++)
		{
			printf("%d ",t[i][j]);
		}
	}
	printf("\n");	
	}
	else
	{
	  printf("SYSTEM IS NOT SAFE!!!\n");}}}
