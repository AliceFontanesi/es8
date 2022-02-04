# include <stdio.h>
int main ()
{
    int num;
    double radice, somma = 0;;
    do
    {
        printf("Inserisci un numero \n");
        scanf("%d", &num);
        if (num < 0)
            printf("Non è possibile svolgere la radice di un numero negativo \n");
        else
        {
            radice = sqrt(num);
            somma = somma + radice;
        }
    } while (num < 0);
    return 0;
}
