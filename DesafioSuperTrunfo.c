#include <stdio.h>

/*#Objetivos
### 🎯 Objetivos do ProjetoSuperTrunfo Logica super trunfo:
     usuário poderá escolher dois atributos para comparação entre as cartas.
- **Lógica de Decisão Complexa:** Implementação de estruturas de decisão aninhadas e encadeadas, além do uso de operadores ternários para determinar a carta vencedora.
- **Menus Dinâmicos:** Os menus serão dinâmicos, permitindo uma navegação fluida entre as opções de comparação.

### 🚩 Novas Funcionalidades:
- **Comparação de Dois Atributos:** O sistema comparará dois atributos simultaneamente para determinar a carta vencedora.
- **Lógica Avançada:** Uso de operadores ternários e lógica aninhada para lidar com comparações complexas.
- **Empates:** O sistema será capaz de lidar com empates, exibindo mensagens apropriadas.
- **Exibição de Resultados:** Exibição dos resultados das comparações de forma clara e interativa.


*/

//funçao que recebe os dados para criaçao das cartas do super trunfo.
void entradaDeDados(char estado[],char codigo_da_carta[],char nome_da_cidade[],float *populacao,float *area,float *pib,float *numero_de_pontos_turisticos){
    printf("Digite o nome do estado.\n:");
    scanf(" %[^\n]", estado);
    
    printf("Digite o codigo da carta.\n:");
    scanf(" %[^\n]", codigo_da_carta);
    
    printf("Digite o nome da cidade.\n:");
    scanf(" %[^\n]", nome_da_cidade);
    
    printf("Digite a quantidade da populaçao.\n:");
    scanf("%f",populacao);

    printf("Digite a numero da area.\n:");
    scanf("%f",area);

    printf("Digite o valor do pib.\n:");
    scanf("%f",pib);

    printf("Digite o numero de pontos turisticos.\n:");
    scanf("%f",numero_de_pontos_turisticos);

}
void comparacaoDeAtributos(int escolha_do_atributo,int escolha_do_2_atributo,float populacao1, float populacao2, float area1, float area2, float pib1, float pib2, float numero_de_pontos_turisticos1, float numero_de_pontos_turisticos2, float densidade_populacional1, float densidade_populacional2, float pib_per_capita1, float pib_per_capita2){
    //criando arrays para armazenar os atributos das cartas
    float arraydeatributos1[6] = {populacao1,area1,pib1,numero_de_pontos_turisticos1,densidade_populacional1,pib_per_capita1};
    float arraydeatributos2[6] = {populacao2,area2,pib2,numero_de_pontos_turisticos2,densidade_populacional2,pib_per_capita2};
    char nome_dos_atributos[6][30] = {"Populaçao","Area","PIB","Numero de pontos turisticos","Densidade populacional","PIB per capita"};
    int point1 = 0;
    int point2 = 0;
    
    for(int i = 0; i <= 5; i++){
            if(i == escolha_do_atributo){
                if(i !=5){

                    if(arraydeatributos1[i] > arraydeatributos2[i]){
                        printf("########################\n");                     
                        printf("Atributo 1\n");
                        printf("########################\n");
                        
                        printf("A carta 1 venceu na comparaçao dos atributos %s\n",nome_dos_atributos[i]);
           
                        printf("-------------------------------\n");
           
                        printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
           
                        printf("-------------------------------\n");
                        point1++;
                        
                    } else if(arraydeatributos1[i] < arraydeatributos2[i]){
                        printf("########################\n");                     
                        printf("Atributo 1\n");
                        printf("########################\n");
                    
           
                        printf("A carta 2 venceu na comparaçao dos atributos %s\n",nome_dos_atributos[i]);
           
                        printf("-------------------------------\n");
           
                        printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
           
                        printf("-------------------------------\n");
                        point2++;
                        
                    } else{
                        printf("########################\n");                     
                        printf("Atributo 1\n");
                        printf("########################\n");
           
                        printf("Houve um empate na comparaçao dos atributos %s\n",nome_dos_atributos[i]);
           
                        printf("-------------------------------\n");
           
                        printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
           
                        printf("-------------------------------\n");

           
                    }
           
                }else{
           
                    if(arraydeatributos1[i] < arraydeatributos2[i]){
                        printf("########################\n");                     
                        printf("Atributo 1\n");
                        printf("########################\n");
           
                        printf("A carta 1 venceu na comparaçao dos atributos %s\n",nome_dos_atributos[i]);
           
                        printf("-------------------------------\n");
           
                        printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
           
                        printf("-------------------------------\n");

                        point1++;
                
                    }else if(arraydeatributos1[i] > arraydeatributos2[i]){
                        printf("########################\n");                     
                        printf("Atributo 1\n");
                        printf("########################\n");
                
                        printf("A carta 2 venceu na comparaçao do atributos %s\n",nome_dos_atributos[i]);
                
                        printf("-------------------------------\n");
                
                        printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
                
                        printf("-------------------------------\n");
                        point2++;

                
                    }else{
                        printf("########################\n");                     
                        printf("Atributo 1\n");
                        printf("########################\n");
                        
                        printf("Houve um empate na comparaçao dos atributos %s\n",nome_dos_atributos[i]);
                
                        printf("-------------------------------\n");
                
                        printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
                
                        printf("-------------------------------\n");

                        
                    }
        
            }

        
        }
        if(i == escolha_do_2_atributo){
        
            if(i !=5){
        
                if(arraydeatributos1[i] > arraydeatributos2[i]){
                    printf("########################\n");                     
                    printf("Atributo 2\n");
                    printf("########################\n");
        
                    printf("A carta 1 venceu na comparaçao dos atributos %s\n",nome_dos_atributos[i]);
        
                    printf("-------------------------------\n");
        
                    printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
        
                    printf("-------------------------------\n");
                    point1++;
        
                } else if(arraydeatributos1[i] < arraydeatributos2[i]){
                    printf("########################\n");                     
                    printf("Atributo 2\n");
                    printf("########################\n");
        
                    printf("A carta 2 venceu na comparaçao dos atributos %s\n",nome_dos_atributos[i]);
                    printf("-------------------------------\n");
                    printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
                    printf("-------------------------------\n");
                    point2++;
        
                } else{
                    printf("########################\n");                     
                    printf("Atributo 2\n");
                    printf("########################\n");

                    printf("Houve um empate na comparaçao dos atributos %s\n",nome_dos_atributos[i]);
                    printf("-------------------------------\n");
                    printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
                    printf("-------------------------------\n");
                }
         
            }else{
            
                if(arraydeatributos1[i] < arraydeatributos2[i]){
                    printf("########################\n");                     
                    printf("Atributo 2\n");
                    printf("########################\n");
                
                    printf("A carta 1 venceu na comparaçao dos atributos %s\n",nome_dos_atributos[i]);
                    printf("-------------------------------\n");
                    printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
                    printf("-------------------------------\n");
                    point1++;
                } else if(arraydeatributos1[i] > arraydeatributos2[i]){
                    printf("########################\n");                     
                    printf("Atributo 2\n");
                    printf("########################\n");

                    printf("A carta 2 venceu na comparaçao dos atributos %s\n",nome_dos_atributos[i]);
                    printf("-------------------------------\n");
                    printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
                    printf("-------------------------------\n");
                    point2;
                } else{
                    printf("########################\n");                     
                    printf("Atributo 2\n");
                    printf("########################\n");
                    
                    printf("Houve um empate na comparaçao dos atributos %s\n",nome_dos_atributos[i]);
                    printf("-------------------------------\n");
                    printf("Dados dos atributos\nCarta 1:%.2f\nCarta 2:%.2f\n",arraydeatributos1[i],arraydeatributos2[i]);
                    printf("-------------------------------\n");
                }
            
            }
          
        }
        
        
    }
    printf("########################\n");    
    printf("Carta 1 pontos:%d\nCarta 2 pontos:%d\n",point1,point2);
    printf("########################\n");
    printf("Vencedor definitivo!");
    printf("########################\n");
    printf("%s\n",(point1 > point2) ? "Carta 1 venceu! " : ( point1 < point2) ? "Carta 2 venceu!" : "Empate!");
    printf("########################\n");

}  
int main(){
    ///Iniciando o programa
    printf("Super Trunfo Mestre\nbem vindo ao jogo.\n");
    //------------------------------------------------
    //declarando as variaveis para a carta 1
    char estado1[30];
    char codigo_da_carta1[10];
    char nome_da_cidade1[30];
    float populacao1 = 0.0f;
    float area1 = 0.0f;
    float pib1 = 0.0f;
    float numero_de_pontos_turisticos1 = 0.0f;
    float densidade_populacional1 = 0.0f;
    float pib_per_capita1 = 0.0f;
    
    //declarando as variaveis para a carta 2
    char estado2[30];
    char codigo_da_carta2[10];
    char nome_da_cidade2[30];
    float populacao2 = 0.0f;
    float area2 = 0.0f;
    float pib2 = 0.0f;
    float numero_de_pontos_turisticos2 = 0.0f;
    float densidade_populacional2 = 0.0f;
    float pib_per_capita2 = 0.0f;
    
    //variaveis para escolha dos atributos
    int escolha_do_atributo = 0;
    int escolha_do_2_atributo = 0;
    //variavel para controlar o loop do jogo
    int continuar_jogando = 1;

    ///Digitando os dados das cartas
    printf("Digite os dados da carta 1:\n");
    printf("-------------------------\n"); 
    printf("Carta 1:\n");
    //chamando a funçao de entrada de dados para carta 1
    entradaDeDados(estado1,codigo_da_carta1,nome_da_cidade1,&populacao1,&area1,&pib1,&numero_de_pontos_turisticos1);  
    
    printf("Digite os dados da carta 2:\n");
    printf("-------------------------\n"); 
    printf("Carta 2:\n");
    //chamando a funçao de entrada de dados para carta 2
    entradaDeDados(estado2,codigo_da_carta2,nome_da_cidade2,&populacao2,&area2,&pib2,&numero_de_pontos_turisticos2);
    
    
    printf("Calculando os atributos das cartas...\n");
    printf("--------------------------------------\n");
    //calculando a densidade populacional e pib per capita para carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    
    //calculando a densidade populacional e pib per capita para carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    

    //loop para garantir que o jogador escolha um atributo valido
    //selecionado qual atributo a ser comparado
    do{
        printf("Seleçao para qual dos atributos\nos jogadores desejam comparar.\n");
        printf("--------------------------------------\n");
        printf("Escolha o atributo para comparar.\nDigite o número correspondente à característica desejada:\n");
        printf("(1) População.\n(2) Área\n(3) PIB.\n(4) Número de pontos turísticos.\n(5) densidade populacional.\n(6) PIB per capita.\n:");
        scanf("%d",&escolha_do_atributo);
        printf("--------------------------------------\n");
        printf("Selecione mais uma caracteristica para comparaçao do segundo atributo.\n:");  
        scanf("%d",&escolha_do_2_atributo);
        printf("--------------------------------------\n");
        //chamando a funçao de comparaçao dos atributos
        comparacaoDeAtributos(escolha_do_atributo,escolha_do_2_atributo,populacao1,populacao2,area1,area2,pib1,pib2,numero_de_pontos_turisticos1,numero_de_pontos_turisticos2,densidade_populacional1,densidade_populacional2,pib_per_capita1,pib_per_capita2);
    
        //perguntando se o jogador deseja continuar jogando
        printf("Deseja comparar novamente as cartas?\n(1) Sim\n(2) Não\n:");
        //entrada da escolha do jogador
        scanf("%d",&continuar_jogando);
        
        //condicional para verificar a escolha do jogador
        if(continuar_jogando == 1){
            printf("Reiniciando a comparação das cartas...\n");
        }else if(continuar_jogando == 2){
            printf("Encerrando o jogo. Obrigado por jogar!\n");
            break;
        }else{
            printf("Opção inválida. Encerrando o jogo. Obrigado por jogar!\n");
            break;
        }

    
    }while(continuar_jogando == 1);
    return 0;
}