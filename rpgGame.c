//Contributors
//G. Poppe
//


#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

void eTeenfillArray(int *ptr, int x);
void eTeenPrinter(int *ptr, int x);
double jumpAvg(char y);
char eTeenLakePrompt(void);
void eTeenLakeprinter(double average);


int main(int argc, char *argv[])
{

	FILE *ETrptr,*ETwptr;
  	ETrptr = fopen("inputET.txt", "r");
  	ETwptr = fopen("outputET.txt", "w");

	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;

	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);

	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 40 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				while(choice != 99)
				{

				}
				break;
			}
			case 2:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 3:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
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
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 9:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 10:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 11:
			{
				while(choice != 99)
				{

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
					puts("you open the door and find ........");
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
			int x=0,y=0,z=0,a=0,b=0,c=15;
       			 char oneAct;
       			 char jump;
				while(choice != 99)
				{
				puts("\nYou open the door and...\n");
          printf("'SPlOOSH!' you flop onto a cobble stone floor. Your clothes are drenched, you check for any injuries and gather yourself up\n");
          puts("\nYou can (L)Look around the cavern, (S)Sit at the table, (W)Walk to the lake, or (R)Try your luck leaving the room.");
         
          scanf("%d",&choice);
          scanf("%c",&oneAct);
          {
          switch(oneAct)
          {
            case 'L':
            srand(time(0));
            int lucky, flag=0;
            int *ptr;
            int arr[10]={0,1,2,3,4,5,6,7,8,9};
            printf("\nYou see a small card table with a wizened old man smiling at you, dexteriously rolling rune like dice. You are in an expansive cavern, lit by candles, you see a lagoon deeper in the cavern.\n");
            puts("Suddenly a Shadow man materializes out of the nearest wall. He comes into your focus looking like a Gameshow host; a ghostly Bob Barker.\n");
            puts("\nBefore you could react the shadow writes a few phrases on the wall, the phrases say 'Lets Play Powerball!' a lotto ticket appears in your hand, lets see if you hit.\n");
            puts("What number do you see on your ticket?");
            scanf("%d",&lucky);
            for(i=0;i<10;i++){
              if (lucky == arr[i]){
                flag++;
              }
            }
            
            ptr = arr;
            eTeenfillArray(ptr, 10);
            eTeenPrinter(ptr, 10);
            if(flag>0){
              printf("\n'%d Hit! Lets see what you have won!....A fabulous trip to..' the Shadow man starts clapping excitedly he then snaps his finger and you disappear with a *pop!*, you suddenly reappear on Waikiki Beach; strangely with a mai tai in hand and in swimwear.",lucky);
            }else{
              printf("\n'%d did not hit' growls the shadow man, your whole world turns dark. you have now become a shadow..the last thing you hear is the old man at the table saying 'you should have played my game!'",lucky);
            }
            break;

            case 'S':
            printf("\nYou sit at the table, the old man waves his hand and a magic pouch appears in front of him. He then pulls a ruby-like gem out of the pouch, it glows with a trapped flame inside of it. He then says 'If you can guess how much mana I require to change a stone into this mana stone, I will help you get home..hopefully. He grins revealing several missing teeth and says 'Lets try your luck!'\n");
            puts("Enter how many stones will you give the old man?: ");
            scanf("%d",&x);
            y= x+c;
            a= x*c;
            b= x-c;
            printf("%d + mana points = %d \n",x,y);
            printf("%d * mana points = %d \n",x,a);
            printf("%d - mana points = %d \n",x,b);
            printf("How much mana points did the old man use!\n");
            scanf("%d",&c);
            if(c==15)
            {
            printf("\nYou suddenly hear the old man's voice in your head saying 'You have passed my test!, accept my gift and try not to open any doors' your surroundings start to spin and you are teleported away.\n");
          puts("\nYou suddenly stop spinning and you are standing in your living room, relieved to be home but still soaking wet.");
            }
            else 
            {
            printf("\nYou suddenly hear the old man's voice in your head saying 'You are incorrect! HAHAHAHAHA' your surroundings start to spin and you teleported away into oblivion....when you come to your senses you realize something terrible: YOU ARE IN THE MANASTONE!\n");
            }
            break;

            case 'W':
            printf("\nYou walk forward, past the old man and the card table; to the edge of a deep dark lake. you look closer and there is a treasure chest on an island in the lake. you hear the old man chuckle and says 'dont fall in the lake'");
            puts("\nTry to long jump to the island? (Y) or (N)");
            scanf("%c",&jump);
            {
              if(jump != 'N')
              {
              int ac=0,bc=0,cc=0,dc=0,fc=0;
              int aGrade=0,bGrade=0,cGrade=0,dGrade=0,fGrade=0;
              char y;
              double z;

              y = eTeenLakePrompt();
              z = jumpAvg(y);
              eTeenLakeprinter(z);
              return EXIT_SUCCESS;
              }
              else{
              puts("You continue to stare at the shiny object in the lake; it suddenly moves ");
              }
            }
            break;
            case 'R':
            
            if(ETrptr== NULL)
              {
                puts("could not open file for reading");
              }
              else
              {
            printf("\nYou are done with all this you turn to leave practicing to hold your breath for the water filled chamber..suddenly a tablet appears in your hand with the following choices:\n");
            printf("%s", "Enter choice: \n"
    "1 - data.\n"
    "2 - Hints.\n"
    "3 - End program.\n?");
    unsigned int options;
    scanf("%u",&options);
    while(options !=3)
    {
      unsigned int mana;
      unsigned int jump;
      char hint[30];

      fscanf(ETrptr,"%d%29s%d",&mana,hint,&jump);
      switch(options)
      {
        case1:
        puts("\nGame Data: \n");
        while(!feof(ETrptr))
        {
          if(jump>7)
          {
            printf("\n%d is the correct %s", jump,hint);
          }
          else if(mana>10)
          {
            printf("\n%d is the correct %s",mana,hint);
          }
          fscanf(ETrptr,"%d%29s%d",&mana,hint,&jump);
        }
        break;
        case 2:
        puts("\nHints: \n");
        printf("\nThere are no hints");
        break;
      }
      rewind(ETrptr);
      printf("%s","\n? ");
      scanf("%d",&options);
    }
    puts("Close tablet");
    fclose(ETrptr);
    fclose(ETwptr);
  }
            default:
            printf("\nA voice in your head tells you thats the wrong choice\n");
            scanf("%d",&choice);
          }
          return 0;
				}
				break;
			}
			}
			case 19:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
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
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}

			case 32:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
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
void eTeenfillArray(int *ptr, int x)
{
    for (int i = 0; i < x; i++)
        *(ptr + i) = rand() % 32 + 20;
}
void eTeenPrinter(int *ptr, int x)
{
    for (int i = 0; i < x; i++)
        printf("PowerBall = %d\n", *(ptr + i));
}
char eTeenLakePrompt(void)
{
  int ac=0,bc=0,cc=0,dc=0,fc=0;
  int aGrade=0,bGrade=0,cGrade=0,dGrade=0,fGrade=0;
  char entry = 'a';

  while(entry!='q')
  {
    printf("\nEnter a letter a through f to indicate quality steps you take  (press q to quit): \n");
    scanf(" %c",&entry);

          if(entry == 'a' || entry == 'A')
          {
                  aGrade++;
                  ac++;
          }
          else if(entry == 'b' || entry == 'B')
          {
                  bGrade++;
                  bc++;
          }
          else if(entry == 'c' || entry == 'C')
          {
                  cGrade++;
                  cc++;
          }
          else if(entry == 'd' || entry == 'D')
          {
                    dGrade++;
                    dc++;
          }
          else if(entry == 'f' || entry == 'F')
          {
                    fGrade++;
                    fc++;
          }
          else if(entry == 'q')
          {
                    break;
          }
          else
          {
                    printf("invalid");
                    break;
          }
    }

  return entry;
}

double jumpAvg(char y)
{
  int ac=0,bc=0,cc=0,dc=0,fc=0;
  int aGrade=0,bGrade=0,cGrade=0,dGrade=0,fGrade=0;
  double average = 0.0;
  double a= 0.0, b= 0.0, c= 0.0, d= 0.0, f= 0.0;
  int count = 0;
  a = (7.0 * aGrade);
  b = (4.0 * bGrade);
  c = (2.0 * cGrade);
  d = (1.0 * dGrade);
  f = (0.0 * fGrade);
  count = (ac+ bc+ cc+ dc+ fc);
  average = (a+b+c+d+f)/count;
  return average;
}

void eTeenLakeprinter(double average)
{
  if(average <= 5.0)
  {
  printf("Perfect jump! %.1f , you reach the island you hurry to open the treasure chest bashing the lock with a nearby rock. You open the chest and are sucked in by a vortex. You awake to find your self in the middle of British museum of History holding King Tut's Amulet...at least you arent in door 18 anymore. \n", average);
  }else{
  printf("you didnt make it, you fall into the lake and what you thought was water was really a tarpit, you slowly struggle realizing you are now stuck like a Mammoth at the La Brea Tarpits.");
  }
}

