#include<cstdio>
using namespace std;
int main(){
    int A = 20;
    int *Aptr = &A;
    printf("ini adalah nilai : %d\n", A);
    printf("ini adalah nilai : %d\n",*Aptr);
    printf("ini adalah alamat nilai : %i\n", &A);
    printf("ini adalah alamat nilai : %i\n",Aptr);
    *Aptr = 40;
    printf("ini adalah nilai : %d", A);
}