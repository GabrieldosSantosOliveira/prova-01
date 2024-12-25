#include <stdio.h>
double modulo(double k){
   if (k < 0)
    {
        return k * -1;
    }
    return k;
}
 
int main()
{
    double n, erro, raiz, margem_de_erro;
    scanf("%lf%lf", &n, &erro);
    raiz = (1 + (n / 1)) / 2;
    margem_de_erro = modulo(n - (raiz * raiz));
    printf("r: %.9lf, err: %.9lf\n", raiz, margem_de_erro);
    while (margem_de_erro > erro)
    {
        raiz = (raiz + (n / raiz)) / 2;
        margem_de_erro = modulo(n - (raiz * raiz));
        printf("r: %.9lf, err: %.9lf\n", raiz, margem_de_erro);
    }
    return 0;
}