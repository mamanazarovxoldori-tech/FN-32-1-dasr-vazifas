
#include <stdio.h>

 int yuza (int u,int k ){
  
  return u * k;
}

int main() {

 int u,k;

 scanf("%d %d",&u,&k);

 printf("%d",yuza(u, k));
  return 0;
}