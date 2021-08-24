/*##########################
  ###                    ###
  ###     Author: S.B.   ###
  ###                    ###
  ##########################*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void bonus();
int optiune;
int zahar;
int numar=0;


void main()
{
	while (5) {

		system("cls");

		printf("\n\n\tAparat de cafea KIMBO");
		printf("\n--------------------------------------------");

		printf("\n\n 1. Espresso");             printf("\t\t5. Lapte Machiato");
		printf("\n 2. Espresso Dubla");         printf("\t6. Capuccino");
		printf("\n 3. Mocha");                  printf("\t\t7. Ceai");
		printf("\n 4. Americano");              printf("\t\t8. Ciocolata calda");
		printf("\n\n\t  9. Bonus Extra");
		printf("\n\n Ce doriti sa serviti ? ");  scanf_s("%d", &optiune);


		switch (optiune)
		{
		case 1: printf("\n\n\tCat zahar doriti 0...1...2...3 ? "); scanf_s("%d", &zahar);

			printf("\n\n In cateva clipe Espresso va fi gata ... ");
			printf("\n .........................................");
			printf("\n .........................................");
			printf("\n .........................................");
			printf("\n\n\t\t Finisat !!!");
			break;

		case 2: printf("\n\n\tCat zahar doriti 0...1...2...3 ? "); scanf_s("%d", &zahar);

			printf("\n\n In cateva clipe Espresso Dubla va fi gata ... ");
			printf("\n ...............................................");
			printf("\n ...............................................");
			printf("\n ...............................................");
			printf("\n\n\t\t Finisat !!!");
			break;

		case 3: printf("\n\n\t Cat zahar doriti 0...1...2...3 ? "); scanf_s("%d", &zahar);

			printf("\n\n In cateva clipe Mocha va fi gata ... ");
			printf("\n ......................................");
			printf("\n ......................................");
			printf("\n ......................................");
			printf("\n\n\t\t Finisat !!!");
			break;

		case 4: printf("\n\n\tCat zahar doriti 0...1...2...3 ? "); scanf_s("%d", &zahar);

			printf("\n\n In cateva clipe Americano va fi gata ... ");
			printf("\n .........................................");
			printf("\n .........................................");
			printf("\n .........................................");
			printf("\n\n\t\t Finisat !!!");
			break;

		case 5: printf("\n\n\tCat zahar doriti 0...1...2...3 ? "); scanf_s("%d", &zahar);

			printf("\n\n In cateva clipe Laptele Machiato va fi gata ... ");
			printf("\n ...............................................");
			printf("\n ...............................................");
			printf("\n ...............................................");
			printf("\n\n\t\t Finisat !!!");
			break;

		case 6: printf("\n\n\tCat zahar doriti 0...1...2...3 ? "); scanf_s("%d", &zahar);

			printf("\n\n In cateva clipe Capuccino va fi gata ... ");
			printf("\n ..........................................");
			printf("\n ..........................................");
			printf("\n ..........................................");
			printf("\n\n\t\t Finisat !!!");
			break;

		case 7: printf("\n\n\tCat zahar doriti 0...1...2...3 ? "); scanf_s("%d", &zahar);

			printf("\n\n In cateva clipe Ceaiul va fi gata ... ");
			printf("\n .....................................");
			printf("\n .....................................");
			printf("\n .....................................");
			printf("\n\n\t\t Finisat !!!");
			break;

		case 8:
			printf("\n\n In cateva clipe Ciocolata Calda va fi gata ... ");
			printf("\n ................................................");
			printf("\n ................................................");
			printf("\n ................................................");
			printf("\n\n\t\t Finisata !!!");
			break;

			
		case 9:
			

			printf("\n\n 1. Coniac ");
			printf("\n\n 2. Vodka ");
			while (numar != 3, 4)
			{
			printf("\n\n 3. Muraturi");
			printf("\n\n 4. Lamaie");
			
			
			
				printf("\n\n Alegeti optiunea: "); scanf_s("%d", &numar);

			
			if (numar == 1)
			{
				printf("\n\n Se toarna Coniac 100 gr ....");
				printf("\n ..............................");
				printf("\n ..............................");
				printf("\n ..............................");
				printf("\n\n\t\t Ridicati Paharul!!!");

			}
			if (numar == 2)
			{
				printf("\n\n Se toarna Vodka 100 gr ....");
				printf("\n .............................");
				printf("\n .............................");
				printf("\n .............................");
				printf("\n\n\t\t Ridicati Paharul!!!");

			}
			if (numar == 3)
			{
				printf("\n\n Se pregatesc muraturile ....");
				printf("\n ..............................");
				printf("\n ..............................");
				printf("\n ..............................");
				printf("\n\n\t\t Finisat");
				break;
			}
			if (numar == 4)
			{
				printf("\n\n Se pregateste Lamaia ....");
				printf("\n ...........................");
				printf("\n ...........................");
				printf("\n ...........................");
				printf("\n\n\t\t Finisat");
				break;
			}
          }
			printf("\n\n\n\t#####################################");
			printf("\n\t#    Hai noroc si voie buna !!!     #");
			printf("\n\t#####################################");
			break;


		default: printf("\n\nAti tastat un buton necorespunzator!");


}

         printf("\n\n\n\t#####################################");
         printf("\n\t# Multumim!!! Serviti cu placere!!! #");
         printf("\n\t#####################################");
  
		


		_getch();
	}
}
