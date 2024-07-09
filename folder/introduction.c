#include <stdio.h>
#include <math.h>

int prime(a){
    for(int i=2; i<sqrt(a); i++){
        if(a%i == 0)
            return 0;
    }
    return 1;
}
int main(){
    FILE *f1, *f2;
    int n, x;
    f1 = fopen("prime.txt", "r");
    if(f1 == NULL){
        printf("can't open file");
    }
    else{
        f2 = fopen("output.txt", "w");
        fscanf(f1, "%d", &n);
        for (int i = 0 ; i<n; i++){
            fscanf(f1, "%d", &x);
            if(prime(x)){
                fprintf(f2, "%d ", x);
            }
        }
    }
    fclose(f1);fclose(f2);
}
