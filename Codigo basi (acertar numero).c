/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n_maquina(){
    
    int num_computador;
    srand(time(NULL));
    num_computador = rand () % 50;
    
    return num_computador;
}

int descobrir_numero(int n){
    
    int num_user;
    int tentativas = 0;
    int aux = 0;
    
    while(1){
        
        if(aux == 0){
            
            printf("tente descobrir o numero gerado pelo computador: ");
            scanf("%d", &num_user);
            aux += 1;
        }
        else{
            
            scanf("%d", &num_user);
        }
        
        
        if(num_user == n){
            printf("Parabens voce acertou o numero!!.");
            tentativas += 1;
            return tentativas;
        }
        
        else if(num_user > n){
            printf("Maior\nTente um numero mais baixo: ");
            tentativas += 1;
        }
        
        else if(num_user < n){
            
            printf("Menor\nTente um numero mais alto: ");
            tentativas += 1;
            
        }
        
    }
    
    printf("Acabou");
    
}

int main()
{
    
    int num_computador;
    int tentativas_user;
    
    num_computador = n_maquina();
    
    tentativas_user = descobrir_numero(num_computador);
    
    printf("O valor informado pela maquina foi %d",num_computador);
    printf("\nDepois de %d tentativas voce acertou", tentativas_user);

    return 0;
}