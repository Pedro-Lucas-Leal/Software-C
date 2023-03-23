#include <stdio.h>
#include <time.h>

int main(void){
  struct tm value;
  value.tm_sec=1;
  value.tm_min=1;
  value.tm_min=1;
  value.tm_hour=1;
  value.tm_mday=1;
  value.tm_mon=1;
  value.tm_year=1;
  value.tm_hour=1;
  value.tm_wday=1;
  value.tm_yday=1;

  printf("Data e tempo: %s", asctime(&value));
  return 0;
}
