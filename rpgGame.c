//Contributors
//G. Poppe
//


#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

int randomString(void);

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
					puts("you open the door and find a mysterious man saying: 'Wendy, darling, Light of my Life! I'm not gonna hurt ya \n");
					puts("He looks at you menancingly and starts to run to you with a knife, there are multiple doors behind you which door do you pick? \n you may quit anytime by selecting option:99");
					scanf("%d",&choice);
				}
				break;
			}
			case 4:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 5:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					puts("BOOM! arrow to the knee!");
					scanf("%d",&choice);
				}
				break;
			}
			case 6:
			{
				while(choice != 99)
				{

				}
				break;
			}
			case 7:
			{
				while(choice != 99)
				{

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
					puts("A sign that says hello world");
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
				while(choice != 99)
				{
					puts("Norville was here");
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
				while(choice != 99)
				{

				}
				break;
			}
			case 16:
			{
				while(choice != 99)
				{

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
					puts("you open the door and find ........");
					scanf("%d",&choice);
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
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}

			case 30:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
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
					puts("You are safe from the water, but strange strings start to attack. What do you do?");
					while(choice != 99)
					{
						int randStr;
						puts("1. Smack the string in the leftmost bit");
						puts("2. Kick the string in the rightmost bit");
						puts("99. Exit Room");
						scanf("%d", &choice);
						switch(choice)
						{
							case 1:
								randStr = randomString();
								printf("String %d approaches you and you smack it!\n", randStr);
								printf("The string is confused and altered to %d \n", randStr);
								break;
							case 2:
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

int randomString()
{
	char alphabet[] = "abcdefghihjlmkomqrstuv";
	int randSize = (rand() % 1) + 12;
	return randSize;
}
