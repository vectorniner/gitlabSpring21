
//Contributors
//G. Poppe
//Meredith Quail



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

int RollArray(int arr[]);//LA
void Prt(int arr[]);//LA
void nV(char a[]);//LA
void BBGprnt();//LA
void BagTossed(int *arr);//lA
void TossBag(int *arr);//lA



char *randomString(char *p);

void mQhelpPrompt(void); //mquail
void mQhelpMenu(void); //mquail
void mQcontinue(void); //mquail
int mQuserInput(void); //mquail
int mQparser(void); //mquail
char uInput[100]; //mquail

void printIntroduction(void);																			 // Manuel Castaneda
void printRules(int rollsPerTurn, int pointsToLoose);							 // Manuel Castaneda
double averageM(int rolls[], int numberOfRolls);										 // Manuel Castaneda
double sumM(double sums[], int maxSums);														 // Manuel Castaneda
void printRollResults(int rolls[], int numberOfRolls, int isUser); // Manuel Castaneda


void play(void);//josue
// Talise
void printMessage(int msg[]);
void decodeMessage(char alphabet[], int codedMessage[], int *totalGuesses, int *wrong);
void userFate(int x);



//Monika
void monikawelcome(char name[]);
void monikacase1(char yellowdecision[]);
void monikacase2(char reddecision[]);
void monikacase3(char greenchoice[]);
//Monika




int main(int argc, char *argv[])
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;
	int sum = 0;
        int number;
        float average;
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
				int counter = 0;
				while(choice != 99)
				{
					puts("You open the door and found a lot of people jumping around");
          				puts("You are almost certain that you have found a hidden civilization");
          				puts("At this point it seems like you have three options");
          				puts("Every option you choose has a hidden value related to it..");
          				puts("Choose wisely to earn enough points to win this game!!");
          				puts("1. Talk to the poeple and figure out why is everyone jumping!!");
          				puts("2. Walk further down and explore the place");
          				puts("3. Go back into the door you came from and drown");
          				scanf("%d",&choice);
          				if (choice == 1)
          				{
            					puts("You talk to one of the elders and find out that a monster has threatened the city and everyone is panicking");
            					counter++;
            					counter++;

            					puts("The monster is a big red dragon that came upon the city to burn its lands");
            					printf("Once again.. You have 3 options.\n1. You can fight with them\n2. You can run away\n3. You can have a random option be chosen for you.\n");
            					scanf("%d",&choice);
            					//switch statement
            					switch(choice)
            					{
              						case 1:
              						{
                						puts("GREAT!! You chose to fight!");
                						counter++;
                						counter++;
                						counter++;
                						break;
              						}
              						case 2:
              						{
                						puts("WOAH! You chose to be a coward! You do not deserve to play anymore.. GG");
                						counter--;
                						break;
              						}
              						case 3:
              						{
                					//random
      						 		choice = rand()%2 + 1;
                						if (choice == 1)
                						{
                  							puts("GREAT!! You chose to fight!");
                  							counter++;
                  							counter++;
                  							counter++;
                  							break;
                						}
                						if (choice == 2)
                						{
                  							puts("WOAH! You chose to be a coward! You do not deserve to play anymore.. GG");
                  							counter--;
                  							break;
								}
                						break;
              						}
            					}
            					break;
          				}
          				else if (choice == 2)
          				{
            					puts("You walk further down the street and you get amazed by how beautiful the city is");
            					puts("To be continued...");
            					counter++;
            					break;
          				}
          				else if (choice == 3)
          				{
            					puts("You opened the door and the water killed you");
            					counter++;
            					break;
          				}
          				else
          				{
            					puts("Wrong choice!!!");
          				}
				}
 				printf("Counter = %d. \n \n", counter);
				break;
			}
			case 2:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........ \n");
                                        puts("Watch out, look behind you, A Meeseeks is coming towarsds you.\n");
                                        puts("Hi I'm  Mr.Meeseeks look at me, waving hands around.\n");
                                        puts("Ask him for a request and he will complete it and disapear.\n");
                                        puts("What type of request would you want to make?\n");
                                        puts("1st choice is Meeseeks can take you to Blips\n");
                                        puts("2nd choice is you can join Morty and go on an Adventure\n");
                                        puts("3rd choice is go back through the door you came from\n");
                                        scanf("%d",&choice);

                                        if(choice == 1)
                                        {
                                                puts("Hi I'm Mr Meeseeks look at me.\n");
                                                puts("Okay are you ready to go to Blips?\n");
                                                puts("First you need Fleurbos.\n");
                                                puts("Please enter how many games you want to play.\n");
                                                scanf("%d", &x);

                                                puts("Enter the amount of Fleurbos that you will need for that game, one by one\n");
                                                for(y = 0; y < x; ++y)
                                                {
                                                        scanf("%d", &number);
                                                        sum = sum + number;
                                                }
                                                average = sum / y;

                                                printf("You will need an average of  %.2f Fleurbos, for your first time at Blips\n",average);

                                                return 0;
                                        }



                                        if(choice == 2)
                                        {

                                                int a,b,c,d;
                                                printf("Hey its Morty, hurry get in, Rick isn't watching, let go on a adventure\n");
                                                printf("How old are you by the way?\n");
                                                scanf("%d",&c);
                                                // int z = (rand()%10)+1;

                                                d = c;

                                                for(a = 1; a <= c; a++)
                                                {
                                                        for(b = 1; b < d; b++)

                                                                printf(" ");
                                                        d--;

                                                        for(b = 1; b <= 2 * a -1; b++)

                                                                printf("*");

                                                                printf("\n");

                                                }
											puts(" \n ");
                                                puts("Woooaaahhh get ready for Hyper Drive \n");
                                          return 0;
                                         }




                                        if(choice == 3)
                                        {
                                                puts("You have exited that room");
                                        }
                                        else
                                        {
                                                puts("Incorrect input, please selecte from the following choices, 1, 2, or 3.\n");
                                        }

                                        return 0;
                }
                    break;

            }
			case 3:
			{
				while(choice != 99)
				{
					
					puts("You open the door and find a mysterious man saying: \n'Wendy, darling, Light of my Life! I'm not gonna hurt ya \n");
					puts("He looks at you menancingly and starts to run to you with a knife, there are multiple doors behind you and the door you came from.\n ");
					puts("QUICK! which door do you pick?");
					puts("you may quit anytime by selecting option:99");
					
					scanf("%d",&choice);
					
					if(choice==1)
					{
						
						int DieArr[1]={0};
						int q,f=0,c=0;
						double l=0.00;
						printf("your average is %d \n", l);
						
						puts("You stumble into a room, and a skeleton behind a counter and holds a 6 sided die");
						puts("He asks you with a hollow voice, Hi would you like to roll the dice? you cannot leave the room without rolling 6 times.");
						puts("Depending on ur average you will get a prize or punishment");
						puts("[1] for Yes or [2] for No");
						scanf("%d",&x);
						
						if(x == 1)
						{
							
							for (i=0;i<6;i++)
							{
								q=RollArray(DieArr);	
								f=f+q;								
								Prt(DieArr);
							}
							l=f/(float)6; //average
							printf("your average is %lf \n", l);
							
							if (l<3)
							{
								puts("you will fall into the abyss once you exit this room");
								choice=99;
							}
							else if (l<4)
							{
								puts("I have looked at your name");
								nV(name);
								
							}
							else if (l<5)
							{
								puts("Good job");
							}
							else if (l<6)
							{
								puts("you will now exit the room");
								break;
							}
						}
						else
						{
							puts("Alright good bye");
							
						}
						
						puts("You turn around and go back outside");
						puts("ONCE AGAIN");
						
					}
					if(choice==2)
					{
						char pic[42];
						FILE *wptr;
						wptr = fopen("squirrel.txt","w");
						
						FILE *rptr;
						rptr = fopen("pic.txt","r");
						puts("Enjoy a picture of a Camel");
						while(!feof(rptr))
						{
							if(rptr)
							{
								
								fscanf(rptr,"%s",pic);
								printf("%s \n",pic);
								fprintf(wptr,"%s \n",pic);
								
							}
						}
						
						fclose(wptr);
						fclose(rptr);
						
						puts("You turn around and go back outside");
						puts("ONCE AGAIN");
					}
					if (choice==3)
					{
						
						int holes[3];
						for (i=0;i<3;i++)
						{
							holes[i]=0;
						}
						
						puts("you are suddenly teleported outside and there you see an angled plank with 3 holes and 3 bags beside it\n");
						
						puts("a voice above asked if you want to play bean bag toss");

						puts("[1] for Yes or [2] for No");
						scanf("%d",&x);
						
						if (x==1)
						{
							puts("The voice above says: 'for you to win, you must put at least 2 bags into 2 of the 3 holes'");
							
							BBGprnt();
							TossBag(holes);
							BagTossed(holes);
							
							puts("now wasnt that fun?");
							puts("you can come back here whenever you want\n");
						}
						else
						{
							puts("Alright good bye");
						}
						
						puts("You turn around and go back outside");
						puts("ONCE AGAIN");
						
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
					FILE *wptr;
                    			wptr = fopen(argv[2], "w");
                    
                    			int totalGuesses = 0;
                    			int wrongGuesses = 0;
                    			int *totalPtr = &totalGuesses;
                    			int *wrongPtr = &wrongGuesses;
                    			char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'z', 'y', 'z', '\0'};
                    			int codedMessage[10] = {8, 5, 12, 12, 15, 23, 15, 18, 12, 4};
                    			char message[] = "Hello World";
                    
                    			puts("You open the door and walk inside the room.");
                    			puts("The door locks, and the only way out is to decode a message.");
                    
                    			printMessage(codedMessage);
                    			decodeMessage(alphabet, codedMessage, totalPtr, wrongPtr);
                    
                    			fprintf(wptr, "Total Guesses: %d \nWrong Guesses: %d \nDecoded Message: %s \n", totalGuesses, wrongGuesses, message);
                    
                    			x = (rand() % (3 + 1 - 1) + 1);
                    			userFate(x);
                    
                    			for(i = 0; name[i] != '\0'; i++)
                    			{
                        			name[i] = toupper(name[i]);
                    			}
                    
                    			printf("That's all, %s \n", name);
                    
                    			scanf("%d", &choice);
				}
				break;
			}
			case 7:
			{
				while(choice != 99)
				{
					int rollDie;
					rollDie = rand()%9;

					puts("\n You open the door and all the water drains");
					puts("In front of you is another door, you look closely at writing on the wall and it says");
					puts("In order to open this doo you need to roll a random number 1-10");
					puts("If you roll the correct number the door will open");
					puts("What number will you choose? (99 will exit the program)");
					scanf("%d", &choice);

					if(choice == rollDie)
					{
						puts("Congrats the door is open");
					}
					else
					{
						puts("You lose");
						puts("Returning back to the main menu \n\n");
						break;
					}	

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
			{//Monika
				while(choice != 99)
				{
					char yellowdecision[2];
					char reddecision[2];
					char greenchoice[2];
					srand(time(NULL));
					monikawelcome(name);

					puts("You enter door 15 but you end up outside and see three colored paths\n");
					puts("Choose a path:\n 1 (yellow)\n 2 (red)\n 3 (green)\n");
					scanf("%d", &choice);

					switch(choice)
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
							monikacase3(greenchoice);
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
				
					
					puts("Welcome to Door 18\n");
					puts("'Have a seat...if you dare', beckons an old Wizened Man siting in the center of the cavern at a small card table.\n");
					printf("\n You can either (sit) down, (look) around, or (leave) back to where you came..like a coward. ");		
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
					int x=0;
					int y;
					int z=0;
					srand(time(NULL));
					puts("You have entered a chamber resembling the ruins of an Ancient Egyptian Temple ");
					puts("The door to your left shows signs of innocence");
					puts("while the door to your right emits a dark and powerful energy");
					puts("You see a dark figure in the distance");
					puts("He tosses a coin");
					for (i=0;i<1;i++)
					{
						y = rand()%2;
						if(y==1)
						{
							x++;
								puts("The coin lands on heads");
								puts("Fate has decided for you to choose the door to your left");
						}
						else
						{
						z++;
						puts("the coin lands on tails");
						puts("???: Fate has decide for you to walk through the door to your right ");
						}

					printf("???: %s would you ignore fate \n",name);
					puts("???: Pick a door?!");
					}

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
					int choice26 = 0;
					printf("you open the door and find a small room with a door on the other side and a desk with three USB drives equally spread apart, one gree, one blue, one red.\n");
					printf("You walk over to the desk and see a message above each USB...\n\n");

					do{
						printf("1) Inspect the Green USB.\n");
						printf("2) Inspect the Blue USB.\n");
						printf("3) Inspect the Red USB.\n");
						printf("4) Walk up to the door on the other side of the room.\n");
						printf("5) Leave the room and fall into the bottomless pit.\n");
						printf("Enter choice 1-4: ");
						scanf("%d", &choice26);

						switch(choice26)
						{
							case 1: printf("\nYou are now viewing the green USB\n\n");
								break;
							case 2: printf("\nYou are now viewing the blue USB\n\n");
								break;
							case 3: printf("\nYou are now viewing the red USB\n\n");
								break;
							case 4: printf("You walj over to the door and see a keypad lock on the door.\n\n");
								break;
						}
					}while(choice26 != 5);

					printf("\nChoose another room 1-40 or type 99 to exit the program.\n");
					scanf("%d",&choice);
				}
				break;
			}
			case 27:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					puts("Fantasy world with flying dragons, mystery mythic, magic and rescuing princess... Your dream adventure world! Oh look! The little fairy flew and welcomes you.");
					puts("Would you like to talk to it (yes=1 no=0)?");
					scanf("%d",&choice);

					if(choice == 1)
					{
						puts("You: Hey! How are you? This world seems pretty nic...");
						puts("Fairy: Shut up and give me ALL you've got!!");
						puts("You: Wait wha..?");
						scanf("%c", &name[0]);
						puts("Fairy: I need a MONEY!(pulls out of a knife).");
						puts("\nLooks like that wasn't clever choice.");
						puts("\t\t...YOU DIED....");
						break;
					}
					puts("Are you really going to ignore this cute fairy? Come on~ at least saying hi wouldn't hurt anybody.");
					puts("Talk to the fairy(yes=1 no=0).");
					scanf("%d",&choice);
					if(choice == 1)
					{
						puts("You: Hi,I was wonder what were you doing he...");
						puts("Fairy: Were you trying to ignore me huh? (stabs with a knife)");
						puts("Well... seems like that fairy would hurt anybody here haha. You Die...");
						break;
					}
					puts("You have safely ranway from that cold blood fairy. Please select your derection to go");
					puts("1.Mining Mountain  2.Shop  3.Gamble");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
						{
							puts("Entering Mining Mountain");
							puts("Miner: Welcome to Pitcoin mining! You can mine your Pitcoin as many as you want. But the amount will be random. So GL!");	
							puts("Mine Pitcoin? (yes=1 no=0)");
							scanf("%d",&choice);
							if(choice == 0)
							{
								puts("Exiting Mining Mountain");
								break;
							}
							else if(choice == 1)
							{
								while(choice != -1)
								{
									puts("Let's mining!");
									scanf("%d",&choice);
								}
								break;

							}
							else
							{
								puts("Please select again.");
							}
						
						}
						puts("reselect case");
						scanf("%d",&choice);


					}
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
			while (choice != 99)
			{
				// constants
				int MAX_SUMS = 30, ROLLS_PER_TURN = 3, POINTS_TO_LOOSE = 30, AI_STOPING_POINT = 10;

				FILE *writer = fopen("Casino.txt", "a"); // the "a" will append to the file

				printIntroduction();

				int showRules = 2;
				printf("Would you like to read the rules? (1: yes | 2: no) ");
				scanf(" %d", &showRules);

				// format switch
				switch (showRules)
				{
					case 1:
						printRules(ROLLS_PER_TURN, POINTS_TO_LOOSE);
						break;
				}

				srand(time(NULL));

				// arrays of all the averages that each player rolls
				double userSums[30] = {0};
				double player2Sums[30] = {0};
				double player3Sums[30] = {0};

				// pointers for the sums arrays
				double *userSumPtr = userSums;
				double *player2SumPtr = player2Sums;
				double *player3SumPtr = player3Sums;

				// decides when the game should stop (if no one is able to play anymore)
				int userStillPlaying = 1, player2StillPlaying = 1, player3StillPlaying = 1;

				int iteration = 0;			// increases in each loop, determines how large the dice will get
				double currentScore[3]; // keeps track of the score for each player
				int i; // for loops
				while (userStillPlaying == 1 || player2StillPlaying == 1 || player3StillPlaying == 1)
				{
					int userInput;
					int lowDiceSize, highDiceSize; // the lowest and highest value a dice can get you
					int rolls[3];									 // holds the values of all the rolls
					int chooseToRoll;							 // stores the decision of the other players to roll or not

					iteration++;
					highDiceSize = iteration * 10;

					puts("\n-      -      -      -      -      -      -\n"); // just a divider since there is a lot going on in the console.
					printf("\nRound %d, Dice size is %d to %d", iteration, 1, highDiceSize);

					if (userStillPlaying)
					{
						puts("\n\nYour Turn:");
						printf("Would you like to roll your three dice? (1: yes | 2: no) ");
						scanf(" %d", &userInput);

						if (userInput == 1)
						{
							for (i = 0; i < ROLLS_PER_TURN; i++)
							{
								// random number between the highest that the dice can get you and the lowest it can get you
								rolls[i] = (rand() % highDiceSize) + 1;
							}

							// stores the average of all three rolls in the sum array
							*userSumPtr = averageM(rolls, ROLLS_PER_TURN);

							printRollResults(rolls, ROLLS_PER_TURN, 1); // prints out the outcome of all your rolls
							printf("Average of your rolls: %.1lf\n", *userSumPtr);
							userSumPtr++; // increases pointer so next time it will add to the next index of the array

							currentScore[0] = sumM(userSums, MAX_SUMS); // takes the sum of all your averages so far
							printf("Your current score: %.1lf", currentScore[0]);

							if (currentScore[0] > POINTS_TO_LOOSE)
							{
								userStillPlaying = 0;
								printf("\nYou lost. %.1lf is larger than %d...", currentScore[0], POINTS_TO_LOOSE);
							}
						}
						else if (userInput == 2)
						{
							userStillPlaying = 0;
						}
					}

					if (player2StillPlaying)
					{
						puts("\n\nPlayer 2 Turn:");
						chooseToRoll = 1;
						// decides to keep rolling
						if ((POINTS_TO_LOOSE - sumM(player2Sums, MAX_SUMS)) < AI_STOPING_POINT) // if the ai is (stoping point) away from the score limit, they will stop rolling
						{
							chooseToRoll = 0;
							player2StillPlaying = 0;
							puts("Player 2 chose not to roll anymore.");
						}

						if (chooseToRoll == 1)
						{
							for (i = 0; i < ROLLS_PER_TURN; i++)
							{
								// random number between the highest that the dice can get you and the lowest it can get you
								rolls[i] = (rand() % highDiceSize) + 1;
							}

							// stores the average of all three rolls in the sum array
							*player2SumPtr = averageM(rolls, ROLLS_PER_TURN);

							printRollResults(rolls, ROLLS_PER_TURN, 0); // prints out the outcome of all your rolls
							printf("Player 2 rolls average: %.1lf\n", *player2SumPtr);
							player2SumPtr++; // increases pointer so next time it will add to the next index of the array

							currentScore[1] = sumM(player2Sums, MAX_SUMS); // takes the sum of all your averages so far
							printf("Player 2 score: %.1lf", currentScore[1]);

							if (currentScore[1] > POINTS_TO_LOOSE)
							{
								player2StillPlaying = 0;
								printf("\nPlayer 2 is out. %.1lf is larger than %d...", currentScore[1], POINTS_TO_LOOSE);
							}
						}
					}

					if (player3StillPlaying)
					{
						puts("\n\nPlayer 3 Turn:");
						chooseToRoll = 1;

						// decides to keep rolling
						if ((POINTS_TO_LOOSE - sumM(player3Sums, MAX_SUMS)) < AI_STOPING_POINT) // if the ai is (stoping point) away from the score limit, they will stop rolling
						{
							chooseToRoll = 0;
							player3StillPlaying = 0;
							puts("Player 3 is choosing not to roll anymore.");
						}

						if (chooseToRoll == 1)
						{
							for (i = 0; i < ROLLS_PER_TURN; i++)
							{
								// random number between the highest that the dice can get you and the lowest it can get you
								rolls[i] = (rand() % highDiceSize) + 1;
							}

							// stores the average of all three rolls in the sum array
							*player3SumPtr = averageM(rolls, ROLLS_PER_TURN);

							printRollResults(rolls, ROLLS_PER_TURN, 0); // prints out the outcome of all your rolls
							printf("Player 3 average rolls is %.1lf\n", *player3SumPtr);
							player3SumPtr++; // increases pointer so next time it will add to the next index of the array

							currentScore[2] = sumM(player3Sums, MAX_SUMS); // takes the sum of all your averages so far
							printf("Player 3 score: %.1lf", currentScore[2]);

							if (currentScore[2] > POINTS_TO_LOOSE)
							{
								player3StillPlaying = 0;
								printf("\nPlayer 3 is out. %.1lf is larger than %d...", currentScore[2], POINTS_TO_LOOSE);
							}
						}
					}
				}

				printf("\n\nUser score: %.1lf\n", currentScore[0]);
				printf("Player 2 score: %.1lf\n", currentScore[1]);
				printf("Player 3 score: %.1lf\n", currentScore[2]);

				if (currentScore[0] > POINTS_TO_LOOSE)
				{
					currentScore[0] = -1;
				}
				if (currentScore[1] > POINTS_TO_LOOSE)
				{
					currentScore[1] = -1;
				}
				if (currentScore[2] > POINTS_TO_LOOSE)
				{
					currentScore[2] = -1;
				}

				// change name to all capital letters
				for (i = 0; i < strlen(name); i++) // doing char function
				{
					if(i % 2 == 0)
					{
						name[i] = toupper(name[i]);
					}
					else
					{
						name[i] = tolower(name[i]);
					}
					 
				}

				char nameToReplace[256] = "CTO OF HOT POCKETS";
				char myNameWhichIsManny[256] = "MaNnY";

				if(strcmp(myNameWhichIsManny, name) == 0) // compares strings // string function
				{
					strcpy(name, nameToReplace); // copies string
				}

				if ((currentScore[0] == -1) && (currentScore[1] == -1) && (currentScore[2] == -1))
				{
					puts("\nEveryone lost...");
					fprintf(writer, "%s lost with everyone\n", name);
				}
				else if ((currentScore[0] > currentScore[1]) && (currentScore[0] > currentScore[2]))
				{

					printf("\nYou won!");
					fprintf(writer, "%s beat player 1 and 2\n", name);
				}
				else if ((currentScore[1] > currentScore[2]) && (currentScore[1] > currentScore[0]))
				{

					printf("\nPlayer 2 won!");
					fprintf(writer, "%s lost to player 2\n", name);
				}
				else
				{
					printf("\nPlayer 3 won!");
					fprintf(writer, "%s lost to player 3\n", name);
				}
				fclose(writer); // close the output file so i can start writing in it again.

				int showRecords = 2;
				printf("\nGood game. Would you like to see the records of previous games? (1: yes | 2: no) ");
				scanf(" %d", &showRecords);

				if (showRecords == 1)
				{
					FILE *reader = fopen("Casino.txt", "r");
					char line[50];

					char c;

					c = fgetc(reader);
					while (c != EOF)
					{
						printf("%c", c);
						c = fgetc(reader);
					}

					fclose(reader);
				}

				puts("\nRemember to enter 99 to exit!");
				scanf("%d", &choice);
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
					int grade;
					int aCount = 0;
					int bCount = 0;
					int cCount = 0;
					while((grade = getchar()) != 'q')
					{
						switch(grade)
						{
							case 'a':
							case 'A':
								++aCount;
								break;
							case 'b':
							case 'B':
								++bCount;
							case 'c':
							case 'C':
								++cCount;
								break;
							case '\n':
							case '\t':
							case ' ':
							default:
								printf("%s","Incorrect letter grade entered.");
								puts("Enter a new grade.");
								break;
						}
						printf("Enter a letter grade (press q to quit): ");
						scanf("%d",grade);
					}
					printf("\nThere are ");
					printf("%u", aCount);
					printf(" A's, %u", bCount);
					printf(" B's, %u", cCount);
					printf(" C's");
					printf("\nThe class average is %.1f\n",(aCount+bCount+cCount)/3.0);
				
				
					//puts("you open the door 38 to and found a deadly cake........");
					
					scanf("%d",&choice);

				}
				break;
			}
			case 39:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					puts("A gambling machine, and it says, If you average is even, you win, but if your average is odd, you lose");
					puts("You decide to play");
					play();
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

int RollArray(int arr[])//lA
{
	int y;

	y= rand()%6+1;
	arr[1]=y;
	
	return y;
	
}
void Prt(int arr[])//LA
{
	printf("roll = %d\n", arr[1]);
}
void nV(char a[])
{
	int i,counter=0;
	
	for(i=0;i<21;i++)
	{
		switch(a[i])
		{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
			case 'Y':
			case 'y':
			{
				counter++;
				break;
			}
			default:
			{
				break;
			}
		}
	}
	printf("\nNumber of Vowels in your name: %d \n",counter);
}

void BBGprnt()
{
	puts("  [you]         / 1  /  2  /  3  /");
}
void TossBag(int *arr)//LA
{
	
	int i;
	int y;
	int *ptr;
	ptr = arr;
	
	for (i=0;i<3;i++)
	{
		y= rand()%3;
		*(arr+y) = *(arr+y)+1;
		arr=ptr;
	}
}
void BagTossed(int *arr)//lA
{
	int i;
	
	for (i=0;i<3;i++)
		{
			printf("hole #%d, has %d bag(s) in it\n", i+1 , *arr);
			arr++;
		}
}

void play(void)
{
	int i;
	int total = 0;
	int numbers[4] = {0};
	int avg;
	for(i = 0; i < 5; i++)
	{
		numbers[i] = rand() % 100;
		total = total + numbers[i];
	}
	avg = total / 5;

	if(avg % 2 == 0)
	{
		printf("The number is even you win!!");
	}
	else
	{
		printf("You lose");
	}
	
}


//Monika
void monikawelcome(char name[])
{

	int monikai = 0;

	char monikaname[256] = {0};

	strcpy(monikaname, name);

	for(monikai = 0; monikai < 256; monikai++)
	{
		if(islower(monikaname[monikai]))
		{
			monikaname[monikai] = toupper(monikaname[monikai]);
		}
		if(isupper(monikaname[monikai]))
		{
			//printf("%c", monikaname[monikai]);
		}
	}
	printf("\n~Welcome %s to this minigame~\n\n", monikaname);
	puts("MAKE SURE THE TERMINAL IS IN FULL SCREEN WHEN RUNNING CASE 15\n");
}

void monikacase1(char yellowdecision[])
{
	puts("You chose the yellow path, as you walk you see a hop scotch drawn on the floor\n");
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
	scanf(" %s", yellowdecision);
	//prints hopscotch

	if(strcmp(yellowdecision, "y") == 0)
	//if its equal to each other
	//0 = true, !0 == false
	{
		int jumps = 0;
		int i = 0;
		char anotherRoll[2];

		int yellowTries = 0;
		while(jumps != 6)
		{
			yellowTries++;
			i = 0;

			for(i = 0; i < 2; i++)
			{
				puts("You stand infront of the first box, and you find a 6 sided die,\nnext to the die theres a note that says to roll the die in order to jump.\nDo you want to roll? (y or n)\n");
				scanf(" %s", anotherRoll);
				//while the choices are wrong, do the below
				//but if its right it will exit and move forward

				if(strcmp(anotherRoll, "y") == 0)
				{
					jumps = (rand() % 6) + 1;
					//above prints one int
					if(jumps != 6)
					{
						printf("You got %d from the die, it wasnt enough to go to the other side, re-roll.\n", jumps);
					}
					else
					{
						printf("You got %d, you can pass\n", jumps);
						break;
					}
				}
				else
				{
					puts("ok, bye\n");
					exit(1);
				}
			}

			if(jumps == 6)
			{
				break;
			}
			else
			{
				puts("\nYou ran out of attempts, good bye\n");
				break;
			}
		}
	}

	else if (strcmp(yellowdecision, "n") == 0)
	{
		FILE *monikasponge;

		char filesponge[200] = "sponge.txt", spongePrint;

		// Open file
		monikasponge = fopen(filesponge, "r");
		if (monikasponge == NULL)
		{
			printf("Wrong file name, retry \n");
			exit(0);
		}

		// Read contents from file
		spongePrint = fgetc(monikasponge);
		while (spongePrint != EOF)
		{
			printf("%c", spongePrint);
			spongePrint = fgetc(monikasponge);
		}

		puts("I dOnT wAnT tO pResS yEs\n");
		puts("\nbye\n");
		fclose(monikasponge);
		exit(1);
		//return 0; //exits u from the program
	}
}

void monikacase2(char reddecision[])
{
	char key[20];
	char monikausertry[20], pressF[2];
	
	FILE *monikaoutput, *Deciphered;
	monikaoutput = fopen("monikaoutput.txt", "w");
	Deciphered = fopen("Deciphered.txt", "r");

	puts("Youve chosen the red road, and you see a blue tunnel. You enter and you\nsee a wall with a code pad on it, its asking if you\nwant to see the prompt to move forward. Do you say yes or no? (y or n)\n");
	scanf(" %s", reddecision);
	//create a text thing where we show the user the file and we make them
	//deciper the code and if its right they will move forward
	int keepLooping = 1;

	while(strcmp(reddecision, "y") == 0 && keepLooping == 1)
	{
		printf("\nDecipher the following text: \nOnce you have an answer, input it below\n");
		puts("\n71 97 114 114 101 116 116 66 108 117 80 111 112 112 101\n"); //text file to decipher
		puts("Need a hint? Ask the key\n");
		scanf(" %s", monikausertry);
		//if yes then we will prompt the text and ask to deciper

		fscanf(Deciphered, " %s", key);
		if(strcmp(monikausertry, key) == 0) //check if the same then continue
		{
			puts("\nPIN UNLOCKED\n");
			puts("You can see your previous attempts in the monikaoutput.txt file");

			if(strcmp(monikausertry, key) == 0)
			{
				puts("\nYour sight is filled with darkness and the glistening of the water as it shines from the light behind you.");
				puts("You begin to move forward and get into the water but it feels weird. You think maybe its because its cold so you just dismiss it.");
				puts("You continue but you begin to feel a burning sensation on your body and you begin panicking,\n'what's in this water'");
				puts("As you look for something to grab to get out of the water\nyour eyes lock on to a warning label on the side of the river, reading: 'WARNING: SULFURIC ACID REMAINS IN THE WATER\nIF IN CONTACT, PERISHABLE'\n");
				puts("YOU DIED\n");

				exit(1);
			}
			keepLooping = 0;
		}
		else
		{
			fprintf(monikaoutput, "Failed Attempt: %s\n", monikausertry);
		}

		fprintf(monikaoutput, "\n");
	}
	rewind(monikaoutput);
	fclose(monikaoutput);

	if(strcmp(reddecision, "n") == 0)
	{
		puts("You said no\n");

		puts("You tried going back to the entrance and fell through a dirt hole and died, press f to pay respects\n");
		scanf(" %c", pressF);

		if(strcmp(pressF, "f") == 0)
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

void monikacase3(char greenchoice[])
{
	puts("Do you want to continue green path? (y or n)\n");
	scanf(" %s", greenchoice);

	if(strcmp(greenchoice, "y") == 0)
	{
		FILE *monikanothing;

		char filenothing[200] = "nothing.txt", nothingPrint;

		// Open file
		monikanothing = fopen(filenothing, "r");
		if(monikanothing == NULL)
		{
			printf("Wrong file name, retry \n");
			exit(0);
		}

		// Read contents from file
		nothingPrint = fgetc(monikanothing);
		while(nothingPrint != EOF)
		{
			printf("%c", nothingPrint);
			nothingPrint = fgetc(monikanothing);
		}

		puts("\nyoure welcome\n");
		fclose(monikanothing);
		exit(1);
	}
	else if(strcmp(greenchoice, "n") == 0)
	{
		int monikai = 0, monikasize = 5, monikasum = 0, monikaArray[monikasize];

		int *monikaPointer;
		monikaPointer = monikaArray;

		printf("Fine since you dont want to go the path you can play this boring calculator game\nInsert five numbers you want to add and find the sum of\n");
		for(monikai = 0; monikai < monikasize; monikai++)
		{
			scanf(" %d", &monikaArray[monikai]);
		}
		printf("Things inputted are: \n");

		monikasize = 5;
		for(monikai = 0; monikai < (monikasize - 1); monikai++)
		{
			printf("      %d\n", *monikaPointer);
			monikaPointer++;
		}

		monikasize = sizeof(*monikaPointer) / sizeof(int);
		printf("  +   %d \n---------\n", monikaPointer[monikasize - 1]);

		monikasum = 0;
		monikasize = 5;
		for(monikai = 0; monikai < monikasize; monikai++)
		{
			monikasum += monikaArray[monikai];
		}
		printf("sum : %d\n", monikasum);

		int monikaaverage = 0;
		monikaaverage = (double)monikasum / (double)monikasize;

		printf("Average: %.1lf\n", (double)monikaaverage);

		exit(1);
	}
}
//Monika




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
	return p;
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
	printf(" ");
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

// Talise
void printMessage(int msg[])
{
	int i = 0;
    
    	printf("Message: ");
    
    	while(i < 10)
    	{
        	printf("%d ", msg[i]);
        	i++;
    	}
    
    	printf("\n");
}
void decodeMessage(char alphabet[], int codedMessage[], int *totalGuesses, int *wrong)
{
	int i, x;
    	char guess;
    	char c;
    
    	puts("Decode the message: ");
    
    	for(i = 0; i < 10; i++)
    	{
        	printf("Enter lowercase guess for %d: ", codedMessage[i]);
        	scanf(" %c", &guess);
        
        	x = (codedMessage[i] - 1);
        	c = alphabet[x];
        
        	if(guess == c)
        	{
            		(*totalGuesses)++;
        	}
        
        	while(guess != c)
        	{
            		printf("Try again. Enter lowercase guess for %d: ", codedMessage[i]);
            		scanf(" %c", &guess);
            		(*totalGuesses)++;
            		(*wrong)++;
        	}
    	}
}

void userFate(int x)
{
	int i, score;
    	double avg = 0.0;
    	double sum = 0.0;
    
    	switch(x)
    	{
        	case 1:
        	{
            		puts("You are free.");
            		break;
        	}
        	case 2:
        	{
            		puts("You decoded the message, but now you must enter 3 test scores: ");
            		break;
        	}
    	}
    
    	if(x == 2)
    	{
        	for(i = 0; i < 3; i++)
        	{
            		printf("Enter score: ");
            		scanf("%d", &score);
            		sum += score;
        	}
        
        	avg = sum / 3;
        
        	printf("Your test score average is: %.2lf \n", avg);
    	}
}
void printRollResults(int rolls[], int numberOfRolls, int isUser) // Manuel Castaneda
{
	if (isUser)
	{
		printf("You rolled: ");
	}
	else
	{
		printf("they rolled: ");
	}

	int i;
	for (i = 0; i < numberOfRolls; i++)
	{
		printf("%d  ", rolls[i]);
	}

	printf("\n");
}

double averageM(int rolls[], int numberOfRolls) // Manuel Castaneda
{
	int i, sum = 0;
	for (i = 0; i < numberOfRolls; i++)
	{
		sum = sum + rolls[i];
	}
	return sum / (double)numberOfRolls;
}

double sumM(double sums[], int maxSums) // Manuel Castaneda
{
	int i = 0;
	double sum = 0;

	for (i = 0; i < maxSums; i++)
	{

		if (sums[i] == 0)
		{
			break;
		}
		sum = sum + sums[i];
	}
	return sum;
}

void printIntroduction(void) // Manuel Castaneda
{
	puts("\n\nYou walked into a secret casino.");
	puts("The door closes behind you.");
	puts("The only way to leave is to play a game Dice Average.");
}

void printRules(int rollsPerTurn, int pointsToLoose)
{
	puts("\nRules:");
	printf("- Each turn, you and two other players will choose if you wish to roll %d dice.\n", rollsPerTurn);
	printf("- The average number of the %d dice are added to your score.\n", rollsPerTurn);
	printf("- Who ever can get their score closest to %d wins. If your score goes above %d then you loose.\n", pointsToLoose, pointsToLoose);
	puts("- Before each turn, the dice values increase.");
	puts("- After each turn, you will get an opportunity to roll again or stop rolling.");
	puts("- If you choose to stop rolling, you can no longer roll for the rest of the game.");
} // Manuel Castaneda
