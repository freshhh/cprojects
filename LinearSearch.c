#include<stdio.h>
#include<conio.h>


#define size 8
int  key,found,a[size],k, p, i;


void main(){
            found =0;

        for(i=0; i<size; i++){
          printf("Enter a number ");
          scanf("%d",&a[i]);
        }
        //clrscr();
        printf("Bip boop bop.......sorting\n");
        printf("What number should i search for? ");
        scanf("%d",&key);
        p=0;
        while(p < size){

          if(a[p] == key){
             found = 1;
             k = p;
             } else {
             found = 0;
             k = 0;
             }

             p++;
        }



        if(found == 1){
            printf("\n Element %d found at %d",key,k);
        } else {
        printf("\n We had no luck finding your element.");
        }

}
