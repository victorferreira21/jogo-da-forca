#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>


void mainmenu(int i);
void showLogo();
void drawhangman(int i);
void getword();
void generatecurrentword();
void singlegame();
void multigame();
void battlegame();
void maingame();
void anothergame();
void resetgame();
void printstage(char mode);
void howtoplay();
void creditos();
int randomNumber(int max_number);


int cursor = 1, i, j, len, error = 0;

char guessword[200], currentword[200], ans;


char dbdir[5000] = "worldlist.txt";

int main()
{
    resetgame();
    
    mainmenu(cursor);

    char key;

    
    do
    {
        key = getch();  
        switch(key)
        {
            case 72 :
                mainmenu(--cursor); 
                break;
            case 80 :
                mainmenu(++cursor); 
                break;
        }
    } while(key!=13);

    
    switch(cursor)
    {
        case 1 :
            singlegame();
            break;
        case 2 :
            multigame();
            break;
        case 3 :
            battlegame();
            break;
        case 4 :
            howtoplay();
            break;
        case 5 :
            creditos();
            break;
        case 6 :
            sair(1);    
    }
}


void mainmenu(int i)
{
    
    system("cls");

    
    showLogo();

    
    drawhangman(99);

    
    switch(i)
    {
        case 1 :
            printf("\n\t\t\tWelcome to Hangman\n");
            printf("\n\t\t\t[*] Singleplayer");
            printf("\n\t\t\t[] Multiplayer");
            printf("\n\t\t\t[] Battle Mode");
            printf("\n\t\t\t[] How to Play");
            printf("\n\t\t\t[] Credit");
            printf("\n\t\t\t[] Exit");
            break;
        case 2 :
            printf("\n\t\t\tWelcome to Hangman\n");
            printf("\n\t\t\t[] Singleplayer");
            printf("\n\t\t\t[*] Multiplayer");
            printf("\n\t\t\t[] Battle Mode");
            printf("\n\t\t\t[] How to Play");
            printf("\n\t\t\t[] Credit");
            printf("\n\t\t\t[] Exit");
            break;
        case 3 :
            printf("\n\t\t\tWelcome to Hangman\n");
            printf("\n\t\t\t[] Singleplayer");
            printf("\n\t\t\t[] Multiplayer");
            printf("\n\t\t\t[*] Battle Mode");
            printf("\n\t\t\t[] How to Play");
            printf("\n\t\t\t[] Credit");
            printf("\n\t\t\t[] Exit");
            break;
        case 4 :
            printf("\n\t\t\tWelcome to Hangman\n");
            printf("\n\t\t\t[] Singleplayer");
            printf("\n\t\t\t[] Multiplayer");
            printf("\n\t\t\t[] Battle Mode");
            printf("\n\t\t\t[*] How to Play");
            printf("\n\t\t\t[] Credit");
            printf("\n\t\t\t[] Exit");
            break;
        case 5 :
            printf("\n\t\t\tWelcome to Hangman\n");
            printf("\n\t\t\t[] Singleplayer");
            printf("\n\t\t\t[] Multiplayer");
            printf("\n\t\t\t[] Battle Mode");
            printf("\n\t\t\t[] How to Play");
            printf("\n\t\t\t[*] Credit");
            printf("\n\t\t\t[] Exit");
            break;
        case 6 :
            printf("\n\t\t\tWelcome to Hangman\n");
            printf("\n\t\t\t[] Singleplayer");
            printf("\n\t\t\t[] Multiplayer");
            printf("\n\t\t\t[] Battle Mode");
            printf("\n\t\t\t[] How to Play");
            printf("\n\t\t\t[] Credit");
            printf("\n\t\t\t[*] Exit");

        
        default :
            if(i > 6)
            {
                cursor = i = 1;
                mainmenu(cursor);
            }
            else if(i < 1)
            {
                cursor = i = 6;
                mainmenu(cursor);
            }
    }

    printf("\n\tUse the arrow keys to select the menu and ENTER to confirm.");
}


void showLogo()
{
      printf("\t\t--------------------------------------------\n");
      printf("\t\t| #  #   #   #   #  #### #   #   #   #   # |\n");
      printf("\t\t| #  #  # #  ##  # #     ## ##  # #  ##  # |\n");
      printf("\t\t| #### ##### # # # #  ## # # # ##### # # # |\n");
      printf("\t\t| #  # #   # #  ## #   # #   # #   # #  ## |\n");
      printf("\t\t| #  # #   # #   #  ###  #   # #   # #   # |\n");
      printf("\t\t--------------------------------------------\n");
}


void drawhangman(int i)
{
 switch (i) {
     case 0 :
      printf("\t\t\tAmount of wrong letters: %d\n\n", i);
      printf("\t\t\t\n");
      printf("\t\t\t\n");
      printf("\t\t\t\n");
      printf("\t\t\t\n");
      printf("\t\t\t\n");
      printf("\t\t\t\n");
      printf("\t\t\t____________\n\n");
     break;

     case 1 :
      printf("\t\t\tAmount of wrong letters: %d\n\n", i);
      printf("\t\t\t\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 2 :
      printf("\t\t\tAmount of wrong letters: %d\n\n", i);
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 3 :
      printf("\t\t\tAmount of wrong letters: %d\n\n", i);
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 4 :
      printf("\t\t\tAmount of wrong letters: %d\n\n", i);
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 5 :
      printf("\t\t\tAmount of wrong letters: %d\n\n", i);
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |    |\n");
      printf("\t\t\t  |    |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 6 :
      printf("\t\t\tAmount of wrong letters: %d\n\n", i);
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |   \\|\n");
      printf("\t\t\t  |    | \n");
      printf("\t\t\t  |\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 7 :
      printf("\t\t\tAmount of wrong letters: %d\n\n", i);
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |   \\|/\n");
      printf("\t\t\t  |    | \n");
      printf("\t\t\t  |\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 8 :
      printf("\t\t\tAmount of wrong letters: %d\n\n", i);
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |   \\|/\n");
      printf("\t\t\t  |    | \n");
      printf("\t\t\t  |   /\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 9 :
      printf("\t\t\tAmount of wrong letters: %d\n\n", i);
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |   \\|/\n");
      printf("\t\t\t  |    | \n");
      printf("\t\t\t  |   / \\\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 10 :
      printf("\t\t\tAmount of wrong letters: %d\n\n", i);
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    X \n");
      printf("\t\t\t  |   \\|/\n");
      printf("\t\t\t  |    | \n");
      printf("\t\t\t  |   / \\\n");
      printf("\t\t\t__|_________\n\n");
     break;

    
     default :
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |   \\|/\n");
      printf("\t\t\t  |    | \n");
      printf("\t\t\t  |   / \\\n");
      printf("\t\t\t__|_________\n\n");
     break;

 }
}


void getword()
{
    
    char rawtext[100000];

    
    FILE *fpt;

    
    fpt = fopen(dbdir, "r");

    
    if(fpt == NULL){
        system("cls");
        printf("Error opening database, please enter the file's directory (use forward slash(/) not back slash(\\)) and press ENTER.\n");
        gets(dbdir);
        singlegame();
    }

    int n;

    
    n = fread(rawtext, 1, 100000, fpt);

   
    rawtext[n] = '\0';

    
    char *token = strtok(rawtext, "|");

    
    char *words[1000] = {0};
    int f = 0;
    while(token != NULL)
    {
      
      words[f] = malloc(strlen(token)+1);

      
      strcpy(words[f],token);

      
      token = strtok(NULL, "|");
      f++;
    }

    
    fclose(fpt);

    
    int wordN = randomNumber(f);

    
    int q;
    for(q = 0; q < 200; q++)
    {
        
        if(q != wordN){
            free(words[q]);
        }
    }

    
    strcpy(guessword, words[wordN]);

    

    generatecurrentword();
}


void generatecurrentword ()
{
    
    len = strlen(guessword);

    
    for(i = 0; i < len; i++)
    {
        if(guessword[i] != ' '){
            currentword[i] = '-';
        } else {
            currentword[i] = ' ';
        }
    }
}


void singlegame()
{
    getword();

    
    system("cls");

    printstage('s');

    maingame();
}


void multigame()
{
    
    system("cls");

    printf("Enter the word (Don't let your friend see it) : ");

    
    gets(guessword);

    
    strlwr(guessword);

    
    system("cls");

    printf("Check guess word : %s\n", guessword);

    generatecurrentword();

    printstage('m');

    maingame();
}



void battlegame()
{
    
    char p1name[20], p2name[20];

    getword();

    
    system("cls");

    
    printf("\n\t\tEnter Player 1's name : ");
    scanf("%s", p1name);
    printf("\n\t\tEnter Player 2's name : ");
    scanf("%s", p2name);

    
    printstage('b');
    printf("\n\n\t\t%s's turn", p1name);
    printf("\n\t\tAnswer : ");

    int check = 0, player = 0;

    
    while(strcmp(guessword, currentword) != 0)
    {
        
        scanf("%c", &ans);


        if(ans != '\n'){

            check = 0;

            player++;

            for(i = 0; i < len; i++)
            {
                
                if(guessword[i] == ans){
                    
                    check++;
                    currentword[i] = ans;
                }
                
            }

            
            if(check == 0){
                error++;
            }
        }

        system("cls");
        printstage('b');

        
        if(player % 2 == 0){
            printf("\n\n\t\t%s's turn", p1name);
            printf("\n\t\tAnswer : ");
        } else {
            printf("\n\n\t\t%s's turn", p2name);
            printf("\n\t\tAnswer : ");
        }

        
    }

    system("cls");
    printstage('b');

    
    if(player %2 ==0){
        printf("\n\n\t\t%s WINS!!", p1name);
        anothergame();
    } else {
        printf("\n\n\t\t%s WINS!!", p2name);
        anothergame();
    }
}


void maingame()
{
    int check = 0;

    
    while((strcmp(guessword, currentword) != 0) && error < 10)
    {
        
        printf("\t\tAnswer : ");
        scanf("%c", &ans);

        if(ans != '\n'){

            check = 0;

            for(i = 0; i < len; i++)
            {
                
                if(guessword[i] == ans){
                    //Add the correct letter
                    check++;
                    currentword[i] = ans;
                }
                
            }

            
            if(check == 0){
                error++;
            }
        }

        
        system("cls");
        printstage('s');

        
    }

    if(error == 10){
        printf("\n\n\t\tYou LOSE!!, try again next time. :3\n");
        anothergame();
    } else {
        printf("\n\n\t\tCongratulations, You WIN!!.\n");
        anothergame();
    }
}


void anothergame()
{
    printf("\n\t\tAnother game? [y/n]");
        char c;
        c = getche();
        if(c == 'y'){
            main();
        } else {
            exit(1);
        }
}


void resetgame()
{
    *guessword = "\0";
    *currentword = "\0";
    error = 0;
}


void printstage(char mode)
{
    printf("\t%s\n\n\t%s\n\t%s\n\t%s\n\t%s\n\n\t%s%s\n\n",
           "Welcome to the Hangman!",
           "The objective in this game is to guess the word.",
           "You can enter both upper or lowercase letters.",
           "If you think you know the word, you can type it in all at once.",
           "You will loose if you make 10 mistakes.",
           "This is the word you need to guess: ",
           currentword);

    
    if(mode != 'b'){
        drawhangman(error);
    }
}


void howtoplay()
{
    system("cls");

    printf("\n\t\t%s\n\n%s\n\n%s\n%s\n%s\n\n%s\n%s\n\n%s\n%s\n%s\n\n%s\n\n%s",
           "::HOW TO PLAY::",
           "The objective in this game is to guess the word.",
           "In Singleplayer mode, the game will randomly pick you a word.",
           "You will have to guess enter a letter.",
           "If you think you know the word, you can type it in all at once.",
           "In Multiplayer mode, the rule is the same as single player",
           "but one will be entering a word for another to guess.",
           "In Battle mode, the game will randomly pick you a word.",
           "Each player will then take turn to guess.",
           "The first player that figure the word out is the winner",
           "You will lose if you make 10 mistakes in every mode expect battle mode.",
           "Press any key to return to the main menu.");

    getch();
    main();
}


void credit()
{
    system("cls");

    printf("\n\t%s\n\n\t%s\n\n\t%s\n\n\t%s",
           "Created by Wolface - Foxicle Studio (Jitrin Siriwat)",
           "For Computer Programming 2 midterm project.",
           "Student ID# = 54-040616-2008-5",
           "Press anykey to go back to the main menu.");

    getch();
    main();
}


int randomNumber(int max_number)
{
srand(time(NULL));
int g = (rand() % (max_number + 1));
return g;
}
