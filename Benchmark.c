#include <time.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    for(int i=0; i < 10; i++){
        double cpu_time_used;
        int count = 0;
        clock_t start = clock();
        for(int i=0; i < 999999999; i++){
            count += 1;
        }
        clock_t end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        double Megaflops=((999999999)/(double)(cpu_time_used))/1000000;
        printf("%f \n", Megaflops); //Data output in Megaflops
    }
    return 0;
}

