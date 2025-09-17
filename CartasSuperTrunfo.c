#include <stdio.h>
#include <locale.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  int populacao, numturistico;
  float areakm, pib;
  char estado, codigo[20], nome[100];
//jogador n°1
  printf("Agora começaremos um jogo de Super Trunfo, jogador n°1, digite as informações de sua carta: \n");
  printf("Digite a opção de seu estado entre A até H: \n");
  scanf("%c", &estado);

  printf("Digite o código de sua carta: \n");
  scanf("%s", codigo);

  getchar();

  printf("Digite o nome da cidade: \n");
  fgets(nome, 100, stdin);

  printf("Digite o número referente a população: \n");
  scanf("%d", &populacao);

  printf("Digite a area total no seu estado: \n");
  scanf("%f", &areakm);

  printf("Digite o PIB do seu estado: \n");
  scanf("%f", &pib);

  printf("Digite o numero total de pontos turísticos: \n");
  scanf("%d", &numturistico);

//carta jogador n°1
  printf("Carta Jogador n°1:\n");
  printf("Estado: %c\n", estado);
  printf("Codigo da Carta: %c%s\n", estado, codigo);
  printf("Nome da Cidade: %s\n", nome);
  printf("Quantidade Populacional: %d\n", populacao);
  printf("Área: %f km²\n", areakm);
  printf("PIB %f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", numturistico);

return 0;
} 
