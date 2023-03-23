#include <stdio.h>
#include <time.h>

int main(void){
  time_t tempo_atual;
  struct tm *info_tempo;
  char string_tempo[40];

  time(&tempo_atual);
  info_tempo = localtime(&tempo_atual);

  strftime(string_tempo, sizeof(string_tempo), "%d/%m/%Y \t %H:%M:%S", info_tempo);
  printf("DATA \t\t HORA\n%s", string_tempo);
  
  return 0;
}
