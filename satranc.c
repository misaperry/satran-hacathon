#include <stdio.h>
#include <string.h>


int main()
{
   int uzun,i,j,a,atlsa,indis;
   char harfler[]="abcdefghijklmnopqrstuvwxyz";
   char sayilar[]="0123456789";
   char buyuk_harfler[]="ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char dizi[50];
   printf("Lutfen sifrelenecek metni gir:");
   scanf("%s",&dizi);
   gel:
   printf("Lutfen atlama sayisini gir:");
   scanf("%d",&atlsa);
   if(atlsa>20 || atlsa<1){
    printf("GECERSIZ SAYI\n");
    goto gel;
   }
   uzun=strlen(dizi);

   printf("Sifreli Kod:");
    for(i=0;i<uzun;i++){
        for(j=0;j<26;j++){
            if(dizi[i]==harfler[j]){
                indis=(j+atlsa)%26;
                printf("%c",harfler[indis]);
            }
            else if(dizi[i]==buyuk_harfler[j]){
                indis=(j+atlsa)%26;
                printf("%c",buyuk_harfler[indis]);

            }
      }
            for(a=0;a<10;a++){
             if(dizi[i]==sayilar[a]){
               indis=(a+atlsa)%10;
               printf("%c",sayilar[indis]);
        }
      }
    }

     printf("\n");
     printf("Sifresi Cozulmus Kod:");
     scanf("%s",&dizi);
     uzun=strlen(dizi);
      for(i=0;i<uzun;i++){
        for(j=0;j<26;j++){
            if(dizi[i]==harfler[j]){
                indis=(j-atlsa)%26;
                printf("%c",harfler[indis]);}
            else if(dizi[i]==buyuk_harfler[j]){
                indis=(j-atlsa)%26;
                printf("%c",buyuk_harfler[indis]);}
            
        }
         for(a=0;a<10;a++){
             if(dizi[i]==sayilar[a]){
               indis=(a-atlsa)%10;
               printf("%c",sayilar[indis]);
        }
      }
    }
    return 0;
     }