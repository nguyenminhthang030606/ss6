#include <stdio.h>
   int main(){
   	int pass;
	while (pass!=6666 ){
		printf ("moi ban nhap mat khau: ");
		scanf ("%d",&pass);
		if (pass==6666){
			printf ("ban da nhap thanh cong!");
			break; 		
		}
		else{
			printf("moi ban nhap lai\n"); 
		} 
			
	}
	return 0; 
   } 
