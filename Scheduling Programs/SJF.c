#include <stdio.h>
struct Pro
{ int P,A,B,C,T,W,f;
}P[50];
void main()
{ printf("Enter the number of Processes : ");
  int i,n;
  float wt,tat;
  scanf("%d",&n);
  printf("Enter the processes : \n");
  for(i=0;i<n;i++)
  { scanf("%d",&P[i].P);
    P[i].f=-1;
  }
  printf("Enter the arrival time of Processes : \n");
  for(i=0;i<n;i++)
  { scanf("%d",&P[i].A);
  }
  printf("Enter the Burst time of Processes : \n");
  for(i=0;i<n;i++)
  { scanf("%d",&P[i].B);
  }
  for(i=0;i<n;i++)
  { for(int j=0;j<n-i-1;j++)
    {if(P[j].B>P[j+1].B);
     {struct Pro temp=P[j];
      P[j]=P[j+1];
      P[j+1]=temp;
     }
    }
  }
 
  for(i=0;i<n;i++)
  { P[i].C=P[i-1].C+P[i].B;
  }
  for(i=0;i<n;i++)
  { P[i].T=P[i].C-P[i].A;
  }
  for(i=0;i<n;i++)
  { P[i].W=P[i].T-P[i].B;
  }
  
  printf("P.No\t AT\t Bt\t CT\t TAT\t WT\n");
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
  printf("Average Wait time : %f\n Average Turn Around Time : %f",wt,tat);

}
