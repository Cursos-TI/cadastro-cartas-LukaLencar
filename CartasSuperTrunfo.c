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
  printf("1. População (vence o maior)\n");
  printf("2. Área por km² (vence o maior)\n");
  printf("3. PIB (vence o maior)\n");
  printf("4. Número de Pontos Turísticos (vence o maior)\n");
  printf("5. Densidade Populacional (vence o menor)\n");
  printf("6. PIB per Capita (vence o maior)\n");
  printf("7. Super Poder (vence o maior)\n");
  scanf("%d", &comparacao);

//jogador n°1
  printf("Jogador n°1, digite as informações de sua carta: \n");
  printf("Digite a opção de seu estado entre A até Z: \n");
  scanf(" %c", &estado);

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
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("População carta 1: %lu x População carta 2: %lu\n", populacao, populacao2);
      printf("## Jogador N°1 Venceu! ##\n");
    } else if (populacao < populacao2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("População carta 1: %lu x População carta 2: %lu\n", populacao, populacao2);
      printf("## Jogador N°2 Venceu! ##\n");
    } else{
      printf("Empate!\n");
    }
    break;
  case 2:
    if (areakm > areakm2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("Área por km² carta 1: %.2f x Área por km²: %.2f\n", areakm, areakm2);
      printf("## Jogador N°1 Venceu! ##\n");
    } else if (areakm < areakm2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("Área por km² carta 1: %.2f x Área por km² carta 2: %.2f\n", areakm, areakm2);
      printf("## Jogador N°2 Venceu! ##\n");
    } else{
      printf("Empate!\n");
    }
    break;
  case 3:
    if (pib > pib2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("PIB carta 1: %.2f x PIB carta 2: %.2f\n", pib, pib2);
      printf("## Jogador N°1 Venceu! ##\n");
    } else if (pib < pib2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("PIB carta 1: %.2f x PIB carta 2: %.2f\n", pib, pib2);
      printf("## Jogador N°2 Venceu! ##\n");
    } else{
      printf("Empate!\n");
    }
    break;
  case 4:
    if (numturistico > numturistico2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("Número de Pontos Turísticos carta 1: %d x Número de Pontos Turísticos carta 2: %d\n", numturistico, numturistico2);
      printf("## Jogador N°1 Venceu! ##\n");
    } else if (numturistico < numturistico2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("Número de Pontos Turísticos carta 1: %d x Número de Pontos Turísticos carta 2: %d\n", numturistico, numturistico2);
      printf("## Jogador N°2 Venceu! ##\n");
    } else{
      printf("Empate!\n");
    }
    break;
  case 5:
    if (densidadepop < densidadepop2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("Densidade Populacional carta 1: %.2f x Densidade Populacional carta 2: %.2f\n", densidadepop, densidadepop2);
      printf("## Jogador N°1 Venceu! ##\n");
    } else if (densidadepop > densidadepop2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("Densidade Populacional carta 1: %.2f x Densidade Populacional carta 2: %.2f\n", densidadepop, densidadepop2);
      printf("## Jogador N°2 Venceu! ##\n");
    } else{
      printf("Empate!\n");
    }
    break;
  case 6:
    if (pibcapita > pibcapita2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("PIB per Capita carta 1: %.2f x PIB per Capita carta 2: %.2f\n", pibcapita, pibcapita2);
      printf("## Jogador N°1 Venceu! ##\n");
    } else if (densidadepop < densidadepop2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("PIB per Capita carta 1: %.2f x PIB per Capita carta 2: %.2f\n", pibcapita, pibcapita2);
      printf("## Jogador N°2 Venceu! ##\n");
    } else{
      printf("Empate!\n");
    }
    break;
  case 7:
    if (superPoder > superPoder2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("Super Poder carta 1: %.2f x Super Poder carta 2: %.2f\n", superPoder, superPoder2);
      printf("## Jogador N°1 Venceu! ##\n");
    } else if (superPoder < superPoder2){
      printf("Jogador N°1 - Cidade: %s\n", nome);
      printf("Jogador N°2 - Cidade: %s\n", nome2);
      printf("Super Poder carta 1: %.2f x Super Poder carta 2: %.2f\n", superPoder, superPoder2);
      printf("## Jogador N°2 Venceu! ##\n");
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
