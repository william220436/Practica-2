#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

int main(){
	srand(time(0));
	int resp1, resp2, resp3, resp4, carta1, carta2, carta3, suma, pc, pc_num;
	for(;;){
		carta1=1+rand()%(14-1+1);
		carta2=1+rand()%(14-1+1);
		if(carta1==1||carta1==11||carta1==12||carta1==13||carta1==14){
			if(carta1==1||carta1==11){
				printf("La carta 1 es: A\n");
				printf("Que numero quieres 1 o 11?\n");
				scanf("%i", &resp2);
				if(resp2==1){
					carta1=1;
				}
				if(resp2==11){
					carta1=11;
				}
			}
			if(carta1==12){
				carta1=10;
				printf("La carta 1 es: J\n");
			}
			if(carta1==13){
				carta1=10;
				printf("La carta 1 es: Q\n");
			}
			if(carta1==14){
				carta1=10;
				printf("La carta 1 es: K\n");
			}
		}
		else{
			printf("La carta 1 es: %i", carta1);
			printf("\n");
		}
		if(carta2==1||carta2==11||carta2==12||carta2==13||carta2==14){
			if(carta2==1||carta2==11){
				printf("La carta 2 es: A\n");
				printf("Que numero quieres 1 o 11?\n");
				scanf("%i", &resp3);
				if(resp3==1){
					carta2=1;
				}
				if(resp3==11){
					carta2=11;
				}
			}
			if(carta2==12){
				carta2=10;
				printf("La carta 2 es: J\n");
			}
			if(carta2==13){
				carta1=10;
				printf("La carta2 es: Q\n");
			}
			if(carta2==14){
				carta2=10;
				printf("La carta 2 es: K\n");
			}
		}
		else{
			printf("La carta 2 es: %i", carta2);
			printf("\n");
		}
		suma=carta1+carta2;
		printf("Tu suma es: %i", suma);
		printf("\n");
		if(suma==21){
			printf("Has ganado!! \n\n");
			resp1=2;
		}
		if(suma>21){
			printf("Has perdido, tu suma es mayor a 21: %i", suma);
			resp1=2;
			}
		if(suma<21){
			printf("\nQuieres otra carta? \n");
			printf("1->Si ..... 2->No \n");
			scanf("%i", &resp1);
		}
		while(resp1!=2){
			printf("\n\n");
			carta3=1+rand()%(14-1+1);
			if(carta3==1||carta3==11||carta3==12||carta3==13||carta3==14){
				if(carta3==1||carta3==11){
					printf("La carta 3 es: A\n");
					printf("Que numero quieres 1 o 11?\n");
					scanf("%i", &resp4);
					if(resp4==1){
						carta3=1;
					}
					if(resp4==11){
						carta3=11;
					}
				}
				if(carta3==12){
					carta3=10;
					printf("La carta 3 es: J\n");
				}
				if(carta3==13){
					carta3=10;
					printf("La carta 3 es: Q\n");
				}
				if(carta3==14){
					carta3=10;
					printf("La carta 3 es: K\n");
				}
			}
			else{
				printf("La carta es: %i", carta3);
				printf("\n");
			}
			suma=suma+carta3;
			printf("\n");
			printf("Tu suma es: %i", suma);
			printf("\n");	
			if(suma>21){
				printf("Has perdido, tu suma es mayor a 21: %i", suma);
				resp1=2;
			}
			else{
				printf("\nQuieres otra carta? \n");
				printf("1->Si ..... 2->No \n");
				scanf("%i", &resp1);
			}
		}
		break;
	}
       pc = (rand()%7)+1;
       pc_num = pc + 16;
       //COMPROBAR QUE EL JUGARDOR1 TENGA MENOS DE 21
       if(pc_num>21){
            printf("PUNTAJE JUGADOR: %d\nPUNTAJE PC: %d\n",suma,pc_num);
            printf("HA GANADO EL JUEGO!\n\n");
        }
       else if(suma<=21){
        	if(suma>pc_num){
                printf("PUNTAJE JUGADOR: %d\nPUNTAJE PC: %d\n",suma,pc_num);
                printf("HA GANADO EL JUEGO!\n\n");
                }
            if(suma==pc_num){
                printf("PUNTAJE JUGADOR: %d\nPUNTAJE PC: %d\n",suma,pc_num);
                printf("JUEGO EMPATADO!!\n\n");
            }
            if(suma<pc_num){
                printf("PUNTAJE JUGADOR: %d\nPUNTAJE PC: %d\n",suma,pc_num);
                printf("HA PERDIDO EL JUEGO!\n\n");
            }
    	}	
	return 0;
}
