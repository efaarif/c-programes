#include<omp.h> 
#include<stdio.h>
int main( ) 
{ 
	int nthreads, tid; 
      /* Fork a team of threads with each thread having a private tid variable */ 
	#pragma omp parallel private(tid) 
	{ /* Obtain and print thread id */ 
		tid = omp_get_thread_num(); 
		printf("Hello World from thread = %d\n", tid);

		/* Only the master thread does this */ 
		if (tid == 0) 
		{ 
			nthreads = omp_get_num_threads(); 
			printf("Number of threads = %d\n", nthreads);
		} 
	} /* All threads join the master thread and terminate */ 
    return 0;
} 
