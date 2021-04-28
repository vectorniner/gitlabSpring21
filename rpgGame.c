//Contributors
//G. Poppe
//Meredith Quail


#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

void RollArray(int *arr);//LA

void mQhelpPrompt(void); //mquail
void mQhelpMenu(void); //mquail
void mQcontinue(void); //mquail
int mQuserInput(void); //mquail
int mQparser(void); //mquail
char uInput[100]; //mquail

int main(int argc, char *argv[])
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;

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
						case 1:
						{
							

								char a;
								
								srand(time(NULL));
								
								int DieArr[6];
								
								for (i=0;i<6;i++)
								{
									DieArr[i] = 0;
								}
								
								puts("You stumble into a room, and a skeleton behind a counter and holds a die");
								puts("He asks you with a hollow voice, Hi would you like to roll the dice? [Y]es or [N]o");
								scanf("%c", &a);
								
								if(a=='y')
								{
									RollArray(DieArr);
									
									for (i=0;i<6;i++)
									{
										printf("%d = %d\n", i+1 , DieArr);
									}
								}
								


								
							
							break;
						}
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
				// Declare Variables
				char *userEntry[256];
				char uYes[5] = "yes";
				char uNo[4] = "no";
				int gameLevel = 1;
				bool kitchen1Clear = false;
				bool lightsOn = false;
				
				while(choice != 99)
				{
					// Opening Narration
					puts("-------------------------------------------------------------------------------------------------------");
					puts("\nTwisting the knob and bracing your shoulder, you push against the heavy door with a strained grunt.\n");
					puts("It slams shut just as you weave your way through. The door is now sealed tightly behind you.\n");
					puts("A familiar grumble roils from deep within your gut.");
					puts("Before you conquer that hefty door again, you'll have to vanquish the hunger beast.\n");
					puts("Do you want to take a look around? (Type 'yes' or 'no') : \n");
					scanf("%s", *userEntry);
					
					// Type yes (replace later with a better method)
					if (strstr(*userEntry, uYes) != NULL)
					{
						puts("\nPatting your stomach in agreement, you decide that going on incredible adventures through other mysterious doors can wait.\n");
						puts("For now, you have to look around for some food. Eat first, think later.\n");
						mQcontinue();
					}

					// Type no
					else if (strstr(*userEntry, uNo) != NULL)
					{
						puts("\n...no?");
						puts("\nNO?????");
						printf("\noOOOooo OOO oo lookit me, I'm a silly little adventurer named %s! I dOnT nEeD To eAt!! i'M sO StROnG aN d ClEvEr AnD I'm nEvEr HuNgRYyyyYYH haAHAa heeHEEhoO\n\n", name);
						puts("You're about as dumb as a bowl of oats. Do you think you can open a heavily sealed door like this?\n");
						puts("When you're so hungry, you couldn't open a door twice?!\n");
						puts("Well, too bad - that door isn't budging, and you're looking around for some sustenance, whether you like it or not! Your stomach isn't giving you any other options here!\n");
						mQcontinue();
					}					
					
					// Level 1 : Kitchen
					if (gameLevel == 1)
					{
						mQhelpPrompt();
						mQhelpMenu();
						mQcontinue();
						
						if (kitchen1Clear == false)
						{
							// Lights Off
							if (lightsOn == false)
							{
								puts("----------------------------------------------------------------------------------------------------------------");
								puts("\nYou were so preoccupied with the door and your appetite that you hadn't noticed the room is completely dark.\n");
								puts("Fishing your phone out of your pocket, you swipe a few times to activate its flashlight. Suppose that will have to do, until you can get the lights working.\n");
								puts("You tentatively stretch a hand to the wall next to the door to check for a light switch - no dice.\n");
								puts("Sweeping the room with your cellphone light, you notice the stainless steel glint of a FRIDGE and FREEZER wedged into the right corner.\n");
								puts("You make out the red glow of a STOVE clock, blinking 00:00 steadily against the darkness.\n");

								//Parser Loop begins
								while (mQuserInput() && mQparser());
							}

							// Lights On
							else if (lightsOn == true)
							{
								puts("The stainless steel glint of a REFRIDGERATOR and FREEZER glints from the right corner.\n");
								puts("To the left of the freezer is an old combination STOVE and OVEN.\n");
								puts("A dirty SINK full of dishes connects to the counter space left of it, with a MICROWAVE on the counter space nearby.");
								puts("Some CABINETS lay half-open on rusted hinges above the sink space.\n");
								break;
							}
							
							//break?
						}
					}
				}
				break;
			} //case 8 ends
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
                    puts("Choose a path:\n 1 (yellow)\n 2 (red)\n 3 (green)\n");
					puts("Exit (99)");
                    scanf("%d", &choice);

                    switch(choice)
                    {
                        case 1:
                        {
                            puts("yellow");
                            puts("exit (99)");
                            scanf("%d", &choice);

                            break;
                        }
                        case 2:
                        {
                            puts("red");
                            puts("exit (99)");
                            scanf("%d", &choice);

                            break;
                        }
                        case 3:
                        {
                            puts("green");
                            puts("exit (99)");
                            scanf("%d", &choice);

                            break;
                        }
                        break;
                    }
				break;
				}
			}
			case 16:
			{
				while(choice != 99)
				{
					puts("hello world");
					puts("the door is stuck");
					scanf("%d", &choice);

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
					puts("you open the door and find a penny, chip, and used napkin.");
					scanf("%d",&choice);
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

void RollArray(int *arr)//LA
{
	int i;
	int y;
	int *ptr;
	ptr = arr;
	
	for (i=0;i<1;i++)
	{
		y= rand()%6;
		*(arr+y) = *(arr+y)+1;
		arr=ptr;
	}
}

void mQhelpPrompt(void)
{
	puts("-----------------------------------------------------------------------------------------");
	puts("Type 'help' at any time to see the Help menu, which has a list of commands you can use.\n");
	puts("-----------------------------------------------------------------------------------------");
}

void mQhelpMenu(void)
{
	puts("--------------------------------------------------------------------------------------------------");
	puts("Usable Commands: inv, go, look, use, and exit\n");
	puts("Type 'inv' to see your inventory");
	puts("Type 'go' followed by a location to move towards it");
	puts("Type 'look' followed by an object OR location to inspect it.");
	puts("Type 'use' to use an object from your inventory, OR obtain it and put it in your inventory.");
	puts("\nType 'exit' to leave the parser.");
	puts("'Any noun in capital letters - like THIS - can be used with commands (example: use KEY, look TABLE");
	puts("--------------------------------------------------------------------------------------------------");
}

void mQcontinue(void)
{
	printf("(Press 0 and Enter to continue)");
	fflush(stdout); //do I need this?
	while(getchar() != '0'){};
}

int mQuserInput(void)
{
	//fflush(stdout);
	printf("");
	printf("\n------> ");
	return fgets (uInput, sizeof(uInput), stdin ) != NULL;
}

int mQparser(void)
{
	char *word1 = strtok(uInput, " \n");
	char *word2 = strtok(NULL, " \n");

	if (word1 != NULL)
	{
		// command "exit"
		if (strcmp(word1, "exit") == 0)
		{
			puts("Insert clever start-over text here. Maybe a little 'are you sure you want to quit?' or whatever");
			return 0;
		}

		// command "help"
		else if (strcmp(word1, "help") == 0)
		{
			mQhelpMenu();
		}

		// command "inv"
		else if (strcmp(word1, "inv") == 0)
		{
			puts("The user only has 'updog' in their inventory.\n");
		}

		// command "look"
		else if (strcmp(word1, "look") == 0) 
		{
			// look stove 
			if (strcmp(word2, "STOVE") == 0 || strcmp(word2, "stove") == 0)
			{
				puts("\nThe user looks at the stove. The user loves a good stove. This one has electric burners though, so it's not a good stove. The user frowns and wishes they picked another student's door.");
			}

			// look fridge
			else if (strcmp(word2, "FRIDGE") == 0 || strcmp(word2, "fridge") == 0)
			{
				puts("\nThe fridge's stainless steel surface is littered with post it notes. You pick one up and angle your cell phone to read it.");
				puts("\n\n'If one more person eats my leftovers without permission, I will COMMMIT A FELONY. I MEAN IT!!!!!'");
				puts("\nFrowning, you turn it over to discover there's more written on the back.");
				puts("\n'Actually, you know what? YOU KNOW WHAT?! Eat them. Go on. I dare you. Eat all of it. I hope you choke on a piece and die in agony right here on my KITCHEN FLOOR. YOU SHOULD HAVE NEVER BEEN BORN. - J'");
				puts("\nYou find yourself wondering who the hell this 'J' is, and what made them upset enough to cover their refridgerator with passive aggressive post-its.");
			}

			// look freezer
			else if (strcmp(word2, "FREEZER") == 0 || strcmp(word2, "freezer") == 0)
			{
				puts("\nThe freezer's stainless steel surface is littered with post it notes. You pick one up and angle your cell phone to read it.");
				puts("\n'Jim, I swear to God, if you move the eggs again to put more post-it notes inside, I will buy the dollar store brand of BBQ sauce from now on. Do not try me, young man. - H'");
				puts("\nAnother post-it note is attached to the end of this one. It reads: ");
				puts("\n'I DO NOT FEAR DEATH OR DRY CHICKEN NUGGETS! I WILL NOT BE MANIPULATED BY THE SAUCE! \nI have an emergency stash of Sweet Baby Rays for just this occasion, anyway. -J'");
				puts("\nYou are baffled by just how much writing can fit on a post-it note. Your eyes are starting to hurt from squinting at all the tiny writing.\n");
			}
		}

		// command "go" - CONSIDER REMOVAL
		else if (strcmp(word1, "go") == 0) 
		{
			// go stove
			if (strcmp(word2, "STOVE") == 0 || strcmp(word2, "stove") == 0)
			{
				puts("\nThe user goes to the stove. Good job. You're at the stove. You did it. Wonderful.");
			}

			// go fridge
			else if (strcmp(word2, "FRIDGE") == 0 || strcmp(word2, "fridge") == 0)
			{
				puts("\nThe user approaches the fridge. The distance...it's still too much. You must get closer...");
				puts("\nThe user presses their cheek against the fridge, wrapping their arms around as far as they can reach.");
				puts("\nThe fridge does not hug you back, but you somehow feel a brief reprieve from your loneliness, nonetheless.");
			}

			// go freezer
			else if (strcmp(word2, "FREEZER") == 0 || strcmp(word2, "freezer") == 0)
			{
				puts("\nYou approach the freezer.");
				puts("\nYou think of a few cold-related puns, but you quickly banish them from your mind. Puns are the lowest form of comedy, of course, and you'd be a shameless wreck before you'd ever entertain one, even in your head.");
				puts("\nIf thought to yourself just now, 'Now, that's just cold...', you, in fact, did not. You didn't think anything at all. You don't think. Your head is empty. Go shove your stupid head full of puns in the freezer.");
			}
		}

		// command "use"
		else if (strcmp(word1, "use") == 0) 
		{
			// use stove
			if (strcmp(word2, "STOVE") == 0 || strcmp(word2, "stove") == 0)
			{
				puts("\nThe user uses the stove. The stove says 'get the hell out of my kitchen.' The user does not, in fact, get the hell out of the kitchen.");
			}

			// use fridge
			else if (strcmp(word2, "FRIDGE") == 0 || strcmp(word2, "fridge") == 0)
			{
				puts("\nYou pull gently on the fridge handle, and are greeted with its soft inner glow and a faint whiff of eggs and...old onions? Ugh.");
				puts("\nYou see a small bowl of LEFTOVERS, a bottle of Sweet Baby Ray's bbq SAUCE, and a can of Natural Light BEER. There are post-it notes on each.");
			}

			// use freezer
			else if (strcmp(word2, "FREEZER") == 0 || strcmp(word2, "freezer") == 0)
			{
				puts("\nThe user pulls swiftly against the hermetic seal of the freezer, and is met with a small puff of chilled air.");
				puts("\n...followed closely by a much stronger, more decidedly *pungent* whiff of egg.");
				puts("\nBlinking rapidly to ensure they aren't seeing things, the user realizes the entire fridge is full of decorated frozen easter eggs. A small post-it note on eye-level with the user reads: 'Little Jimmy's Easter Eggs, 1987. DO ***NOT*** THROW AWAY!!!'");
				puts("\nHorrified, the user sincerely wishes they had found a dead body instead.");
				puts("\nThere is an additional NOTE wedged in between the freezer wall and the awful, awful Egg Pile.");
			}

			// funny joke
			else if (strcmp(word2, "updog") == 0)
			{
				puts("\nNothin, what's up with you, man?\n");
				puts(" ( ͡° ͜ʖ ͡°) ");
				puts("...");
				puts("\nThis joke would have been better if I had figured out how to open a webpage to www.updog.com like I had originally planned.");
			}

		}
		
		// dumb parser
		else
		{
			printf("\nI have no idea how to %s, but knock yourself out.", word1);
		}

	}

	return 1;

}
