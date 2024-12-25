#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Campeonato invalido!\n");
        return 0;
    }
 
    int i;
    int quantidade_de_finais = 0;
    for (i = 1; i <= n; i++)
    {
        int k;
        for (k = i + 1; k <= n; k++)
        {
            if (k != i)
            {
                ++quantidade_de_finais;
                printf("Final %d: Time%d X Time%d\n", quantidade_de_finais, i, k);
            }
        }
    }
    return 0;
}