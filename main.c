// BIBLIOTECAS
#include <stdio.h>
#include <math.h>

int main()

{   int N; // Declara Variável 

    printf("Até que número eu vou achar os primos? ");
    scanf("%d", &N);

    int vet[N+1];
    int i, j, limite;

    for(i=2; i<=N; i++) // Loop
    {  
        vet[i] = 1; // 1 representa primo
    } // Fim do Loop
    

    limite = (int) sqrt(N);
    i=2;

    while(i <= limite) 
    {   
        j=2;

        while(i*j <= N)
        {   
            vet[i*j] = 0;
            j++;
        }
        
        do{
            i++;
        } 
        
        while(vet[i] != 1 && i<=N);
    }
    
    for(i=2; i<=N; i++)
    {  
         if(vet[i]==1)
            printf("%d, ", i); // Retorna os Primos
    }

    return 0;
}
