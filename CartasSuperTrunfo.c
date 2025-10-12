#include <stdio.h>
#include <locale.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  unsigned long int populacao, populacao2;
  int numturistico, numturistico2;
  int comparacao;
  float areakm, pib, areakm2, pib2, densidadepop, densidadepop2, pibcapita, pibcapita2;
  float superPoder, superPoder2, inversoDensidadePop, inversoDensidadePop2;
  char estado, codigo[20], nome[100], estado2, codigo2[20], nome2[100];
//Menu do Jogo
  printf("Agora começaremos um jogo de Super Trunfo!\n");
  printf("Primeiramente, escolha qual das opções abaixo será o fator de comparação: \n");
  printf("1. População");
  printf("2. Área por km²");
  printf("3. PIB");
  printf("4. Número de Pontos Turísticos");
  printf("5. Densidade Populacional");
  printf("6. PIB per Capita");
  printf("7. Super Poder");
  scanf("%d", &comparacao);

//jogador n°1
  printf("Jogador n°1, digite as informações de sua carta: \n");
  printf("Digite a opção de seu estado entre A até Z: \n");
  scanf("%c", &estado);

  printf("Digite o código de sua carta: \n");
  scanf("%s", codigo);

  getchar();

  printf("Digite o nome da cidade: \n");
  fgets(nome, 100, stdin);

  printf("Digite o número referente a população: \n");
  scanf("%lu", &populacao);

  printf("Digite a area total no seu estado: \n");
  scanf("%f", &areakm);

  printf("Digite o PIB do seu estado: \n");
  scanf("%f", &pib);

  printf("Digite o numero total de pontos turísticos: \n");
  scanf("%d", &numturistico);

  densidadepop = (populacao / areakm);
  pibcapita = (pib * 1000000000) / populacao;
  inversoDensidadePop = (areakm / populacao);
  superPoder = (populacao + areakm + pib + numturistico + pibcapita + inversoDensidadePop);

  //jogador n°2
  printf("Agora jogador n°2, digite as informações de sua carta: \n");

  getchar();

  printf("Digite a opção de seu estado entre A até Z: \n");
  scanf("%c", &estado2);

  printf("Digite o código de sua carta: \n");
  scanf("%s", codigo2);

  getchar();

  printf("Digite o nome da cidade: \n");
  fgets(nome2, 100, stdin);

  printf("Digite o número referente a população: \n");
  scanf("%lu", &populacao2);

  printf("Digite a area total no seu estado: \n");
  scanf("%f", &areakm2);

  getchar();

  printf("Digite o PIB do seu estado: \n");
  scanf("%f", &pib2);

  printf("Digite o numero total de pontos turísticos: \n");
  scanf("%d", &numturistico2);

  densidadepop2 = (populacao2 / areakm2);
  pibcapita2 = (pib2 * 1000000000) / populacao2;
  inversoDensidadePop2 = (areakm2 / populacao2);
  superPoder2 = (populacao2 + areakm2 + pib2 + numturistico2 + pibcapita2 + inversoDensidadePop2);

//carta jogador n°1
  printf("Carta Jogador n°1 - \n");
  printf("Estado: %c\n", estado);
  printf("Codigo da Carta: %c%s\n", estado, codigo);
  printf("Nome da Cidade: %s", nome);
  printf("Quantidade Populacional: %lu\n", populacao);
  printf("Área: %.2f km²\n", areakm);
  printf("PIB %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", numturistico);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepop);
  printf("Pib per Capita: %.2f reais\n", pibcapita);
  printf("Super Poder: %.2f\n", superPoder);
  printf("\n");

  //carta jogador n°2
  printf("Carta Jogador n°2 - \n");
  printf("Estado: %c\n", estado2);
  printf("Codigo da Carta: %c%s\n", estado2, codigo2);
  printf("Nome da Cidade: %s", nome2);
  printf("Quantidade Populacional: %lu\n", populacao2);
  printf("Área: %.2f km²\n", areakm2);
  printf("PIB %.2f bilhões de reias\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numturistico2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
  printf("Pib per Capita: %.2f reais\n", pibcapita2);
  printf("Super Poder: %.2f\n", superPoder2);
  printf("\n");

  //Resultados
  printf("**Resultado das Comparações**\n");
  switch (comparacao)
  {
  case 1:
    if (populacao > populacao2){
      printf("Jogador N°1 Venceu! - População carta 1: %lu x População carta 2: %lu\n", populacao, populacao2);
    } else if (populacao < populacao2){
      printf("Jogador N°2 Venceu! - População carta 1: %lu x População carta 2: %lu\n", populacao, populacao2);
    } else{
      printf("Empate!\n");
    }
    break;
  
  default:
      printf("Opção Inválida!\n");
    break;
  }
  
  return 0;
} 
