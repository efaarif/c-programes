 #include <stdio.h>
 #include <stdlib.h>
 #include<omp.h>
 int main(int argc, char *argv[]) {
 int numt,tid;
 numt= omp_get_num_threads();
 #pragma omp parallel
 {
 tid=omp_get_thread_num();
 printf(" hello from thread %d of %d\n",tid,numt);
 }
 return 0;
 }
