#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int saat,dakika,saniye;
	for(saat=13;saat<14;saat++){
		for(dakika=0;dakika<60;dakika++){
			for(saniye=1;saniye<60;saniye++){
				printf("\nSaat: %d : %d : %d", saat, dakika, saniye);
			}
		}
	}
	
	return 0;
}
