#include <stdio.h>

//write in C fibonnaci recursively and write it iteratively 
//then accept the command line argument read the file then calculate the value to the Nth fibbnoaci

int fibo_iterative(int fib) {
   if (fib <= 1){
    return fib;
   } 
   int a_val = 0;
   int b_val = 1;
   for (int i = 2; i < fib; i++){
      int origin = a_val;
      a_val = b_val;
      b_val = origin + b_val;
   }
    return b_val;
}

int fibo_recursive(int fib){
    if (fib <= 1){
        return fib;
    }
    return fibo_recursive(fib-1) + fibo_recursive(fib-2);
}


int main(int argc, char *cmd[]) {
    if (argc != 4) {
        return 1;
    }

    int input_number = atoi(cmd[1]), file_number;
    FILE *file = fopen(cmd[3], "r");
    fscanf(file, "%d", &file_number);

    int N = input_number + file_number;
    int result = 0;
    char fib = cmd[2][0];
    if (fib = "r"){
        result = fibo_recursive(N);
    }
    if (fib = "i"){
        result = fibo_iterative(N);
    }
    printf("%d", result);

    return 0;
}
