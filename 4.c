#include <stdio.h>
 
int main()
{
    int linhas, colunas;
    scanf("%d%d", &linhas, &colunas);
    int i;
    for (i = 1; i <= linhas; i++)
    {
        int k;
        for (k = 1; k != i && k <= colunas; k++)
        {
 
            if (!((k +1) != i && (k+1) <= colunas))
            {
                printf("(%d,%d)\n", i, k);
            }
            else
            {
                printf("(%d,%d)-", i, k);
            }
        }
    }
    return 0;
}