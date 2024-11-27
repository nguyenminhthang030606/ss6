#include <stdio.h> 

int main() {
    int number;
    int chan;
	int le; 
    printf("moi nhap nam so nguyen\n");
    for (int i = 1; i <= 5; i++) {
        scanf("%d", &number);
        if (number % 2 == 0) {
            chan++; 
        }else{
        	le++;
		} 
		     
    }
    printf ("tong so chan la :%d\n",chan);
    printf("tong so le la: %d\n", le);
    return 0;
}

