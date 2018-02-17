#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	char array[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3;j++){
			array[i][j] = ' ';
		}
	}

	while(true){


		// i = row
		// j = column
		printf("    1    2    3\n");
		for(int i = 0; i < 3; i++){
			printf("%i ",i+1);
			for(int j = 0; j < 3;j++){
				printf("[ %c ]", array[i][j]);
			}
		printf("\n");
		}

		int x;
		int y;
		printf("Enter a column number: ");
		scanf("%i", &y);
		printf("Enter a row number: ");
		scanf("%i", &x);
		//printf("You entered row number of: %i\nYou entered a column number of: %i\n", x, y);
		x -= 1;
		y -= 1;

		if(array[x][y] == ' '){
			array[x][y] = 'X';
			int pick1 = rand()%3;
			int pick2 = rand()%3;
			if(array[x][y] == array[pick1][pick2]){
				pick1 = rand()%3;
				pick2 = rand()%3;
				array[pick1][pick2] = '0';
				printf("AI picked row number of: %i\nAI picked column number of: %i\n", (pick1+1), (pick2+1));
			}
			else{
				array[pick1][pick2] = '0';
				printf("AI picked : %i %i\n", (pick1+1), (pick2+1));
			}
		}
		else{
			printf("Please try again. Enter a new number: ");
			scanf("%i %i", &x,&y);
			continue;
		}

		// left to right slash downwards
		if(array[0][0] == 'X' && array[1][1] == 'X' && array[2][2] == 'X'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou win!\n");
			return 0;
		}
		if(array[0][0] == '0' && array[1][1] == '0' && array[2][2] == '0'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou lose!\n");
			return 0;
		}

		// left to right slash upwards
		if(array[2][0] == 'X' && array[1][1] == 'X' && array[0][2] == 'X'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou win!\n");
			return 0;
		}
		if(array[2][0] == '0' && array[1][1] == '0' && array[0][2] == '0'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou lose!\n");
			return 0;
		}

		// top left to right
		if(array[0][0] == 'X' && array[0][1] == 'X' && array[0][2] == 'X'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou win!\n");
			return 0;
		}
		if(array[0][0] == '0' && array[0][1] == '0' && array[0][2] == '0'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou lose!\n");
			return 0;
		}

		// middle left to right
		if(array[1][0] == 'X' && array[1][1] == 'X' && array[1][2] == 'X'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou win!\n");
			return 0;
		}
		if(array[1][0] == '0' && array[1][1] == '0' && array[1][2] == '0'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou lose!\n");
			return 0;
		}

		// bottom left to right
		if(array[2][0] == 'X' && array[2][1] == 'X' && array[2][2] == 'X'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou win!\n");
			return 0;
		}
		if(array[2][0] == '0' && array[2][1] == '0' && array[2][2] == '0'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou lose!\n");
			return 0;
		}

		// left side down
		if(array[0][0] == 'X' && array[1][0] == 'X' && array[2][0] == 'X'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou win!\n");
			return 0;
		}
		if(array[0][0] == '0' && array[1][0] == '0' && array[2][0] == '0'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou lose!\n");
			return 0;
		}

		// middle side down
		if(array[0][1] == 'X' && array[1][1] == 'X' && array[2][1] == 'X'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou win!\n");
			return 0;
		}
		if(array[0][1] == '0' && array[1][1] == '0' && array[2][1] == '0'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou lose!\n");
			return 0;
		}

		// right side down
		if(array[0][2] == 'X' && array[1][2] == 'X' && array[2][2] == 'X'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou win!\n");
			return 0;
		}
		if(array[0][2] == '0' && array[1][2] == '0' && array[2][2] == '0'){
			for(int i = 0; i < 3; i++){
				printf("%i ",i+1);
				for(int j = 0; j < 3;j++){
					printf("[ %c ]", array[i][j]);
				}
			printf("\n");
			}
			printf("\tYou lose!\n");
			return 0;
		}

		// for checking if full
		int max = 0;

		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3;j++){
				if(array[i][j] == 'X')
					max++;
			}
		}

		if(max >= 9){
			return 0;
		}

	}

}