#include<stdio.h>
void main()
{
	int p[10],bt[10],wt[10],tat[10],twt,ttat,n,i;
	char ch[100];
	float awt,atat;
	printf("enter no of process ready to execute");
	scanf("%d",&n);
	for(i = 0;i<n;i++){
			printf("\n enter the process name");
			scanf("%s",ch);
			printf("\n enter the burst time ");
			scanf("%d",&bt[i]);
		}
		wt[0]=0,twt=0;
		tat[0] = bt[0];
		ttat = bt[0];
		for(i=1;i<n;i++){
			wt[i]= wt[i-1]+bt[i-1];
			tat[i]=wt[i]+bt[i];
			twt = twt + wt[i];
			ttat = ttat + tat[i]; 
		}	
		awt = (float)twt/n;
		atat = (float)ttat/n;
		printf("\n process time,burst time,waiting time, turnaround time ");
		for(int i=0;i<n;i++){
				printf("%s\t %d\t %d\t %d\t %d\t",ch,p[i],bt[i],wt[i],tat[i]);
				printf("\n average waiting time:%f",awt);
				printf("\n average form, around time:%f",atat);
			}
}			
