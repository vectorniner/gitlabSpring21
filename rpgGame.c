#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

//void RollArray(int *arr);//LA
void hopScotchPrint(void);
void monikacase1(char yellowdecision[]);
void monikacase2(char reddecision[]);
char *randomString(char *p);

int main(int argc, char *argv[])
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;
	srand(time(NULL));
	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);

	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 40 doors, each labeled with a number. You are not sure how such a small room can have 40 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				while(choice != 99)
				{
					puts("Hello world");
					scanf("%d",&choice);

				}
				break;
			}
			case 2:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........ \n");
					puts("Watch out, look behind you, A Meeseeks is coming towarsds you.\n");
					scanf("%d",&choice);

				}
				break;
			}
			case 3:
			{
				while(choice != 99)
				{
					int choice2;
					puts("you open the door and find a mysterious man saying: 'Wendy, darling, Light of my Life! I'm not gonna hurt ya \n");
					puts("He looks at you menancingly and starts to run to you with a knife, there are multiple doors behind you and the door you came from. \n which door do you pick? \n you may quit anytime by selecting option:99");
					scanf("%d",&choice);
					
					switch(choice)
					{
						// case 1:
						// {
							

						// 		char a;
							
								
						// 		int DieArr[6];
								
						// 		for (i=0;i<6;i++)
						// 		{
						// 			DieArr[i] = 0;
						// 		}
								
						// 		puts("You stumble into a room, and a skeleton behind a counter and holds a die");
						// 		puts("He asks you with a hollow voice, Hi would you like to roll the dice? [Y]es or [N]o");
						// 		scanf("%c", &a);
								
						// 		if(a=='y')
						// 		{
						// 			RollArray(DieArr);
									
						// 			for (i=0;i<6;i++)
						// 			{
						// 				printf("%d = %d\n", i+1 , DieArr);
						// 			}
						// 		}
								


								
							
						// 	break;
						// }
						case 2:
						{
							while(choice != 99)
							{
								
							}
							break;
						}
						
					}
					
					
				}
				break;
			}
			case 4:
			{
				while(choice != 99)
				{
					puts("My room no 4. you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 5:
			{
				while(choice != 99)
				{
					puts("you open the door slowly, you hear a click in the distance:");
					puts("Do you close the door or open it fast? Type 1 for open and 2 for close.");
					scanf("%d",&choice);

					switch(choice)
					{
						case 1:
						{
							puts("you get hit with an arrow in the knee!");
							break;
						}	

						case 2:
						{
							puts("you hear an arrow hit the door");
							break;
						}
					}
				}
				break;
			}
			case 6:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					puts("hello world.");
					scanf("%d", &choice);
				}
				break;
			}
			case 7:
			{
				while(choice != 99)
				{
					puts("This is the 7th door\n");
					scanf("%d", &choice);

				}
				break;
			}
			case 8:
			{
				while(choice != 99)
				{
					puts("The door creaks open and you find yourself in a field of lavendar spider lillies. A gentle breeze gently stirs your hair.\n");
					puts("While scanning your surroundings, you glance over your shoulder to find that the door you came in with is suddenly gone.\n");
					puts("Wait. How is the door - /n");
					puts(" 'Hey! Dingus!! Move aside!!' /n");
					puts("You feel something whap the side of your shin - recoiling, you see the small source of the gruff voice.\n");
					puts("Not sure of anything anymore, you move aside for the offending chicken and his cohorts of small capybaras. They seem to be in a sort of military precession.\n");
					puts("What on earth do you do?\n");
					scanf("%d",&choice);
				}
				break;
			}
			case 9:
			{
				while(choice != 99)
				{
					puts("cl");
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 10:
			{
				while(choice != 99)
				{
					int i, j, n=10;

    					for(i=n/2; i<=n; i+=2)
 					{
        					for(j=1; j<n-i; j+=2)
        					{
            						printf(" ");
       						}

        					for(j=1; j<=i; j++)
        					{
            						printf("*");
        					}

        					for(j=1; j<=n-i; j++)
        					{
            						printf(" ");
        					}
	
        					for(j=1; j<=i; j++)
        					{
            						printf("*");
        					}

        					printf("\n");
    					}

    					for(i=n; i>=1; i--)
    					{
        					for(j=i; j<n; j++)
        					{
            						printf(" ");
        					}

        					for(j=1; j<=(i*2)-1; j++)
        					{
            						printf("*");
        					}

        						printf("\n");
   					}
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 11:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					puts("3 closed doors");
					printf("The first door is made of rock with cracks that seem to have orange lava flowing from them and fire comming out from the edges");
					printf("The second door seems to be an ornage rock door with vines covering it and light bleeding from the edges with mist flowing from underneath");
					printf("The final door seems to be an ordinary old wooden door of a broom closet");
					printf("Which door will you choose?");
					printf("1 for the fire door");
					printf("2 for the mysterious glowing door");
					printf("3 for the broom closet");
					scanf("%d",&choice);
				}
				break;
			}
			case 12:
			{
				while(choice != 99)
				{

				}
				break;
			}
			case 13:
			{
				// Norville Amao
				while(choice != 99)
				{
					char name[20];
					int race = 5;

					puts("\nCHARACTER CREATION");
					puts("Enter your name:");
					scanf("%s",name);

					while(race == 5){
						puts("\nChoose your race");
						puts("1 - human");
						puts("2 - elf");
						puts("3 - ilvyr");
						puts("4 - ferren");
						puts("5 - race information");
						scanf("%d",&race);
					
						if(race == 5){
							puts("\nTHE RACES OF HABREN");
							puts("HUMANS");
							puts("Known as Goddess's favorite. The most prosperous of all the races.");
							puts("ELVES");
							puts("The racial offpsring of ilvyrs and humans. They often live underground, opposite of their ilvyr ancestors.");
							puts("ILVYRS");
							puts("A race of fallen angels who have succumbed to the sin of pride. Identified by their pointed ears and white bird-like wings.");
							puts("FERRENS");
							puts("Often mistaken as humans. They are identified by their towering heights, especially those of their women.");
						}
					}

					puts("\nType 99 to quit");
					scanf("%d",&choice);
				}
				break;
			}
			case 14:
			{
				while(choice != 99)
				{

				}
				break;
			}
			case 15:
			{
				while (choice != 99)
				{
					char yellowdecision[2];
					char reddecision[2];

					puts("Choose a path:\n 1 (yellow)\n 2 (red)\n 3 (green)\n");
					scanf("%d", &choice);

					switch (choice)
					{
						case 1:
						{
							monikacase1(yellowdecision);
							break;
						}
						case 2:
						{
							monikacase2(reddecision);
							break;
						}
						case 3:
						{
							puts("green");
							puts("exit (99)");
							scanf("%d", &choice);

							break;
						}
					}
				}
			}
			case 16:
			{
				while(choice != 99)
				{
					puts("The room is dark and cold");
					puts("You look at the empty room with empty Shelves..");
					puts("You think to yourself, there's nothing of value in here..");
					puts("What should you do?");
					puts("1. Move and advance to the next room");
					puts("2. Examine the room a little more carefully");
					puts("3. Go back to the last room");
					scanf("%d", &choice);

					if(choice == 1)
					{
						puts("You go towards the door, but the handle is locked..");
						puts("*Maybe you should examine the room..");
						break;
					}

					else if(choice == 2)
					{
						puts("You look at the very top of the shelf and find a old brass key");
						break;
					}
					
					else if(choice = 3)
					{
						puts("You back out slowly towards the previous room... but it's locked!");
					}

					else
					{
						puts("Try again");
					}
				}
				break;
			}
			case 17:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 18:			
			{
				while(choice != 99)
				{
					puts("you open the door and find ....");
					printf("A expansive candlelit cavern; in the center is  a wizen, old wizard shuffling cards at a card table.");
					scanf("%d",&choice);
				}
				break;
			}
			case 19:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					puts("a computer science goblin student !");
					scanf("%d",&choice);
				}
				break;
			}
			case 20:
			{
				while(choice != 99)
				{
					puts("There is a noise in the distance but you can't quite make out what it is");
					puts("1.Do you open the door that us 50 feet in front of you or..");
					puts("2. Do you simply stand there and see if the noise gets clearer on it's own?");
					puts("3. You see an old, oriental gentleman in the corner which is lit up by a torch. Do you approach him?");
					scanf("%d",&choice);
					
					switch(choice)
					{
						case 1:
						{
							puts("You open the door and actually find out the noise is just Naked in the Rain by the Red Hot Chili Peppers playing on a radio");
							break;
						}

						case 2:
						{
							puts("The floor fails and you through it into the void");
							break;
						}

						case 3:
						{
							int i, n;
							float num[10], sum = 0.0, avg;
							puts("The gentleman welcomes you into the corner with the light and he asks you to give him some numbers");
							puts("However you find out that the old man cannot keep track of more than 10 values");
							printf("Enter the amount of numbers you want to make an average out of \n");
							scanf("%d",&n);

							while(n>10 || n<1)
							{
								printf("Error! Keep it between 1 and 10 values. \n");
								printf("Enter the amoount of numbers you want to average: ");
								scanf("%d",&n);
							}

							for(i=0;i<n;++i)
							{
								printf("%d. Enter number: ",i+1);
								scanf("%f",&num[i]);
								sum += num[i];
							}

							avg = sum /n;
							printf("Average = %.2f \n", avg);
						}
					}
				}
				break;
			}
			case 21:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 22:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 23:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					puts("another door blocking the door");
					scanf("%d",&choice);
				}
				break;
			}
			case 24:
			{
				while(choice != 99)
				{
					puts("Hello World");
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 25:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					puts("You are in a small dark room");
					puts("You start to hear noises but cannot see what it is");
					puts("You panic and start running for your life");
					scanf("%d",&choice);
				}
				break;
			}
			case 26:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 27:
			{
				while(choice != 99)
				{
					puts("hello world");
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 28:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}

			case 29:
			{
				while(choice != 99)
				{
					puts("This is Sean.");
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}

			case 30://Markease's room of "why did you do this?"
		       	{
			while(choice != 99)
			{
				puts("you open the door and find ........");
				puts("Some guy screaming hello world. You panic and press 99!");
				scanf("%d",&choice);
		       	}
			break;
																                }

			case 31:
			{
				while(choice != 99)
				{
					puts("you open the door and find a cow eating a hot pocket.");
					scanf("%d",&choice);
				}
				break;
			}

			case 32:
			{
				while(choice != 99)
				{
					puts("You are safe from the water, but strange random strings start to attack. What do you do?");
					while(choice != 99)
					{
						char *ptr;
						char randStr[11] = "";
						puts("1. Smack the string in the leftmost bit");
						puts("2. Kick the string in the rightmost bit");
						puts("99. Exit Room");
						scanf("%d", &choice);
						switch(choice)
						{
							case 1:
								ptr = randomString(randStr);
								printf("String %s approaches you and you smack it!\n", ptr);
								printf("The string is confused and altered to %s \n", ptr);
								break;
							case 2:
								break;
							case 99:
								break;
							default:
								puts("You can't do that.");
								break;
						}
					}
				}
				break;
			}

			case 33:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 34:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 35:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 36:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 37:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 38:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 39:
			{
				while(choice != 99)
				{
					printf("Hello World");
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 40:
			{
				while(choice != 99)
				{
					puts("You open the door and close it behind you.");
					puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
					puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
					puts("At this point you have 3 choices:");
					puts("1. Examine the skeleton.");
					puts("2. Proceed further ahead in the cave.");
					puts("3. Enter the door to your right.");
					scanf("%d",&choice);
					if(choice == 1)
					{
						puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
						puts("To be continued...");
						break;
					}
					else if(choice == 2)
					{
						puts("You find yourself further ahead in the cave.");
						puts("To be continued....");
						break;
					}
					else if(choice == 3)
					{
						puts("You enter the and close the door behind you.");
						printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                                puts("To be continued....");
						break;
					}
					else
					{
						puts("wrong choice");
					}
				}
				break;




			}
		}	
	}
	return EXIT_SUCCESS;
}

// void RollArray(int *arr)//LA
// {
// 	int i;
// 	int y;
// 	int *ptr;
// 	ptr = arr;
	
// 	for (i=0;i<1;i++)
// 	{
// 		y= rand()%6;
// 		*(arr+y) = *(arr+y)+1;
// 		arr=ptr;
// 	}
// }



void hopScotchPrint()
{
	puts("       ______       ");
	puts("      |   1  |      ");
	puts(" _____|______|_____ ");
	puts("|  2  |   3  |  4  |");
	puts("|_____|______|_____|");
	puts("      |   5  |      ");
	puts(" _____|______|_____ ");
	puts("|  6  |   7  |  8  |");
	puts("|_____|______|_____|");
	puts("      |   9  |      ");
	puts("      |______|      ");
	puts("      |  10  |      ");
	puts("      |______|      \n");

	puts("do you want to play with it?\ny or n\n");
}

void monikacase1(char yellowdecision[])
{
	puts("You chose the yellow path, as you walk you see a hop scotch drawn on the floor\n");
	hopScotchPrint();
	scanf(" %s", yellowdecision);
	//prints hopscotch

	if (strcmp(yellowdecision, "y") == 0)
	//if its equal to each other
	//0 = true, !0 == false
	{
		int jumps = 0;
		int i = 0;
		char anotherRoll[2];
		srand(time(NULL));

		int yellowTries = 0;
		while (jumps != 6)
		{
			yellowTries++;
			if (yellowTries > 2)
			{
				puts("\nYou ran out of attempts, good bye\n");
				break;
			}
			//left off in trying to create limit of attempts but it doesnt work
			//try to fix when possible

			//create a dice that goes
			//from 1-6 for the amount of spaces the person jumps

			puts("You stand infront of the first box, and you find a 6 sided die\nnext to the die theres a note that says to roll the die in order to jump.\nDo you want to roll again? (y or n)\n");
			scanf(" %s", anotherRoll);
			//while the choices are wrong, do the below
			//but if its right it will exit and move forward

			if (strcmp(anotherRoll, "y") == 0)
			{
				jumps = (rand() % 6) + 1;
				//printf("Random : %d\n", jumps);
				//above prints one int
				if (jumps != 6)
				{
					printf("You got %d from the die, it wasnt enough to go to the other side, re-roll.\n", jumps);
				}
				else
				{
					printf("You got %d, you can pass\n", jumps);
					break;
				}
			}
		}
	}

	else if (strcmp(yellowdecision, "n") == 0)
	{
		printf("Youre taken back to your previous path\n");
	}
}

void monikacase2(char reddecision[])
{
	char key[20], usertry[50], pressF[2];
	FILE *monikaoutput, *Deciphered;
	monikaoutput = fopen("output.txt", "w");
	Deciphered = fopen("Deciphered.txt", "r");

	puts("Youve chosen the red road, and you see a blue tunnel. You enter and you\nsee a wall with a code pad on it, its asking if you\nwant to see the prompt to move forward. Do you say yes or no? (y or n)\n");
	scanf(" %c", reddecision);
	//create a text thing where we show the user the file and we make them
	//deciper the code and if its right they will move forward
	int keepLooping = 1;
	while (strcmp(reddecision, "y") == 0 && keepLooping == 1)
	{
		printf("\nDecipher the following text: \nOnce you have an answer, input it below\n");
		puts("\n71 97 114 114 101 116 116 66 108 117 80 111 112 112 101\n"); //text file to decipher
		puts("Need a hint? Ask the key\n");
		scanf(" %s", usertry);
		//if yes then we will prompt the text and ask to deciper

		fscanf(Deciphered, " %s", key);
		if (strcmp(usertry, key) == 0) //check if the same then continue
		{
			puts("user try worked\n");
			puts("You can see your previous attempts in the output.txt file\n");
			keepLooping = 0;
		}
		else
		{
			fprintf(monikaoutput, "Failed Attempt: %s\n", usertry);
		}
		//im trying to compare user input with a key txt file I have
		//then print the key file answer and say it was correct
		//if its correct then it will move forward

		//i was able to compare the user input to contents inside
		fprintf(monikaoutput, "\n");
	}
		rewind(monikaoutput);
		fclose(monikaoutput);

		if (strcmp(reddecision, "n") == 0)
		{
			puts("You said no\n");

			puts("You tried going back to the entrance and fell through a dirt hole and died, press f to pay respects\n");
			scanf(" %c", pressF);

			if (strcmp(pressF, "f") == 0)
			{
				exit(1);
			}
			else
			{
				puts("fine then, dont pay respects\n");
				exit(1);
			}
		}
}

char *randomString(char *p)
{
	int randLine = rand() % 100;
	int i = 0;
	FILE *rfPtr;

	if((rfPtr = fopen("randomStrings.txt", "r")) == NULL)
	{
		puts("File could not be opened.");
	}
	else
	{
		while(fgets(p, 11, rfPtr) != NULL)
		{
			if(i == randLine)
			{
				fclose(rfPtr);
				return p;
			}
			else
			{
				i++;
			}
		}
		fclose(rfPtr);
	}
	return 0;
}
