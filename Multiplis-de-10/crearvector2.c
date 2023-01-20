#include <stdio.h>
int main(){
    int num;
    int x;
    char vec[]="vector.txt";
    FILE *vec1=NULL;
    FILE *vec2=NULL;
    vec1=fopen(vec,"r+");//apertura archivo
    vec2=fopen("cambio.txt","w");
if (vec1 == NULL){
        printf("No se puede abrir el archivo1");
        return -1;
   }
if (vec2 == NULL){
        printf("No se puede abrir el archivo2");
        return -1;
   }
while (!feof(vec1))
{
    fscanf(vec1, "%d", &x); 
    if (x%10==0 && x!=0)
    {
      fprintf(vec2,"multiplo de 10\n",x);  
      printf("multiplo de 10\n",x);
    }else{
        fprintf(vec2,"%d\n",x);
        printf("%d\n",x);
    }
}
    fclose(vec1);
    fclose(vec2);
    return 0;
}