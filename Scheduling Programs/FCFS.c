#include <stdio.h>
struct Pro
{ int P,A,B,C,T,W;
}P[50];
void main()
{ printf("Enter the number of Processes : ");
  int i,j,n;
  float wt,tat;
  scanf("%d",&n);
  printf("Enter the Processes : \n");
  for(i=0;i<n;i++)
  {scanf("%d",&P[i].P);
  }
  printf("Enter the arrival time of Processes : \n");
  for(i=0;i<n;i++)
  {scanf("%d",&P[i].A);
  }
  printf("Enter the Burst time of Processes : \n");
  for(i=0;i<n;i++)
  {scanf("%d",&P[i].B);
  }
  for(i=0;i<n;i++)
  { for(j=0;j<n-i-1;j++)
    {if(P[j].A>P[j+1].A)
     {struct Pro temp=P[j];
      P[j]=P[j+1];
      P[j+1]=temp;
     }
    }
  }
  P[0].C=P[0].B;
  for(i=0;i<n;i++)
  {P[i].C=P[i-1].C+P[i].B;
   if(P[i-1].C<P[i].A)
   { P[i].C=P[i].A+P[i].B;
   }
  }
  for(i=0;i<n;i++)
  { P[i].T=P[i].C-P[i].A;
  }
  for(i=0;i<n;i++)
  { P[i].W=P[i].T-P[i].B;
  }
  printf("P.No\t AT\t BT\t CT\t TAT\t WT\n");
  for(i=0;i<n;i++)
  { printf("%d \t %d \t %d \t %d \t %d \t %d \t \n",P[i].P,P[i].A,P[i].B,P[i].C,P[i].T,P[i].W);
  }
  float avgwt=0;
  float avgtat=0;
  for(i=0;i<n;i++)
  { avgwt=avgwt+P[i].W;
    avgtat=avgtat+P[i].T;
  }
  wt=(avgwt/n);
  tat=(avgtat/n);
  printf("Average Wait Time : %f\n Average Turn Around Time : %f",wt,tat);
 } 
