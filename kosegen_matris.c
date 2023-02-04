#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// KÖŞEGEN MATRİS Oluştur(Satır ve Sütun Sayısı kesinlikle aynı)
// asal köşegen haricindeki her eleman 0
// 3 x 3 lük köşegen matris örneği aşağıdadır
/* 2 0 0
   0 3 0      
   0 0 5
*/

int main() 

{
    
  int i,j;  
  
  int ikiBoyutluDizi[5][5];
  
  srand(time(0));
  
 for(i = 0 ; i < 5 ; i++) 
 {                                          
     
  for(j = 0 ; j < 5 ; j++)  
  {
    if(i == j)
    {
     ikiBoyutluDizi[i][j] = 1 + rand()%9;  
    } 
      
    else
    {
     ikiBoyutluDizi[i][j] = 0; 
    }
  }                              
     
 }
 
 // ekrana yazdırılıyor
 for(i = 0 ; i < 5 ; i++) 
 {                                               
  for(j = 0 ; j < 5 ; j++)  
  {
   printf("%d ",ikiBoyutluDizi[i][j]);
  }
   printf("\n");
 }
 
 return 0;
  
}