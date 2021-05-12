
//Contributors
//G. Poppe
//Meredith Quail

//Benjamin Lozano
//Room 1: Mohammad Karahassan

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

void mQhelpMenu(void); //mquail
void mQcontinue(void); //mquail
int mQuserInput(void); //mquail
int mQparser1(FILE *writePointer, FILE *readPointer, bool *clearParserPointer); //mquail
int mQparser2(FILE *writePointer, FILE *readPointer, bool inventory[7]); //mquail
void mQprintInventory(bool inventory[7]); //mquail
void mQprintLocations(int noteCount, const char* const locations[10]); //mquail
char uInput[20]; //mquail
const char* const locations[10] = {"stove", "fridge", "freezer", "sink", "cabinets", "microwave"}; //mquail
bool inventory[10] = {false /*[0]tomato*/,false /*[1]onions*/,false /*[2]meat*/,false /*[3]beans*/,false /*[4]spices*/,false /*[5]tortillas*/,false /*[6]GameEnd*/, false /*[7]Can Opener*/, false /*[8]CO used*/, false /*[9]5found*/}; //mquail
bool clearParser = false; //mquail

void printIntroduction(void);																			 // Manuel Castaneda
void printRules(int rollsPerTurn, int pointsToLoose);							 // Manuel Castaneda
double averageM(int rolls[], int numberOfRolls);										 // Manuel Castaneda
double sumM(double sums[], int maxSums);														 // Manuel Castaneda
void printRollResults(int rolls[], int numberOfRolls, int isUser); // Manuel Castaneda


void play(int *ptr);//josue
void story(void);//josue
void elf(void);//josue
void results(int *ptr);//Josue
double avgElf(int a[]);//Josue
void outcome(double x, double y);//Josue
void afterElf(void);//Josue
void vendingMachine(void);//Josue
void door(void);//Josue
void secondGame(void);//Josue
int game21Opponent();//Josue
int game21(int d[]);//Josue
void cardgameResult(int o, int y);//Josue
void afterSecond(void);//Josue
int  theFinale(int f[]);//Josue
int theAngel(int f[]);//Josue
void lastResult(int a, int o);//Josue
void finalization(void);//Josue

// Talise
void printMessage(int msg[]);
void decodeMessage(char alphabet[], int codedMessage[], int *totalGuesses, int *wrong);
void userFate(int x);

//Anthony Blass
double abChestAvg(int choice);
//Anthony Blass
void abRandRoll(int trapChoice);

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
void wordGame(char *pointer);



//Benjamin Lozano
int greenUSB26(int *arrPtr26);
int blueUSB26(int *arrPtr26);
int redUSB26();
void lockedDoor26(int targetNumber1, int targetNumber2, int targetNumber3);
//Benjamin Lozano

//Cristian Lopez
_Bool cLopezValidBet(double amount, double bal);
void cLopezFillFlipArray(int *pntr);
_Bool cLopezScanFlipArray(int *pntr, int userPick);
//Cristian Lopez

int urGuess(void);//AndyV
int Anumber(int a[], int urGuess);//AndyV


//Markease Harris
int coolGuysInteract(void);

void noteFromRick(void);//Berenis Castruita
void stars(void);//Berenis Castruita
void flurbos(void);//Berenis Castruita
void planets(void);//Berenis Castruita
void goodBye(void);//Berenis Castruita


//Matthew Bunma
void mbchoice(void);
void mbchoice2(void);



void mining(int *p,int *tCoin, int it[]) ; //David Ko
void status(int *p,int tCoin, int it[]);
void gamble(int *p, char n[]);
void flipCoin(int *p);
void shop(int *p, int it[]);
void VIProom(int *p, char n[]);
void pause27();
int fairy(int *p, char n[]);

int total();//Elizabeth Flores prototype function
int prompt(void);
void modArray(int arrInt[], int size);
void printArray(int arrInt[], int size);
void eflores(char strings[]);


int averageMk(int x, int y); //mkarahassan room#1
void ggPromtMk(int x); //mkarahassan room#1


//Fernando Rodriguez
int Coinflip21(int x ,int z);
void codeH(void);
void codeT(void);






int main(int argc, char *argv[])
{
	int a,x,y,z,i,h,g,k,request,choice=0;
	char name[256];
	char tech[256];
	char *pointer = tech;
	int boxNum=0;
	int sum = 0;
        int number;
	int action=0,totalCoin=0, item[5]={0};// 1 actions 2 pickaxe
	int *ptr;

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
				int i = 0, length = 0;
				char c;
				//arrays
				int value[10] = {2,4,6,1,8,20,9,0,7,35};
				char string[100]="";
				int counter = 0;
				int denom = 0;
				int calc = 0;
				//pointers
				FILE *wrptr, *wptr;
				//File manipulation
				wptr = fopen("stravo.txt","w+");
				wrptr = fopen("newStravo.txt","w");
				while(choice != 99)
				{
					puts("You open the door and find a lot of people jumping around");
					puts("You are almost certain that you have found a hidden civilization");
					fprintf(wptr, "You open the door and find a lot of people jumping around..\nYou are almost certain that you have found a hidden civilization.\nEvery option you choose has a hidden value related to it..\nChoose wisely to earn enough points to win this game!!\n");
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
						fprintf(wptr, "You talk to one of the elders and find out that a monster has threatened the city and everyone is panicking.\nThe monster is a big red dragon that came upon the city to burn its lands and steal its princess.\n");
						counter+=2;
						denom ++;
						puts("The monster is a big red dragon that came upon the city to burn its lands and steal its princess");
						printf("Once again.. You have 3 options.\n1. You can fight with them\n2. You can run away\n3. You can have a random option be chosen for you.\n");
						scanf("%d",&choice);
						//switch statement
						switch(choice)
						{
							case 1:
							{
								puts("GREAT!! You chose to fight!");
								fprintf(wptr, "GREAT!! You chose to fight!\n");
								counter+=3;
								denom ++;

								puts("1. Meet the princess and tell her not to worry.... You will protect her");
								puts("2. Pick up a weapon and go straight to the battlefield.");

								scanf("%d",&choice);
								if (choice == 1)
								{
									printf("You meet the princess and promise her that you will protect her\nShe tells you that she would marry you if you save the city.\nYou pick up your sword and fight the dragon.\nThe fight gets intense as the dragon breathes fire everywhere.\nHe flies at you and you swing your sword and cut his neck.\nThe city starts sheering your name!!\nThe princess comes up to you and gives you a kiss\nFinally, you get married with the princess and become the prince of the city\nEveryone lives happily ever after\n\nThank you for playing. GG\n");

									fprintf(wptr,"You meet the princess and promise her that you will protect her\nShe tells you that she would marry you if you save the city.\nYou pick up your sword and fight the dragon.\nThe fight gets intense as the dragon breathes fire everywhere.\nHe flies at you and you swing your sword and cut his neck.\nThe city starts sheering your name!!\nThe princess comes up to you and gives you a kiss\nFinally, you get married with the princess and become the prince of the city.\nEveryone lives happily ever after.\n\nThank you for playing. GG..\n");
									counter+=4;
									denom ++;
								}
								if (choice == 2)
								{
									printf("You pick up your weapon and go straight to the battlefield\nThe dragon is breathing fire everywhere! He is killing a lot of people!!\nYou start swinging your sword at the dragon and that gets him angry\nHe flies at you and you find a chance to cut his neck with your sword.\nThe city sheers your name! You are now the hero of the city.\nThe princess comes up to you and gives you a kiss\nEver since then, you became the protector of the city and everyone respects you!\n\nThank you for playing. GG\n");

									fprintf(wptr,"You pick up your weapon and go straight to the battlefield..\nThe dragon is breathing fire everywhere! He is killing a lot of people!!\nYou start swinging your sword at the dragon and that gets him angry.\nHe flies at you and you find a chance to cut his neck with your sword.\nThe city sheers your name! You are now the hero of the city.\nThe princess comes up to you and gives you a kiss.\nEver since then, you became the protector of the city and everyone respects you!\n\nThank you for playing. GG..\n");
									counter+=3;
									denom ++;
								}
								break;
							}
							case 2:
							{
								puts("WOAH! You chose to be a coward! You do not deserve to play anymore.. GG");
								fprintf(wptr, "WOAH! You chose to be a coward! You do not deserve to play anymore.. GG\n");
								counter--;
								denom ++;
								break;
							}
							case 3:
							{
								//random
      								choice = rand()%2 + 1;
								if (choice == 1)
								{
									puts("GREAT!! You chose to fight!");
									fprintf(wptr, "GREAT!! You chose to fight!\n");
                							counter+=3;
									denom ++;

									puts("1. Meet the princess and tell her not to worry.... You will protect her");
									puts("2. Pick up a weapon and go straight to the battlefield.");
									scanf("%d",&choice);
									if (choice == 1)
									{
										printf("You meet the princess and promise her that you will protect her\nShe tells you that she would marry you if you save the city.\nYou pick up your sword and fight the dragon.\nThe fight gets intense as the dragon breathes fire everywhere.\nHe flies at you and you swing your sword and cut his neck.\nThe city starts sheering your name!!\nThe princess comes up to you and gives you a kiss\nFinally, you get married with the princess and become the prince of the city\nEveryone lives happily ever after\n\nThank you for playing. GG\n");

										fprintf(wptr,"You meet the princess and promise her that you will protect her\nShe tells you that she would marry you if you save the city.\nYou pick up your sword and fight the dragon.\nThe fight gets intense as the dragon breathes fire everywhere.\nHe flies at you and you swing your sword and cut his neck.\nThe city starts sheering your name!!\nThe princess comes up to you and gives you a kiss\nFinally, you get married with the princess and become the prince of the city.\nEveryone lives happily ever after\n\nThank you for playing. GG..\n");
										counter+=4;
										denom ++;
										break;
									}
									if (choice == 2)
									{
										printf("You pick up your weapon and go straight to the battlefield\nThe dragon is breathing fire everywhere! He is killing a lot of people!!\nYou start swinging your sword at the dragon and that gets him angry\nHe flies at you and you find a chance to cut his neck with your sword.\nThe city sheers your name! You are now the hero of the city.\nThe princess comes up to you and gives you a kiss\nEver since then, you became the protector of the city and everyone respects you!\n\nThank you for playing. GG\n");

										fprintf(wptr,"You pick up your weapon and go straight to the battlefield\nThe dragon is breathing fire everywhere! He is killing a lot of people!!\nYou start swinging your sword at the dragon and that gets him angry.\nHe flies at you and you find a chance to cut his neck with your sword.\nThe city sheers your name! You are now the hero of the city.\nThe princess comes up to you and gives you a kiss.\nEver since then, you became the protector of the city and everyone respects you!\n\nThank you for playing. GG..\n");
										counter+=3;
										denom ++;
										break;
									}
								}
								if (choice == 2)
								{
									puts("WOAH! You chose to be a coward! You do not deserve to play anymore.. GG");
									fprintf(wptr, "WOAH! You chose to be a coward! You do not deserve to play anymore.. GG\n");
									counter--;
									denom ++;
								}
								break;
							}
						}
						break;
					}
					else if (choice == 2)
					{
						puts("You walk further down the street and you get amazed by how beautiful the city is");
						puts("However, you notice that people are panicking!!");
						puts("It seems like a big scary dragon is coming to attack the city and take the princess away!");
						fprintf(wptr, "You walk further down the street and you get amazed by how beautiful the city is.\nHowever, you notice that people are panicking!!\nIt seems like a big scary dragon is coming to attack the city and take the princess away!\n");
						counter++;
						denom ++;

						printf("Once again.. You have 3 options.\n1. You can offer any help\n2. You can pick a number (0-9) that has a hidden value (The value will determine if you win or lose the game) Try your luck?\n3. You can flee the city and never come back.\n");
						scanf("%d",&choice);

						if (choice == 1)
						{
							printf("You ask the citizens if they need any help.\nPeople tell you that they need a fearless fighter to get rid of this monster that is threatening their beautiful city \n");
							fprintf(wptr, "You ask the citizens if they need any help.\nPeople tell you that they need a fearless fighter to get rid of this monster that is threatening their beautiful city. \n");
							counter+=3;
							denom ++;

							puts("1. Meet the princess and tell her not to worry.... You will protect her");
							puts("2. Pick up a weapon and go straight to the battlefield.");
							scanf("%d",&choice);
							if (choice == 1)
							{
								printf("You meet the princess and promise her that you will protect her\nShe tells you that she would marry you if you save the city.\nYou pick up your sword and fight the dragon.\nThe fight gets intense as the dragon breathes fire everywhere.\nHe flies at you and you swing your sword and cut his neck.\nThe city starts sheering your name!!\nThe princess comes up to you and gives you a kiss\nFinally, you get married with the princess and become the prince of the city\nEveryone lives happily ever after\n\nThank you for playing. GG\n");

								fprintf(wptr,"You meet the princess and promise her that you will protect her\nShe tells you that she would marry you if you save the city.\nYou pick up your sword and fight the dragon.\nThe fight gets intense as the dragon breathes fire everywhere.\nHe flies at you and you swing your sword and cut his neck.\nThe city starts sheering your name!!\nThe princess comes up to you and gives you a kiss\nFinally, you get married with the princess and become the prince of the city.\nEveryone lives happily ever after\n\nThank you for playing. GG..\n");
								counter+=4;
								denom ++;
							}
							else if (choice == 2)
							{
								printf("You pick up your weapon and go straight to the battlefield\nThe dragon is breathing fire everywhere! He is killing a lot of people!!\nYou start swinging your sword at the dragon and that gets him angry\nHe flies at you and you find a chance to cut his neck with your sword.\nThe city sheers your name! You are now the hero of the city.\nThe princess comes up to you and gives you a kiss\nEver since then, you became the protector of the city and everyone respects you!\n\nThank you for playing. GG\n");

								fprintf(wptr,"You pick up your weapon and go straight to the battlefield\nThe dragon is breathing fire everywhere! He is killing a lot of people!!\nYou start swinging your sword at the dragon and that gets him angry\nHe flies at you and you find a chance to cut his neck with your sword.\nThe city sheers your name! You are now the hero of the city.\nThe princess comes up to you and gives you a kiss.\nEver since then, you became the protector of the city and everyone respects you!\n\nThank you for playing. GG..\n");
								counter+=3;
								denom ++;
							}
						}
						else if (choice == 2)
						{
							puts("You chose to pick a number (0-9)");
							puts("I hope you are lucky enough to win. GG");
							fprintf(wptr, "You chose to pick a number (0-9)\nI hope you are lucky enough to win. GG\n");
							scanf("%d",&y);
							//Arrays
							counter = value[y];
							denom ++;
						}
						else if (choice == 3)
						{
							puts("You chose to flee the city.. You are a coward.. GG");
							fprintf(wptr, "You chose to flee the city.. You are a coward.. GG..\n");
							counter--;
							denom ++;  
						}
						break;
					}		
					else if (choice == 3)
					{
						puts("You opened the door and the water killed you.. GG");
						fprintf(wptr, "You opened the door and the water killed you.. GG..\n");
						counter++;
						denom ++;
						break;
					}
					else
					{
						puts("Wrong choice!!!");
					}
				}
				calc = averageMk(counter, denom);
				printf("Average = %d / %d = %d. \n \n", counter,denom,calc);
				ggPromtMk(calc);

				printf("\n\nYour whole progress in the story has been saved to a file called (stravo.txt)\nYou can modify this file into a new file called (newStravo.txt)\n\n1. Change the whole story to uppercase letters.\n2. Change the whole story to lowercase letters.\n");
				scanf("%d",&x);

				//File manipulation
				if (x == 1)
				{
					rewind(wptr);
					//while loop
					while(fscanf(wptr,"%s",&string) != EOF)
					{
						//string function
						length = strlen(string);
						//for loop
						for(i=0;i<length;i++)
						{
							// character function
							string[i] = toupper(string[i]);
						}
						fprintf(wrptr,"%s ",string);
					}
				}
				else if (x == 2)
				{
					rewind(wptr);
					while(fscanf(wptr,"%s",&string) != EOF)
					{
						length = strlen(string);
						for(i=0;i<length;i++)
						{
							string[i] = tolower(string[i]);
						}
						fprintf(wrptr,"%s ",string);
					}
				}
				fclose(wptr);
				fclose(wrptr);
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
						break;
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
					int trapChoice = rand()% 21 + 1;
					int roll;
					int roomChoice;

					puts("you open the door, do you open it fast or slow? 1 Slow 2 Fast.");
					scanf("%d",&choice);

					switch(choice)
					{
						case 1:
						{
							puts("You open the door slowly, you notice a tripwire by your feet.");
							puts("Do you want to disarm the trap? 1 Yes 2 No");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("Roll a D20, if you score 10 or higher you disarm the trap\n");
								puts("If you score a 9 or lower you fail...\n");
								puts("Roll now...\n");
								
								roll = trapChoice;

								printf("%d\n",roll);
								
								printf("\n");
								abRandRoll(trapChoice);
								printf("\n");
								
								puts("You get passed the trip wire and look around the room.\n");
								puts("You see a chest next to a training dummy, a desk with paper on it.\n");
								puts("You also see a door on the right side of room...\n");
								puts("Where do you want to go? 5 Chest 6 Desk 7 Door \n");
								scanf("%d",&roomChoice);

								switch(roomChoice)
								{
									case 5:
									{
										abChestAvg(choice);
										break;	
									}

									case 6:
									{
										puts("TEST 2");
										break;
									}

									case 7:
									{
										puts("You walk towards the the door...\n");
										puts("something seems familiar to you...\n");
										break;
									}


								}
							}
								


						

							else if(choice == 2)
							{
								puts("You ignore it and you hear a click two arrows fly and hit you in both knees.\n");
							}
							break;
						}	

						case 2:
						{
							puts("You open the door fast, you hear a click, and an arrow hits you in the knee...");
							puts("Try to slowly open the door next time...");
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
					rollDie = rand()%9;

					puts("\nYou open the door and all the water drains");
					puts("In front of you are five doors");
					puts(" -----   -----   -----   -----   ----- ");
					puts("|     | |     | |     | |     | |     | ");
					puts("|  1  | |  2  | |  3  | |  4  | |  5  | ");
					puts("|     | |     | |     | |     | |     | ");
					puts(" -----   -----   -----   -----   ----- ");
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
							puts("\nYou enter door number 2 and find a man rolling dice");
							puts("You approach the man");
							puts("The man says to you, if you roll the correct number I will give you this gold ingot but if you lose then you'll be stuck down here forever");
						       	printf("\nWould you like to roll? [1] = yes, [2] = no\n");
							scanf("%d", &choice);

							if(choice == 1)
							{
								puts("\nThe man says to pick a number 1 - 10");
								printf("Enter a number: ");
								printf("%d", rollDie);//Random number appears to test the correct guess

								scanf("%d", &choice);
								
								if(choice == rollDie)
								{
									puts("Congrats you won the gold ingot!");
									mbchoice();
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
								mbchoice();
								break;
								break;
							}
							
						}
						case 3:
						{
							char welp[200];
							FILE *mbrptr;
							mbrptr = fopen("mwrongdoor.txt", "r");
							

							printf("WRONG DOOR YOU CHOOSE WRONG \n");
							while(!feof(mbrptr))
							{
								if(mbrptr)
								{
									fscanf(mbrptr, "%s",welp);
									printf("%s \n", welp);
								}
							}
							fclose(mbrptr);
							
							printf("Returning to the Main Menu \n");
							break;
						}
						case 4:
						{
							puts("\nYou have chosen the 4th door, this door leads you to riches");
							puts("Walking down the hallway you see a paper on the ground");
							puts("You pick up the paper and on it says PASSWORD: Lakers");
							puts("You continue on and make a sharp left down the hallway and find yourself staring at a sophisticated keypad");
							mbchoice2();
							break;
						}

						case 5:
						{
							puts("This door will test your ability to count");
							puts("Enter a word and after will ask you how many letters are in the word");
							char mbstr[100];
							int i = 0;
							int count = 0;
					    		int mbletters;
							printf("Please enter a word:  ");
							scanf("%s", mbstr);
								            
							while (mbstr[i] != '\0')
							{
								i++;
							}
							for(int i = 0; i < strlen(mbstr); i++);
							{
								if(mbstr[i] != ' ')
									count++;
							}
							printf("Enter the amount of letters: ");
							scanf("%d", &mbletters);

							if(i == mbletters)
							{
								printf("You have guessed correctly\n");
								printf("Exiting the game\n");
							}
							else
							{
								printf("Does not equal\n");
								printf("You cant count sending you back to the main menu\n\n");
								break;
							}
							return 0;
						}
						
					}					
						
					}
				}
				break;
			}
			case 8: //Meredith Quail
			{
				// Declare Variables
				char userE;
				char uYes[5] = "yes";
				char uNo[4] = "no";
				bool *clearParserPointer = &clearParser;
				FILE *writePointer = fopen ("recipe.txt", "w"); //write pointer to file recipe.txt, append
				FILE *readPointer = fopen("recipe.txt", "r"); //read pointer to receipt.txt
				
				while(inventory[6] == false)
				{
					// Opening Narration
					system("clear");

					puts("--------------------------------------------------------------------------------------------");
					puts("\nTwisting the knob and bracing your shoulder, you push against the heavy door with a strained grunt.\n");
					puts("It slams shut just as you weave your way through. The door is now sealed tightly behind you.\n");
					puts("A familiar grumble roils from deep within your gut.");
					puts("Before you conquer that hefty door again, you'll have to vanquish the hunger beast.\n");
					printf("Do you want to take a look around? (Type y for yes or n for no) :");
					scanf(" %c", &userE);

				switch(userE)
				{
					case 'y' :
					{
					  puts("\nPatting your stomach in agreement, you decide that going on incredible adventures through other mysterious doors can wait.\n");
					  puts("For now, you have to look around for some food. Eat first, think later.\n");
					  break;
					}

					case 'n' :
					{
					  puts("\n...no?");
					  puts("\nNO?????");
					  printf("\noOOOooo OOO oo lookit me, I'm a silly little adventurer named %s! I dOnT nEeD To eAt!! i'M sO StROnG aN d ClEvEr AnD I'm nEvEr HuNgRYyyyYYH haAHAa heeHEEhoO\n\n", name);
					  puts("You're about as dumb as a bowl of oats. Do you think you can open a heavily sealed door like this?\n");
					  puts("When you're so hungry, you couldn't push a door back open?!\n");
					  puts("Well, too bad - that door isn't budging, and you're looking around for some sustenance, whether you like it or not! Your stomach isn't giving you any other options here!\n");
					  break;
					}

					case 'm' :
					{
					  puts("\n...what do you mean by 'm'? Maybe??\n\nListen, you gotta be more decisive in life. Don't 'maybe' your way through things anymore. Today's the day you're gonna seize destiny, and you're gonna seize it right here in this kitchen!\n");
					  break;
					}

					default :
					{
					  puts("\nWell, whatever you chose, the universe pretended not to hear it. Your fate is dictated by your stomach, so you're being thrown headfirst into this adventure whether you like it or not!\n");
					  break;
					}
				}

				mQcontinue();

				system("clear");
				puts("---------------------------------------------------------------------------------");
				puts("LOST IN THE SAUCE\n\nYOUR GOALS : \nFind the 5 Notes, Complete the Recipe \nCook and eat the food to escape the Kitchen");
				mQhelpMenu();
				puts("--------------------------------------------------------------------------------");
				mQcontinue();
				puts("\nYou were so preoccupied with the door and your appetite that you hadn't noticed the room is completely dark.\n");
				puts("Fishing your phone out of your pocket, you swipe a few times to activate its flashlight.\n");
				puts("Sweeping the room, you notice the stainless steel glint of a FRIDGE and FREEZER wedged into the right corner.\n");
				puts("You can make out the red glow of a STOVE clock, blinking 00:00 steadily against the darkness.\n");
			  
				// Parser Loop 1
				while (mQuserInput() && mQparser1(writePointer, readPointer, clearParserPointer));

			}

			fclose(writePointer);
			break;

		} 
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
			// Dave Yee
			{
				while(choice != 99)
				{
					int x,y,z,i,temp = 0, budget = 10000;
					double average, sum = 0, wallet = 0, marketPlace[5] = {50000, 4000, 110, .50};
					char filename[100], ch, menu_option, item_option;
					FILE *fptr;

					puts("\n-----------------------------------------------------------------------------------------");
					puts("HELLO FELLOW SHOPPERS! WELCOME TO MARKET 14, WHERE YOU COULD BUY ANYTHING YOU WANT!!");
					puts("MARKET 14 HAS ALL THE LATEST STOCKS AND CRYPTOS YOU CAN FIND.");
					puts("*TO LOOK AT THE ITEM MENU PLEASE PRESS 1 (ANY OTHER KEY TO CANCEL SHOP): *");
					scanf(" %c", &menu_option);

					switch(menu_option){
						case '1':
							// Menu
							printf("type ROOM14_MENU.txt: ");
							scanf(" %c", filename);

							fptr = fopen("ROOM14_MENU.txt", "r");
							//fptr = fopen(filename, "r");
							if(fptr == NULL)
							{
								printf("EMPTY FILE\n");
								exit(0);
							}

							ch = fgetc(fptr);

							while (ch != EOF)
							{
								printf("%c", ch);
								ch = fgetc(fptr);
							}

							
							
							printf("You have a budget of $%d. What would you like to buy? (type Q to quit):\n", &budget);
							scanf(" %c", item_option);

							while(item_option != 'Q' || item_option != 'q')
							{
								printf("You have a budget of $%d left. What would you like to buy? (type Q to quit):\n", &budget);
								printf("A - BTC($50000)\n");
								printf("B - ETH($4000)\n");
								printf("C - ETC($110)\n");
								printf("D - DOGE($0.50)\n");
								scanf(" %c", &item_option);

								if(item_option == 'a' || item_option == 'A')
								{
									wallet += 50000;
									budget -= wallet;
									temp++;
								}
								else if(item_option == 'b' || item_option == 'C')
								{
									wallet += 4000;
									budget -= wallet;
									temp++;
								}
								if(item_option == 'c' || item_option == 'C')
								{
									wallet += 110;
									budget -= wallet;
									temp++;
								}
								if(item_option == 'd' || item_option == 'D')
								{
									wallet += .5;
									budget -= wallet;
									temp++;
								}
								else
								{
									printf("Invalid Option");
								}
							
							}
							
							
							average = wallet/temp; 

							printf("You spent $%d amount.\n", &wallet);
							printf("You have $%d left.\n", &budget);
							printf("You averaged $%d per crypto. Congrats!", &average);
						
							fclose(fptr);
							
						break;
						case '2':						
						default:
							printf("Thank you! Come again");
							exit(0);

					}
					











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
					int y=1;
					int z=0;
					int r=0;
					int CC=0;
					int AA=0;
					int BB=0;
					int DD=0;
					
					double toys=0;
					double bin=21;
					double bed=10;
					double desk =15;
					double sofa =25;
					double check =0;
					double ave;
					char entry = 'x';
					char Thename[10];
					char string[10] = "Atem";
					char *pntr;
					pntr = Thename;
					srand(time(NULL));
					puts("You have entered a chamber resembling the ruins of an Ancient Egyptian Temple ");
					puts("The door to your left shows signs of innocence");
					puts("while the door to your right emits a dark and powerful energy");
					puts("You see a dark figure in the distance resembling a clock");
					puts("He tosses a coin");
					r= Coinflip21(x,z);
					
					printf("???: %s would you ignore fate \n",name);
					puts("???: Pick a door?!");
					puts("1. Innocent door");
					puts("2.Door towards a powerful Energy");	

					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
						{
							if(r==1)
							{
							printf("reveal code HEADS\n"); 
							codeH();
							
							puts("A child appears he asks you to choose a door");
							puts("1. The Room is filled with toys");
							puts("2. The Room is filled with Books");
							scanf("%d",&choice);
							switch(choice)
							{
								case 1:
								{
									puts("???: My names Yugi can you help me count my toys");
									printf("%s : Sure \n",name);
									puts("A: Check bin");
									puts("B: Check under bed");
									puts("C: Check under the sofa");
									puts("D: Check the desk");
									puts("s: to take average");
									
									for(i = 0; i<y;i++ )
									{
										scanf("%s",&entry);
									switch(entry)
									{
										case 'a':
										case 'A':
										{
											if(AA == 0)
											{
											bin = 21;
											printf("You find %lf toys \n",bin);
											
											toys = bin + toys;
											check++;
											AA++;
											y++;
											break;
											}
											else if( AA == 1)
											{
												printf("bin: already checked: it had %d\n",bin);
												y++;
												break;
											}
											
										}
										case 'b':
										case 'B':
										{
											if( BB == 0)
											{
											
											printf("you find %lf toys\n",bed);
											
											toys = bed + toys;
											BB++;
											y++;
											check++;
											break;
											}
											else if(BB == 1)
											{
												printf("bed: already checked: it had %lf \n",bed);
												y++;
												break;
											}
											
										}
										case 'c':
										case 'C':
										{
											if(CC == 0)
											{
											
											printf("you find %lf toys \n",sofa);
											
											toys= sofa+toys;
											y++;
											CC++;
											check++;
											break;
											}
											else if (CC==1)
											{
												printf("Sofa: already checked: it had %lf \n",sofa);
												y++;
												break;
											}
											
										}
										case 'd':
										case 'D':
										{
											if(DD == 0)
											{
											
											printf("you find %lf toys \n",desk);
											
											toys = desk+ toys;
											DD++;
											y++;
											check++;
											break;
											}
											else if(DD == 1)
											{
												printf("desk: already checked: it had %lf\n",desk);
												y++;
												break;
											}
											
											
										}
										
										case 's':
										{
											puts("Yugi: Lets find the Average");
												ave = (toys)/check;
												printf("%s: THe average is %lf",ave,name);
											puts("Yugi thanks you for your time and shows you the exit");
											puts("You leave a better person");
											puts("karma++");
											puts("yugi finds You worthy");
											puts("99 to continue");
											
											break;
										}
										default:
										{
											y--;
											
										}
									}
									
									
									}
									puts("Intresting choice");
									scanf("%d",&choice);
								
								}
								case 2:
								{
									puts("You are given the keyblade");
									puts("You study for 10 years and can now weild the keyblade as a master");
									puts("Congradulations(Exit 99)");
									break;
								}
								case 21:
								{
									puts("You have enter the land of Pokemon");
									puts("A Charazard appears");
									puts("He burns you alive for not having a pure soul (Exit: 99)");
									
									break;
								}
								default:
								{
									puts("???: You dare ignore Yugi!");
									puts("The pharaoh Turns you into a skull servant");
									puts("as you are being turned into bones the young boy asks the Pharaoh to leave you alone and give you mercy");
									puts("You have been spared and leave the dungeon");
									puts("Mercy(99 to Quit)");
									scanf("%d",&choice);
									
									break;
								}
								
							}
								
							}
							else
							{
								puts("The pharaoh: I did not allow you to meet Yugi.");
								puts("You fall into a cavern where you meet Eli Shane");
								puts("You join the Shane gang and help fight crime across slug terra");
								puts("Exit: 99");
							}
							puts("Intersting choice");	
							scanf("%d",&choice);
							break;		
						}
						case 2:
						{
							if(r==2)
							{
							printf("The code will be revealed:\n");
							codeT();
							printf("what is the name of the man who owns the temple?(Enter Exactly as written)\n");
							scanf("%29s",Thename);
							if(strcmp(string ,Thename)== 0)
								{
									printf("you have met the king of games \n");
									printf("He gives you 999,999,999 doge coin \n");
									puts("1. Enter the code to the next door");
									puts("2. You leave the dungeon with a fortune ");
									scanf("%d", &choice);
									switch(choice)
									{
										case 1:
										{
											puts("???: Red eyes black Dragon , Inferno Fire Blast");
											puts("Fatality");
											puts("Joey Wheeler Wins");
											break;
										}
										case 2:
										{
											puts("You sell your doge coin");
											puts("You regret it immediatly since over night Elon Musk makes it the currency of space");
											break;
											
										}
										case 25:
										{
											puts("You have gained power beyond comprehenshion");
											puts("You have become a servent of the Pharaoh");
											puts("You are know as Palladium Orcle Mahad");
											puts("You live a happy life");
											break;
										}
										default:
										{
											puts("you fell down a Hole");
											break;
											
										}
										
									}
									
								}
								else
								{
									printf("???: Blue Eyes White dragon \n White lightning!");
									printf("Fatality \n");
									printf("Seto Kaiba wins (99 to Quit) \n");
									
								}
							
							}
						else
						{
							puts("???: Time magic");
							puts("The Door was locked and the temple starts to crumble");
							puts("Debree falls on your head and you fall unconscious");
							puts("A young boy helps you. you find your self in the innocent door");
							puts("I should have believed in the heart of the cards");
							puts("your wounds were to severe you die of head trauma in the boys arms");
							puts("Fatality");
							puts("Time wizard Wins");
						}	
							puts("\n Intersting choice(99 to quit)");
							scanf("%d",&choice);	
								
								
							
						
							break;
						
						
					}
					default:
					{
						printf("That wasn't an option \n");
						puts("???: Dark Magician, Dark Magic Attack ");
						puts("Fatality");
						puts("Yugi Muto Wins");
						puts("99 to quit");
						scanf("%d",&choice);
						
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
					
					puts("Select your path");
					puts("1. Star Platinum");
					puts("2. Golden Experience.");
					puts("3. Joesph Joestar ");
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
							printf("\nKars, a 100,000 year old vampire, has attained the Red Stone Aja allowing him to conquer the sun and achieve immense power.");
							printf("\nTo defeat him you will have to play the last ace up your sleeve, the Joestar family secret technique ...");
							printf("\nEnter the name of the technique: ");
						
							fgets(tech, sizeof(tech), stdin);
							fgets(tech, sizeof(tech), stdin);
							
							wordGame(pointer);

							break;

						}
					}
					puts("\nThank you for playing.");
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
					}				puts("You are confused");
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
			
			case 26:
			{
				while(choice != 99)
				{
						int choice26 = 0;
						int arrInt26[9] = {7,3,5,6,9,1,3,2,6};
						int randomGame26;
						int randomPlayerNumber26;
						int randomSurvivalNumber26;
						int *arrPtr26;
						int targetNumber1 = 0;
						int targetNumber2 = 0;
						int targetNumber3 = 0;
						int gameWinner = 0;

						arrPtr26 = arrInt26;

						randomPlayerNumber26 = rand()%3000 + 1000;
						randomSurvivalNumber26 = rand()%randomPlayerNumber26 + 1;
					printf("\nYou open the door and find a small room with a door on the other side and a desk with a laptop and three USB drives equally spread apart, one green, one blue, one red.\n");
					printf("\nThe door behind you slams shut...\n");
        				printf("\nYou hear static coming from a speaker in the room, then suddenly a deep voice comes through the speaker...\n");
					printf("\n\t'Welcome to the game...you are player number %d'\n ", randomPlayerNumber26);
					printf("\t'Unfortunately for you...only %d players have survived the game...'\n", randomSurvivalNumber26);
					printf("\t'But don't worry...oh wait you should worry because there is no way out now...GOOD LUCK!!'\n");
					printf("\nYou open the door you came in from again to see a bottomless pit.\n");
					printf("You are now realizing there is no immediate way out, so you decide to play the game and find your own way out...\n");
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
							case 1: targetNumber2 = greenUSB26(arrPtr26);
								break;
							case 2: targetNumber3 = blueUSB26(arrPtr26);
								break;
							case 3: targetNumber1 = redUSB26();
								break;
							case 4: lockedDoor26(targetNumber1, targetNumber2, targetNumber3);
								break;
						}			
					}while(choice26 != 5);

					printf("\nEnter 99 to exit the program.\n");
					scanf("%d",&choice);
				}
				break;
			}
			case 27:
			{
				while(choice != 99)
				{
					x=0;
					ptr = item;
					puts("In late in night, you were working on project, fell sleep, and found a door.");
					puts("you open the door and find ........");
					printf("Fantasy world with flying dragons, mystery mythic, magic and rescuing princess... Your dream adventure world! \nOh look [%s]! The little fairy flew and welcomes you.",name);
					puts("Would you like to talk to it (yes=1 no=0)?");
					scanf("%d",&choice);

					if(choice == 1)
					{
						printf("%s: Hey! How are you? This world seems pretty nic...\n",name);
						puts("Fairy: Shut up and give me ALL you've got!!");
						pause27();
						printf("%s: Wait wha..?\n",name);
						puts("Fairy: I need a MONEY!(pulls out of a knife).");
						puts("\nLooks like that wasn't clever choice.");
						pause27();
						puts("\t\t...YOU DIED....");
						break;
					}
					
					puts("Are you really going to ignore this cute fairy? Come on~ at least saying hi wouldn't hurt anybody.");
					puts("Talk to the fairy(yes=1 no=0).");
					scanf("%d",&choice);
					if(choice == 1)
					{
						printf("%s: Hi,I was wonder what were you doing he...\n",name);
						puts("Fairy: Were you trying to ignore me huh? (stabs with a knife)");
						pause27();
						puts("Well... seems like that fairy would hurt anybody here haha.");
						puts("\t\t...You DIED...");
						break;
					}
					puts("You have safely ranway from that cold blood fairy.");
					pause27();
					puts("Now you are at Village. Please select the places to go.");
					puts("1.Mining Mountain  2.Shop  3.Casino Dungeon  4.Status   5. Go back to the fairy");
					
					scanf("%d",&choice);

					while(choice != 99 && x == 0)
					{
						switch(choice)
						{
							case 1:
							{
								mining(ptr,&totalCoin, item);	
								break;
							
							}
							case 2:
							{
								shop(ptr, item);

								break;
							}
							case 3:
							{
								gamble(ptr, name);
								break;
							}
							case 4:
							{
								status(ptr,totalCoin, item);
								break;
							}
							case 5:
							{
								x = fairy(ptr, name);
								choice =99;
								break;
							}
						
						}
						if(x == 0)
						{
							puts("\nNow you are at Village. Please select the places to go.");
							puts("1.Mining Mountain  2.Shop  3.Casino Dungeon  4.Status   5. Go back to the fairy");

							scanf("%d",&choice);
						}
					}

				}
				break;
			}
			case 28:
			{
				char c[200];
				char ch;
				while(choice != 99)
				{
					puts("you open the door and find ........");
					puts("another set of doors");
					puts("\n1:BLUE\n2:RED");
					scanf("%d",&choice);
					if(choice ==1)
					{
						puts("you open the blue door to find five envelopes on the floor");
						puts("Choose one of the envelopes 1-5");
						scanf("%d",&choice);
						switch(choice){
							case 1:
							       	puts("You can never leave");
								break;
							case 2:
								puts("If you want to see something amazing say polo");
								char a[] = "polo";
								scanf("%s" , &c);
								if( strcmp(a,c) ==0)
								{
									puts("Suddenly above a spaceship comes by and an aliwn waves ay you");
									puts("Zaps you and erases your memory");
								}
								break;
							case 3:
								puts("Don't step in the green tile");
								puts("Type yes to step or no to not step");
								char b[] = "yes";
								char d[] = "no";
								scanf("%s", &c);
								if(strcmp(b,c) ==0)
								{
									puts("The tile falls below and you go down a hole");
									puts("Never to be seen again");

								}
								else if( strcmp(d,c) == 0)
								{
									puts("Nothing happens");
								}
								break;
							case 4:
								puts("Do you want to play a game?");
								puts("yes or no");
								char e[] = "yes";
								char f[] = "no";
								scanf("%s", &c);
								if(strcmp(e,c) ==0) 
								{
									puts("The lights turn off and you are chained by your leg to the wall");
									puts("The walls have spikes and they are coming closer");
									puts("There is an axe next to you");
									puts("Make a choice");
									puts("1: cut off leg with axe\n2: do nothing");
									
									scanf("%d", &choice);

									if(choice == 1)
									{
										puts("You make it to the door and escape");
									}
									else if(choice ==2)
									{
										puts("Your screams can be heard");
										for (int i =0; i <10; i++);
										{
											printf("Aaaa");
											i++;

										}

									}

								}
								else if(strcmp(f,c)==0)
								{
									puts("You leave");
								}
								break;
							case 5:
								puts("You are going on a trip back to the begining");
								break;


						}

					}
					else if( choice == 2)
					{
						puts("You have entered the doom room");
						puts("Be prepared");
						puts("A giant cookie come up to you");
						puts("1:run\n2:talk to it");
						scanf("%d", &choice);
						while(choice == 1)
						{
							puts("You keep running forever with the cookie following you");
							puts("1:keep running\n2:Talk");
							scanf("%d",&choice);


						}
						if (choice == 2)
						{
							puts("The cookie asks you if you eat cookies");
							puts("1:yes\n2:no");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("The cookie eats you");

							}
							else if(choice == 2)
							{
								puts("The cookie becomes your best friend");
							}

						}



					}

				}
				break;
			}

			case 29:
			{
				while(choice != 99)
				{
					int portalChoice = 5, guideChoice = 0;
					int die1 = 0, die2 = 0, die3 = 0, total = 0, yourGuess = 0, random = 0, numbers = 0, count = 0, i, n;
					float average, sum = 0,arrInt[20];
					char lastWords[100];
					
					FILE *fptr = fopen("saidLast.txt", "w");
					
					srand(time(NULL));

					puts("There were 28 doors before this, and you actually chose this one? Well alright then.");
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

						puts("You have entered portal number 1. A man walks up to you and says: ");
						puts("Greetings! I see you are a new arrival to this land. My job is to welcome all new visitors.");
						puts("You think to yourself. You've read that before somewhere. A long time ago but you're not 100% sure where you have.");
						puts("As the man continues talking you look around your surroundings and realize you're in Gielinor, from the MMORPG RuneScape.");
						puts("You interrupt the man, yelling you don't belong here and that you belong on Earth! The man continues without skipping a beat.");
						puts("You're not sure whether or not to just run away or hit the guy. You choose to: ");
						puts("1 to run away | 2 to hit the guide");

						scanf("%d", &guideChoice);
						
						switch(guideChoice)
						{
							case 1:
							{
								puts("You run out of the building and see a woman training people how to cut logs off trees and fish for shrimp.");
								puts("You deduce that you're already super freaked out and decide to go through all of tutorial island except you just ignore everyone you see.");
								puts("After running for how long you see the endtrance to the wizards building.");
								puts("When you finally reach the wizard to teleport you to the mainland he is shocked to see you.");
								puts("He says: You're not supposed to be here, but I'm sure you know that already. There must have been an issue somehow.");
								puts("I would like to send you back but unfortunately to do that you must win a contest. Not my laws, it's the God's laws.");
								puts("If you win you can go back, if you lose then your stay here will be inevitable. Ready to play?");
								puts("I have 3 six-sided die. I roll them, and you must guess the total I rolled. You have 1 chance to get it. Let's start!");
										

								die1 = ((rand() %6) + 1);
								die2 = ((rand() %6) + 1);
								die3 = ((rand() %6) + 1);
								total = die1 + die2 + die3;

								printf("I rolled them. What total do you think I got? Remember, I can get 3 to 18. \n");
								scanf("%d", &yourGuess);
									
								if(total == yourGuess)
								{
									puts("You actually got the correct answer");
									puts("With that, you can go home now!");
									puts("After reciting some gibberish, he sends you home and you wake up on your bed.");
									puts("You're not sure what to think of that, but hope that if that ever happens again, you choose a different door not marked 29.");
									break;
								}

								if(total != yourGuess)
								{
									puts("Oh too bad, you're wrong.");
									printf("The number was actually %d \n" ,total);
									puts("You instantly get teleported to Lumbridge to live out your life as a RuneScape player.");
									break;
								}
									
								break;
							}	
						
							case 2:
							{
								puts("You hit the guide. He replies with: ");
								printf("You can't do that here. And now, you have to pay. \n");	
								puts("Suddenly an explosion rocks your nonsensical world and you die instantly.");
								puts("Seriously though, why on Earth did you hit him?");
								puts("Game Over.");
								break;
							}
						}
					}
					if(portalChoice == 2)
					{
						puts("You end up in a college room, with a whiteboard and a couple markers on it.");
						puts("The whiteboard says: Enter some numbers for calculation. C to calculate.");
						puts("You think to yourself, what is this? Some sort of calculator whiteboard?");
						printf("Enter how many numbers you'd like to put on: \n");  
						scanf ("%d",&n);

						while(n > 20 || n < 1)
						{
							puts("Alright, the whiteboard only do a max of 20.");
							printf("Enter the amount: ");
						}

						for(i=0;i<n;i++)
						{
							printf("Number order: %d ", i+1);
							scanf("%f", &arrInt[i]);
							sum += arrInt[i];
						}
						
						average = sum/n;
						printf("The average is: %f \n", average);
					}

					if(portalChoice == 3)
					{
						puts("This portal is under construction, please choose another one.");



					}
					
					if(portalChoice == 4)
					{
						puts("You have entered portal number 4. You're suddendly teleported onto a stage with a microphone. There is no audience.");
						printf("You walk up to the microphone in curiosity and say: ");
						scanf("%s", lastWords);
						puts("You hear as the speakers replay your voice: ");
						for(int i = 0; i<100; i++)
						{
							lastWords[i] =toupper(lastWords[i]);
						}
						printf("%s \n", lastWords);
						puts("Congrats, those were your last words you've said!");
						puts("You die instantly as your last words are forever recorded.");
					}
					
					return EXIT_SUCCESS;
				}

				
		
				break;
			}

			case 30://Markease's room of "why did you do this?"
		       	{
				while(choice != 99)
				{
					int nextChoice = 0;
					FILE *wptr;
					puts("you open the door and find ........");
					puts("Some guy screaming that he is the coolest in the universe!");
					puts("You stand in shock as it is said in your precense.");
					puts("You contemplate your current options");
				//	printf("Which do you choose? 1: Acknowledge that You are truly the coolest \n");
				//		printf("2:Acknowledge he is the coolest \n");
				//	scanf(" %d",&choice);
					while(choice != 1 ||  choice != 2)
					{
						printf("Which do you choose? 1: Acknowledge that You are truly the coolest \n");
						printf("2:Acknowledge he is the coolest \n");
						scanf(" %d",&choice);

						if(choice == 1)
						{	
							printf("Your claim has been ignored.\n");
							printf("You challenge him to a cool contest. \n");
							break;
						}
						else if(choice == 2)
						{
							printf("Your claim has been taken as sarcasim. \n");
							printf("He challenges you to a cool contest. \n");
							break;
						}
						else
						{
							printf("You can't think thay fast\n");
					//		break;
						}
					}
					puts("The contest consist of 4 games. The games will be played a total of 9 times. After the tenth round the person with the higher score will be declared the winner.");
				
					for(i=0;i<9;i++)
					{
						printf("current score: P1:  P2: ");
						puts("Game one is rock, paper, scissors");
						printf("Which do you choose? 0- and 5+ will pick a game from random.\n");
						scanf(" %d",&nextChoice);
						switch(nextChoice)
						{
							case 1:
							{
								puts("Rules for rock paper scissors: ");
								puts("You and your opponent will pick either rock paper or scissors.");
								puts("Rock is #1! It can beat scissors but loses to paper. ");
								puts("Paper is #2! It can beat rock but loses to scissors. ");
								puts("Scissors are #3! It can beat paper but loses to rock.");
								puts("Which do you choose? Keep in mind anything number not listed will count as cheating!.");
								scanf(" %d",&x);
								while(x != y)
								{
									if(x == 1 && y == 2)
									{
										puts("paper beats rock!");
										coolGuysInteract();
									}
									if(x == 1 && y ==3)
									{
										puts("Rock beats scissor!");
										coolGuysInteract();
									}
									if(x == 2 && y == 1)
									{	
										puts("Paper beats rock!");
										coolGuysInteract();
									}
									if(x == 2 && y == 3)
									{
										puts("Scissor beats paper!");
										coolGuysInteract();
									}
									if(x == 3 && y == 1)
									{
										puts("rock beats scissors!");
										coolGuysInteract();
									}
									if(x == 3 && y == 2)
									{
										puts("Scissor beats paper!");
										coolGuysInteract();
									}
									if(x <= 0 || x >= 4)
									{
										puts("cheating isn't cool");
										coolGuysInteract();
									}
								}
								break;
							}
							case 2:
							{
								break;
							}
							case 3:
							{
								break;
							}
							case 4:
							{
								break;
							}
							default:
							{
								
								break;
							}

						}
					}
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
			//Elizabeth Flores
			case 38:
			{
				printf( "%s","You have opened the door to school education \n"
                       			 " Select an option below \n"
                        		" 1. Calculate your GPA \n"
          		        	" 2. Take a chance at rolling an 11 sided dices and get random number generations \n"
          		        	" 3. Create an output file with the data you are entering \n"
          		        	" 4. Enter a string to determine if you have entered lower cases \n"
          		        	" 5 - To Quit\nOption #:  " );
          		scanf("%d",&request);
				while(request != 5)
				{
					int z,y,i,acct,a;
					int arrInt[11]={0};
					int x = 0;
					a=0;
                    double balance;
                    char name[30];
                    char strings[20];
					switch (request)
					{
                        //GPA calculate an average
						case 1:
						printf("This section will allow you to calculate your GPA!!\n");
                        x = total();
						if(x > 2)
						{
						    printf("Congratulations you have passed the course and you don't have to repeat!\n");
						}
						else
						{
						    printf("Unfortunately you will have to repeat this course!!\n");
						}
						break;
						//Rolling Dice using random generations
						case 2:
						z=prompt();
                        modArray(arrInt,z);
                        printArray(arrInt,z);
						break;
						//File manipulation outfile
						case 3:
						while(a != -1)
						{
                    		FILE *wptr;
                    		wptr = fopen("Eflores.txt","a");
                    		
                    		printf( "%s", "In this section you will be asked to enter an account number,\n"
                    		               "name under the account, and the balance for the account \n");
                            fprintf(wptr, "%s", "In this section you will be asked to enter an account number,\n"
                                            "name under the account, and the balance for the account \n");
                    		
                    		printf("What is the account number? \n");
                    		scanf("%d", &acct);
                    		    
                            printf("What is the account name? \n");
                            scanf("%29s", name);
                            
                            printf("What is the account balance? \n");
                            scanf("%lf", &balance);
                            fprintf(wptr,"%d %s %.2lf \n",acct, name, balance);
                            if ( balance > 0 ) 
                            {
                                printf("Awesome you have some money in the bank!\n");
                                fprintf(wptr,"Awesome you have some money in the bank!\n");
                            }
                            else if ( balance == 0 ) 
                            {
                                printf("You have no debts!\n");
                                fprintf(wptr,"You have no debts!\n");
                            }
                            else if ( balance < 0 ) 
                            {
                                printf("You are so BROKE!! ");
                                fprintf(wptr,"You are so BROKE!! ");
                            }

                            printf("\n Hit -1 to quit or 1 to continue. ");
                            scanf("%d", &a);
	                    }
						break;
						//lower case
						case 4:
						printf("This section you will need to enter a string to \n"
                               				"determine is the letter is a lower case letter.\n"
					                "Please a string no longer than 19 characters.\n");
                        scanf("%c", strings);
                        eflores(strings);
						break;
					}//end switch
					printf("Option #:  " );
					scanf("%d",&request);
				}
				break;
			}
			case 39:
			{
				while(choice != 99)
				{
					int deck[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
					int fdeck[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
					int die[10] = {0};
					int *ptr;
					double elfA, playerA;
					int scare, you, you1, angel;
					srand(time(NULL));
					ptr = die;
					story();
					system("PAUSE");
					elf();
					printf("The Elf Rolls first.. \n");
					play(ptr);
					results(ptr);
					elfA = avgElf(die);
					printf("The elfs average:%.2lf \n", elfA);
					printf("You roll... \n");
					play(ptr);
					results(ptr);
					playerA = avgElf(die);
					printf("Your average: %.2lf \n", playerA);
					outcome(elfA, playerA);
					afterElf();
					vendingMachine();
					door();
					secondGame();
					scare = game21Opponent();
					printf("Opponent: %d\n", scare);
					you = game21(deck);
					printf("You got: %d\n", you);
					while(scare == you)
					{	
						printf("TiE, aNoThER RoUnD\n");
						scare = game21Opponent();
						printf("Opponent: %d\n", scare);
						you = game21(deck);
						printf("You got: %d\n", you);
					}
					cardgameResult(scare, you);
					afterSecond();
					angel = theAngel(fdeck);
				        printf("Card Selected by Angel: %d \n", angel);	
					you1 = theFinale(fdeck);
					printf("Card selected by you: %d \n", you1);
					while(angel == you1)
					{
						printf("ANGEL: It's a tie, again.\n");
						angel = theAngel(fdeck);
						printf("Caqard Selected by Angel: %d\n", angel);
						you1 = theFinale(fdeck);
						printf("Card selected by you: %d\n", you1);
					}
					lastResult(angel, you1);
					finalization();
					puts("Press 99 to quit:");
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

void play(int *ptr) // Josue Carrillo
{
	int i;
	for(i = 0; i < 10; i++)
	{
		*ptr = (rand() % 6) + 1;
		ptr++;
	}
	
}

void story(void) //Josue Carrillo
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
	puts("You enter and notice a girl  with pointy ears sitting near the corner of the store.");
	puts("You give in into your curiosity and decide to sit next to this person.");

}
void elf(void) // Josue Carrillo
{
	puts("As you sit down, this girl asks you if you want to play a game.");
	puts("Out of interest you say yes.");
	puts("She takes out a dice, and she begins to explain the rules.");
	puts("Each play rolls the die, 10 times, and whoever's average is greater wins.");
}

void results(int *ptr) //Josue Carrillo
{
	int i,j;
	for(i = 0; i < 10; i++)
	{
		printf("Roll[%d] = %d \n", i + 1, *ptr);
		ptr++;
	}
	
}

double  avgElf(int a[]) //Josue Carrillo
{
	int i;
	double avg;
	int equals = 0;
	for(i = 0; i < 10; i++)
	{
		equals = equals + a[i];
	}

//	printf("%d \n", equals);
	avg = (double) equals / 10;
//	printf("%.2lf \n", avg);
	return avg;
}

void outcome(double x, double y) // Josue Carrillo
{
	if(x > y)
	{
		printf("ELF: My skills are too good, you lose!!");
		printf("But I feel bad for you so I'll give you this \n");
	}
	else
	{
		printf("ELF: Lucky Punk (Xp)");
		printf("But it does seem you have some skill, here I'll give you this. \n");
	}
}

void afterElf(void) // Josue Carrillo
{
	printf("You see her give you a card and you ask her, 'What is this?'\n");
	printf("She responds, if you want to escape this city, you will need this card.\n");
	printf("This card will let you play the other person who has a similar card.\n");
	printf("If you can beat him at his game, he will give you his card.\n");
	printf("You ask, where is he?\n");
	printf("You will meet him at the Casino. He loves playing card games, but beware, his cards are not normal.\n");
	printf("That said, you decide to pay the Casino a visit.\n");
}

void vendingMachine(void) //Josue Carrillo
{
	int choice;
	printf("After walking 45 minutes, you got thirsty and decided to geet something from the vending machine.\n");
	printf(" RayRay's Vending Machine\n ");
	printf("   What do you want?\n");
	printf("       Drink Menu\n");
	printf("1  Gatorade\n");
	printf("2. Coke\n");
	printf("3. Pepsi\n");
	printf("4. Powerade\n");
	printf("5. Dr. Pepper\n");

	printf("Choice: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("You got Gatorade\n");
			break;
		case 2:
			printf("You got Coke\n");
			break;
		case 3:
			printf("You got Pepsi\n");
			break;
		case 4:
			printf("You got Powerade\n");
			break;
		case 5:
			printf("You got Dr. Pepper\n");
			break;
	}

	printf("As you are opening your drink, through the reflection of the Vending Machine, you see bright red eyes staring at you menacingly.");
	printf("As you look back, you see no one there.");
	printf("You start to worry a bit, and decide to look for this person with the second card.");
}

void door(void) // Josue Carrillo
{	
	FILE *rptr, *rptr1;
	char answer[9];
	char yourAnswer[9];
	int x,i;
	char letter[9];
	rptr = fopen("riddleDoor.txt", "r");
	fgets(answer,9, rptr);
	printf("As you are looking around the Casino, you find a ominous looking door\n");
 	printf("As you approach the door it says, if you want to pass, answer this riddle.\n");
	printf("I am an instrument whose music always comes form the heart. What am I?    .... answer(an organ)\n ");
//	printf("You answer: ");
	fgets(yourAnswer, 9, stdin);
	for(i = 0; i < 9; i++)
	{
		letter[i] = toupper(yourAnswer[i]);
	}
	x = strcmp(answer, letter);

	while(x != 0)
	{
	//	printf("I am an instrument whose music always comes from the heart. What am I?\n");
		printf("You answer: ");
		fgets(yourAnswer, 9, stdin);
		for(i = 0; i < 9; i++)
		{
			letter[i] = toupper(yourAnswer[i]);
		}
		x = strcmp(answer, letter);
		if(x == 0)
		{
			printf("You may enter\n");
		}
	}
	fclose(rptr);
}

void secondGame(void)//Josue
{
	puts("As the door opens, you see stairs that head down, but can't see further than a few steps because it's really dark.");
	puts("You decide to go through, and for a good while you can't see anything until you see that the red eyes again in the distance.");
	puts("Having no other choice than to go towards the eyes, you keep walking until you get close.");
	puts("As you get close, strong red lights turn on, and the figure of the man looks like a scarecrow.");
	puts("In front of the scarecrow, there is a table and a deck on cards.");
	puts("He says 'SiT dOwn, lEtS pLaY.....'");
	puts("He explains the rules, we are going to play 21. But in this deck there is no face cards. The numbers are 1 through 10");
	puts("I'll give you three chances to beat me.");
	puts("yOu WiN, i'LL gIvE yOu mY CaRd, i WiN, yOu bEcOme VicTiM numBeR 100... evil smirk.");
}

int game21Opponent(void)//Josue
{
	int number, i;

	
	number = (rand() % 10) + 12;
//	printf("%d ", number);

	return number;
}

int game21(int d[])//Josue
{
	int i;
	int card;
       	int sum;	
	char choice;
	i = (rand() % 10);
	sum = d[i];
	printf("You got a %d\n ", sum);
	printf("Would you like to draw another card? y or n\n");
	printf("Choice: ");
	scanf(" %c",&choice);
	while(choice != 'n')
	{
		i = (rand() % 10);
		sum = sum + d[i];
		printf("Total: %d\n", sum);
		if(sum > 21 || sum == 21)
		{
			return sum;
		}
		printf("Would you like to draw another card? y or n\n");
		printf("choice: ");
		scanf(" %c", &choice);
	}
	return sum;
}

void cardgameResult(int o, int y)//Josue Carrillo
{
	if(o > y || y > 21)
	{
		printf("Red eyed dude wins\n");
		printf("hEheHe, TimE tO meEt YoUr NeW CelLmAtEs heHeheHehe.....");
		printf("You failed to escape, Game Over");
		exit(1);
	}
	else
	{
		printf("You win\n");
		printf("Run you card bro!");
	}
}

void afterSecond(void)//Josue Carrillo
{
	puts("After you beat Mr. Scarecrow, he gives you his card and tells you the location of the last card.");
	puts("He tells you that the last person you have to beat is in the center of the city.");
	puts("At the big tower you saw when entering the city.");
	puts("Without haste, you decide to leave the creepy place and go to the tower.");
	puts("You get there and there is no one, just one elevator that goes up.");
	puts("You get into the elevator and it takes you to the top of the tower.");
	puts("You get there but there is no one, there is just a huge crystal with a panel in front of it.");
	puts("The panel has three card slot in it. You decide to put in the cards.");
	puts("When you put the cards in, the crystal begins to open.");
	puts("Inside the crystal, there is an angel with 7 wings.");
	puts("When the crystal fully opened, the angel then flies towards you.");
	puts("He says, 'Are you the one who awakened me?");
	puts("You answer yes");
	puts("ANGEL: Seems like you defeated the other two and now want to play me");
	puts("ANGEL: Fine, you beat me and you can leave.");
	puts("ANGEL: The game is simple, I have a deck of 15 cards.");
	puts("ANGEL: The deck possibly can have cards number 1 - 15");
	puts("ANGEL: The deck generates its own cards so some of the cards could be missing in the deck.");
	
}

int theFinale(int f[])//Josue Carrillo
{
	int i, card;
	int choice;
	printf("Out of the 15 cards, Which card will you use pick out? ");
	scanf(" %d",&choice);
	switch(choice)
	{
		case 1:
			i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 2:
			i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 3: 
			i= (rand() % 16) + 1;
			card = f[i];
			break;
		case 4: 
			i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 5:
			i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 6: 
			i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 7: 
			i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 8:
		       	i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 9:
		        i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 10:
			i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 11: 
			i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 12:
			i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 13: 
			i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 14: 
			i = (rand() % 16) + 1;
			card = f[i];
			break;
		case 15:
			i = (rand() % 16) + 1;
			card = f[i];
			break;	
	

	
	}
	return card;
}

int theAngel(int f[])//Josue Carrillo
{	
	int i, card;
	i = (rand() % 16) + 1;
	card = f[i];
	return card;
}

void lastResult(int a, int y)//Josue Carrillo
{
	if(a > y)
	{
		printf("ANGEL: So close to get out of this place, but you lost. Pity");
		printf("GAME OVER");
		exit(1);
	}
	else
	{
		printf("YOU: YES!!, GIVE ME THAT CARD SON!");
	}
}

void finalization(void)//Josue Carrillo
{
	printf("You begin to jump with joy as you receive the third card from the Angel.\n");
	printf("ANGEL: great job. No one has been able to get out of here.\n");
	printf("ANGEL: You deserve it\n");
	printf("Thanking the Angel, you decide to get input the final card into the panel.\n");
	puts("After you insert the card, the three cards merge and the same door appears where you entered in the beginning.");
	puts("Entering the door, you return back to your home.");
	puts("YOU: Nice to be back home.");
	puts("Game over");
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

void mQhelpMenu(void) //mquail
{
	puts("--------------------------------------------------------------------------------");
	puts("COMMANDS:\n look, use\n locations, inv, help, exit\n\nType 'look' or 'use' followed by the OBJECT you want to interact with (objects with CAPITAL letters can be interacted with)\nExample: use KEY, look TABLE\n\nType 'help' to view a list of commands.\nType 'locations' to view the places you can go\nType 'inv' to see your inventory\nYou can also type 'use' to put some items in your inventory.");
	puts("\nType 'exit' to leave the parser");
	puts("--------------------------------------------------------------------------------");
}

void mQprintInventory(bool inventory[10])
{
  puts("You have the following items in your inventory: \n");
  int idx;
  if(inventory[0] == true)
  {
    puts("Tomato\n");
  }

  if(inventory[1] == true)
  {
    puts("Onions\n");
  }

  if(inventory[2] == true)
  {
    puts("Meat\n");
  }

  if(inventory[3] == true)
  {
    puts("Beans\n");
  }

  if(inventory[4] == true)
  {
    puts("Spices\n");
  }

  if(inventory[5] == true)
  {
    puts("Tortillas\n");
  }

  if(inventory[6] == true)
  {
    puts("Beer\n");
  }

  if(inventory[7] == true)
  {
    puts("Can Opener");
  }

}

void mQprintLocations(int noteCount, const char* const locations[10])
{
  int i = 0;
  puts("You can go to the following locations: \n");
  if (noteCount < 3)
  {
    for (i = 0; i < 3; i++)
    {
      printf("%s\n", locations[i]);
    }
  }

  else
  {
    for (i = 0; i < 6; i++)
    {
      printf("%s\n", locations[i]);
    }
  }

}

void mQcontinue(void) //mquail
{
	printf("(Press 0 and Enter to continue)");
	fflush(stdout); //do I need this?
	while(getchar() != '0'){};
}

void changeboolean(bool *x) //mquail
{
  *x = true;
}

int mQuserInput(void) //mquail
{
	//fflush(stdout);
	printf("");
	printf("\n------> ");
  return fgets ( uInput, sizeof(uInput), stdin ) != NULL;
}

int mQparser1(FILE *writePointer, FILE *readPointer, bool *clearParserPointer) //mquail
{
	char *word1 = strtok(uInput, " \n");
	char *word2 = strtok(NULL, "\n");

	char string[20];
	int noteCounter = 0;
	rewind(readPointer);

  // check Parser 2 cleared / game end
  if ( inventory[6]== true )
  {
    return 0;
  }

  if (word1 != NULL)
  {
    // command "exit"
    if (strcmp(word1, "exit") == 0)
    {
      return 0;
    }

    // command "exit1"
    if (strcmp(word1, "exit1") == 0)
    {
      system("clear");            
      puts("A flash of light cuts across your vision - shielding your eyes with your arm, you squint against the brightness until your eyes adjust.\n\nThe power is back on! Now, you can take a clearer look at your surroundings.\n");
      puts("--------------------------------------------------------------------------------------------");
      puts("Not only have more locations opened up to you, but you're now able to add ingredients to your inventory with the 'use' command!\n\nReference 'recipe.txt' in your files, using the clues you collect, to find 5 ingredients.");
      while (mQuserInput() && mQparser2(writePointer, readPointer, inventory));
    }

    // command "help"
    else if (strcmp(word1, "help") == 0)
    {
      mQhelpMenu();
    }

    //command "locations"
    else if (strcmp(word1, "locations") == 0)
    {
      mQprintLocations(noteCounter, locations);
    }

    // command "inv"
    else if (strcmp(word1, "inv") == 0)
    {
      //put inventory things here
      puts("The user only has 'updog' in their inventory.\n");
    }

    // command "look"
    else if (strcmp(word1, "look") == 0) 
    {
      // look stove 
      if (strcmp(word2, "STOVE") == 0 || strcmp(word2, "stove") == 0)
      {
        puts("\nThe oven light is blinking 00:00 in red letters against the darkness, suggesting that the power went out recently, the appliance is broken, or both.");
      }

      // look fridge
      else if (strcmp(word2, "FRIDGE") == 0 || strcmp(word2, "fridge") == 0)
      {
        puts("\nThe fridge's stainless steel surface is littered with post it notes. You pick one up and angle your cell phone to read it.");
        puts("\n\'If one more person eats my leftovers without permission, I will *commit a felony*. I mean it!!!!!'");
        puts("\nFrowning, you turn it over to discover there's more written on the back.");
        puts("\n'Actually, you know what? Eat them. Go on. I dare you. Eat all of it. I hope you choke on it and die in agony right here on my kitchen floor. You should have never been born!! - J'");
        puts("\nYou find yourself wondering who the hell this 'J' is, and what made them upset enough to cover their refridgerator with passive aggressive post-its.");
      }

      // look beer
      else if (strcmp(word2, "BEER") == 0 || strcmp(word2, "beer") == 0)
      {
        puts("There's a post-it note curving around the can. You turn the can to read the note: \n\n'Good luck getting this Natty Lite open - I found it in the basement and I'm pretty sure it's been in there since the 90's. Why would you want to drink this anyway? You might as well drink your own piss. -J");
      }

      // look leftovers
      else if (strcmp(word2, "LEFTOVERS") == 0 || strcmp(word2, "leftovers") == 0)
      {
        puts("A post-it note sitting on the top reads : 'J's Leftovers - Please, help yourself.' You wonder why this person bothered to personally label their leftovers only to follow up with 'help yourself'...");
      }

      // look sauce
      else if (strcmp(word2, "SAUCE") == 0 || strcmp(word2, "sauce") == 0)
      {
        puts("Picking up the bottle and turning it in your hand, you notice it's nearly empty; a post-it note on the side hangs by a corner. It reads: 'Stop hitting the sauce'. You turn it over to read: 'Get it?? Because booze is also called 'sauce' but it's also bbq sauce! heh...'-J\n\nAnother post-it note tacked onto the end says: 'Jim, did you seriously just write 'heh' on a post it note? Explaining your own joke?! *Stop* wasting my office supplies!! - H.'\n\nYou find some irony in the fact that 'H' decided to reply with an equally pointless post-it note.");
      }

      // look freezer
      else if (strcmp(word2, "FREEZER") == 0 || strcmp(word2, "freezer") == 0)
      {
        puts("\nThe freezer's stainless steel surface is littered with post it notes. You pick one up and angle your cell phone to read it.");
        puts("\n'Jim, I swear to God, if you move the eggs again to put more post-it notes inside, I will buy the dollar store brand of BBQ sauce from now on. Do not try me, young man. - H'");
        puts("\nAnother post-it note is attached to the end of this one. It reads: ");
        puts("\n'I do not fear death or dry chicken nuggets, woman! I will *not* be manipulated by the sauce! \nI have an emergency stash of Sweet Baby Rays for just this occasion, anyway. -J'");
        puts("\nYou are baffled by just how much writing can fit on a post-it note. Your eyes are starting to hurt from squinting at all the tiny writing.\n");
      }

      // look door
      else if (strcmp(word2, "DOOR") == 0 || strcmp(word2, "door") == 0)
      {
        puts("The door is tightly sealed behind you. In order to open it, you're going to need something to eat first.");
      }

      // look freezer note (note #1)
      else if (strcmp(word2, "NOTE#1") == 0 || strcmp(word2, "note#1") == 0 || strcmp(word2, "note1") == 0 || strcmp(word2, "NOTE1") == 0)
      {
        puts("You pluck the freezer NOTE from its spot and hold it gingerly between your thumb and forefinger; it must have been here for some time, because it's quite cold. It reads:\n\n'TOMATO - MICROWAVE'\n\nYou're not sure what that means at all, but you place the note in your pocket anyway.");
        puts("**RECIPE HAS BEEN UPDATED**");
        fprintf(writePointer, "TOMATO : MICROWAVE @");
        fflush(writePointer);
        noteCounter++;
      }

      // look fridge note (note #2)
      else if (strcmp(word2, "NOTE#TWO") == 0 || strcmp(word2, "note#two") == 0 || strcmp(word2, "note # two") == 0 || strcmp(word2, "NOTE # TWO") == 0)
      {
        puts("Doing your best not to get more sauce underneath your nails, you unfold the saucy note and find it reads: \n\nBEANS - SINK\n\nNot wanting to ruin your pants pocket, you throw the gross note into the nearby trash can, glad to be done away with it.");
        puts("**RECIPE HAS BEEN UPDATED**");
        fprintf(writePointer, "BEANS : SINK @");
        fflush(writePointer);
      }

      // look stove note (note #3)
      else if (strcmp(word2, "NOTE3") == 0 || strcmp(word2, "note3") == 0)
      {
        puts("Grabbing for the note, you accidentally kick up a little dust; coughing, you wave a hand in front of your face. You brush off the note and read: \n\nONION - CABINETS\n\nYou're not excited to prep onions for a meal, but you're also hungry enough not to care at this point, and press on.");
        puts("**RECIPE HAS BEEN UPDATED**");
        fprintf(writePointer, "ONION : CABINET @");
        fflush(writePointer);
      }

    }

    // command "use"
    else if (strcmp(word1, "use") == 0) 
    {
      // use stove
      if (strcmp(word2, "STOVE") == 0 || strcmp(word2, "stove") == 0)
      {
        //stove broken / stove fixed condition?
        puts("\nYou turn a burner knob tentatively, but hear a 'click click click' of a burner failing to light. You smell a faint tinge of gas. Crouching on your heels and sweeping your cell phone light, you can't find anything else wrong with the oven. Looks like you might need matches to get a burner working.\n\nNOTE3, covered in a fine layer of dust and a few hairs, catches the light.");
      }

      // use fridge
      else if (strcmp(word2, "FRIDGE") == 0 || strcmp(word2, "fridge") == 0)
      {
        puts("\nYou pull gently on the fridge handle, and are greeted with its soft inner glow and a faint whiff of eggs and...old onions?? Ugh.");
        puts("\nYou spot a container of LEFTOVERS, a bottle of bbq SAUCE, and a can of BEER. There are post-it notes on each.");
      }

      // use BEER
      else if (strcmp(word2, "BEER") == 0 || strcmp(word2, "beer") == 0)
      {
        puts("You go to pull the metal tab of the BEER to find that it's been removed. Undeterred, you press your thumb into the aluminum divot instead, willing to go the extra mile for the bastion of alcohol.\n\nUnfortunately, the aluminum won't budge. Leveraging the can against your leg, you push in with your thumb with all the force you can muster, but it doesn't yeild.\n\nDefeated, your thumb smarting, you shove the can back into the fridge. You'll have to find a tool later to try to open it.");
      }

      //use leftovers
      else if (strcmp(word2, "LEFTOVERS") == 0 || strcmp(word2, "leftovers") == 0)
      {
        puts("Holding the container still with one hand, you hook your fingers on the lip of the tupperware and pull eagerly. The lid pries open easily to reveal the contents inside.\n\nWhatever is inside is concealed by a piece of paper towel. Lifting it to get a better look, you find it's suprisingly heavy, and you struggle to steady it. Peeling away the paper towel layer and poking the contents underneath, you find that you're looking at a brick.\n\nThat's...that's definitely a *brick* in a tupperware container.\n\nYou're now absolutely convinced this 'J' person is a definitely psycho for putting a brick in the fridge to bait anyone taking their leftovers. Who does that!?");
      }

      // use sauce
      else if (strcmp(word2, "SAUCE") == 0 || strcmp(word2, "sauce") == 0)
      {
        puts("You pick up the bottle of bbq SAUCE. You've decided to 'use' it, but what does that mean exactly? Are you just gonna squeeze this thing? Right here??\n\nNot one to question your own motives, you twist off the cap, aim the bottle at the floor, and squeeze with reckless abandon.\n\nYour chaotic choice is rewarded, however, when something not-liquid slips out of the bottle partway, coated in a thick layer of sauce. Undaunted, and with a few more squeezes, you manage to get it out and into the palm of your hand.\n\nYou're now covered in the scent of Sweet Baby Ray's bbq SAUCE, but don't seem to mind as you prod at the item in your hand, letters beneath the smudge of sauce reading NOTE#TWO. (To read it, type 'use note#two') ");
      }

      // use freezer
      else if (strcmp(word2, "FREEZER") == 0 || strcmp(word2, "freezer") == 0)
      {
        puts("\nThe user pulls swiftly against the hermetic seal of the freezer, and is met with a small puff of chilled air.");
        puts("\n...followed closely by a much stronger, more decidedly *pungent* whiff of egg.");
        puts("\nBlinking rapidly to ensure they aren't seeing things, the user realizes the entire fridge is full of decorated frozen easter eggs. A small post-it note on eye-level with the user reads: 'Little Jimmy's Easter Eggs, 1987. Do ***not*** throw away!!!'");
        puts("\nHorrified, the user sincerely wishes they had found a dead body instead.");
        puts("\nThere is an additional post it labelled NOTE#1 wedged in between the freezer wall and the awful, awful Egg Pile.");
      }

      // use freezer note (note #1)
      else if (strcmp(word2, "NOTE#1") == 0 || strcmp(word2, "note#1") == 0 || strcmp(word2, "note1") == 0 || strcmp(word2, "NOTE1") == 0)
      {
        puts("You pluck the freezer NOTE from its spot and hold it gingerly between your thumb and forefinger; it must have been here for some time, because it's quite cold. It reads:\n\n'TOMATO - MICROWAVE'\n\nYou're not sure what that means at all, but you place the note in your pocket anyway.");
        puts("**RECIPE HAS BEEN UPDATED**");
        fprintf(writePointer, "TOMATO : MICROWAVE @");
        fflush(writePointer);
        noteCounter++;
      }

      // use fridge note (note #2)
      else if (strcmp(word2, "NOTE#TWO") == 0 || strcmp(word2, "note#two") == 0 || strcmp(word2, "note # two") == 0 || strcmp(word2, "NOTE # TWO") == 0)
      {
        puts("Doing your best not to get more sauce underneath your nails, you unfold the saucy note and find it reads: \n\nBEANS - SINK\n\nNot wanting to ruin your pants pocket, you throw the gross note into the nearby trash can, glad to be done away with it.");
        puts("**RECIPE HAS BEEN UPDATED**");
        fprintf(writePointer, "BEANS : SINK @");
        fflush(writePointer);
      }

      // use stove note (note #3)
      else if (strcmp(word2, "NOTE3") == 0 || strcmp(word2, "note3") == 0)
      {
        puts("Grabbing for the note, you accidentally kick up a little dust; coughing, you wave a hand in front of your face. You brush off the note and read: \n\nONION - CABINETS\n\nYou're not excited to prep onions for a meal, but you're also hungry enough not to care at this point, and press on.");
        puts("**RECIPE HAS BEEN UPDATED**");
        fprintf(writePointer, "ONION : CABINET @");
        fflush(writePointer);
      }

      // funny joke
      else if (strcmp(word2, "updog") == 0)
      {
        //check if inventory is empty? implement later if there's time
        puts("\nNothin, what's up with you, dude?\n");
        puts(" ( ͡° ͜ʖ ͡°) ");
      }

    }
    
    // dumb parser
    else
    {
      printf("\nI have no idea how to %s, but knock yourself out.\n", word1);
    }

    //if the readPointer reads 3 lines in recipe.txt, execute
    while ( fgets (string, 20, readPointer) != NULL )
    {
      noteCounter++;
      if(noteCounter > 3)
      {
        puts("------------------------------------------------------------------------");
        puts("\nYou've found 3 notes! Check recipe.txt to see if you have 3 entries.");
        puts("If you don't, something probably went wrong. But don't worry : it's a feature, not a bug.");
        puts("\nYou'll be able to solve the next set of puzzles if you've found 3 notes so far.");
        puts("If you'd like to advance, type 'exit1'. If not, feel free to continue using this parser until you find all three.");
        break;
      }
    }
  
    //user input validation - null strings
    if (word2 == NULL)
    {
      word2 = "(empty)";
    }
    if (word1 == NULL)
    {
      word1 = "(empty)";
    }

  }
	return 1;
}

// parser 2
int mQparser2(FILE *writePointer, FILE *readPointer, bool inventory[10])
{
  char *word1 = strtok(uInput, " \n");
	char *word2 = strtok(NULL, "\n");
  char string[20];
  char userI[20];
  int noteCounter = 3;
  int average = 0;
  rewind(readPointer);
  int extraCredit, result = 0;
  double score = 0.0;


  //user input validation - null strings
  if (word2 == NULL)
  {
    word2 = "(empty)";
  }
  
  if (word1 == NULL)
  {
    word1 = "(empty)";
  }

	if (word1 != NULL)
	{
    // command "exit"
		if (strcmp(word1, "exit") == 0)
		{
			return 0;
		}

		// command "help"
		else if (strcmp(word1, "help") == 0)
		{
			mQhelpMenu();
		}

    //command "locations"
    else if (strcmp(word1, "locations") == 0)
    {
      mQprintLocations(noteCounter, locations);
    }

		// command "inv"
		else if (strcmp(word1, "inv") == 0)
		{
      //put inventory things here
			mQprintInventory(inventory);
      puts("------------------------------------------------------------------------");
		}

		// command "look"
		else if (strcmp(word1, "look") == 0) 
		{
      // LOCATIONS
      
      //look cabinets
      if (strcmp(word2, "cabinets") == 0 || strcmp(word2, "CABINETS") == 0)
      {
        puts("Sweet jesus, finally - finally!. The place were snacks are kept! You're absolutely convinced there's something edible in there, but knowing these two knobs J and H, there's also a high possibility you'll find something bizarre and unpleasant, too.\n\n");
      }

      //look sink
      else if (strcmp(word2, "sink") == 0 || strcmp(word2, "SINK") == 0)
      {
        puts("A post-it hanging off the lip of the sink catches your eye - the letters are big enough to read from afar:\n\nTAKEOUT TRASH\n\nYou step a bit closer to read the post-it note attached below it: 'Helen, for christ's sake, We are out of trash bags, and I'm not going near the neighbor's fence again! You know their goat *hates* me!! -J\n\nYou wonder who's weirder : the 2 post-it goofs living in this house, or the neighbor who has an (allegedly) rabid goat.");
      }

      //look stove
      else if (strcmp(word2, "stove") == 0 || strcmp(word2, "STOVE") == 0)
      {
        puts("Perhaps the burners will work, now that the lights are on?");
      }

      //look fridge
      else if (strcmp(word2, "fridge") == 0 || strcmp(word2, "FRIDGE") == 0)
      {
        puts("\nYou look longingly at the fridge. The distance...it's...still too much. You must get closer...\n\nYou press your cheek against the fridge, straining to wrap your arms around as far as they can reach.\n\nThe fridge does not hug you back, but you somehow feel a brief reprieve from your loneliness, nonetheless.");
      }

      //look freezer
      else if (strcmp(word2, "freezer") == 0 || strcmp(word2, "FREEZER") == 0)
      {
        puts("\nYou look over the freezer. You think of a few cold-related puns, but you quickly banish them from your mind. Puns are the lowest form of comedy, of course, and you'd be a shameless wreck before you'd ever entertain one, even in your head.\n\n\n...If thought to yourself just now, 'Now, that's just cold...', you, in fact, did not. You didn't think anything at all. You don't think. Your head is empty.\n\nGo shove your idiot head full of idiot puns in the freezer for idiots.");
      }

      //look microwave
      else if (strcmp(word2, "microwave") == 0 || strcmp(word2, "MICROWAVE") == 0)
      {
        puts("The microwave has seen better days, but anything that will heat up food for you right now is an appliance from heaven as far as you're concerned.");
      }

      //look note # 4 : sink note
      else if (strcmp(word2, "noteFORE") == 0 || strcmp(word2, "notefore") == 0)
      { 
        puts("The note is soaked with water, suds, and bits of mushy food, but miraculously, the blurred writing is still somewhat legible.\nIt reads:\n\n'SPICES - STOVE'\n\nYou drop the drenched post-it into the sink disposal, and run it for good measure. You wash your hands several times, but the icky feeling lingers, and you're not sure it'll go away anytime soon.\n\n");
        puts("**RECIPE HAS BEEN UPDATED**");
        fprintf(writePointer, "SPICES - STOVE @");
        fflush(writePointer);
        noteCounter++;
      }

      //look note # 5 : cabinets note
      else if (strcmp(word2, "n5") == 0 || strcmp(word2, "N5") == 0)
      { 
        puts("The note reads:\n\n'MEAT - FREEZER'\n\nYou came up empty in the cupboards, but at least you gained another portion of this recipe.");
        puts("**RECIPE HAS BEEN UPDATED**");
        fprintf(writePointer, "MEAT - FREEZER @");
        fflush(writePointer);
        noteCounter++; 
      }

    }

    // command "use"
    else if (strcmp(word1, "use") == 0)
    {
      // LOCATIONS
      
      //use cabinets
      if (strcmp(word2, "cabinets") == 0 || strcmp(word2, "CABINETS") == 0)
      {
        puts("Salivating, you nudge open the cupbaoard doors, praying that you find something. Your body slowly deflates from hope to quiet despair when you're met with the rustiest CANOPENER you've ever seen, and - of course - a post it note.\n\nSighing loudly, you pluck it to read the contents : 'In case of BeerMergencies'\n\nYou're not sure you know what a BeerMergency is, but if it's anything like your current crisis, you're probably pretty close to one right now.\n\nExpecting something snarky, you prod at the post-it note to see that it's actually another portion of the recipe, N5.");
      }

      //use sink
      else if (strcmp(word2, "sink") == 0 || strcmp(word2, "SINK") == 0)
      {
        puts("Before you can even approach, you can tell by looking that the stench is going to be awful. The nauseating wave that hits you as you step closer to the sink confirms your suspicions.\n\nYou really REALLY don't want to put your hands anywhere near the filthy pile (especially if it does any favors for this 'J' idiot), but notice a sponge and some detergent on the counter. Perhaps if the DISHES were WASHED, you could at least get yourself a glass of water or something?");
      }

      //use stove
      else if (strcmp(word2, "stove") == 0 || strcmp(word2, "STOVE") == 0)
      {
        //if items in array, use stove to complete win condition?
        puts("You try the burner knob again, but get a sad repetitive 'click click click', signaling the stove is still not working.");
      }

      //use fridge
      else if (strcmp(word2, "fridge") == 0 || strcmp(word2, "FRIDGE") == 0)
      {
        puts("You open the fridge to spot a lone BEER on the middle tray. You won't be able to get it open by yourself.");
      }

      //use freezer
      else if (strcmp(word2, "freezer") == 0 || strcmp(word2, "FREEZER") == 0)
      {
        puts("You carefully tug on the handle of the freezer, but nothing you can do prepares you from the queasy wave of stench from the Awful Egg Pile.\n\nIt's subtle enough to stay contained in the freezer and fridge, but not so subtle that your eyes don't water every time you encounter it. Good Lord that's bad.");
      }

      // use microwave
      else if (strcmp(word2, "microwave") == 0 || strcmp(word2, "MICROWAVE") == 0)
      {
        puts("You prod at the buttons on the microwave, but nothing happens. Angling your body to look behind it, you find that someone has snipped the cord clean in half.\nThe worst part is they just left the cord plugged into the wall, so it still *looks* like it's plugged in.");
      }

      //use note # 4 : sink note
      else if (strcmp(word2, "NOTEFORE") == 0 || strcmp(word2, "notefore") == 0)
      { 
        puts("The note is soaked with water, suds, and bits of mushy food, but miraculously, the blurred writing is still somewhat legible.\nIt reads:\n\n'Spices - Stove'\n\nYou drop the drenched post-it into the sink disposal, and run it for good measure. You wash your hands several times, but the icky feeling lingers, and you're not sure it'll go away anytime soon.\n\n");
        puts("**RECIPE HAS BEEN UPDATED**");
        fprintf(writePointer, "SPICES - STOVE @");
        fflush(writePointer);
        noteCounter++;
      }

      //use note # 5 : cabinets note
      else if (strcmp(word2, "n5") == 0 || strcmp(word2, "N5") == 0)
      { 
        puts("The note reads:\n\n'Meat - Freezer'\n\nYou came up empty in the cupboards, but at least you gained another portion of this recipe.");
        puts("**RECIPE HAS BEEN UPDATED**");
        fprintf(writePointer, "MEAT - FREEZER @");
        fflush(writePointer);
        noteCounter++;      
      }

      //use Can Opener
      else if (strcmp(word2, "canopener") == 0 || strcmp(word2, "CANOPENER") == 0)
      {
        //was the can opener already used?
        if (inventory[8] == false)
        {
          puts("If you can't find a good use for this, it'll at least make a terrible souvenir for the time you *didn't* go on an adventure, and picked the worst door in this entire game.\n\n");
          inventory[7] = true;
          puts("***CAN OPENER - added to inventory***");   
          puts("\n\nNOTE: To use the can opener, type CANOPENER followed by the item you want to use it on. If nothing happens...it simply wasn't meant to be.");
        }  

        else
        {
          puts("The can opener was absolutely obliterated in your crazy attempt to skewer and shotgun a beer.\n\nIt had a good life, and died in glory.");
        } 
      }

      //use tortillas (hidden item)
      else if (strcmp(word2, "tortillas") == 0 || strcmp(word2, "TORTILLAS") == 0)
      {
        puts("You consider cracking open the tortillas and eating them here and now, but know that it wouldn't do the trick to cure your adventurer's appetite by itself.\n\nYou decide to put it into your inventory, and wait until you assemble the full recipe to eat it.\n\n");
        inventory[5] = true;
        puts("***TORTILLAS - added to inventory***");
        extraCredit++;         
      }

    }

    // wash
    else if (strcmp(word1, "wash") == 0 || strcmp(word1, "WASH") == 0)
    {
      // wash dishes
      if (strcmp(word2, "dishes") == 0 || strcmp(word2, "DISHES") == 0)
      {
        puts("Rolling up your sleeves and grabbing the moist little blob of sponge from the faucet, you get to work on the mound of dishes in the sink. Hot water on blast, you squeeze a healthy dollop of dish detergent onto the dishes to start; it smells like old oranges on vacation in Florida.\n\nMinutes pass; after dealing with the pungent of whatever food was left on the plates, you sincerely wish you'd looked for gloves first.\n\nYou go to wash the last cup left in the sink when you notice there's a familiar little crumpled note in it: NOTEFORE");
      }
    }

    // Takeout
    else if (strcmp(word1, "takeout") == 0 || strcmp(word1, "TAKEOUT") == 0)
    {
      // take out trash
      if (strcmp(word2, "trash") == 0 || strcmp(word2, "TRASH") == 0)
      {
        puts("Out of the goodness of your heart - and, perhaps, the sensitivity of your nose - you tug on the edges of the wastebin to pull the trashbag around the stinking contents. Before you tie the top knot, however, you notice a perfectly good package of TORTILLAS sitting on top; you check the expiration date, and in a stroke of luck, they're fresh!.\n\nSetting the tortillas aside, you finish tying the trash and toss it into a corner.\n\nYou haven't quite 'taken it out', but at least you've covered up the smell for now.");
      }
    }

    // Canopener
    else if (strcmp(word1, "canopener") == 0 || strcmp(word1, "CANOPENER") == 0)
    {
      if (inventory[7] == true)
      {
        if (strcmp(word2, "beer") == 0 || strcmp(word2, "BEER") == 0)
        {
          puts("With all the grace and dexterity of a starving animal, you harpoon the side of the beer can with the can opener and steady the can against your mouth, as the most foul stream of alcohol you've ever tasted slams down your gullet.\n\nIt's still beer, though, so you shotgun it down expertly, determined to put the calories and buzz to good use.\n\nExhaling triumphantly, you indulge the urge to crush the can against your adventurous skull and lob it in an upwards arc towards the trash can:\n\n");
          int r = rand() % 2;
          //shot misses
          
          if (r == 0)
          {
            puts("The crushed can hits the wall and unceremoniously bounces off the lip of the trash can. There were no stakes and no one watching, but you feel disappointed in yourself regardless. This kills your buzz off before it could even take hold, and the shotgunned beer now sits souring in your stomach, offering no solace from your hunger.\n");
            inventory[7] = false;
            inventory[8] = true;
          }
          //shot makes it
          else if(r == 1)
          {
            puts("As if in slow motion, the can travels in a perfect parabola into the trash can, landing gently into the pile as if being carried by angels.\n\nThere were no stakes and no one watching, but you can hear ecstatic cheers ringing through your ears.\n\nThat, or the buzz is already starting to take effect from all that shotgunned beer. Either way, you're definitely not complaining about the boost in your mood.\n\nYou get the feeling that this event has affected more than just your self-esteem.");
            inventory[7] = false;
            inventory[8] = true;
            extraCredit++;
          }

          else
          {
            puts("Something broke in the RNG machine ¯|_(ツ)_/¯ Try again?");
          }
        }
      }
    }

    // TOMATO - MICROWAVE
    else if (strcmp(word1, "tomato") == 0 || strcmp(word1, "TOMATO") == 0)
    {
      if (strcmp(word2, "microwave") == 0 || strcmp(word2, "MICROWAVE") == 0)
      {
        puts("Tomato was added to your inventory!");
        inventory[0] = true;
      }
    }

    // BEANS - SINK
    else if (strcmp(word1, "beans") == 0 || strcmp(word1, "BEANS") == 0)
    {
      if (strcmp(word2, "sink") == 0 || strcmp(word2, "SINK") == 0)
      {
        puts("Beans were added to your inventory! They got jalapenos in em. mmmmm");
        inventory[3] = true;        
      }
    }

    // ONION - CABINETS
    else if (strcmp(word1, "onion") == 0 || strcmp(word1, "ONION") == 0)
    {
      if (strcmp(word2, "cabinets") == 0 || strcmp(word2, "CABINETS") == 0)
      {
        puts("Onions were added to your inventory!");
        inventory[1] = true;       
      }
    }

    // SPICES - STOVE
    else if (strcmp(word1, "spices") == 0 || strcmp(word1, "SPICES") == 0)
    {
      if (strcmp(word2, "stove") == 0 || strcmp(word2, "STOVE") == 0)
      {
        puts("Spices were added to your inventory! What kind?? The best kind!! All your favorites are here!");
        inventory[4] = true;        
      }
    }

    // MEAT - FREEZER
    else if (strcmp(word1, "meat") == 0 || strcmp(word1, "MEAT") == 0)
    {
      if (strcmp(word2, "freezer") == 0 || strcmp(word2, "FREEZER") == 0)
      {
        puts("Meat was added to your inventory - unless you're a vegetarian/vegan, then it's plant-based protein, I promise.");
        inventory[2] = true;        
      }
    }

    // Final Challenge
    else if (strcmp(word1, "IM") == 0 || strcmp(word1, "im") == 0)
    {
      if (strcmp(word2, "READY") == 0 || strcmp(word2, "ready") == 0)
      {
        //conditions met - check 5 recipe items are there
        if(inventory[0] && inventory[1] && inventory[2] && inventory[3] && inventory[4])
        {
          system("clear");
          puts("It's time. You are more than eager to eat this thing, even if the recipe admittedly doesn't look like a very good one.\n\nYou're about to enter an RNG cooking event, so here's a chance at some extra points:\n\n");
          printf("QUESTION 1: What is 'J's actual name?\n");
          scanf(" %s", userI);
          if (strcmp(userI, "Jim") || strcmp(userI, "Him") == 0 || strcmp(userI, "Jim") == 0)
          {
            puts("CORRECT\n\nThe fact that you remembered means that you read nearly every post-it note, or you have an amazing memory. 1 point added!");
            extraCredit++;
          }
          else
          {
            puts("INCORRECT\n\nHis name is 'Jim', but that's ok. I wouldn't want to read any more of his post-it notes than I have to, either.");
          }

          printf("QUESTION 2: What is 'H's actual name?\n");
          scanf(" %s", userI);
          if (strcmp(userI, "HELEN") == 0 || strcmp(userI, "Helen") == 0 || strcmp(userI, "helen") == 0)
          {
            puts("CORRECT\n\nThat was on *1* post-it in the entire game! Excellent work! You're a true sleuther, aren't ya? 3 points added!");
            extraCredit = extraCredit + 3;
          }
          else
          {
            puts("INCORRECT - This one was a toughie. Her name is 'Helen', and it was only on one post-it in the entire game. No worries.");
          }

          printf("QUESTION 3: What's the FIRST NAME of the student who wrote this door's code?\n");
          scanf(" %s", userI);
          if (strcmp(userI, "MEREDITH") == 0 || strcmp(userI, "meredith") == 0 || strcmp(userI, "Meredith") == 0)
          {
            puts("CORRECT\n\nYou cheated and looked this up, huh? ( ͡° ͜ʖ ͡°) That's ok...you won't forget my name again, right? (≖‿≖)\n\nUnless you're my significant other playtesting this game. Hey Barry. Can you take out the trash please? Thanks <3");
            extraCredit++;
          }
          else
          {
            puts("INCORRECT - Did you mispell my name? That's alright, you won't mispell it again, will you? (≖‿≖)\n\nIt's M-E-R-E-D-I, not M-E-R-I-D-E. And my last name is a BIRD, dude! Cmon.");
          }

          mQcontinue();
          system("clear");
          puts("----------------------------------------------");
          puts("In a fit of Deus Ex Machina, you find some matches in your pocket. You can light the burners on the stove now!\n\nAlright, no more fooling around. Time to cook!\nThe RNG will add a number from 1-10 of your ingredients, then take the average. After that, it will add your extra credit points to your total score.");
          puts("----------------------------------------------");
          result = rand() % 10;
          score  = score + result;
          printf("You take %d tomato(s) and put them in a bowl with oil.", result);
          result = rand() % 10;
          score  = score + result;
          printf("Next, you dice %d onion(s), strong and tasty. You throw the mixture into a pot and boil on the stove.", result);
          //printf("Score so far: %lf", score);
          result = rand() % 10;
          score  = score + result;
          printf("Whatever kind of meat this is, it doesn't matter - you add %d to the mixture.", result);
          result = rand() % 10;
          score  = score + result;
          printf("The beans have jalapeno peppers in 'em - mmmm - very necessary for this recipe. You add %d to the pot", result);
          result = rand() % 10;
          score  = score + result;
          printf("Lastly, can't forget the spice!! It's the heart of the art of the cooking, after all. You add %d to the mixture and stir vigorously.", result);
          if (inventory[5] == true)
          {
            puts("\n\nYou warm the tortillas to a crisp on the burner next to the pot, then transfer to a clean plate you procured from the dish rack. They sound really nice when they break.");
          }

          if (inventory[8] == true)
          {
            puts("You wish you had one, or two, or three, or four, or seven beers to wash this down with, but you're realizing now it's probably a godsend you got to shotgun 1 beer, given your circumstances.");
          }

          puts("--------------------------------------------------------------------");
          printf("Your RNG score : %lf\n", score);
          average = (double)score / 5;
          printf("Your RNG score average : %d\n\n", average);
          average = average + extraCredit;
          printf("FINAL SCORE : %d\n\n", average);
          // endings (not based on score, but based on extra credit ( ͡° ͜ʖ ͡°) )
          if (extraCredit <= 2)
          {
            puts("--------------------------------------------------------------------");
            puts("You eat the chili con carne with reckless abandon, not even bothering to fish a utensil out of the clean dishes. Your appetite is quickly sated, but you keep eating, feeling a keen sense of spite replacing the space your hunger occupied.\n\nAs you scoop the remnants of the Chili Con Carne out of the pan with your hands, you feel a stomachache set in. This is not a hindrance to your adventurous spirit, however, as you're absolutely determined to pick a better door this time.\n\nYou always hated cooking anyway.\n\n\nLOST IN THE SAUCE : ENDING 1");
            mQcontinue();
            inventory[6] = true;
            return 0;
          }

          else if (extraCredit == 3)
          {
            puts("--------------------------------------------------------------------");
            puts("You fish a spoon out of the clean dishes pile, and get to work on the Chili Con Carne fresh out of the pan. It's not exactly what you expected, but given these crazy circumstances, you'd say you ended up cooking a pretty decent meal for yourself. Your mom would be so proud.\nWell, she might not be proud that you chose a really lousy door for your adventure, but at least you can get back to it after this.\nYou avoid a stomachache, but feel as if your recipe was lacking somehow...couldn't be the spices, you definitely didn't forget those.\n\nMaybe you'll add more salt next time, you think, as you push through the door you came through with a renewed vigor and 1 less appetite.");
            puts("\n\n\nLOST IN THE SAUCE : ENDING 2");
            mQcontinue();
            inventory[6] = true;
            return 0;
          }

          else if (extraCredit >= 4)
          {
            puts("--------------------------------------------------------------------");
            puts("Your palette having been refined by this stressful experience, you take a moment to set the mood. You tuck a napkin into your shirt collar, and procure a bowl, spoon, and tablemat from the clean dish rack. You light the solitary candle on the nearby table with your Deus-Ex-Machina machtes.\n\nNo need to rush this exquisite experience. You're a post-it reading, clue-sleuthing machine in your prime, and so is this Chili Con Carne you're about to eat - and you know you deserve it. Using your crisp tortillas and spoon in tandem, you relish eat bite, taking moments here and there to kiss your fingers like an Italian chef to your cooking expertise.\n\nYou may not be able to get an adventurer buff from this food, but in your heart, you get a buff to your intelligence and charisma.\nThat's right. You're the greatest adventurer there ever was. You can conquer any door, now. You'd conquer ALL of them if you wanted to.\n\nHaving conquered this Chili Con Carne, you're certainly ready for it. Striding through the exit with perfect poise, you're ready to tackle the next door.");
            puts("\n\n\nLOST IN THE SAUCE : ENDING 3");
            mQcontinue();
            inventory[6] = true;
            return 0;           
          }


        } //end game clear

        //conditions not met
        else
        {
          puts("No, you're not. {ಠ ʖ ಠ}\n\nGo find the 5 ingredients first!");
        }
      }
    }

    // debug - canopener 'true'
    else if (strcmp(word1, "debug") == 0)
    {
      inventory[9] = true;
      puts("inventory[9] has been set to true.");
    }

    //debug1 - fill inventory
    else if (strcmp(word1, "debug1") == 0)
    {
      int i;
      for(i = 0; i<5; i++)
      {
        inventory[i] = true;
      }
      puts("All items added to inventory.");
    }

    // dumb parser
    else
    {
      printf("\nI have no idea how to %s, but knock yourself out.\n", word1);
    }

    //if the readPointer reads 5 lines in recipe.txt, execute
    if(inventory[0] && inventory[1] && inventory[2] && inventory[3] && inventory[4])
    {
      inventory[9] = true;
    }


    if (inventory[9] == true)
    {
      rewind(writePointer);
      fprintf(writePointer, "CHILI CON CARNE\n\nType 'IM READY' when you're ready to cook\n\n");
      fflush(writePointer);
      puts("You found all 5 notes, completing the recipe!! Great job!\n\nIf you haven't already - start collecting your ingredients.\nOnce you've collected all 5 ingredients, type:\n\nIM READY\n\nto complete your final challenge!");
      inventory[9] = false;
    }

    //user input validation - null strings
    if (word2 == NULL)
    {
      word2 = "(empty)";
    }
    
    if (word1 == NULL)
    {
      word1 = "(empty)";
    }

  }

  return 1;

} //mquail

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
int greenUSB26(int *arrPtr26)
{
	int greenChoice = 0; 
	int targetColumn;
	int targetRow;
	int i,j;
	int targetNumber = 0;
	
	
	printf("\n\nAs you walk closer to the green USB, you read the message above, it states...\n");
	printf("*******************************************************************************\n");
	printf("*                                     # 2                                     *\n");
	printf("*******************************************************************************\n");

	printf("\nThere are two options you consider\n");
	printf("1) Plug the green USB into the laptop.\n");
	printf("2) Step back and view the room again.\n");
	printf("Enter choice 1-2: ");
	scanf("%d", &greenChoice);

	if(greenChoice == 1)
	{
		printf("\nYou plug the green USB into the laptop and a window pops up...\n");

		targetColumn = rand()%3 + 1;
		targetRow = rand()%3 + 1;

		if(targetColumn == 1)
		{
			if(targetRow == 1)
			{
				targetNumber = 7;
			}
			else if(targetRow == 2)
			{
				targetNumber = 6;
			}
			else
			{
				targetNumber = 3;
			}
		}
		else if(targetColumn == 2)
		{
			if(targetRow == 1)
			{
				targetNumber = 3;
			}
			else if(targetRow == 2)
			{
				targetNumber = 9;
			}
			else
			{
				targetNumber = 2;
			}
		}
		else
		{
			if(targetRow == 1)
			{
				targetNumber = 5;
			}
			else if(targetRow == 2)
			{
				targetNumber = 1;
			}
			else
			{
				targetNumber = 6;
			}
		}
		
		printf("\n\nYou are looking for the number in Column #%d and Row #%d\n\n", targetColumn, targetRow);


		printf("\t*******\n");
		for(i = 0; i < 3; i++)
		{
			printf("\t ");
			for(j = 0; j < 3; j++)
			{
				printf("%d ", *arrPtr26++);
			}
			printf("\n");
		}
		printf("\t*******\n");

		printf("\n\n  'I suggest that you keep that number in mind'\n\n");
		return targetNumber;
	}
	else
	{
		printf("\nYou step back and view the room again.\n");
		return targetNumber;
	}
}

int blueUSB26(int *arrPtr26)
{
	int blueChoice;
	int targetNumber = 6;
	int i;
	int sumOfArray = 0;
	double averageOfArray = 0.0;

	printf("\n\nAs you walk closer to the blue USB, you read the message above, it states...\n");
	printf("*******************************************************************************\n");
	printf("*                                     # 3                                     *\n");
	printf("*******************************************************************************\n");


	printf("\nThere are two options you consider\n");
	printf("1) Plug the blue USB into the laptop.\n");
	printf("2) Step back and view the room again.\n");
	printf("Enter choice 1-2: ");
	scanf("%d", &blueChoice);
	
	if(blueChoice == 1)
	{
		for(i = 0; i < 9; i++)
		{
			sumOfArray += *arrPtr26;
			arrPtr26++;
		}	
	
		
		averageOfArray = (double)sumOfArray/9.0;
	
		printf("\nYou plug in the blue USB and a calculator application pops up along with a set of numbers...\n");
		printf("\nOver the loud speaker you hear, 'it looks like youre an AVERAGE person HAHAHAHA'\n");
		printf("\nThe word AVERAGE sticks in your head as it was the emphasized word \n");
		printf("\nThe set of numbers is...\n");
		printf("\n7 3 5 6 9 1 3 2 6\n");
	
		printf("\nYou add all of those number up in the calculator to get %d", sumOfArray);
		printf("\nYou then divide by 9 in order to calculate the average\n");
		printf("\nYou are looking for the number that appears the most in the solution\n");
		printf("\nThe calculator reads...\n");
		printf("\t*********\n");
		printf("\t%f\n", averageOfArray);
		printf("\t*********\n\n");

		printf("\n\n  'I suggest that you keep that number in mind'\n\n");
		return targetNumber;
		
	}
	else
	{
		printf("\nYou step back and view the room again");
		return targetNumber;
	}
}
int redUSB26()
{
	int redChoice;
	char prompt[15] = "Room26Password";
	char message[65] = "All You have 2 Do 1s C0unt the Number 0f digits in Th1s Sentence";
	char copyPrompt[15];
	int index;
	int guess;
	int targetNumber = 0;

	printf("\n\nAs you walk closer to the red USB, you read the message above, it states...\n");
	printf("*******************************************************************************\n");
	printf("*                                     # 1                                     *\n");
	printf("*******************************************************************************\n");

	printf("\nThere are two options you consider\n");
	printf("1) Plug the red USB into the laptop.\n");
	printf("2) Step back and look at the room again.\n");
	printf("Enter choice 1-2: ");
	scanf("%d", &redChoice);

	if(redChoice == 1)
	{
		printf("\nYou plug in the red USB and two screens side by side pop up...");
		printf("\nThe screen looks identical, except for one thing missing...");
		printf("\nThere is a paragraph missing on the second page");

		printf("\nOn the left side it reads...\n");
		printf("\n\t%s\n\n", prompt);

		printf("\nNow you do what any person would...you copy the missing paragraph into the screen on the right\n");
		printf("Enter the string: ");
		scanf("%s", copyPrompt);

		if(strcmp(prompt, copyPrompt) == 0)
		{
		
			printf("\nA new window pops up and over the speaker you hear...\n");
			printf("\t'Congratulations you can copy me, but can you count correctly? HAHAHA'\n");
			printf("\nA brand new window pops up on the laptop with one sentence...\n");

			printf("\n\t%s\n\n", message);

			index = 0;
			while(message[index])
			{
				if(isdigit(message[index]))
				{
					targetNumber++;
				}
				index++;
			}

			printf("\n\n  'I suggest that you keep that number in mind'\n\n");
			return targetNumber;
		}
		else
		{
			printf("\nOh im sorry you cant follow my instructions...I guess you will have to try again to get the answer...\n\n");
			return targetNumber;
		}
	}
	else
	{
		printf("\nYou step back and view the room again.\n");
		return targetNumber;
	}
}

void lockedDoor26(int targetNumber1, int targetNumber2, int targetNumber3)
{
	int lockedDoorChoice;
	int lockedDoorGuess;
	int password;

	password = ((targetNumber1 * 100) + (targetNumber2 * 10) + targetNumber3);
	
	printf("\nAs you walk closer to the door on the other side you see a high-tech keypad lock...\n");
	printf("\nAgain you hear the scary deep voice...\n");
	printf("\t'This could be your great escape...but wait...do you know the password...MUAHAHAHAHAHA'\n");
	printf("\nYou view the keypad lock again...");
	printf("\nThe numbers range from 0-9...\n");
	printf("\nYou see slots for only three numbers so suddenly you realize the importance of the messages above each USB drive\n");

	printf("\nThere are two options you consider\n");
	printf("1) Enter the three digit passcode.\n");
	printf("2) Step back and view the room again.\n");
	printf("Enter choice 1-2: ");
	scanf("%d", &lockedDoorChoice);

	if(lockedDoorChoice == 1)
	{
		printf("\n\n%d\n\n", password);
		printf("\nYou are nervous as you walk closer to the keypad...\n\n");
		printf("*************\n");
		printf("* 1 | 2 | 3 *\n");
		printf("* 4 | 5 | 6 *\n");
		printf("* 7 | 8 | 9 *\n");
		printf("*   | 0 |   *\n");
		printf("*************\n");

		printf("Enter your three digits (Format: 000)\n");
		scanf("%d", &lockedDoorGuess);

		if(lockedDoorGuess == password)
		{
			printf("\nYou hear the door unlock and it creeps open...\n");
			printf("\nThe sunlight floods the room, and you realize that you have won...");
			printf("\n 'Congratulations you live to see another day out in the world'\n");
			printf("\nFreedom at last!\n");
			printf("\n\n\nYOU HAVE WON THE GAME AND ARE NOW FREE TO GO THROUGH THE DOOR AS A SHEET OF GLASS NOW COVERS THE BOTTOMLESS PIT.\n\n\n");
		}
		else
		{
			printf("\nYou hear a siren go off and the room starts to light up red indicating that you have not given the correct password...\n");
			printf("\nThe deep voice comes back... 'It looks like you have not won the game yet, why don't you go back and study more...or else...'\n\n");
		}
	}
	else
	{
		printf("\nYou step back and view the room again.\n");
	}
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
	int countA;
	double average = 0.0;	
	countA+1;
	return countA;
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




void stars(void)//Berenis Castruita
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
void flurbos(void)//Berenis Castruita
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
void planets(void)//Berenis Castruita
{ 
  int planet = 0;
  char keyword[] = "Red";
  char input[3];
  char inpt[19];
  char pharase [] = "How";
  
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
          puts("Quick we need to fix these warnings, please type Red to cancel all the warning buttons that are going off \n");
                                                    
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
                puts("Bird World is the planet where Birdperson lives. TV-signals from Earth take 20 years to reach this planet, meaning it's 20 light-years away from Earth, Rick claims that Bird world is over 6,000 light years away. \n");
                puts("\n");
                puts("Bird People live in wooden structures often incorporated into trees, but do possess technology like TV. They primarily eats worms and have worm ranches around on the planet. When sending messages they may tend to use robotic eggs with hologram messages. In Bird culture, mate-melding is the equivalent of marriage on Earth.");
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
	 puts("\n");
         puts("The planet Unity was entirely assimilated, and plans to use to assimilate the Galactic Federation. However, Unity left the planet with its people following certain events with Rick. \n");
         puts("\n");
         puts("Oh wait something is off...\n");
         puts("\n");
         puts("Morty starts being worried, freaking out, Oh noooo....\n");
         puts("\n");
         puts("Game Host Speaking. Hello and welcome to How Did I Get Here? \n");
         puts("\n");
         puts("Welcome guest, now I know you were traveling to a different destination..\n");
         puts("\n");
         puts("Now you can find your self on top of a random streetlight.\n");
         puts("\n");
         puts("Host hurry please type the key phrase to return back to your destination before your ship falls from the top of the street light");

              while(strcmp(inpt,"How"))
              {
                    scanf("%s", inpt);
                    if(strcmp(inpt, "How") == 0)
                    {
                        printf("\n");
                        printf("Great we are out of that Alien Game show !! \n");
                        puts("\n");
                        printf("We can continue our jouney \n");
                        puts("\n");
                        printf("Lets hope Rick does not find out about this\n");
			puts("\n");
                      break;
                    }
                    else
                    {
                        printf("Hurry I think the phrase is How. \n");
                    }
              }
        } 
   }
}
void goodBye(void)//Berenis Castruita
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

//Matthew Bunma
void mbchoice(void)
{
	int numberToGuess = 65;
	int mbguesses;
	int mbguess1;
        int mbremainingGuesses = 10;
	
	puts("You are walking down a hallway and at the end you see a light");
	puts("you walk toward the light and see one final door");
	puts("in order to unlock the door you need to guess a number 1-100");
	

        while (mbremainingGuesses != 0)
      	{
		printf("Enter a guess: ");
        	scanf("%d",&mbguess1);
	    		if (mbguess1 > numberToGuess) 
			{
	    			printf("Lower \n");
				mbremainingGuesses--;
				continue;
			}
	   		else if (mbguess1 < numberToGuess)
			{
	    			printf("Higher \n");
				mbremainingGuesses--;
				continue;
			}
	    		else (mbguess1 == numberToGuess);
	    			printf("Congrats you have escaped! \n");
				printf("Returning to the main menu \n");
	    		break;
	    		}
	    
}
//Matthew Bunma
void mbchoice2(void)
{
	char mbstring[30] = "Lakers";
	char mbstring2[30];

	printf("In order to exit enter the password given to you correctly \n");
	printf("Hint: Password was given earlier in the game\n");
	printf("Enter the password: ");
	scanf("%s", &mbstring2);

	if(strcmp(mbstring, mbstring2) == 0)
	{
		printf("Password Accepted! \n");
		printf("You have escaped! \n");
		printf("\nReturning to the main menu\n");
	}
	else
	{
		printf("Password not accepted \n");
		printf("\nYou are trapped down here FOREVER\n");
	}

}


	



void mining(int *p,int *tCoin, int it[]) // David Ko
{
	int ch=-1, earnedCoin, x;

	puts("Entering Mining Mountain...\n");
	puts("Miner: Welcome to Pitcoin mining! You can mining your Pitcoin as many as you want. But the amount will be random. So GL!");									
	while(ch != 0)
	{
		puts("Please select.\n1. Mining Pitcoin\n0. Exit");
		scanf("%d",&ch);
		if(ch == 0)
		{
			puts("Exiting Mining Mountain...");
			ch = 0;
		}
		else if(ch == 1)
		{
			if(*p < 3 && it[2] == 0)
			{
				puts("Miner: You seems like you need some help. Here, take this new Pickaxe.");
				puts("*Got new Pickaxe!*");
				it[2] += 1;
			}	
			else if(it[2] != 0)
			{
				earnedCoin = rand()%6;
				printf("You earned [%d] Pitcoin!\n",earnedCoin);
				*p += earnedCoin;
				//printf("%d",*p);
				*tCoin += earnedCoin;
				it[1] += 1;
				x = rand()%4;
				if(x == 0)
				{
					puts("[!Your pickaxe has been broke!]");
					it[2] -= 1;
				}
			}
			else
			{
				puts("Miner: You don't have any pickaxe left, go to the shop and get one to continue mining.");
			}
		}
		else
		{
			puts("Please select again.");
		}
	}
}

void status(int *p,int tCoin, int it[])
{
	double avgPit;

	avgPit = tCoin / (double)it[1];
	puts("----------You Status----------");

	printf("Pitcoin(s): %d\nAverage total Pitcoin earned from mining: %.2lf\n",*p ,avgPit);
	
	printf("Number of Pickaxes: %d\n",it[2]);
}
void gamble(int *p, char n[])
{
	int ch=-1,x=0;

	puts("\nMystery Four Elements Dragon: Hey you! Stop stare like a noob and come here and play the game or something");
	while(ch != 0)
	{
		puts("Here choose your room to go.\n0. Exit  1. Flip a Coin  3. VIP room");
		scanf("%d",&ch);

		if(ch == 0)
		{
			puts("Exiting Casino Dungeon...");
			ch = 0;
		}
		else if(ch == 1)
		{
			 flipCoin(p);
			
		}
		else if(ch==3)
		{
			VIProom(p, n);
		}
		else
		{
			puts("Please select again.");
		}
	}
}

void flipCoin(int *p)
{
	int bet,x,y;

	puts("Mystery Four Elements Dragon: Good! The rule is simple, if you win, you get double of amounts you bet. But if you lose, you lose your bet.\nHow much Pitcoin are you going to bet?");
	printf("Pitcoin(s) you have right now: %d\nAmount to bet: ",*p);
	scanf("%d",&bet);
	if(bet < 0 || bet ==0)
	{
		puts("Mystery Four Elements Dragon: You can't bet negative or zero amount...");
	}
	else if(bet > *p || *p == 0)
	{
		puts("Mystery Four Elements Dragon: You don't have enough Pitcoins to do that... Go lower or I will blow you off with my wind breath.");
	}
	else
	{
		x=(rand()%2) + 1;
		puts("Mystery Four Elements Dragon: Now, pick 1. Head OR 2. Tail");
		puts("The crowd: LESSSS GOOOOOO!!!");
		scanf("%d",&y);
		if(x == y)
		{
			puts("Mystery Four Elements Dragon: I hate to say this but... \nYou just doubled your bets. Congrats!");
			puts("The crowd: Play one more!!!");
			*p += bet;
		}
		else
		{
			puts("Mystery Four Elements Dragon: Sorry, you guessed it wrong. I'm melting all those Pitcoins with my fire breath (HooWoo~)");
			puts("The crowd: Play one more!!!");
			*p = *p - bet;
		}
	}
}

void shop(int *p, int it[])
{
	char str[10] = {} ,shopItem[10] = "Pickaxe", x;
	int i;

	puts("The Big Golem: Welcome to the GolShop, please look around and buy good ones.");
	
	puts("Type the item's name to buy it");
	puts("Pickaxe - 3 Pitcoins");
	
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(isalpha(str[i]))
		{
			if(str[i] != shopItem[i])
			{
				puts("Incorrect item name. There must be a typo.");
				return;
			}
		}
		else
		{
			puts("No digits are needed.");
			return;
		}
	}
	printf("The Big Golem: To confirm your order, you are going to purchase ");
	for(i=0;i<strlen(str);i++)
	{
		printf("%c", toupper(str[i]));
	}
	puts("? [y/n] ");
	scanf(" %c",&x);
	if(x == 'y')
	{
		if(*p < 3)
		{
			puts("Not enough Pitcoin to purchase.");
		}
		else
		{
			puts("You got 1 Pickaxe.");
			it[2]++;
			*p -= 3;
		}
	}
	else if(x== 'n')
	{
		puts("Cancel the order. Exiting the shop...");
	}
	else
	{
		puts("Didn't recognize the command. Exiting the shop...");
	}
	
}
void VIProom(int *p, char n[])
{
	char x,str[100],c;
	FILE *rptr;
	int ch,y,i;

	puts("Loyal Knight: Stop there, from here you need to pay [100] Pitcoin to enter VIP room for ONE time only.");
	puts("Do you want to pay to enter the room? ( y or n )");
	scanf(" %c",&x);
	if(x == 'y' && *p < 100)
	{
		puts("Loyal Knight: Sorry you don't have enough Pitcoin to enter. Please come back after earn enough Pitcoin,");
	}
	else if(x == 'n')
	{
		puts("Loyal Knight: Hope to see you later with 100 Pitcoin...");
	}
	else if(x == 'y')
	{
		puts("Loyal Knight: Are those real Pitcoins? Let me count it. 1... 2... 3... and 100!");
		printf("%s: Yes it is real Pitcoins... Now can I go in?\n",n);
		puts("Loyal Knight: Yes of course. (Opens the door)");
		pause27();
		puts("As soon as I entered, quite a few people were filling the room.");
		puts("Among them, there were elves, human, orcs, and even undeads talking with each other while drinking alcohol in suits.");
		puts("As soon as I was surprised by the fact that there is such a place in this world, an elf came to me and spoke.");
		pause27();
		puts("Ice Elf: You seems like you are not from here. Do you need help to get out of here my little human?");
		printf("%s: Yes!... I need to get where I came from. Can you help me out?\n",n);
		puts("Ice Elf: Mhm, this letter will show what you need to do next.\n");
		pause27();
		rptr = fopen("letter27.txt","r");
		
		if(rptr == NULL)
		{
			printf("File could not open and read.\n");
		}
		else
		{
			while(fgets(str,sizeof(str),rptr))
			{
				printf("%s",str);
			}
			rewind(rptr);
			pause27();
			printf("%s: Wait... What is it saying?? I can't read this.\n",n);
			puts("Ice Elf: Oh I see, I guess someone spilled their drinks here. But I can dry it up for you with my fire element.");
			printf("%s: But aren't you ice elf that uses ice element?\n",n);
			puts("Ice Elf: Yeah but I can use some basic ones for all elements like how CS major people need to take general English classes lol.");
			puts("(Drys up with fire)");
			puts("Ice Elf: Anyhow, it should be all dryed up for now. Here read it again.");

			pause27();
			while(fgets(str,sizeof(str),rptr))
			{
				y = strlen(str);
				for(i=0;i<y;i++)
				{	
					if(str[i] == 'p' || str[i] == '%')
					{

					}
					else
					{
						printf("%c",str[i]);
					}
				}


			}
			pause27();
			
			printf("%s: Okay thank you. that letter helped me a lot :)\n",n);
			puts("Ice Elf: No problem my guy. Good luck and see you if we can later.");
			puts("Exiting VIP Room...");

			
		}
		fclose(rptr);

	}
	else
	{
		puts("Loyal Knight: I don't unterstand what you mean so I'm going to get you out here.");
	}
}
void pause27()
{
	char c;
	puts("(Enter any one character to Continue)");
	scanf(" %c", &c);

}
int fairy(int *p, char n[])
{
	char c;
	int x;
	puts("Are you sure you want to go back to the fairy? [y/n]");
	scanf(" %c",&c);

	if(c == 'y' || c== 'Y')
	{
		printf("%s: Hey... it's me again fairy.\n",n);
		puts("Fairy: What's up? You know what I want right?");
		puts("How much Pitcoin(s) are you going to hand it to him?");
		printf("Pitcoin(s): ");
		scanf("%d",&x);
		if (*p < x)
		{
			puts("Fairy: You don't have that much of Pitcoin. Please come with enough Pitcoins to offer.");
		}
		else
		{
			if(x == 27)
			{
				puts("Fairy: This... this amount is the exact number that I was looking for!");
				printf("%s: That's great then. So you are not going to stab this time?\n",n);
				puts("Fairy: No, why would I? If you give me what I want, at that point we are BFF.");
				pause27();
				printf("%s: Ehhhh yeah I guess... But hurry I need to go back to my place to finish my CSC-251 project. That's due soon!\n",n);
				puts("Fairy: Okay okay. I will sent you where you belong right...");
				pause27();
				puts("...");
				pause27();
				printf("%s: Umm... are you okay fair..?\n",n);
				puts("Fairy: NOW!!!");
				puts("(Time traveling sound)");
				pause27();
				printf("%s: Whooooaahhhh~~~\n",n);
				pause27();
				puts("The next thing I saw was me sleeping on my desk with my laptop turned on to work on a project from CSC251 all night long.");
				printf("%s: What the... Looks like I had weird dream just now.\n",n);
				pause27();
				printf("%s: But\n",n);
				pause27();
				printf("%s: But...\n",n);
				pause27();
				printf("%s: But that was pretty awesome dream!! I'm going to make that to my project. (typing keyboard sounds)\n",n);
				pause27();
				printf("Therefore, our brave CS student %s safely came to his world and had to stay all night long to code but he was happy because he knew his project will be charming and couldn't wait to turn it in...\n",n);
				pause27();
				puts("Thank you for playing room 27 game!");
				puts("And yes this is the good ending that everyone wanted :)");
				puts("		-fin-");
				pause27();
				return 1;
			}
			else
			{
				puts("Fairy: That's it? You shouldn't come to me then.");
				puts("(Ran away before Fairy gets his knife out...)");
				pause27();
			}
		}
	}
	else
	{
		puts("Going back to the villiage...");
	}
	return 0;
}



//Elizabeth Flores
//prototype function 
int total()
{
    double x;
    x = 0.0;
    double y;
    char grade;
    double v;
    float average;
    int counter;
    counter = 0;
    int aCount = 0;//number of A's
    int bCount = 0;//number of B's
    int cCount = 0;// number of C's
    int dCount = 0;//number of D's
    int fCount = 0;//number of F's

    printf("Enter a letter grade (press q to quit): ");
    scanf(" %c",&grade);//%c declaring characters

    while(grade != 'q')
    {

        if(grade == 'A' || grade == 'a')
        {
            v = 4.0;
            aCount++;
        }
        else if(grade == 'B' || grade == 'b')
        {
            v = 3.0;
            bCount++;
        }
        else if(grade == 'C' || grade == 'c')
        {
            v = 2.0;
            cCount++;
            
        }
        else if(grade == 'D' || grade == 'd')
        {
            v = 1.0;
            dCount++;
        }
        else if(grade == 'F' || grade == 'f')
        {
            v = 0.0;
            fCount++;
        }
        printf("Enter a letter grade (press q to quit): ");
        scanf(" %c",&grade);//%c declaring characters
        x = x + v;
        counter++;
    }
    //Output
    printf("\nThere are ");
    printf("%u", aCount);// Display A count
    printf(" A's, %u", bCount);//B count
    printf(" B's, %u", cCount);//C count
    printf(" C's, %u", dCount);//D count
    printf(" D's, %u", fCount);//F count
    printf(" F's");//Display F
    average = x / (double)counter;
    printf("\nClass average is %.1f\n", average);
}//end function for case 1
int prompt(void)
{
	int x;
	printf("How many times would you like to roll the 11 sided dice? ");
	scanf("%d",&x);
	return x;
}
void modArray(int arrInt[], int size)
{
    int i,y,x;   
    for(i=0;i<size;i++)//roll it by the number of times it is prompt
	{
		y= rand()%11;
		arrInt[y]++;
	}
}
void printArray(int arrInt[], int size)
{
    printf("You had : \n %d ones \n %d twos \n %d threes \n %d fours \n %d fives \n %d sixes \n %d sevens \n %d eights \n"
            " %d nines \n %d tens \n %d elevens \n",arrInt[0],arrInt[1],arrInt[2],arrInt[3],arrInt[4],arrInt[5],arrInt[6],arrInt[7],arrInt[8],arrInt[9],arrInt[10]);
}//end functions for case 2
void eflores(char strings[])
{
    char string[19] ;
    int y,b = 0;
    
    fgets(string,19,stdin);
    for(b=0;b<18;b++)
    {
        if(islower(string[b]))
        {
            printf("%c is lower case \n",string[b]);
            string[b]=toupper(string[b]);
        }
        else
        {
            printf("%c is not lower case \n",string[b]);
        }
    }
}//end function case 4 

//separate functions mkarahassan room#1
int averageMk(int x,int y)
{
  int average = 0;
  average = x/y;
  return average;
}
//separate functions mkarahassan room#1
void ggPromtMk(int x)
{
  if (x > 1)
  {
    puts("Congrats!!! You won the game!! You are a brave fighter!!");
  }
  else
  {
    puts("Ooof!! You lost the game!! Better luck next time");
  }
}


int Coinflip21(int x,int z) //Fernando Rodriguez
{
	int y,i;
	for (i=0;i<1;i++)
		{
			y = rand()%2;
				if(y==1)
				{
					x =1;
					puts("The coin lands on heads");
					puts("Fate has decided for you to choose the door to your left");
					return x;
				}
				else
				{
				z=2;
				puts("the coin lands on tails");
				puts("???: Fate has decide for you to walk through the door to your right ");
				return z;
				}	
		}
	
}
void codeH(void)
{
	FILE *wptr;
	
	char unlock;
	wptr = fopen("codeH.txt","r");
	
	if(wptr == NULL)
	{
		printf("An ancient pharaoh destroyed the code \n");
		exit(1);
	}
	else
	{
		while((unlock = fgetc(wptr)) != EOF)
			printf("%c", unlock);
		
		
	} 
	
}
void codeT(void)
{
	FILE *wptr;
	char unlock;
	wptr = fopen("codeT.txt","r");
	if(wptr == NULL)
	{
		printf("An ancient pharaoh destroyed the code.\n");
		exit(1);
		
	}
	else
	{
		while((unlock = fgetc(wptr)) != EOF)
			printf("%c",unlock);
	}
	
}

	
	
	



void wordGame(char *pointer)
{



	if(strcmp(pointer, "run away\n") == 0)
	{
		puts("\nYou use the Joestar Family secret technique successfully and run away from kars toward the ocean.");
		puts("Kars transforms his arms into those of a bird and chases after you.");
		printf("\nIn the distance you see an airplane or a gun, which do you choose: ");
	}
	else
	{
		printf("\nYou choose to %s, but to no avail Kars kills you instantly", pointer);
		exit(0);
	}

	fgets(pointer, 10, stdin);


	if(strcmp(pointer, "airplane\n") == 0)
	{
		puts("\nYou jump into the airplane and take off, this catches Kars by suprise and allows you to get a head start on your next move.");
		printf("\nYou need to come up with a plan to defeat Kars, will you fly to the nearby military base or volcano: ");
	}
	else
	{
		puts("\nYou head toward the gun and choose to fire at Kars, however the bullets have no affect on the ultimate life form and he kills you instantly");
		exit(0);	
	}

	fgets(pointer, 20, stdin);
	
	if(strcmp(pointer, "volcano\n") == 0)
	{
		puts("\nYou fly toward the volcano in a last ditch effort to kill kars");
		puts("However he launches an attack, piranhas rain down into the cabin and a squid rips apart the plane propellors.");
		puts("You are forced to crash land into the volcano.");
		puts("In that very moment, a hand pins Kars to the nose of the plane. It is your parnter Rudol Von Stroheim who was hiding in the plane..");
		puts("You are both successfully able to crash land Kars into the lava, it seems as though you have won but this is not enough to stop Kars.");
		puts("He is able to harden his skin enough to survive being in the lava, and launches a suprise attack of his own.");
		puts("He cuts off one of your arms");
		printf("\nYou are running out of options as you lie on the ground awaiting your death, will you try to launch an attack with hamon or the red stone of aja: ");
	}
	else
	{
		puts("\nYou fly to the nearby military base hoping to be able to defeat him but Kars is able to quickly murder everyone including yourself.");
		exit(0);
	}

	fgets(pointer, 30, stdin);

	if(strcmp(pointer, "the red stone of aja\n") == 0)
	{
		puts("\nKars confident that he is about to finally kill you with one last hamon strike is suprised to see you use the red stone of aja to counter his attack.");
		puts("The red stone of aja amplifies the amount of hamon Kars used to attack you with and causes the volcano to erupt with a force equal to the escape velocity of earth.");
		puts("The force is enough to launch him into space where he freezes over and turns to stone. ");
		puts("You have successfully defeated Kars and saved the Earth.");
	}
	else
	{
		puts("\nYou try and attack with hamon but fail miserably, Kars' hamon is hundred of times stronger than yours and so he melts you with a flurry of attacks.");
		exit(0);
	}



}

//Anthony Blass
void abRandRoll(int trapChoice)
{
	if(trapChoice < 10)
	{
		puts("You try to deactivate the trap but failed...\n");
		puts("You hear a click and an arrow flys and hits you in the knee\n");
	}

	else if(trapChoice >= 10)
	{
		puts("You look at the trap and examine it...\n");
		puts("You find where the wire connects to the trap..\n");
		puts("You take out your knife and diconnect it properly, that was close...\n");
	}
}

//Anthony Blass
double abChestAvg(int choice)
{
	//have player pick a weapon to see average of damage for each one
	double avg;
	int damage;
	char* wepArr[3] = {"Axe", "Dagger", "Short Sword"};
	int axe = rand()% 10 + 1;
	int dagger = rand()% 5 + 1;
	int sword = rand()% 8 + 1;
	int i, turns;

	int ghost = 150;
	int player = 100;	

	puts("You walk over tho the chest, it seems like a normal.\n");
	puts("You seem to hesitate a bit and check around looks like a normal chest\n");
	puts("Do you want to open the chest? 1 Yes 2 No\n");
	scanf("%d",&choice);
	printf("\n");

	if(choice == 1)
	{
		puts("You open the chest and you flinch a bit nothing happened.\n");
		puts("You look inside and see an Axe, Dagger, and a Short Sword.\n");
		puts("Which do you choose? 1 Axe 2 Dagger 3 Short Sword.\n");
		scanf("%d",&choice);
		printf("\n");

		if(choice == 1)
		{
			printf("You chose the %s\n", wepArr[0]);
			printf("\t (>|\n");
			printf("\t   |\n");
			printf("\t   |\n");

			puts("You choose the axe and it feels like theres an aura that surrounds...\n");
			puts("You turn and notice a strange figure lurking in the shadows...");
			puts("The figure slowly moves towards you while whispering, You can not deafeat meeee...\n");
			puts("You have the curse I'll keep coming back if you strike me down...\n");
			puts("The Axe in your hand glows it wants you to fight, Are you ready? 1 YES\n");
			if(choice == 1)
			{
				puts("You get prepared to fight, you get into a fighting stance and lift up your Axe.\n");
				puts("Do you want to preform a strong attack or quick attack?\n");
				puts("1 Strong Attack 2 Quick Attack\n");
				scanf("%d",&choice);

				if(choice == 1)
				{
					printf("Ghost HP: %d\n", ghost);
					printf("Player HP: %d\n", player);

					for(i=0;turns < 3; i++)
					{
						damage = ghost - axe;
						
					}
					
					printf("Ghost HP: %d\n", ghost);
				}
			}
			else if(choice == 2)
			{
				printf("You chose the %s\n", wepArr[1]);
				printf("==[====-\n");
			}
			else if(choice == 3)
			{
				printf("You chose the %s \n", wepArr[2]);
				printf("\t 0=={======-\n");
			}
		}

	else if(choice == 2)
	{
		puts("You look at the chest and turn away, behind you is a ghostly spirit...\n");
		puts("THE CURSE SHALL REMAIN UPON YOU!!! and the ghost summons two ghostly arrows...\n");
	        puts("The ghost shoots both arrows and aims at your knees, both arrows hit your knees...\n");	
		puts("You fall and your eyes begin to close... but you wake up and...\n");
	}
	}
}	









