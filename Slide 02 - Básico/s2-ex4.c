
/*Agora o aluno alugou um carro. 
Ele está preocupado com o limite de velocidade, 
mas não entende muito bem o sistema de milhas por hora (mph). 
Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). 
Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros. Crie um programa que leia a
 velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.*/

 #include <stdio.h>

 int main(void){

    float vel_mph, vel_kph;
    const float milha = 1.6;

    printf("Insira a velocidade atual do carro em mph: \n");
    scanf("%f", &vel_mph);

    vel_kph = vel_mph * milha;
    

    if (vel_kph < 80){
        printf("ACELERE. \n");
        printf("Velocidade atual do carro: %.2f km/h \n", vel_kph);
    }
    else if(vel_kph > 100){
        printf("DESACELERE \n");
        printf("Velocidade atual do carro: %.2f\n km/h \n", vel_kph);
    }
    else{
        printf("MANTENHA \n");
        printf("Velocidade atual do carro: %.2f km/h \n", vel_kph);
    }

return 0;

}
