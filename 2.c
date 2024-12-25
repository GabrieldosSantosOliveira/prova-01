#include <stdio.h>
 
int main()
{
    int horario_inicial, minuto_inicial, horario_final, minuto_final;
    scanf("%d%d%d%d", &horario_inicial, &minuto_inicial, &horario_final, &minuto_final);
    int minutos_decorridos = 0;
 
    if (horario_inicial > horario_final || (horario_final == horario_inicial && minuto_final == minuto_inicial))
    {
        minutos_decorridos += (24 - horario_inicial) * 60;
        horario_inicial = 0;
    }
    if (horario_final > horario_inicial)
    {
        minutos_decorridos += (horario_final - horario_inicial) * 60;
        horario_inicial += (horario_final - horario_inicial);
    }
 
    if (horario_inicial == horario_final)
    {
        minutos_decorridos += minuto_final - minuto_inicial;
    }
 
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", minutos_decorridos / 60, minutos_decorridos % 60);
 
    return 0;
}