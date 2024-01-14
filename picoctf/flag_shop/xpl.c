#include <stdio.h>
#include <stdlib.h>

int main() { 

	int total_cost;
	int number_flags = 2;
	int account_balance = 1100;
	
	while(1) { 
		total_cost = 900*number_flags;
		//printf("\nThe final cost is: %d\n", total_cost);
		
		if(total_cost <= account_balance){
			if(account_balance - total_cost >=100000) { 
				printf("Este é o numero correto de bandeiras para que o OverFlow seja lançado: %d\n",number_flags);
				return(0);
			}
			//quando colocamos um numero absurdo de numero de bandeiras, o store.c vai fazer a seguinte operação:
			// account_balance = account_balance - total_cost
			//Mas o total_cost será um numero negativo,ou seja, - (-total_cost),fazendo virar uma soma de um valor grande pa porra
		}
		number_flags++;
	}
	return(0);
}
