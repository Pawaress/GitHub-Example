#include <stdio.h>
main(){

int input,nub;
int addn,addp;
printf("Enater Number :");
scanf("%d",&input);
if((0<input)){
nub=input+1;
addn=nub;
addp=nub;

int nub2=nub*2-1;
for(int s=2;s<=nub;s++){
  for(int i =1;i<=s;i++){
    for(int j = 1 ;j<=nub2;j++){
      if( (addn<=j) && (j<=addp) ){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    addn--;
    addp++;


      printf("\n");

  }
  addn=nub;
  addp=nub;


}
  for(int u =1;u<=2;u++){
    for(int f =1;f<=nub2;f++){
      if(u==1){
        if( (addn<=f) && (f<=addp) ){
          printf("|");
        }
        else{
          printf(" ");
        }
      }
      else{
        if( (addn<=f) && (f<=addp) ){
          printf("V");
        }
        else{
          printf("=");
        }
      }
    }

    printf("\n");
  }
}
return 0;
}
