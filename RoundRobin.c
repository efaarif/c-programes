#include<stdio.h>
#include<stdbool.h>
#define size 100
typedef struct{
	int arr[size];
	int front;
	int rear;
}queue;
void create(queue *q)
{
	q->front=-1;
	q->rear=-1;
}
void add(queue *q,int x)
{
	if(q->rear < size) {
        q->arr[q->rear++] = x;
    }
}
int delete(queue *q)
{
	if(q->front != q->rear) {
        return q->arr[q->front++];
    }
    return -1;
}
void com_Time(int n,int at[],int bt[],int tq,queue *q){
	int time=0,complete=0,i;
	bool isInQueue[n];
	int ct[n],tat[n],wt[n],rt[n];
	 for(i = 0; i < n; i++) {
        isInQueue[i] = false;
        rt[i]=bt[i];
    }
	for(i=0;i<n;i++){
		if(at[i]==0){
			add(q,i);
			isInQueue[i]=true;
		}
	}
	while(complete<n){
		int index=delete(q);
		if(index == -1) {
            break; 
        }

		if(bt[index]<=tq){
			time=time+bt[index];
			ct[index]=time;
			bt[index]=0;
			complete++;
		}else{
			time=time+tq;
			bt[index]-=tq;
		}
		for(i=0;i<n;i++){
			if(isInQueue[i]==false&&at[i]<=time){
				add(q,i);
				isInQueue[i]=true;
			}
		}
		if(bt[index]>0){
			add(q,index);
		}
	}
	printf("completion time: ");
for(i=0;i<n;i++){
printf("%d\t",ct[i]);
}
for(i=0;i<n;i++){
		tat[i]=ct[i]-at[i];
		wt[i]=tat[i]-rt[i];
	}
	printf("\nturnaround time: ");
		for(i=0;i<n;i++){
		printf("%d\t",tat[i]);
}
		printf("\nwaiting time:	 ");
		for(i=0;i<n;i++){
		printf("%d\t",wt[i]);
}
}

int main(){
queue q;int i;
create(&q);
int at[5]={0,2,3,4,5};
int bt[5]={5,3,1,4,2};
int rt[5];
com_Time(5,at,bt,4,&q);
return 0;
}
