#include<stdio.h>
#include<limits.h>
void time(int n,int at[n],int bt[n],int rt[n]){
	int i,time=0,complete=0;int ct[n];
	while(complete!=n){
		int min=INT_MAX;
		int index=-1;
		for(i=0;i<n;i++){
			if(at[i]<=time&&rt[i]<min&&rt[i]>0){
				min=rt[i];
				index=i;
			}
		}
		rt[index]--;
		time++;
		if(rt[index]==0){
			complete++;
			ct[index]=time;
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",ct[i]);
	}
	double wt=0;
	for(i=0;i<n;i++){
		 wt+=ct[i]-at[i]-bt[i];
	}
	printf("%f",wt/n);
}
int main(){
	int i;
	int at[5]={2,5,1,0,4};
	int bt[5]={6,2,8,3,4};
	int rt[5];
	for(i=0;i<5;i++){
		rt[i]=bt[i];
	}
	time(5,at,bt,rt);
	return 0;
}
