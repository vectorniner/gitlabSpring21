
//Contributors
//G. Poppe
//Meredith Quail

//Benjamin Lozano


//Room 19: Jonathan Chua




//Cristian Lopez - Room 9


#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> /* Room 19 additional includes */

int RollArray(int arr[]);//LA
void Prt(int arr[]);//LA
void nV(char a[]);//LA
void BBGprnt();//LA
void BagTossed(int *arr);//lA
void TossBag(int *arr);//lA

void patrickInitialPrompt(void);

void demondoor(void);
void angeldoor(char name[]);
void broomcloset(void);

/* Start of Room 19 Function Prototypes */
int room19_doorDecision(void);
int room19_heroChoice(void);
float room19_getAvg(int*);
void room19_criteriaBomb(int*);
void room19_readFile(FILE*);
void room19_dragonRAWRS(FILE*);
void room19_heroToast(FILE*);
void room19_ending3(FILE*);
/* End of Room 19 Function Prototyping */

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
void story(void);//josue
void elf(void);//josue
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

// Tien Tran Functions Start
void room_37_read_instructions_from_file();
int room_37_guess_number(int);
int room_37_prompt_guess(int, int);
int room_37_average();
void room_37_fill_array(int *, int);
// Tien Tran Functions End

//Carlos Gonzalez
int dpsCalc(int x, int y, int a);
void printResults(int z, int a);


//Benjamin Lozano
void greenUSB26(int arrInt26[], int size);
void blueUSB26();
void redUSB26();
void lockedDoor26();
//Benjamin Lozano

//Cristian Lopez
_Bool cLopezValidBet(double amount, double bal);
void cLopezFillFlipArray(int *pntr);
_Bool cLopezScanFlipArray(int *pntr, int userPick);
//Cristian Lopez

int urGuess(void);//AndyV
int Anumber(int a[], int urGuess);//AndyV

void noteFromRick(void);//Berenis Castruita
void stars(void);//Berenis Castruita
void flurbos(void);//Berenis Castruita
void planets(void);//Berenis Castruita
void goodBye(void);//Berenis Castruita




int main(int argc, char *argv[])
{
	int a,x,y,z,i,h,g,k,choice=0;
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
                                                printf("Okay %s are you ready to go to Blips?\n", name);
                                                puts("First you need Flurbos.\n");
                                                
                                                flurbos();
                                                return 0;
                                        }

                                        if(choice == 2)
                                        {
 
                                                printf("Hey %s its Morty, hurry get in, Rick isn't watching, let go on a adventure\n",name);
                                                
                                                stars();
                                          
                                                puts("I will let you choose what plannet we go to \n");
                                                planets();
                                        }
                                                
                                        if(choice == 3)
                                        {
                                                puts("You selected to exit.\n");
                                                goodBye();
                                                return 0;
                                        }
                                        else
                                        {
                                                puts("Incorrect input, please selecte from the following choices, 1, 2, or 3.\n");
                                        }

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
						printf("your average is %f \n", l);
						
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
					FILE *wptrTalise;
                    			wptrTalise = fopen(argv[2], "w");
                    
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
                    
                    			fprintf(wptrTalise, "Total Guesses: %d \nWrong Guesses: %d \nDecoded Message: %s \n", totalGuesses, wrongGuesses, message);
                    
                    			x = (rand() % (3 + 1 - 1) + 1);
                    			userFate(x);
                    
                    			for(i = 0; name[i] != '\0'; i++)
                    			{
                        			name[i] = toupper(name[i]);
                    			}
                    
                    			printf("That's all, %s \n", name);
                    
					fclose(wptrTalise);
					printf("Enter 1-40 to go to another room or 99 to quit. \n");
                    			scanf("%d", &choice);
				}
				break;
			}
			case 7:
			{
				while(choice != 99)
				{
					
					char ladder;
					int rollDie, door1;
					float numbers[50], average, sum = 0.0;
					FILE *rptr;
					rollDie = rand()%9;

					puts("\nYou open the door and all the water drains");
					puts("In front of you are five doors");
					puts(" -----   -----   -----   -----   ----- ");
					puts("|     | |     | |     | |     | |     | ");
					puts("|  1  | |  2  | |  3  | |  4  | |  5  | ");
					puts("|     | |     | |     | |     | |     | ");
					puts(" -----   -----   -----   -----   -----  ");
					puts("Which door will you choose? (99 will exit the program)");
					scanf("%d", &choice);
					
					switch(choice)
					{
						case 1:
						{	
							puts("\nYou picked the first door");
							puts("You look and see a small figure in the distance");
							puts("As you walk closer you see that it's a skeleton running straight towards you!");
							puts("There is another door to your right and written on the door says: ");
							puts("In order to move escape the skeleton you need to add up 5 numbers averaging at least 10");
							printf("\nEnter 5 numbers\n");							
							
							for(i = 0; i < 5; i++)
							{

								printf("Number %d : ",i+1);
								scanf("%f", &numbers[i]);
								sum += numbers[i];
							}
							average = sum / 5;
							printf("Your average is = %.2f \n", average);	
						
							if(average < 10)
							{
								printf("\n\nPlease try again \n");
								printf("Retutning to the main menu\n\n");
							
								break;	
							}
							else if (average > 10)
							{
								printf("\n\nCongrats! You escaped the skeleton!\n");
								printf("Returning to the main menu\n\n");
								break;	
							}
						case 2:
						{
							puts("You enter door number 2 and find a man rolling dice");
							puts("You approach the man");
							puts("The man says to you, if you roll the correct number I will give you this gold ingot but if you lose then you'll be stuck down here forever");
						       	printf("\nWould you like to roll? [1] = yes, [2] = no\n");
							scanf("%d", &choice);

							if(choice == 1)
							{
								puts("The man says to pick a number 1 - 10");
								printf("Enter a number: ");
								printf("%d", rollDie);//Random number appears to test the correct guess

								scanf("%d", &choice);
								
								if(choice == rollDie)
								{
									puts("Congrats you won the gold ingot!");
									break;
								}
								else
								{
									puts("You lose");
									puts("Returning back to the main menu");
									break;
								}

							}
							else if(choice == 2)
							{
								printf("\nYou choose 2\n");
							}
							
						}
						case 3:
						{

							rptr = fopen("mSkullPic.txt", "r");
							if(rptr == NULL)
							{
								printf("Cannot open");
							}
							else
							{
								if(choice != 3)
								{
									puts("You found a computer in the door what");
									scanf("%d", &choice);
								}
							}
						}

						
					}					
						
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
				char yN;
				double balance = 100.00;
				double betAmount = 0.0;
				int welcome = 0;
				char rWelcome;

				int betsWon = 0;
				int betsLost = 0;
				double totalBets = 0.0;
				double net = 0.0;

				int roulBet = 0;
				int roulRoll = 0;
				int roulResult = 0; 
				int roulInd = 0;
				_Bool vBet;
					
				char *pntr;
				char userFlip;
				int userFlipInt = 0;
				int flip = 0;
				int nGFlip = 0;
				int userScoreFlip = 0;
				int houseScoreFlip = 0;
				int resultFlip;

				while(choice != 99)
				{

					FILE *rptr;

					rptr = fopen("clopezWelcome.txt", "r");
					rWelcome = fgetc(rptr);
					//READ FROM A FILE
					while(rWelcome != EOF)
					{
						printf("%c", rWelcome);
						rWelcome = fgetc(rptr);
					}
					fclose(rptr);
	

					puts("\n\nWhat would you like to play? (1 for Coin Flip, 2 for Roulette, 3 for Sports Betting, 99 to exit)");
					scanf(" %d",&choice);

					
					//COIN FLIP
					while(choice == 1)
					{
						puts("\n\n*-*-*- COIN FLIP -*-*-*");
						puts("Choose: (1) Best of 1 -- (3) Best of 3");
						scanf(" %d",&nGFlip);

						//BEST OF 1
						if(nGFlip == 1)
						{
							

							printf("Please enter your desired bet amount (Balance: $%.2lf): $", balance);
							scanf(" %lf",&betAmount);
							vBet = cLopezValidBet(betAmount, balance); //
							if(vBet == 1)
							{
								puts("Heads or Tails? (h/t)");
								scanf(" %c",&userFlip);

								switch(userFlip)
								{
									case 'h':
									case 'H':
									{
										userFlipInt = 1;
										break;
									}

									case 't':
									case 'T':
									{
										userFlipInt = 0;
										break;
									}
									default:
									{
										puts("Invalid input.");
									}
								}

								flip = (rand() % 2);

								if(flip == 0)
								{
									puts("\nThe coin landed on TAILS!");
								}
								else if(flip == 1)
								{
									puts("\nThe coin landed on HEADS!");
								}

								//WIN
								if(userFlipInt == flip)
								{
									printf("\nCongrats! You win $%.2lf ", betAmount * 2);
									balance += (betAmount * 2);
									printf("Your new balance is $%.2lf", balance);
									betsWon++;
									totalBets++;
									net += (betAmount * 2);
								}	
								//LOSE
								else if(userFlipInt != flip)
								{
									printf("I'm sorry, you lose. ");
									balance -= betAmount;
									printf("Your new balance is $%.2lf", balance);
									betsLost++;
									totalBets++;
									net -= betAmount;
								}
							}	
							else if(vBet == 0)
							{
								printf("You do not have enough funds to place this bet.");
							}				
							
						}
						else if(nGFlip == 3)
						{
							//BEST OF 3
							_Bool x;
							int flipArray[3] = {0};
							int *pntr;
							pntr = flipArray;

							


							printf("Please enter your desired bet amount (Balance: $%.2lf): $", balance);
							scanf(" %lf",&betAmount);
							vBet = cLopezValidBet(betAmount, balance);
							if(vBet == 1)
							{	
								puts("Heads or Tails? (h/t)");
								scanf(" %c",&userFlip);

								switch(userFlip)
								{
									case 'h':
									case 'H':
									{
										userFlipInt = 1;
										break;
									}

									case 't':
									case 'T':
									{
										userFlipInt = 0;
										break;
									}
									default:
									{
										puts("Invalid input.");
									}
								}

								cLopezFillFlipArray(pntr);
								x = cLopezScanFlipArray(pntr,userFlipInt);

								//WIN
								if (x == 1)
								{
									printf("\nCongrats! You win $%.2lf ", betAmount * 2);
									balance += (betAmount * 2);
									printf("Your new balance is $%.2lf", balance);
									betsWon++;
									totalBets++;
									net += (betAmount * 2);
								}
								//LOSE
								else if(x == 0)	
								{
									printf("I'm sorry, you lose. ");
									balance -= betAmount;
									printf("Your new balance is $%.2lf", balance);
									betsLost++;
									totalBets++;
									net -= betAmount;
								}			
							}	
							else if(vBet == 0)
							{
								printf("You do not have enough funds to place this bet.");
							}
		
						}

						printf("\n\nBalance: $%.2lf\n",balance);
						printf("Bets Won: %d\n",betsWon);
						printf("Bets Lost: %d\n",betsLost);
						printf("Net: $%.2lf\n",net);
						//CALCULATE AN AVERAGE
						printf("Profit/loss per bet: $%.2lf" , (net / totalBets));

						puts("\nPlay again? (y/n)");
						scanf(" %c",&yN);

						if(yN == 'n' || yN == 'N')
						{
							break;
						}
		
					}
					//ROULETTE
					while(choice == 2)
					{
						puts("\n\nWelcome to the roulette table!");
						puts("\n---RULES---");
						puts("The roulette wheel consists of 36 pockets, numbered 1, 2, ..., 36. ");
						puts("Dealer spins a ball on the table, and players place bets on which pocket they believe the ball will land on.");
						puts("Bets can be placed on even numbers, odd numbers, or on an individual number.");
						puts("Successful bet on ODD or EVEN number pays out 1.5x your bet. Successful bet on an individual number pays out 37x your bet");

							printf("Would you like to bet on (1) Evens, (2) Odds, or (3) Individual number. Enter 1, 2, or 3: ");
							scanf(" %d",&roulBet);
							if(roulBet == 3)
							{
								printf("What individual number would you like to bet on? (0-36)");
								scanf(" %d", &roulInd);
							}


							printf("Please enter your desired bet amount (Balance: $%.2lf): $", balance);
							scanf(" %lf",&betAmount);
							vBet = cLopezValidBet(betAmount, balance);
							if(vBet == 1)
							{
								printf("\nOkay! Here we go!! Rolling... rolling... rolling... \n");
								
								roulRoll = (rand() % 36) + 1;
								printf("THE BALL LANDED ON: %d\n",roulRoll);

								
								if(roulRoll %2 == 0)
								{
									roulResult = 2;
								}
								else if(roulRoll %2 == 1)
								{
									roulResult = 3;
								}

								//WIN
								if(roulBet == 1 && roulResult == 2)
								{
									printf("\nCongrats! You win $%.2lf ", betAmount * 2);
									balance += (betAmount * 2);
									printf("Your new balance is $%.2lf", balance);
									betsWon++;
									totalBets++;
									net += (betAmount * 2);
								}
								else if(roulBet == 2 && roulResult == 3)
								{
									printf("\nCongrats! You win $%.2lf ", betAmount * 2);
									balance += (betAmount * 2);
									printf("Your new balance is $%.2lf", balance);
									betsWon++;
									totalBets++;
									net += (betAmount * 2);
								}
								else if(roulInd == roulRoll)
								{
									printf("\nCongrats! You win $%.2lf ", betAmount * 37.00);
									balance += (betAmount * 37.00);
									printf("Your new balance is $%.2lf", balance);
									betsWon++;
									totalBets++;
									net += (betAmount * 2);
								}
								//LOSE
								else if(roulBet == 1 && (roulResult == 3 || roulResult == 1))
								{
									printf("\nI'm sorry, you lose. ");
									balance -= betAmount;
									printf("Your new balance is $%.2lf", balance);
									betsLost++;
									totalBets++;
									net -= betAmount;
								}
								else if(roulBet == 2 && (roulResult == 2 || roulResult == 1))
								{
									printf("\nI'm sorry, you lose. ");
									balance -= betAmount;
									printf("Your new balance is $%.2lf", balance);
									betsLost++;
									totalBets++;
									net -= betAmount;
								}
								else if(roulBet == 3 && (roulResult == 2 || roulResult == 3))
								{
									printf("\nI'm sorry, you lose. ");
									balance -= betAmount;
									printf("Your new balance is $%.2lf", balance);
									betsLost++;
									totalBets++;
									net -= betAmount;
								}

						
							}
							else if(vBet == 0)
							{
								printf("You do not have enough funds to place this bet.");
							}


							printf("\n\nBalance: $%.2lf\n",balance);
							printf("Bets Won: %d\n",betsWon);
							printf("Bets Lost: %d\n",betsLost);
							printf("Net: $%.2lf\n",net);
							//CALCULATE AN AVERAGE
							printf("Profit/loss per bet: $%.2lf" , (net / totalBets));

							puts("\nPlay again? (y/n)");
							scanf(" %c",&yN);

							if(yN == 'n' || yN == 'N')
							{
								break;
							}

					}

					//SPORTS BETTING
					while(choice == 3)
					{
						char mlbTeam[25];
						char userTeam[25];
						char win[] = {'W','I','N'};
						char lose[] = {'L','O','S','E'};
						int userTeamScore = 0;
						int mlbTeamScore = 0;
						int userPick;


						puts("\n\nHi! I'm the casino's bookie. Currently there is only one MLB game going on.");
						puts("The available bets is -- Dodgers(-145) vs Padres(+120) --\n");
						printf("Which team would you like to bet on? (1) Dodgers, (2) Padres\n");
						scanf(" %d",&userPick);

						if(userPick == 1)
						{
							char userTeam[25] = {'D','O','D','G','E','R','S',' ', '\0'};

							printf("Please enter your desired bet amount (Balance: $%.2lf): $", balance);
							scanf(" %lf",&betAmount);
							vBet = cLopezValidBet(betAmount, balance);
							if(vBet == 1)
							{
								userTeamScore = (rand() % 13);
								mlbTeamScore = (rand() % 10);

								if(userTeamScore == mlbTeamScore) 
								{
									userTeamScore = (rand() % 10);
									mlbTeamScore = (rand() % 10);
								}
								
								puts("\nThe results are in...");
								
								
								if(userTeamScore > mlbTeamScore) 
								{
									strncat(userTeam,win,3);
									printf("%s", userTeam);
								}
								else if(userTeamScore < mlbTeamScore)
								{
									strncat(userTeam,lose,4);
									printf("%s", userTeam);
								}
								printf(" %d - %d!\n", userTeamScore, mlbTeamScore);
								
								if(userTeamScore > mlbTeamScore)
								{
									printf("\nCongrats! You win $%.2lf ", betAmount * 1.689);
									balance += (betAmount * 1.689);
									printf("Your new balance is $%.2lf", balance);
									betsWon++;
									totalBets++;
									net += (betAmount * 1.689);
								}
								else if(mlbTeamScore > userTeamScore)
								{
									printf("\nI'm sorry, you lose. ");
									balance -= betAmount;
									printf("Your new balance is $%.2lf", balance);
									betsLost++;
									totalBets++;
									net -= betAmount; 
								}
								
							}
							else if(vBet == 0)
							{
								printf("You do not have enough funds to place this bet.");
							}
						}
						else if(userPick == 2)
						{
							char userTeam[25] = {'P','A','D','R','E','S',' ', '\0'};

							printf("Please enter your desired bet amount (Balance: $%.2lf): $", balance);
							scanf(" %lf",&betAmount);
							vBet = cLopezValidBet(betAmount, balance);
							if(vBet == 1)
							{
								userTeamScore = (rand() % 13);
								mlbTeamScore = (rand() % 10);

								if(userTeamScore == mlbTeamScore) 
								{
									userTeamScore = (rand() % 10);
									mlbTeamScore = (rand() % 10);
								}
								
								puts("\nThe results are in...");
								
								
								if(userTeamScore > mlbTeamScore) 
								{
									strncat(userTeam,win,3);
									printf("%s", userTeam);
								}
								else if(userTeamScore < mlbTeamScore)
								{
									strncat(userTeam,lose,4);
									printf("%s", userTeam);
								}
								printf(" %d - %d!\n", userTeamScore, mlbTeamScore);
								
								if(userTeamScore > mlbTeamScore)
								{
									printf("\nCongrats! You win $%.2lf ", betAmount * 2.2);
									balance += (betAmount * 2.2);
									printf("Your new balance is $%.2lf", balance);
									betsWon++;
									totalBets++;
									net += (betAmount * 2.2);
								}
								else if(mlbTeamScore > userTeamScore)
								{
									printf("\nI'm sorry, you lose. ");
									balance -= betAmount;
									printf("Your new balance is $%.2lf", balance);
									betsLost++;
									totalBets++;
									net -= betAmount;
								}
								
							}
							else if(vBet == 0)
							{
								printf("You do not have enough funds to place this bet.");
							}
						}

			

						printf("\n\nBalance: $%.2lf\n",balance);
						printf("Bets Won: %d\n",betsWon);
						printf("Bets Lost: %d\n",betsLost);
						printf("Net: $%.2lf\n",net);
						//CALCULATE AN AVERAGE
						printf("Profit/loss per bet: $%.2lf" , (net / totalBets));
						
						puts("\nPlay again? (y/n)");
						scanf(" %c",&yN);

						if(yN == 'n' || yN == 'N')
						{
							break;
						}

					}

					
				}
				break;
			}
			case 10:
			{
				while(choice != 99)
				{
					int x, y, z, i, j, k, priceActual, priceGuess;
					char guess;
					char upperName[28];
					srand(time(NULL));
	
					for(i = 0; i<28; i++)
					{
						upperName[i] = toupper(name[i]);
					}
	
					printf("\n$$$$$$ %s COME ON DOWN!! YOU'RE ON THE PRICE IS RIGHT!! $$$$$$\n", upperName);
					puts(" : : doo dooo dooooOoOoOo, doo dooooo DoooOooooooo : :\n");
					puts("\nBob Barker: Welcome contestants, let me show you the first item up for bid on the Price Is Right...\n");
					puts("\nJohnny Olsen: It's a new stove! A gas stove designed for your pleasure by LG Electronics. It is 6.3 cu. ft., has a Smart Wi-Fi enabled fan, and a convection electric oven range with AirFry and EasyClean in Stainless Steel.\n");
					printf("\nBob Barker: Contestants please bid on it in dollars because we round off our retail prices to the nearest dollar.. %s what do you bid? ", name);
					scanf("%d", &priceGuess);
					
					priceActual = (rand() %400) + 600;
	
					if(priceActual - priceGuess <= 200)
					{
						printf("\nBob Barker; The actual retail price is $%d, that means %s, you are the winner!\n", priceActual, name);
					}
					else
					{
						printf("\nBob Barker: The actual retail price is $%d, that means %s, you are not the winner, let's try again...\n", priceActual, name);
					}

				}
				break;
			}
			case 11:
			{
					int doorChoice;
				while(choice != 99)
				{
					puts("you open the door and find ........\n");
					puts("3 closed doors\n");
					printf("The first door is made of rock with cracks that seem to have orange lava flowing from them and fire comming out from the edges\n");
					printf("The second door seems to be an ornage rock door with vines covering it and light bleeding from the edges with mist flowing from underneath\n");
					printf("The final door seems to be an ordinary old wooden door of a broom closet\n");
					printf("Which door will you choose?\n");
					printf("1 for the fire door\n");
					printf("2 for the mysterious glowing door\n");
					printf("3 for the broom closet\n");
					scanf("%d",&doorChoice);
					
					switch(doorChoice)
					{
						case 1:
						demondoor();
						break;
					
						case 2:
						angeldoor(name);	
						break;
					
						case 3:
						broomcloset();
						break;
					
						default:
						printf("That isn't a valid door\n");
					}
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
					


					puts("hello world! welcome to room 14. spoooky..");
					puts("then a giant spider fell on your face");
					puts("RUNNN!");
					break;
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
					
					else if(choice == 3)
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
			case 19: /* Jonathan Chua */
			{ /* Bookmark1 */
				while(choice != 99)
				{
					FILE *readPtr;
					readPtr = fopen("./room19/room19_Door.txt", "r");
					printf("\n\n");
					room19_readFile(readPtr);
					printf("\n\nOur brave hero %s approaches the fabled door to Room 19\n\n", name);
					choice = room19_doorDecision();
					switch(choice) /* Criteria : Case Statement */
					{
						case 1:
						{
							readPtr = fopen("./room19/room19_openDoor.txt", "r");
							room19_readFile(readPtr);
							puts("\nYou open the door and enter........\n");
							sleep(4);
							readPtr = fopen("./room19/room19_Dragon.txt", "r");
							room19_readFile(readPtr);
							puts("\n\n.......to find A dragon!\n");
							printf("%s, what do you choose to do?\n", name);
							choice = room19_heroChoice();
							if(choice != 99)
							{	
								int arrayCriteria1[10] = {0};
								int arrayCriteria2[10] = {0};
								int *ptrCriteria;
								float hero, dragon;
								ptrCriteria = arrayCriteria1;
								room19_criteriaBomb(ptrCriteria);
								hero = room19_getAvg(ptrCriteria);
								ptrCriteria = arrayCriteria2;
								room19_criteriaBomb(ptrCriteria);
								dragon = room19_getAvg(ptrCriteria);
								/* dragon bonus modifier */
								dragon += 0.75;
								printf("Hero Avg D10 Roll: %.2f\n", hero);
								printf("Dragon Avg D10 Roll: %.2f\n", dragon);
								sleep(3);
								if(choice == 1)
								{
									readPtr = fopen("./room19/room19_Charm.txt", "r");
									room19_readFile(readPtr);
									sleep(6);
									if(hero >= dragon)
									{
										readPtr = fopen("./room19/room19_Ending2.txt", "r");
										room19_readFile(readPtr);
										printf("\nMuch wow! You must be a bard, for you have successfully wooed the dragon!\n");
										char stringCriteria[14] = {' ','t','h','e',' ','C','h','a','r','m','i','n','g','\0'};
										strcat(name, stringCriteria);
										sleep(4);
									}
									else
									{
										room19_dragonRAWRS(readPtr);
										printf("\nThe dragon finds your face repulsing\n");
										sleep(4);
										room19_heroToast(readPtr);
										printf("\nSo he responds to your advances with FIRE\n");
										sleep(4);
										room19_ending3(readPtr);
										char stringCriteria[15] = {' ','t','h','e',' ','R','e','p','u','l','s','i','v','e','\0'};
										strcat(name, stringCriteria);
										printf("\nBetter luck next time\n");
										sleep(4);
									}
								}
								else
								{	
									readPtr = fopen("./room19/room19_toBattle.txt", "r");
									room19_readFile(readPtr);
									printf("\nYou gotta ask yourself a question, 'Do I feel lucky?'. Well, do you punk?\n");
									sleep(4);
									if(hero > dragon)
									{
										readPtr = fopen("./room19/room19_Ending1.txt", "r");
										room19_readFile(readPtr);
										char stringCriteria[18] = {' ','t','h','e',' ','D','r','a','g','o','n','s','l','a','y','e','r','\0'};
										strcat(name, stringCriteria);
										printf("\nLike the stud you are, you slayed the dragon!\n");
										sleep(4);
									}
									else
									{
										room19_dragonRAWRS(readPtr);
										printf("\nto which the dragon responds,'I do feel lucky'\n");
										sleep(4);
										room19_heroToast(readPtr);
										printf("\nThe dragon releases a massive fireball, hitting you right on the face!\n");
										sleep(4);
										room19_ending3(readPtr);
										printf("\nMaybe, next time, you don't taunt the dragon.");
										char stringCriteria[13] = {' ','t','h','e',' ','u','n','l','u','c','k','y','\0'};
										strcat(name, stringCriteria);
										sleep(4);
									}
								}
								choice = 99;
							}
							else
							{
								room19_dragonRAWRS(readPtr);
								printf("\nAs %s attempts to flee, the dragon attacks!\n", name);
								sleep(4);
								room19_heroToast(readPtr);
								puts("\ncaught unprepared, you burst into flames");
								sleep(4);
								room19_ending3(readPtr);
								printf("\nThus, a fitting end for %s, for turning ye back on a dragon\n\n", name);
								sleep(4);
								char stringCriteria[18] = {' ','t','h','e',' ','S','t','u','p','i','d','\0'};
								strcat(name, stringCriteria);
							}
							break;
						}
						default:
						{
							printf("\nOur, not-so, brave hero %s slowly backs away from the door to room 19 and decides to pick another door\n", name);
							char stringCriteria[18] = {' ','t','h','e',' ','C','o','w','a','r','d','\0'};
							strcat(name, stringCriteria);
							break;
						}
					}
					printf("\nYou are bestowed the title : %s\n", name);
					fclose(readPtr);
				}
				break;
			}
			case 20:
			{
				while(choice != 99)
				{
					puts("There is a noise in the distance but you can't quite make out what it is");
					patrickInitialPrompt();
					scanf("%d",&choice);
					if(choice == 1)
					{
						puts("You open the door and actually find out the noise is just Naked in the Rain by the Red Hot Chili Peppers playing on a radio");
						puts("You actually see a guitar next to the radio. Do you pick it up? 1 for yes, 2 for no");
						scanf("%d",&choice);
						switch(choice)
						{
							case 1:
							{
								puts("You pick up the guitar and suddenly feel a change in your body. Maybe its the 5G everyone jokes about");
								break;
							}
							case 2:
							{
								puts("Someone comes out of the shadows and hits you over the head with it. You died.");
							}
						}
					}
					else if (choice == 2)
					{
						puts("The floor fails and you through it into the void");
					}
					else if (choice == 3)
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
					else if (choice == 4)
					{
						puts("Why does this person say they're your 4th grade English teacher? You don't even remember them.");
						puts("They say their catchphrase and you realize this person is the real deal");
						puts("The teacher asks if you want to see the grade for the test that he never gave back to you. 1 to see, 2 to not see");
						scanf("%d",&choice);
						if (choice == 1)
						{
							srand(time(NULL));
							int i;
							for(i=0;i<1;i++)
							{
								printf("Ok, your score was %d \n",rand()%101);
								printf("Are you satisfied with that? You better be cause that's your final score \n");
							}
						}
						else if (choice == 2)
						{
							printf("Well it's ok you don't want to see. You probably failed anyway \n");
							puts("There is one thing you can try to do so you can redeem yourself though. A simple test that is \n");
							puts("Press 1 to try one test, 2 to do the other");
							scanf("%d",&choice);
							if(choice == 1)
							{
								char string[25];
								int i;
								printf("\n Enter one really long word in all uppercase letters please, no spaces: ");
								scanf("%s",string);

								for(i=0;string[i]!='\0';i++)
								{
									if(string[i] >= 'A' && string[i] <= 'Z')
									{
										string [i] = string[i]+32;
									}
								}
								printf("\n The really long word you entered is now in lowercase = %s \n",string);
								puts("The only reason I had you do this was because I wanted to make sure you were paying attention.");
							}
							else if (choice == 2)
							{
								char strin[25];
								int i;
								printf("\n Enter one really long word in all lowercase letters please, no spaces");
								scanf("%s",strin);

								for(i=0;strin[i]!='\0';i++)
								{
									if(strin[i] >= 'a' && strin[i] <= 'z')
									{
										strin[i] = strin[i]-32;
									}
								}
								printf("\n The really long word you entered is now in uppercase = %s \n",strin);
								puts("The only reason I had you do this was because I wanted to make sure that you were paying attention");
							}
						}
					}
					else if (choice == 5)
					{
						char checkin[250];
						FILE *kbr;
						printf("Enter a #1-4 and you will be given a question to answer. Your answer will be located in a seperate file you can check \n");
						puts("For best results, do questions 1-4 in order but it is not necessary to do so");
						scanf("%d",&choice);
						if (choice == 1)
						{
							kbr = fopen("goodfeel.txt","w");

							if(kbr == NULL)
							{
								printf("There is an error. Cannot open file");
								exit(1);
							}
							printf("How is your day going so far?");
							scanf("%c",checkin);
							fgets(checkin,sizeof(checkin),stdin);
							fprintf(kbr,"%10s",checkin);
							fclose(kbr);
						}
						else if (choice == 2)
						{
							kbr = fopen("goodfeel.txt","a");

							if(kbr == NULL)
							{
								printf("There is an error. Cannot find file");
								exit(1);
							}
							printf("What is your favorite ice cream flavor?");
							scanf("%c",checkin);
							fgets(checkin,sizeof(checkin),stdin);
							fprintf(kbr,"\n%10s",checkin);
							fclose(kbr);
						}
						else if (choice == 3)
						{
							kbr = fopen("goodfeel.txt","a");

							if(kbr == NULL)
							{
								printf("There is an error. Cannot open file");
								exit(1);
							}
							printf("What is your favorite car? \n");
							scanf("%c",checkin);
							fgets(checkin,sizeof(checkin),stdin);
							fprintf(kbr,"\n%10s",checkin);
							fclose(kbr);
						}
						else if (choice == 4)
						{
							kbr = fopen("goodfeel.txt","a");

							if(kbr == NULL)
							{
								printf("There is an error. Cannot open file");
								exit(1);
							}
							printf("Who is your favorite celebrity? \n");
							scanf("%c",checkin);
							fgets(checkin,sizeof(checkin),stdin);
							fprintf(kbr,"\n%10s",checkin);
							fclose(kbr);
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
					puts("1. Innocent door");
					puts("2.Door towards a powerful Energy");	
						
					}

					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
						{
							if(x==1)
							{
							printf("reveal code HEADS\n"); //use file heads
							}
							puts("Intersting choice");	
							scanf("%d",&choice);
							break;		
						}
						case 2:
						{
							if(z==1)
							{
							printf("reveal code TAILS \n"); // use file tails
							puts("Intersting choice");
							scanf("%d",&choice);
							}
						
							break;
						
						
						}
						
						
					}
					
					
					

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
					puts("\nYou open the door and find ........");
					puts("Yourself inside of JoJos Bizarre Dungeon. \n");
					
					puts("Select your stand");
					puts("1. Star Platinum");
					puts("2. Golden Experience.");
					puts("3. Mr. President ");
					scanf(" %d", &choice);
					
						switch(choice)
					{
						case 1:
						{
							puts("\nDIO, the arch nemesis of the Joestar family bloodline, has successfully killed your grandpa and drank his blood achieving an incredible power buff.");
							puts("You must defeat DIO to revive your uncle and save humanity.");
							x = 100;
							y = 100;
							a = 1;
							z = dpsCalc(x, y, a);
							printResults(z, a);
							
							break;
						}
						case 2:
						{
							puts("\nDiavolo, the head of an italian mafia that sells drugs to kids, is about to acquire a requiem arrow that will allow him to upgrade his stand and become the strongest stand user in existance.");
							puts("You must get to the arrow before him in order to upgrade your stand and become head of the mafia and stop the flow of drugs to the kids.");
							x = 100;
							y = 100;
							a = 2;
							z = dpsCalc(x, y, a);
							printResults(z, a);

							break;
						}
						case 3:
						{
							puts("Not finished \n");
							break;
						}
					}
					puts("Thank you for playing.");
					exit(0);	
				}
				break;
			}
			case 24:
			{
				while(choice != 99)
				{
					 puts("you open the door and find ........");
                                        puts("press 1 to start");
                                        scanf("%d",&choice);

                                        int arr[1] = {0};
                                        int y, z;

                                        y =urGuess();
                                        z = Anumber(arr, y);



                                                if(z != 0 && z != -1)
                                                {
                                                        puts("yes");
                                                }

                                                else if(z == -1)
                                                {
                                                        puts("sorry");
                                                }

                                                else if(z >= 11 && z <= 98)
                                                {
                                                        puts("not valid");
                                                }

                                                else if (z == 99)
                                                {
                                                        break;
                                                        return 0;
                                                }

				}
				break;
			}
			case 25:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					puts("You are in a small dark room");
					puts("You turn the lights on and see 3 doors");
					puts("You have to choose what door to go through");
					puts("1.Go through the red door");
					puts("2.Go through the blue door");
					puts("3.Go through the green door");
					printf("Please enter a number 1-3 or press 99 to exit the program:");
					scanf("%d",&choice);

					if (choice == 1)
					{
						puts("\nWoah! Wow! You really chose the red door");
						puts("Very brave of you, but what a stupid choice to make");
						puts("Really?! Who choses a red door over a green and blue door");
						puts("Anyways! Prepare to meet your doom! HAHA!");
						puts("You died!\n");
					}

					if (choice == 2)
					{
						puts("\nYou enter the room and close the door");
						puts("You realize you have seen this room before");
						puts("You are confused");
						puts("You see a mirror and go to it");
						puts("You see yourself in the mirro and see a 10 year old kid");
						puts("THAT'S YOU!");
						puts("You are confused and scared");
						puts("You realize this room is your room");
						puts("You see your bed and decide to take a nap\n");
					}

					if (choice == 3)
					{
						puts("\nYou go through the green door and the door slams behind you!");
						puts("You cannot see what is happening");
						puts("You start walking foward, but fall off a cliff!");
						puts("SPLAT!");
						puts("You fell to your death\n");
					}

				}
				break;
			}
			case 26:
			{
				while(choice != 99)
				{
					int choice26 = 0;
					int arrInt26[9] = {7,3,5,6,9,1,3,2,6};
					int randomGame26;
					printf("\nYou open the door and find a small room with a door on the other side and a desk with a laptop and three USB drives equally spread apart, one gree, one blue, one red.\n");
					printf("The door behind you slams shut. You open the door again to see a bottomless pit.\n");
					printf("You are now realizing there is no immediate way out, so you decide to find your own way out...\n");
					printf("You walk over to the desk and see a message above each USB...\n\n");

					do{
						printf("1) Inspect the Green USB.\n");
						printf("2) Inspect the Blue USB.\n");
						printf("3) Inspect the Red USB.\n");
						printf("4) Walk up to the door on the other side of the room.\n");
						printf("5) Leave the room and fall into the bottomless pit.\n");
						printf("Enter choice 1-5: ");
						scanf("%d", &choice26);

						switch(choice26)
						{
							case 1: greenUSB26(arrInt26, 9);
								break;
							case 2: blueUSB26();
								break;
							case 3: redUSB26();
								break;
							case 4: lockedDoor26();
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
					printf("Hello World");
					printf("Turn back");
					scanf("%d",&choice);
				}
				break;
			}

			case 29:
			{
				while(choice != 99)
				{
					int portalChoice = 5;

					puts("you open the door and find ........");
					puts("Four portals right next to each other. A voice tells you to enter one.");
					puts("The first portal is blue, second is red, third is yellow, fourth is black.");
					puts("1 = First Portal | 2nd = Second Portal | 3rd = Third Portal | 4th = Fourth Portal");
					scanf("%d",&portalChoice);

					if(portalChoice == 0)
					{
						puts("Seriously?! That wasn't any of the options!");
						puts("Since you cannot follow the directions, you have died.");
						puts("GAME OVER.");
					}

					if(portalChoice == 1)
					{
						int guideChoice = 0;

						puts("You have entered portal number 1. A man walks up to you and says: ");
						puts("Greetings! I see you are a new arrival to this land. My job is to welcome all new visitors.");
						puts("You think to yourself. You've read that before somewhere. A long time ago but you're not 100% sure where you have.");
						puts("As the man continues talking you look around your surroundings and realize you're in Gielinor, from the MMORPG RuneScape.");
						puts("You interrupt the man, yelling you don't belong here and that you belong on Earth! The man continues without skipping a beat.");
						puts("You're not sure whether or not to just run away or hit the guy. You choose to: ");
						puts("1 to run away | 2 to hit the guide");

						scanf("%d", &guideChoice);
						
						if(guideChoice == 1)
						{
							puts("You run out of the building and see a woman training people how to cut logs off trees and fish for shrimp.");
						}	
						
						if(guideChoice == 2)
						{
							puts("You hit the guide. He replies with: You can't do that here. And now, you have to pay.");
							puts("Suddednly an explosion rocks your world and you die instantly.");
							puts("Seriously though, why did you hit him?");
							puts("Game Over.");
						}
						
					}
					if(portalChoice == 2)
					{
						puts("You wake up on a cart.");
					}

					if(portalChoice == 3)
					{
						puts("You wake up in your bed.");
					}
					
					if(portalChoice == 4)
					{
						puts("You have entered portal number 4. You're suddendly teleported onto a stage with a microphone. There is no audience.");
						puts("You walk up to the microphone in curiosity and say: ");
					}
					
					return EXIT_SUCCESS;
				}

				
		
				break;
			}

			case 30://Markease's room of "why did you do this?"
		       	{
				while(choice != 99)
			{
				//int nextChoice = 0;
				puts("you open the door and find ........");
				puts("Some guy screaming that he is the coolest in the universe!");
				puts("You stand in shock as it is said in your precense.");
				puts("You contemplate your current options");
				printf("Which do you choose? 1: Acknowledge that You are truly the coolest \n");
				printf("2:Acknowledge he is the coolest \n");
				scanf(" %d",&choice);
			//	while(choice != 1 ||  choice != 2)
			//	{
					if(choice == 1)
					{
						printf("Your claim has been ignored.\n");
						printf("You challenge him to a cool contest. \n");
					//	break;
					}
					else if(choice == 2)
					{
						printf("Your claim has been taken as sarcasim. \n");
						printf("He challenges you to a cool contest. \n");
					//	break;
					}
			//	}
				/*switch(choice) 
				{
					case 1:
					{
						printf("Your claim has been ignored.\n");
						printf("You challenge him to a cool contest. \n");
						break;
					}
					case 2:
					{
						printf("Your acknowledgement has been taken as sarcasim. \n");
						printf("You are challenged to a cool contest. \n");
						break;
					}
					default:
					{
						puts("You can't think that fast");
						break;
					}
				}
			}*/
				printf("Play again? Enter 99 to quit\n");
				scanf(" %d",&choice);


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
					char monster[20] = "";
					char action[1000];
					room_37_read_instructions_from_file();
					scanf("%d",&choice);
					while(!(choice>=1 && choice <=3)) {
						puts("You have selected an incorrect choice Please choose again.\n");
						scanf("%d",&choice);
					}
					switch(choice) {
						case 1:
							puts("You have selected to fight Godzilla.\n");
							puts("Godzilla's signature weapon is his distinctive atomic breath. Godzilla's dorsal spines glow ominously, and then he lets loose with a concentrated blast of radiation from his mouth\n");
							puts("In addition to his deadly atomic breath, Godzilla can also emit atomic energy in all directions from every inch of his body in a short-range pulse called the nuclear pulse\n");
							puts("Godzilla displays an uncanny ability to resist injury. Not even the pressure and cold of deep sea trenches can kill him.\n");
							puts("Godzilla is vulnerable to electricity\n");
							strcpy(monster, "Godzilla");
							break;
						case 2:
							puts("You have selected to fight King Ghidorah\n");
							puts("When Ghidorah becomes the alpha, he lets out an extremely loud and powerful call that could be heard by the other Titans all around the world\n");
							puts("Ghidorah has an electro-receptor molecular biology, and his skin is covered with traces of gold that acts as a conductor that carries bioelectrical currents throughout his body.\n");
							puts("Ghidorah can drain energy and electricity directly into himself by biting down on power sources.\n");
							strcpy(monster, "King Ghidorah");
							break;
						case 3:
							puts("You have selected to fight King Kong\n");
							puts("Kong is also remarkably intelligent. He makes use of environmental objects like trees or rocks when fighting, and even when overwhelmed by more powerful or more numerous opponents he can think on his feet and find a way to win.\n");
							puts("Kong also demonstrates durability when he is able to continue fighting against airplanes and even destroy some of them after being riddled with bullets.\n");
							strcpy(monster, "King Kong");
							break;
						default:
							break;
					}
					puts("Good Luck Hero. The fate of earth depends on you.\n");

					puts("For hitting the target you have to guess a number between 1 and 30 inclusive\n");
					puts("You will have 10 chances to guess it\n");
					number = (rand() % 30) + 1;
					int firstRound = room_37_guess_number(number);
					if(firstRound == 0) {
						puts("Sorry :( You guess is incorrect. But don't worry as you have a second round too.\n");
					}
					else {
						puts("Congrats :) You guess is correct, now you need to win the second round as well.\n");
						puts("Now the plasma beam is fully charged up. Type fire\n");
						scanf("%s", action);
						for(i=0;i<strlen(action);i++) {
							action[i] = tolower(action[i]);
						}
						while(strcmp(action, "fire") != 0) {
							puts("Type fire to fire the plasma beam\n");
							scanf("%s", action);
							for(i=0;i<strlen(action);i++) {
								action[i] = tolower(action[i]);
							}
						}
						printf("%s has suffered a fatal blow from plasma beam\n", monster);

					}
					puts("A list of numbers would be displayed on the screen and you have to write the average of all numbers.\n");
					int secondRound = room_37_average();
					if(secondRound == 1) {
						puts("Now the plasma beam is fully charged up. Type fire\n");
						scanf("%s", action);
						for(i=0;i<strlen(action);i++) {
							action[i] = tolower(action[i]);
						}
						while(strcmp(action, "fire") != 0) {
							puts("Type fire to fire the plasma beam\n");
							scanf("%s", action);
							for(i=0;i<strlen(action);i++) {
								action[i] = tolower(action[i]);
							}
						}
						printf("%s has suffered a fatal blow from plasma beam\n", monster);
					}
					if(firstRound + secondRound == 2) {
						printf("Congrats you were able to fire two plasma beams on %s\n", monster);
						printf("%s is now down and you have earned the respect of rest of two monsters\n", monster);
					}
					else if(firstRound + secondRound == 1) {
						printf("You were able to fire only one plasma beams on %s\n", monster);
						printf("Its a draw and you haven't earned any respect from the monsters\n");
					}
					else {
						printf("You weren't able to fire any plasma beams on %s\n", monster);
						printf("You have run away and monsters have emerged victorious\n");
					}
					puts("Enter 99 to exit this room or enter any other number to repeat this room\n");
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
						scanf("%d",&grade);
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
					story();
					elf();
				//	play();;
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

void play(void) // Josue Carrillo
{
	int i;
	int total = 0;
	int numbers[4] = {0};
	int avg;
	for(i = 0; i < 4; i++)
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

void story(void)//Josue
{
	puts("You find yourself on the outskirts of an unknown city.");
	puts("You look back and there is a barrier that prevents anyone from leaving or entering this place");
	puts("Having no other choice, you begin to enter the city, and from a distance, you see a huge tower at the center of this city.");
	puts("As you walk towards this tower, the city seems to be getting brighter with lights. You begin to see the residents of this city playing games against each other.");
	puts("Seeing people around, you begin to ask people, 'Where is this place?'");
	puts("You ask many people, yet no one knows");
	puts("Everyone seems to have the same experience, they opened a door, and you found yourself at the outskirts of this city, no way out.");
	puts("Yet everyone explains that playing games is the most important thing in this city.");
	puts("Not knowing what to do, you begin to wander around, and then find yourself in front of something familiar, a SunBucks.");
	puts("You enter and notice a person with pointy ears sitting near the corner of the store.");
	puts("You give in into your curiosity and decide to sit next to this person.");

}
void elf(void)//Josue
{
	puts("As you are sit next to this person, she says: 'What do you want?'");
	puts("You say, 'I was just curious, never seen a person with pointy ears'");
	puts("She says, 'Are you new here'");
	puts("You say, 'yes, just got here couple of hours ago'");
	puts("She says, 'Ah ok, I am an elf that has lived in this city for many years. My name is Lia.'");
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

//Cristian Lopez
_Bool cLopezValidBet(double amount, double bal)
{
	if(amount > bal)
	{
		return 0;
	}
	else if(amount <= bal)
	{
		return 1;
	}
}
//Cristian Lopez
void cLopezFillFlipArray(int *pntr)
{
	int i;
	for(i = 0; i < 3; i++)
	{
		*pntr = (rand() % 2);
		pntr++;
	}

}
//Cristian Lopez
_Bool cLopezScanFlipArray(int *pntr, int userPick)
{
	int i;
	int userScore;
	int houseScore;
	for(i = 0; i < 3; i++)
	{
		if(*pntr == userPick)
		{
			userScore++;
		}
		else if(*pntr != userPick)
		{
			houseScore++;
		}

		//WIN
		if(userScore == 2)
		{
			return 1;
			
		}
		//LOSE
		else if(houseScore == 2)
		{
			return 0;
			
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

// Tien Tran Function
void room_37_read_instructions_from_file() {
	int bufferLength = 255;
	char buffer[bufferLength];
	FILE *rptr;
	rptr=fopen("instructions_room_37","r");
	if (rptr == NULL) {
		puts("You open a door and you find 3 monsters standing right in front of you.\n\n");
		puts("You must take on one monster to prove your authority over them.\n");
		puts("You can\n");
		puts("-> Press 1 to tackle Godzilla\n");
		puts("-> Press 2 to tackle King Ghidorah\n");
		puts("-> Press 3 to tackle King Kong\n\n");
		puts("Unlike the movies just defeating one of them will show your courage to others and they will back out.\n\n");
		puts("What is your choice Hero?\n");
	}
	else {
		while(fgets(buffer, bufferLength, rptr)) {
			printf("%s", buffer);
		}
	}
}
// Tien Tran Function
int room_37_guess_number(int number) {
	int guess;
	int guesses_remaining = 10;
	while(guesses_remaining != 0) {
		guess = room_37_prompt_guess(1, 30);
		if(guess ==  number) {
			puts("You guessed right. Congrats\n");
			break;
		}
		else if(guess > number) {
			puts("Your guess is greater than the number");
		}
		else {
			puts("Your guess is less than the number");
		}
		guesses_remaining--;
	}
	if(guesses_remaining != 0) {
		return 1;
	}
	return 0;
}
// Tien Tran Function
int room_37_prompt_guess(int minimum, int maximum) {
	printf("Enter your guess between %d and %d inclusive\n", minimum, maximum);
	int guess;
	scanf("%d", &guess);
	while(!(guess >=minimum && guess <= maximum)) {
        printf("Enter your guess between %d and %d inclusive\n", minimum, maximum);
        scanf("%d", &guess);
    }
	return guess;
}



void printResults(int z, int a)
{
		//Carlos Gonzalez
	int i;
	FILE *wpointer;

	wpointer = fopen("output.txt", "a");
 		
	if(a == 1)
	{
		if(z == 1)
		{
			puts("\nYou reverse the time stop on DIO for 9 seconds.");
			puts("You find a road roller, crush him with it, and throw a flurry of punches at it.");
			puts("After the 9 seconds pass the road roller explodes killing DIO, you win.");
			printf("Check your ouput file for your win screen\n");

			for(i = 0; i <= 99; i++)
			{
				fprintf(wpointer, "ORA ORA ORA\n");
			}
		}
		if(z == 0)
		{

			printf("\nYour health drops below zero and DIO crushes you with a road roller, you are dead\n");
			printf("Check your ouput file for your lose screen\n");

			for(i = 0; i <= 99; i++)
			{
				fprintf(wpointer, "GAME OVER GAME OVER GAME OVER\n");
			}
		}
	}

	if(a == 2)
	{
		if(z == 1)
		{
			puts("\nYou acquire the requiem arrow and undergo a transformation making you the strongest on earth.");
			puts("Diavolo attempts to use epitaph to attack, but has his attack is automatically deflected by Golden Experience Requiem.");
			puts("You place him in an infinite death loop and become the ultimate gang star.");
			printf("Check your ouput file for your win screen\n");
			for(i = 0; i <= 99; i++)
			{
				fprintf(wpointer, "MUDA MUDA MUDA\n");
			}

		}
		if(z == 0)
		{
			printf("\nYour health drops below zero and King Crimson punches you straight through the chest, you are dead\n");
			printf("Check your ouput file for your lose screen\n");

			for(i = 0; i <= 99; i++)
			{
				fprintf(wpointer, "GAME OVER GAME OVER GAME OVER\n");
			}
		}
	}


	fclose(wpointer);


}
int dpsCalc(int x, int y, int a)
{
		//Carlos Gonzalez
	double avg = 0;
	int i = 0, select = 0, dmg = 0, enemyDmg = 0;


	if(a == 1)
	{
		while(y > 0 && x > 0)
		{
			puts("\nAttacks: ");
			puts("1. ORA Rush");
			puts("2. Star Finger");
			puts("3. Block");
			puts("Choose a move");
			scanf("%d", &select);

			switch(select)
			{
				case 1:
				{
					dmg = (rand() % 20) + 15;
					enemyDmg = (rand() % 20) + 9;
					y = y - dmg;
					x = x - enemyDmg;
					avg += dmg;
					i++;
					puts("You and DIO trade close range consecutive blows\n");
					printf("You deal %d points of damage\n", dmg);
					printf("You take %d points of damage\n", enemyDmg);
					printf("Your health %d, DIO health %d\n", x, y);
					break;	
				}
				case 2:
				{
					dmg = (rand() % 20) + 10;
					enemyDmg = (rand() % 20) + 5;
					y = y - dmg;
					x = x - enemyDmg;
					avg += dmg;
					i++;
					puts("You extend your forefinger to attack DIO, and he counters with a knife throw\n");
					printf("You deal %d points of damage\n", dmg);
					printf("You take %d points of damage\n", enemyDmg);
					printf("Your health %d, DIO health %d\n", x, y);
					break;		
				}
				case 3:
				{
					enemyDmg = (rand() % 20) + 80;
					printf("DIO stops time for 3 seconds and throws enough knives to surround you from all sides, this is equivalent to %d points of damage. \n", enemyDmg);
					puts("Luckily you and DIO have the same type of stand and you are able to deflect all the knives at the last second");
					puts("You take no points of damage");
					break;		
				}
				default:
				{
					puts("invalid input, try again.");
					break;
				}
			}
		}
	}


	if(a == 2)
	{	
		while(y > 0 && x > 0)
		{
			puts("\nAttacks:");
			puts("1. MUDA Rush");
			puts("2. Create life");
			puts("3. Life shot");
			scanf("%d", &select);

			switch(select)
			{	
				case 1:
				{
					dmg = (rand() % 20) + 15;
					enemyDmg = (rand() % 20) + 9;
					y = y - dmg;
					x = x - enemyDmg;
					avg += dmg;
					i++;
					puts("You and Diavola trade close range consecutive blows\n");
					printf("You deal %d points of damage\n", dmg);
					printf("You take %d points of damage\n", enemyDmg);
					printf("Your health %d, DIO health %d\n", x, y);
					break;	
				}
				case 2:
				{	
					dmg = (rand() % 20) + 10;
					enemyDmg = (rand() % 20) + 5;
					y = y - dmg;
					x = x - enemyDmg;
					avg += dmg;
					i++;
					puts("You create a piranha out of some rocks next to you and they seek out Diavolo, he counters with a time erase followed by a devastating punch\n");
					printf("You deal %d points of damage\n", dmg);
					printf("You take %d points of damage\n", enemyDmg);
					printf("Your health %d, DIO health %d\n", x, y);
					break;		
				}
				case 3:
				{


					dmg = (rand() % 20) + 20;
					enemyDmg = (rand() % 20) + 11;
					y = y - dmg;
					x = x - enemyDmg;
					avg += dmg;
					i++;
					puts("You punch Diavolo and imbue him with life energy, this puts him into an out of body mindstate making him vulnerable to taking more damage. \n");
					printf("The attack lands and deals %d points of damage\n", dmg);
					puts("Upon exiting this state, Diavolo responds with Epitaph allowing him to move into the future and land a devasting blow of his own. ");
					printf("You take %d points of damage\n", enemyDmg);
					printf("Your health %d, DIO health %d\n", x, y);
					break;		
				}
				default:
				{	
					puts("invalid input, try again.");
					break;
				}
			}
		}
	}


	avg = avg / (double)i;
	printf("\nYour average damage was %.2f\n", avg);
	
	
	if(x > 0 && y <= 0 )
	{
		return 1;
	}
	
	if(x <= 0 && y > 0)
	{
		return 0;
	}
	if(x <= 0 && y <=0)
	{
		printf("You both kill eachother");
		return 0;
	}	


}

// Tien Tran Function
int room_37_average() {
	int arr[10];
	int i,size=10;
	double average = 0.0;
	double num;
	room_37_fill_array(arr, size);
	for(i=0;i<size;i++) {
		printf("%d ", arr[i]);
		average+=arr[i];
	}
	average /= size;
	puts("\n");
	puts("What is the average of above numbers?\n");
	scanf("%le", &num);
	if(num == average) {
		puts("Congrats you guessed the average correctly\n");
		return 1;
	}
	else {
		printf("Sorry the average is %lf\n", average);
		return 0;
	}

}
// Tien Tran Function
void room_37_fill_array(int *pntr, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
       *pntr=(rand() % 20) + 1;
        pntr++;
    }
}

//Richard Vela, demondoor, angelicdoor, broomcloset are for door 11
void demondoor(void)
{
int choice;
char chararray[10];

printf("You chose the demonic looking door\n");
printf("The stone door budges open slowly to reveal a sinsiter cave with what looks like lava cracks lining the walls dimly lighing up the cave");
printf("The cave is very sketchy so you decide that if you feel threatened you will simply run back out the door and you can start over.\n");
printf("If you wish to leave now press 777, otherwise enter any other number\n");
	scanf("%d",&choice);
	while (choice != 777)
	{
	
	printf("After walking for a while you stumble upon a weird reflective crystal wall. Every time you touch it, the area that was touched glowed like a weird finger painting wall.\n");
	printf("You start drawing and after writing words realize it inverses the capitalization of letters.\n");
	
	printf("You decide to write a lowercase word and see what happens\n");
	printf("Insert text:\n");
	scanf("%s", chararray);
	printf("The wall repeats back: ");
	for(int i=0;i<10;i++)
	{
		chararray[i] = toupper(chararray[i]);
	}
	printf("%s",chararray);
	printf("\n");
	
	printf("You then decide to try writing an uppercase word\n");
	printf("Insert text:\n");
	scanf("%s", chararray);
	printf("The wall repeats back: ");
	for(int i=0;i<10;i++)
	{
		chararray[i] = tolower(chararray[i]);
	}
	printf("%s",chararray);
	printf("\n");
	
	printf("It's a neat novelty but it gets old quickly so you continue on.\n");
	printf("You keep going into a cave when suddently around a corner you see a deep gorge with a lava river at the bottom.\n");
	printf("You find a  bridge and decide to cross it despite how unstable it is, like the one they cross over the lava moat in shrek\n");
	printf("You cross it and immidetly it colaspes into the lava, and you find that foreward is only a dead end, oh no.\n");
	printf("You look around and realize up ahead is just a dead end without a way out. You turn back to see theres no way to get off of this small cave in front of the");
	printf("Just as panic begins to set in, you suddently wake up and find yourself at home in bed. You realize everything was just a dream. Or was it really?\n");
	exit(0);
	break;
	}

}
//Richard Vela, demondoor, angelicdoor, broomcloset are for door 11
void angeldoor(char name[])
{
int choice=0;
int i,x,y;
int sum = 0;
char idolnote;
float average;
FILE *rptr;
rptr = fopen("idolnote.txt", "r");
srand(time(NULL));

printf("You chose the ancient angelic door\n");
printf("You walk in and all of a sudden find yourself in a peaceful rainforest next to a waterfall.\n");
printf("You walk forward into the forest and find a temple, in the middle of which is an altar with a pair of golden die on the altar.\n");
printf("A loud and deep disembodied voice begins to speak and says:\n");
printf("Welcome, %s, to the temple of Shangri-La.\n",name);
printf("I noticed your name is %ld letters long, very well.\n", strlen(name));
printf("This temple contains a pair of ancient die used to decide the fates of people each year in the ancient civilization that used to be here, but since the civilization died out centuries ago, the die have sat here waiting for another person to use them.\n");
printf("Roll the die, if you get an even tally, you get good fortune, however, roll an odd tally, you will die instantly.\n");
printf("press 1 to roll die\n");
scanf("%d",&choice);
if (choice == 1)
	{
	printf("*rolls die*\n");
		for(i=0;i<2;i++)
		{	
			y = rand()%6+1;
			x = rand()%6+1;
		}
		sum = x + y;
		printf("First dice was %d and the second one was %d\n",x,y);
		printf("Your total number is %d\n", sum);
		average = (float)(x + y)/2;
		printf("The average of that roll was %.2f\n",average);
		
		
		switch (sum)
		{
		case 3:
		case 5:
		case 9:
		case 11:
			printf("%s, unfortunately you have recieved an odd total.\n",name);
			printf("You Died\n");
			exit(0);
		break;
		
		case 7:
		printf("%s, you got a 7, but unfortunately in this case it is not a lucky number\n",name);
			printf("You Died\n");
			exit(0);
		break;
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
			printf("Congratulation, %s, you have been chosen by the ancient gods to recieve a gift from the heavens.\n",name);
			printf("That gift is being able to go home alive. You probably don't want to stay here for the rest of your life despite it's beauty, and you would have a hard time making it home seeing that the door disapeared right as you stepped through it.\n");
			printf("Even if you expected to get some great super power or riches, the true blessing is being able to go home after taking such a risk as rolling those dice, so i shall send you back home. Goodbye.\n");
			printf("\n");
			printf("\n");
			printf("You suddently collapse on the ground unconscious. After an unknown amount of time, you awake in your bed at home and find a golden idol similar to the one from Indiana Jones on your nightstand next to you. There is a note that reads:\n");
			idolnote = fgetc(rptr);
			while(!feof(rptr))
			{
			printf("%c", idolnote);
			idolnote = fgetc(rptr);
			}
			fclose(rptr);
		break;
		}
	}
else 
	{
	printf("You did not choose 1\n");
	}
exit(0);	
}
//Richard Vela, demondoor, angelicdoor, broomcloset are for door 11
void broomcloset(void)
{
char usertext[100];
FILE *fptr = fopen("leatherjournal.txt", "w");

printf("You chose the broom closet. Great.\n");
printf("You walk in and see it is a dim and dank medium sized room full of old wooden barrels and cleaning supplies\n");
printf("On one of the barrels you find an old leather journal\n");
printf("'It's blank' you think to yourself\n");
printf("Inside the cover is a pen, you decide to write in it to see if the pen still works\n");

printf("Enter a word:\n");
scanf("%s", usertext);
fprintf(fptr, "%s", usertext);
puts("Check leatherjournal.txt to see what you've written");
fclose(fptr);
printf("Theres literally nothing but boring barrels and old janitorial supplies in here. I should go see what the other doors do.\n");
printf("You decide to go back to the closet door and prepare to reopen it,\n");
}


//Benjamin Lozano Functions start
void greenUSB26(int arrInt26[], int size)
{
	int greenChoice = 0; 
	int targetCoulumn;
	int targetRow;
	int i,j;

	printf("\nAs you walk closer to the green USB, you read the message above, it states...\n");
	printf("\t#2\n");

	printf("There are two options you consider\n");
	printf("1) plug the green USB into the laptop.\n");
	printf("2) Step back and view the room again.\n");
	printf("Enter choice 1-2: ");
	scanf("%d", &greenChoice);

	if(greenChoice == 1)
	{
		printf("You plug the green USB into the laptop and a window pops up\n");

		targetCoulumn = rand()%3 + 1;
		targetRow = rand()%3 + 1;

		for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 3; j++)
			{
				printf("%d ", arrInt26[j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("You step back and view the room again.\n");
	}
}
void blueUSB26()
{
	int blueChoice;

	printf("\nAs you walk closer to the blue USB, you read the message above, it states...\n");
	printf("\t#3\n");

	printf("There are two options you consider\n");
	printf("1) Plug the blue USB into the laptop.\n");
	printf("2) Step back and view the room again.\n");
	printf("Enter choice 1-2: ");
	scanf("%d", &blueChoice);

	if(blueChoice == 1)
	{
		printf("blue USB game\n");
	}
	else
	{
		printf("You step back and view the room again");
	}
}
void redUSB26()
{
	int redChoice;

	printf("\nAs you walk closer to the red USB, you read the message above, it states...\n");
	printf("\t#1");

	printf("There are two options you consider\n");
	printf("1) Plug the red USB into the laptop.\n");
	printf("2) Step back and look at the room again.\n");
	printf("Enter choice 1-2: ");
	scanf("%d", &redChoice);

	if(redChoice == 1)
	{
		printf("Red USB game\n");
	}
	else
	{
		printf("You step back and view the room again.\n");
	}
}
void lockedDoor26()
{
	printf("As you walk closer to the door on the other side you see a keypad lock...\n");
	printf("The numbers range from 0-9...\n");
}
//Benjamin Lozano end functions

/* Start of Room 19 (Jonathan Chua) Function Definitions [Bookmark2]*/

void room19_readFile(FILE *readPtr)
{ /* Criteria : While Loop */
	system("clear");
	char string[256];
	while(fgets(string,sizeof(string),readPtr) != NULL)
	{
		printf("%s",string);
	}    
}

int room19_doorDecision(void)
{ /* Criteria : Character Function */
	char choice;
	printf("Do you open the door? [Y]es [N]o : ");
	scanf(" %c", &choice);
	if(tolower(choice) == 'n')
	{
		return 99;
	}
	else
	{
		return 1;
	}
}

int room19_heroChoice(void)
{
	int choice;
	puts("1. You attempt to charm the dragon");
	puts("2. You prepare your weapon for battle");
	puts("3. You turn around and flee for dear life");
	printf("\nChoice : ");
	scanf(" %d", &choice);
	if(choice == 3)
	{
		choice = 99;
	}
	return choice;
}

void room19_criteriaBomb(int *arrayPtr)
{ /* Criteria : For Loop, Pointers, Arrays, Random*/
	int counter;
	for(counter = 0; counter < 10; counter++)
	{
		*arrayPtr = (rand() % 10);
		arrayPtr++;
	}
}

void room19_heroToast(FILE *readPtr)
{
	readPtr = fopen("./room19/room19_Toasty.txt", "r");
	system("clear");
	char string[256];
	while(fgets(string,sizeof(string),readPtr) != NULL)
	{
		printf("%s",string);
	}    
}

void room19_dragonRAWRS(FILE *readPtr)
{
	readPtr = fopen("./room19/room19_Flames.txt", "r");
	system("clear");
	char string[256];
	while(fgets(string,sizeof(string),readPtr) != NULL)
	{
		printf("%s",string);
	}    
}

void room19_ending3(FILE *readPtr)
{
	readPtr = fopen("./room19/room19_Ending3.txt", "r");
	system("clear");
	char string[256];
	while(fgets(string,sizeof(string),readPtr) != NULL)
	{
		printf("%s",string);
	}    
}

float room19_getAvg(int *array)
{ /* Criteria : Calculate Average */
	int counter, sum = 0;
	for(counter = 0; counter < 10; counter++)
	{
		sum += *array;
		array++;
	}
	return (sum / 10.0);
}

/* End of Room 19 Function Definitions */

void patrickInitialPrompt(void)
{
	puts("1. Do you open the door that is 50 feet in fron of you?");
	puts("2. Do you simplay stand there and wait for the noise to get clearer on it's own?");
	puts("3. There is an old, oriental gentleman in the corner which is lit up by a torch. Do you approach him?");
	puts("4. Your 4th grade English teacher says they can help you with something. Select this option to see what they're talking about");
	puts("5. Answer some basic questions");
	puts("You can also enter 99 to exit!");
}


int coolGuysInteract(void)//Markease Harris 
{

}

//AndyV
int urGuess(void)
{
        int y;
        puts("Pick a number between 1 and 10");
        scanf("%d", &y);

        return y;
}
//AndyV
int Anumber(int a[], int urGuess)
{
        int i, x;
        for(i = 0; i < 2; i++)
        {
                x = (rand() %10 + 1);
                a[i] = x;
        }

        if(urGuess < 1 || urGuess > 10)
        {
                return 0;
        }

        if(a[i] == urGuess)
                {
                        return i;
                }
                 return -1;
}




void stars(void)
{
  
  int n,m,i,k,j;
  
    
      //printf("how old are you by the way?\n");
      //scanf("%d",&n);
      int z = (rand()%50)+1;

      m = z;

      for(i = 1; i <= z; i++)
      {
        for(j = 1; j <= m-1; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

          m--;

           printf("\n");
        }
						
      puts("Woooaaahhh get ready for Hyper Drive \n");
}
void flurbos(void)
{   
   int sum = 0;
   int number;
   int test;
   float average;
   int x,y;

   puts("Please enter how many games you want to play.\n");
   scanf("%d", &x);

   puts("Enter the amount of Flurbos that you will need for that game, one by one\n");
   for(y = 0; y < x; ++y)
   {
   	scanf("%d", &number);
   	sum = sum + number;
   }
    	average = sum / y;

    	printf("You will need an average of  %.2f Flurbos, for your first time at Blips\n",average);
}
void planets(void)
{ 
  int planet = 0;
  char keyword[] = "Red";
  char input[3];
  
  puts("your choices are 1.Alphabetrum, 2.Bird World, or 3.Unity's Planet");
  scanf("%d", &planet);
  puts("\n");

  switch (planet)
	{
	case 1:
	{     
          puts("Morty Narrating.... \n");
          puts("Cool, we are heading to Alphabetrum \n");
          puts("This planet is  inhabited by an ancient race who resemble giant letters of various alphabets. It's ruled by a council, which consists of Helium-Q, Magnesium-J, and Hydrogen-F");
          puts("\n");
          puts("It's the homeworld of Ice-T, an exiled native of Alphabetrium who became a well known rapper on Earth. After Ice-T saved Earth from being destroyed by the Cromulons, the elders of Alphabetrium received word from across the galaxy of Ice-T's heroism and relieved him of his exile, granting him of his true form Water-T.\n");
    
          puts("\n");
          puts("Wait what is that noise?     Oh wait I think there is something wrong with the space cruiser \n");
          puts("Quick we need to fix these warnings, please type Red to cancel all the warining buttons that are going off \n");
                                                    
          	while(strcmp(input,"Red"))
          	{
            		scanf("%s", input); 
              		if(strcmp(input, "Red") == 0)
              		{
                  		printf("\n");
                  		printf("Great you fix all the warnings !! \n");
                  		printf("We can continue our jouney \n");
                  		printf("Lets hope Rick does not find out about this\n");
              		break;
              		}
              else
              {
               	printf("Hurry, please type Red to cancel all the warining buttons that are going off \n");
              }
           	}
                                             
              break;
       	}
                                           
	case 2:
	{
		puts("Morty Narrating.... \n");
                puts("Cool, we are heading to Bird World \n");
                puts("Bird World is the planet where Birdperson lives. TV-signals from Earth take 20 years to reach this planet, meaning it's 20 light-years away from Earth, although in the season 2 finale The wedding squanchers, Rick claims that Bird world is over 6,000 light years away. \n");
                puts("\n");
                puts("Bird People live in wooden structures often incorporated into trees, but do possess technology like TV. They primarily eats worms and have worm ranches around on the planet. When sending messages they may tend to use robotic eggs with hologram messages, or it is technology by Tammy. In Bird culture, mate-melding is the equivalent of marriage on Earth.");
                puts("\n");
                puts("Seems like we are having some engine problems we are going to have to stay here untill we can get it fix. \n");
                puts("Whats this, looks like rick left us a note lets sees what it says\n");

                noteFromRick();
	break;
	}   
	case 3:
	{
         puts("Morty Narrating.... \n");
         puts("Cool, we are heading to Unity's Planet \n");
         puts("\n");
         puts("The planet Unity was entirely assimilated, and plans to use to assimilate the Galactic Federation. However, Unity left the planet with its people following certain events with Rick. \n");
         puts("\n");
         puts("The inhabitants are blue-skinned humanoids with three yellow-tipped protrusions on their heads. There are differences in nipple structure as some have flat concentric nipple rings, and others have cone nipples. In the absence of Unity's control, the inhabitants instantly devolve into starting a race war based on their nipple differences. The unassimilated crew of the S.S. Independence do not exhibit this, but they may have all been of a similar nipple-type. The entire planet's population disappeared after Unity decided to leave Rick, and went to stay with Beta-Seven.");
         puts("\n");

                                                
	break;
	} 
 	}
}
void goodBye(void)
{ 
   int i;
   char message[] = {"Good Bye"};
   char *m = message;

   for(i = 0; i<sizeof(message);i++)
   {
     printf("%c",*m);
     m++;
   }
}
void noteFromRick(void)//Berenis Castruita
{

  FILE *wptr;
  char read;
  char rs[100];
  wptr = fopen("note.txt", "r");

  if(wptr == NULL)
  {
    printf("Oh never mind, it wasn't a note\n");
    exit(1);
  }

  while((read = fgetc(wptr)) != EOF)
        printf("%c", read);

  fclose(wptr);


}
