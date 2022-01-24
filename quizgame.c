#include <stdio.h>
#include <windows.h>

void game(){
	char name[30];
	int count=0;
	int ans,opt;

	system("cls");
	FILE *fp;
	fp=fopen("gamescores.txt","a+");
	
	printf("Enter your name\t:");
	gets(name);
	
	system("cls");
	printf("Wait a moment while getting questions for you");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	system("cls");
	printf("\n\n\n\n %s Best of luck!!",name);
	sleep(2);
	printf("\n\nThe game Starts in ");
	sleep(1);
	printf("3 ");
	sleep(1);
	printf("2 ");
	sleep(1);
	printf("1 ");
	sleep(1);
	printf("0 ");
	sleep(1);
	
    
	//Question no1
	system("cls");
	printf("Q1. Who is the Current Vice Presiden in USA?");
	printf("\n\n1. JHON CARAMAN\n2. KAMALA HARIS\n2. WILLIAM HUNG\n3. ANKITA BEDDI");
	printf("\n\nEnter you answer\t:");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("Your ans is correct!!");
		count++;
		sleep(2);
	}
	else
	{
		printf("Your ans is wrong!!\ncorrect is 2. KAMALA HARIS");
		sleep(2);
		printf("\nPress Enter for next Question"); 
		getchar();
		getchar();
	}
	
//	Question no2
	system("cls");
	printf("Q2. Who is the desiner of C Programming language?");
	printf("\n\n1. KEN THOMPSON\n2. BRIAN KERNIGHAN\n3. RICHARD STALLMAN\n4. DENNIS RITCHIE");
	printf("\n\nEnter Your ans\t:");
	scanf("%d",&ans);
	
	if(ans==4)
	{
		printf("Your ans is correct!!");
		count++;
		sleep(2);
	}
	else
	{
		printf("Your ans is wrong!!\ncorrect is4. DENNIS RITCHIE");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}
	
//	Question no3
	system("cls");
	printf("Q3. What is the full from of 'WHO'?");
	printf("\n\n1. World Helth Organization\n2. World Heritage Organization\n3. World Humen Organization\n4. World History Organization");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==1)
	{
		printf("Your ans is correct!!");
	    count++;
	    sleep(2);
	}
	else
	{
		printf("your ans is wrong!!\ncorrct is 1. World Helth Organization");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}
	
//	Question no4
	system("cls");
	printf("Q4. Who inveted Computer?");
	printf("\n\n1. HITMAN MAYER\n2. ADA LOVELACE\n3. CHARLES BABBAGE\n4. GRORGIAA WHITEMORE");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==3)
	{
		printf("Your ans is correct!!");
	    count++;
	    sleep(2);
	}
	else
	{
		printf("your ans is wrong!!\ncorrct is 3. CHARLES BABBAGE");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}
	
//	Question no5
	system("cls");
  	printf("1. KiloByte (kb)=(?)bytes");
  	printf("\n\n1. 1024 Bytes\n2. 1000 Bytes\n3. 1200 Bytes\n4. 2024 Bytes");
  	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==1)
	{
		printf("Your ans is correct!!");
	    count++;
	    sleep(2);
	}
	else
	{
		printf("your ans is wrong!!\ncorrct is 1. 1024 Bytes");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}
	
//	Qustion no6
	system("cls");
	printf("Q6. Which among the following was the first computer virus?");
	printf("\n\n1. Conflcker\n2. I Love You\n3. Melissa\n4. Elk");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==4)
	{
		printf("Your ans is correct!!");
	    count++;
	    sleep(2);
	}
	else
	{
		printf("your ans is wrong!!\ncorrect is 4. Elk");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}
	
//	Question no7
	system("cls");
	printf("Q7. One of the mejor work of softoware is to transform data into...");
	printf("\n\n1. Information\n2. Video\n3. Website\n4. Sofware Program");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==1)
	{
		printf("Your ans is correct!!");
	    count++;
	    sleep(2);
	}
	else
	{
		printf("your ans is wrong!!\ncorrect is 1. Information");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}
	
//  Question no8
	system("cls");
	printf("Q8. USB is_______ storage device.");
	printf("\n\n1. Primary\n2. Sencondary\n3. Auxiliary\n4. Additional");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("Your ans is correct!!");
	    count++;
	    sleep(2);
	}
	else
	{
		printf("your ans is wrong!!\ncorrect is 2. Secondary");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}
	
//	Question no9
	system("cls");
	printf("Q9. In C language'fprintf();' stands for...");
	printf("\n\n1. Read data into the file\n2. Read data only from the corrent source code\n3. Write data into the file\n4. Write data only fornm the corrent source code");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==3)
	{
		printf("Your ans is correct!!");
	    count++;
	    sleep(2);
	}
	else
	{
		printf("your ans is wrong!!\ncorrect is 3. Write data into the file");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}	
	
//  Question no10
	system("cls");
	printf("Q10. Which among the following period is khown as the era of second generation Computer?");
	printf("\n\n1. 1971 to 1980\n2. 1976 to 1985\n3. 1990 to 2000\n4. 1982 to onwords");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==4)
	{
		printf("Your ans is correct!!");
	    count++;
	    sleep(2);
	}
	else
	{
		printf("your ans is wrong!!\ncorrect is 4. 1982 to onwords");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}
		
//	Question no11
	system("cls");
	printf("Q11. In programming '0' stands for...");
	printf("\n\n1. True\n2. false\n3. Right\n4. Both '1'&'2'");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("Your ans is correct!!");
		count++;
		sleep(2);
	}
	else
	{
		printf("your ans is worng!!\ncorrect is 2. False");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}
	
//	Question no12
	system("cls");
	printf("Q12. Main Circuit board in a computer is?");
	printf("\n\n1. Deocder\n2. Highlight\n3. Select\n4. Mother Board");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==4)
	{
		printf("your ans is correct!!");
		count++;
		sleep(2);
	}
	else
	{
		printf("your ans is worng!!\ncorrect is 4. Mother Board");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}
	
//	Question no13
	system("cls");
	printf("Q13. The 'http' you type at the beginning of any site's address stands for...");
	printf("\n\n1. HTML Transfer Technology Process\n2. Hyper Text Transfer Protocoll\n3. Hyperspeace Terms and Tech Protocoll\n4. Hyperspace Techniques & Teach Process");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("your ans is correct!!");
		count++;
		sleep(1);
	}
	else
	{
		printf("Your ans is worng!!\ncorrect is 2. Hyper Text Transfer Protocoll");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}	
	
//	Question no14
	system("cls");
	printf("Q14. 'OS' computer abbreviation usually means?");
	printf("\n\n1. Order of Significance\n2. Open Softoware\n3. Operating System\n4. Optical Sensor");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==3)
	{
		printf("your ans is correct!!");
		count++;
		sleep(1);
	}
	else
	{
		printf("Your ans is worng!!\ncorrect is 3. Operating System");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}	
	
//	Question no15
	system("cls");
	printf("Q15. '.INI' extension refers usually to what kind of file?");
	printf("\n\n1. Image file\n2. System file\n3. Hypertext releted file\n4. Image color Matching Profile file");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("your ans is correct!!");
		count++;
		sleep(1);
	}
	else
	{
		printf("Your ans is worng!!\ncorrect is 2. System file");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}	
	
//	Question no16
	system("cls");
	printf("Q16. What is 'SSL' stand for?");
	printf("\n\n1. Secure Socket Layer\n2. System Socket Layer\n3. Superuser System Login\n4. Secure System Login");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==1)
	{
		printf("your ans is correct!!");
		count++;
		sleep(1);
	}
	else
	{
		printf("Your ans is worng!!\ncorrect is 1. Secure Socket Layer");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}	
	
//	Question no17
 	system("cls");
 	printf("Q17. What is 'URL' ?");
 	printf("\n\n1. A compuer Softoware program\n2. A type of UFO\n3. The address of a document or 'page' on the World Wide Web\n4. An acronym for Uniform Resorces Learning");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==3)
	{
		printf("your ans is correct!!");
		count++;
		sleep(1);
	}
	else
	{
		printf("Your ans is worng!!\ncorrect is 3. The address of a document er 'page' on the World Wide Web");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}	 	

//	Question no18
	system("cls");
	printf("Q18. Which of these is a documented hoax virus ?");
	printf("\n\n1. McDonalds screensaver\n2. Alien.worm\n3. Merry Xmas\n4. Adolph");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==1)
	{
		printf("your ans is correct!!");
		count++;
		sleep(1);
	}
	else
	{
		printf("Your ans is worng!!\ncorrect is 1. McDonalds screensaver");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}
	
//	Question no19
	system("cls");
	printf("Q19. 'CD' computer abbreviation usually means ?");
	printf("\n\n1. Command Description\n2. Change Data\n3. Copy Density\n4. Commpact Disc");
	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==4)
	{
		printf("your ans is correct!!");
		count++;
		sleep(1);
	}
	else
	{
		printf("Your ans is worng!!\ncorrect is 4. Commpact Disc");
		sleep(2);
		printf("\nPress Enter for next Question");
		getchar();
		getchar();
	}		
	
//	Question no20
 	system("cls");
 	printf("Q20. In what year was the '@' chosen for its use in e-mail addresses ?");
 	printf("\n\n1. 1976\n2. 1972\n3. 1980\n4. 1984");
 	printf("\n\nEnter your ans\t:");
	scanf("%d",&ans);
	
	if(ans==2)
	{
		printf("your ans is correct!!");
		count++;
		sleep(1);
	}
	else
	{
		printf("Your ans is worng!!\ncorrect is 2. 1972");
		sleep(2);
		printf("\nPress Enter for Result");
		getchar();
		getchar();
	}
	
	system("cls");
	printf("Thank you for playing...");
	sleep(2);
	printf("\n\nWait a bit while calculating your Score");
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	
	if (count>=20)
	{
		system("cls");
		printf("!!!!HIGH SCORE!!!!");
		printf("\n\ncongratulation!! %s you have score %d out of 20",name,count);
	}
	else
	{
		system("cls");
		printf("You just missed the highest score!!!");
		printf("\n\ncongratulation!!%s your have score is %d out of 20",name,count);	
	}
	
	fprintf(fp,"%s  %d",name,count);
	fclose(fp);
	printf("\n\nWait a moment while saving your records");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
    printf("\n\n\nfor main menu press '1' | for exit press '0'");
	scanf("%d",&opt);
	
	if(opt==1)
	{
		menu();
	}
	else
	{
		exit(0);	
	}
	/*
		printf("\n\n\nWanted to play again?(1/0)\t:\n(0 = menu)");
	scanf("%d",&opt);
	
	if(opt==1)
	{
		game();
	}
	else
	{
		menu();
		
	}
	*/
}

void allscores(){
	int ch,opt;
	char name[30];
	int count;
	
	system("cls");
	FILE *fp;
	fp=fopen("gamescores.txt","r");
	if(fp==NULL)
	{
		printf("There is nothing game data exited | or 'gamescores.txt' named file existed\n");
	}
	else
	{
		printf("---------------ALL SCORES---------------");
		printf("\n\n\nNAME\t\t\tSCORE");
		while(!feof(fp))
		{
			fscanf(fp,"%s %d",name,&count);
			printf("\n\n%s\t\t\t%d",name,count);
		}
	}
	printf("\n\n\n wanted to play the game, Press '1' | for main menu press '0'");
	scanf("%d",&opt);
	if(opt==1)
	{
		game();
	}	
	else
	{
		menu();
	}
	fclose(fp);
	
}

void highscore(){
	/*int ch,opt;
	char name[30];
	int count=0;
	
	system("cls");
	FILE *fp;
	fp=fopen("gamescores.txt","r");
	if(fp==NULL)
	{
		printf("There is nothing game data exited\n");
	}
	else
	{
		printf("---------------HIGH SCORES---------------");
		printf("\n\n\nNAME\t\t\tSCORE");
		while(!feof(fp))
		{
			fscanf(fp,"%s %d",name,&count);
			if(count<=18)
			{
				printf("\n\n%s\t\t\t%d",name,(count<=18));
			}	
		}
	}
	printf("\n\n\nwanted to create your own highest score press '1' | for main menu press '0'");
	scanf("%d",&opt);
	if(opt==1)
	{
		game();
	}	
	else
	{
		menu();
	}
	fclose(fp);*/
	
	system("cls");
	printf("\n\n\n under devlopment (: ");
	printf("\n\nPress enter for Main Manu");
	getchar();
	menu();
}

void howtoplay(){
	char htp[30];
	
	system("cls");
	FILE *fp;
	fp=fopen("howtoplay.txt","r");
	
	if(fp==NULL)
	{
		printf("\n\t\terror\n\nthere is no file exited like 'howtoplay.txt'...");
		printf("\n\nPress enter for main menu");
		getchar();
		menu();
	}
	else
	{
		while(!feof(fp))
		{
			fscanf(fp,"%s",htp);
			printf("%c",htp);
		}
	}
	fclose(fp);
}

void aboutus(){
	system("cls");
	printf("Creating (aboutus.txt) soon by Mr.Paresh(Devloper of this Game)");
	sleep(2);
	printf("\n\nPress Enter for Main Menu");
	getchar();
	menu();
}

int menu(){
	int opt;
	system("cls");
	printf("------------QUIZ GAME------------");
	printf("\n\n1. Start the Game");
	printf("\n2. High Scores");
	printf("\n3. ALL Scores");
	printf("\n4. How to play");
	printf("\n5. About us");
	printf("\n0. Exit");
	printf("\n\nEnter your prefered option\t:");
	scanf("%d",&opt);
	getchar();
	switch (opt)
    {
    	case 1:
    		game();
    	break;
    	
    	case 2:
    		highscore();
        break;
        
        case 3:
        	allscores();
        break;
        
        case 4:
        	howtoplay();
        break;
        
        case 5:
        	aboutus();
        break;	
        
        case 0:
    		return 0;
        break;
    }
	
}

int main()
{
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t LOADING");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	
	menu();
	
	return 0;
}
