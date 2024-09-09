#include <stdio.h>

//write in C fibonnaci recursively and write it iteratively 
//then accept the command line argument read the file then calculate the value to the Nth fibbnoaci

int fibo_iterative(int f) {
   if (f <= 1){
    return f;
   } 
   int a = 0;
   int b = 1;
   for (int i = 2; i < f; i++){
      int origin = a;
      a = b;
      b = origin + b;
   }
    return b;
}

int fibo_recursive(int f){
    if (f <= 1){
        return f;
    }
    return fibo_recursive(f-1) + fibo_recursive(f-2);
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
