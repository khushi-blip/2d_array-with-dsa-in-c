#include<stdio.h>
int main(){
  int arr[3][4];
  int rows,cols, i ,j;
  printf("enter the value of row");
  scanf("%d",&rows);
  printf("enter the value of cols");
  scanf("%d",&cols);
  for(i=0;i<3;i++){ // forows
    for(j=0;j<3;j++){ // for printing column
      scanf("%d",&arr[i][j]);
    }
  }
    for(i=0;i<3;i++){ // for printing rows
      for(j=0;j<3;j++){
    printf("%d\t",arr[i][j]);
  }
  printf("\n");
}

}