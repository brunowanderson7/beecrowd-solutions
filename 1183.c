#include <stdio.h>

int main (){
	
	float M[12][12] = {}, S=0.0, med=0.0;
	char O = ' ';
	int l=0, j=0, cont=0;
	
	scanf("%c", &O);
	for(l = 0; l < 12; l ++){
		
		for(j = 0; j < 12; j ++){
			
			scanf("%f", &M[l][j]);
			if(j > l){
			
				S = (S + M[l][j]);
				cont ++;
			}
		}
	}
	
	
	if(O == 'S'){
		
		printf("%.1f\n", S);
	
	} else{
		
		med = (S/cont);
		printf("%.1f\n", med);
	
	}
	
	return 0;
}