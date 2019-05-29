#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#include<conio.h>
#include<MMsystem.h>

int main(){
	system ("Color 8B");
	PlaySound("C:\\Users\\1nFernous\\Documents\\Proyek Akhir\\Main Menu.wav",NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
    printf("\t\t\t||                                                            ||\n");
    printf("\t\t\t||                                                            ||\n");
    printd("\t\t\t||              Everyone's Favorite Hangman Game              ||\n",10);
    printf("\t\t\t||                                                            ||\n");
    printf("\t\t\t||                                                            ||\n");
    sleep(2);
	return menu();
}

void menu(){
	int i;
	int position = 1;
	int keyPressed = 0;
	
	system ("cls");
	for(i=0;i<49;i++)
	{
		printf("=");
		Sleep(25);
	}	
	printf("\n|\t\tHANGMAN GAME\t\t\t|");
	printf("\n|\t\t    v1.0\t\t\t|\n");
	for(i=0;i<49;i++)
	{
		printf("=");
		Sleep(25);
	}
	
	while (keyPressed != 13){
	system ("cls");
		system ("Color 8B");
	for(i=0;i<49;i++)
	{
		printf("=");
	}	
	printf("\n|\t\tHANGMAN GAME\t\t\t|");
	printf("\n|\t\t    v1.0\t\t\t|\n");
	for(i=0;i<49;i++)
	{
		printf("=");
	}
	printf("\n\n");
	printf("Select\n");
	arrowHere(1,position); printf("1. New Game\n");
	arrowHere(2,position); printf("2. Help\n");
	arrowHere(3,position); printf("3. Exit\n");
	
	keyPressed = getch();
	if(keyPressed == 80 && position != 3){
		position++;
	} else if (keyPressed == 72 && position != 1){
		position--;
	}else{
		position = position;
	}
}
	switch(position){
		case 1:
			position == '1';
			NewGame();
			break;
		case 2:
			position == '2';
			Help();
			break;
		case 3:
			position == '3';
			Exit();
			break;
	}
getch();
}

void arrowHere(int posisiAsli,int posisiArrow){
	if(posisiAsli == posisiArrow){
		printf("--> -");
	} else{
		printf("     ");
	}
}

int NewGame(){
	int position = 1;
	int keyPressed = 0;

	while (keyPressed !=13){
	system ("cls");
	printf("Choose\n");
	arrowHere(1,position); printf("1. Single Player\n");
	arrowHere(2,position); printf("2. Multi Player\n");
	arrowHere(3,position); printf("3. Back to Main Menu\n");
	
	keyPressed = getch();
	if(keyPressed == 80 && position != 3){
		position++;
	} else if (keyPressed == 72 && position != 1){
		position--;
	}else{
		position = position;
	}
		}
	switch(position){
		case 1:
			position == '1';
			singleplayer();
			break;
		case 2:
			position == '2';
			multiplayer();
			break;
		case 3:
			position == '3';
			menu();
			break;
	}
getch();
}

int Help(){
	system("cls");
	char optionsub1;
	int p,q;
	for(p=0;p<25;p++)
	{
		printf("=");
		Sleep(25);
	}
	printf("\n|\tHELP MENU\t|\n");
	for(p=0;p<25;p++)
	{
		printf("=");
		Sleep(25);
	}
	printf("\n1. There are 2 modes, Single Player and Multi Player \n");
	printf("2. You can choose Single Player if you want to play alone\n");
	printf("3. You can choose Multi Player if you want to play with friend\n");
	printf("4. You can only input 1 alphabet\n");
	printf("5. You only have 5 tries\n");
	printf("Do you understand?\n");
	printf("Press Y to go back to the main menu\n");
	
	do{
	optionsub1 = getche();
	if(optionsub1=='Y' || optionsub1=='y')
		{
			menu();
			break;
		}
		else 
		{
			q = 1;
			printf("\n\nWrong input, Please press Y if you want to go back to the main menu\n");
		}
}while (q=1);
}

int Exit(){
	system("cls");
	PlaySound(NULL, 0, 0);
	int p;
	for(p=0;p<33;p++)
	{
		printf("=");
		Sleep(60);
	}
	PlaySound("C:\\Users\\1nFernous\\Documents\\Proyek Akhir\\Thanks.wav",NULL,SND_ASYNC|SND_FILENAME);
	printf("\nThank you for using this program\n");
	for(p=0;p<33;p++)
	{
		printf("=");
		Sleep(60);
	}
	return 0;
}

void showHangman(int choice){

     switch(choice)
     {

     case 0:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||   / %c",'\\');
	printf("\n\t||      ");
	break;
     case 1:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||     %c",'\\');
	printf("\n\t||      ");
	break;
     case 2:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 3:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 4:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO ",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 5:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||    O ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
      }//end of switch-case
      return;
 }

void printd(char* x, int y){
	int i;
	for(i=0;i<strlen(x);i++)
	{
		printf("%c",x[i]);
		Sleep(y);
	}
}

void stringLwr(char *s){
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        ++i;
    }
}

int singleplayer(){
	system("cls");
    int k;
    int score = 10000;
    char playername[100];
    printf("\t\t\t\tEnter Your Name : ");
    scanf("%s",&playername);
    srand(time(NULL));
    printf("\t\t\t\t\t==============================\n");
    printf("\t\t\t\t\t| 1. Hewan                   |\n");
    printf("\t\t\t\t\t| 2. Negara                  |\n");
    printf("\t\t\t\t\t| 3. Mata Uang               |\n");
    printf("\t\t\t\t\t| 4. Makanan                 |\n");
    printf("\t\t\t\t\t==============================\n");
    printf("\t\t\t\t\tSelect Your Choice : ");
    scanf("\n%d",&k);
    char kataHangman[100]={0};
    char Hewan[20][20]={"anjing", "kucing", "babi", "monyet","platypus","bebek","paus","flamingo","tomcat","kecoak","cicak","zebra","musang","rubah","hamster","iguana","bunglon","biawak","kelelawar","tapir"};
    char Negara [20][20] ={"Bulgaria","Belgia","Brazil","Thailand","Malaysia","Jepang","Denmark","Brunei","Kolombia","Kroasia","Tanzania","Vietnam","Yordania","Palestina","Vatikan","Liberia","Italia","Francis","Argentina","Portgual"};
    char MataUang [14][20] = {"dollar","rupiah","euro","poundsterling","ringgit","rupee","peso","baht","yen","yuan","dinar","won","riyal","franc"};
    char Makanan[20][20]={"rendang","nugget","baso","nasi","gudeg","steak","sushi","ramen","teriyaki","katsu","yakiniku","spaghetti","fettucini","pizza","indomie","makaroni","udon","ratatouille","lasagna","salad","ketoprak"};
    if(k==1){
       strcat(&kataHangman,Hewan[rand()%20]);
    }
    else if(k==2){
        strcat(&kataHangman,Negara[rand()%20]);
    }
    else if(k==3){
        strcat(&kataHangman,MataUang[rand()%14]);
    }
    else if(k==4){
        strcat(&kataHangman,Makanan[rand()%20]);
    }
    else{
        printf("Wrong input");
        getch();
        singleplayer();
    }

	stringLwr(kataHangman);
    char sementara[100];
    char outputhangman [100];
    int kesempatan=5, hurufbenar =0;
    int counter =0, position=0, winner, length, i;
    char hurufuser;

    length = strlen(kataHangman);
    system ("cls");

    printf("\n\n\n");
    printf("\t\t\t||===== ");
	printf("\n\t\t\t||    | ");
    printf("\n\t\t\t||      ");
    printf("\n\t\t\t||      ");
    printf("\n\t\t\t||      ");
    printf("\n\t\t\t||      ");

    printf("\n\t\t\t\t");
    printf("The word has %d letters",length);
     for( i = 0; i < length ; i++)
    {
        outputhangman[i] = '_';
        outputhangman[length] = '\0';
    }

    for(i = 0 ; i < length ; i++)
    {
        printf(" ");
        printf("%c",outputhangman[i]);


    }
     while(kesempatan != 0)
    {
        hurufbenar = 0;
        printf("\n\n  Enter a word from 'a to z' : ");

	    fflush(stdin);

	    scanf("%c",&hurufuser);
    if(hurufuser < 'a' || hurufuser > 'z')
    {
        system("cls");
        printf("\n\n\t Wrong input please enter small case from a to z ");
        hurufbenar = 2;
    }
    fflush(stdin);
      if (hurufbenar != 2)
    {
        for(counter=0;counter<length;counter++)
	    {
		    if(hurufuser==kataHangman[counter])
		     {
		       hurufbenar = 1;
		     }
	    }

	    if(hurufbenar==0)
        {
            printf("You have %d Tries Left",--kesempatan);
			score-=2000;
			
            getchar();
            showHangman(kesempatan);
        }

         else
	   {
	     for(counter = 0; counter < length; counter++)
             {
     	         hurufbenar = 0;
                 if(hurufuser == kataHangman[counter])
                 {
                     position = counter ;
                     hurufbenar = 1;
                 }
                 if(hurufbenar == 1){
                        for(i = 0 ; i < length ; i++)
                            {
                                if( i == position)
                                {
                                    outputhangman[i] = hurufuser;
                                }
                                else if( outputhangman[i] >= 'a' && outputhangman[i] <= 'z' ){
                                        continue;
                                }
                                else {
                                        outputhangman[i] = '_';
                                }
                            }
                            sementara[position] = hurufuser;
                            sementara[length] = '\0';
                            winner = strcmp(sementara,kataHangman);
                            if(winner==0){
                                     printf("\n\t\t\t\t ");
                                     printd("You Win!",20);
                                     printf("\n\t\t\t\t");
                                     printf("The Word was %s", kataHangman);
                                     printf("\n\t\t\t\t %s's Score : %d",playername,score);
                                     getchar();
                             menu();
                            }
                 }
             }
	   }
    }

    printf("\n\n\t");
    for(i = 0 ; i < length ; i++)
      {
          printf(" ");
          printf("%c",outputhangman[i]);
      }
    }
    if(kesempatan<=0){
        printf("\n\n\t The Word was %s",kataHangman);
        printf("\n\t");
        printd("Better Luck Next Time",20);
        
        printf("\n\t\t\t\t %s's Score : %d",playername,score);
        
    }
    getchar();
    menu();
}

int multiplayer(){

    char kataHangman[100], sementara[100];
    char outputhangman [100];
    int kesempatan=5, hurufbenar =0;
    int counter =0, position=0, winner, length, i;
    char hurufuser;

    system("cls");
    printf("\n\n\n\n\n\n");
    printd("\t\t\t\tEnter a word in small case : ",30);
    scanf("%s",&kataHangman);
    printf("\t\t\t\t");
    printd("Give the computer to your friend so he could guess what word is it",20);
    printf ("\n\t\t\t\t");
    system("pause");
    length = strlen(kataHangman);
    system ("cls");

    printf("\n\n\n");
    printf("\t\t\t||===== ");
	printf("\n\t\t\t||    | ");
    printf("\n\t\t\t||      ");
    printf("\n\t\t\t||      ");
    printf("\n\t\t\t||      ");
    printf("\n\t\t\t||      ");

    printf("\n\t\t\t\t");
    printf("The word has %d letters",length);
     for( i = 0; i < length ; i++)
    {
        outputhangman[i] = '_';
        outputhangman[length] = '\0';
    }

    for(i = 0 ; i < length ; i++)
    {
        printf(" ");
        printf("%c",outputhangman[i]);

    }
     while(kesempatan != 0)
    {
        hurufbenar = 0;
        printf("\n\n  Enter a word from 'a to z' : ");

	    fflush(stdin);

	    scanf("%c",&hurufuser);
    if(hurufuser < 'a' || hurufuser > 'z')
    {
        system("cls");
        printf("\n\n\t Wrong input please enter small case from a to z ");
        hurufbenar = 2;
    }
    fflush(stdin);
      if (hurufbenar != 2)
    {
        for(counter=0;counter<length;counter++)
	    {
		    if(hurufuser==kataHangman[counter])
		     {
		       hurufbenar = 1;
		     }
	    }

	    if(hurufbenar==0)
        {
            printf("You have %d Tries Left",--kesempatan);

            getchar();
            showHangman(kesempatan);
        }

         else
	   {
	     for(counter = 0; counter < length; counter++)
             {
     	         hurufbenar = 0;
                 if(hurufuser == kataHangman[counter])
                 {
                     position = counter ;
                     hurufbenar = 1;
                 }
                 if(hurufbenar == 1){
                        for(i = 0 ; i < length ; i++)
                            {
                                if( i == position)
                                {
                                    outputhangman[i] = hurufuser;
                                }
                                else if( outputhangman[i] >= 'a' && outputhangman[i] <= 'z' ){
                                        continue;
                                }
                                else {
                                        outputhangman[i] = '_';
                                }
                            }
                            sementara[position] = hurufuser;
                            sementara[length] = '\0';
                            winner = strcmp(sementara,kataHangman);
                            if(winner==0){
                                     printf("\n\t\t\t\t ");
                            printd("You Win!",20);
                             printf("\n\t\t\t\t");
                             printf("The Word was %s", kataHangman);
                             getchar();
                             menu();
                            }
                 }
             }
	   }
    }

    printf("\n\n\t");
    for(i = 0 ; i < length ; i++)
      {
          printf(" ");
          printf("%c",outputhangman[i]);
      }
    getchar();
    }

    if(kesempatan<=0){
        printf("\n\n\t The Word was %s",kataHangman);
        printf("\n\t");
        printd("Better Luck Next Time",20);
        printf("\n\t");
        system("pause");
    }
    getchar();
    menu();
}
