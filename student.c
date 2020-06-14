#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
union REGS i,o;
void login_window();
void password_input();
void secpage();
void initialize_mouse();
void show_mouse();
void get_mouse();
void add_window();
void add_student_record();
int search();
void search_student_record();
void display_data();
struct ADDRESS#
   {
    char STREET[25];
    char IM[25];
    char CITY[15];
    char COUNTRY[15];
    char  PIN[10];
    };

   struct STUDENT
   {
    int ROLL_NO;
    float MARKS;
    char MOBILE_NO[12];
    char F_NAME[20];
    char L_NAME[20];
    char COURSE_NAME[10];
    char SEX[7];
    char FEES[5];
    int DAY;
    int MONTH;
    int YEAR;

    struct ADDRESS A;

    };

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");

      // 	login_window();
       //	password_input();

	initialize_mouse();
	secpage();

	getch();

	closegraph();

}
void login_window()
{
	//password input box

	setcolor(3);
	setfillstyle(1,WHITE);
	rectangle(426,288,201,259);
	rectangle(425,287,202,260);
	floodfill(419,262,3);

	//logo box
	setcolor(WHITE);
	setfillstyle(10,4);
	rectangle(402,142,224,222);
	rectangle(403,141,223,223);
	rectangle(404,140,222,224);

    //first body
    setcolor(WHITE);
    setfillstyle(1,8);
    ellipse(273, 195, 0, 360,10, 18);
    ellipse(273, 195, 0, 360,11, 19);
    floodfill(273,196,WHITE);

    /* draws and fills 2nd body  */

    setfillstyle(1,8);
    ellipse(300, 195, 0, 360,10, 18);
    ellipse(300, 195, 0, 360,9, 17);
    floodfill(301,196,WHITE);

    /* draws 3rd body */

      setfillstyle(1,8);
      ellipse(320, 200, 0, 360,8, 12);
      ellipse(320, 200, 0, 360,7, 11);
      floodfill(321,201,WHITE);

    /* draw 4th body */

    setfillstyle(1,8);
    ellipse(342, 190, 0, 360,11, 23);
    ellipse(342, 190, 0, 360,10, 22);
    floodfill(343,191,WHITE);

    /* draws head for 1st body */

    setcolor(WHITE);
    setfillstyle(1,8);
    circle(273,160,9);
    circle(273,160,8);
    floodfill(271,153,WHITE);

   /* draws head for 2nd body */

    setcolor(WHITE);
    setfillstyle(1,8);
    circle(300,160,9);
    circle(300,160,8);
    floodfill(301,161,WHITE);

   /* draws a head for 3rd body */

     setcolor(WHITE);
     setfillstyle(1,8);
     circle(320,180,5);
     circle(320,180,4);
     floodfill(321,181,WHITE);

   /* draws head for 4th body */

    setcolor(WHITE);
    setfillstyle(1,8);
    circle(342,154,9);
    circle(342,154,8);
    floodfill(343,153,WHITE);

    gotoxy(23,16);
    printf("STUDENT DATABASE MANAGEMENT SYSTEM !");

    /* following coad is to draw the circle Enter Button */

    setcolor(WHITE);
    setfillstyle(1,4);
    circle(444,272,13);
    circle(444,272,12);
    circle(444,272,11);
    floodfill(438,272,WHITE);
    outtextxy(438,269,"-");
    setcolor(WHITE);
    circle(444,272,10);

    //x section
    setbkcolor(0);
    gotoxy(15,15);
    setcolor(WHITE);
    settextstyle(1,0,1);
    outtextxy(512,98,"x");

    //outer box
     setcolor(WHITE);
     rectangle(500,120,130,300);
     rectangle(502,118,132,298);

     //outer box styling
     setcolor(WHITE);
     setfillstyle(1,3);
     rectangle(534,90,100,326);
     floodfill(533,91,WHITE);

     //window box

     setcolor(8);
     setfillstyle(7,8);
    rectangle(535,89,99,327);
    rectangle(536,88,98,328);
    rectangle(537,87,97,329);
    rectangle(538,86,96,330);
    rectangle(539,85,95,331);
    rectangle(540,84,94,332);
    rectangle(541,83,93,333);
    rectangle(542,82,92,334);
    rectangle(542,81,91,335);
    floodfill(0,0,8);
}
  void password_input()
  {
  int X=206,Y=262;
  char password[10];
  char pass[12]="minions";
  int i;
  char ch;
  for(i=0;i<12;i++)
  {
  ch=getch();
  password[i]=ch;
  if(ch==13)
  {
    password[i]='\0';

	for(i=0;i<10;i++)
    {
    sound(99*i);
    //button pressing
    setcolor(WHITE);
    setfillstyle(1,12);
    circle(444,272,12);
    circle(444,272,11);
    circle(444,272,13);
    floodfill(444,272,WHITE);
delay(19);
    setcolor(WHITE);
    setfillstyle(1,4);
    circle(444,272,12);
    circle(444,272,11);
    circle(444,272,13);
    floodfill(444,272,WHITE);
    nosound();

     }
     sleep(1);

  if(strcmp(pass,password)==0)
  {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\turboc3\\bgi");
    cleardevice();

    sleep(1);
    setcolor(15);
    setfillstyle(1,3);
    rectangle(460,249,140,180);
    rectangle(450,240,148,189);
    floodfill(451,241,15);

      for( i=0;i<10;i++)
    {
    sound(999);
    setcolor(0);
    outtextxy(230,210," ACEESS GRANTED ");
    delay(50);
    setcolor(15);
    outtextxy(230,210," ACEESS GRANTED ");
    nosound();

    }

     delay(1500);
     break;

  }
  else
  {
   int gd=DETECT,gm, i;
    initgraph(&gd,&gm,"C:\\turboc3\\bgi");

    sleep(1);
    setcolor(15);
    setfillstyle(1,3);
    rectangle(460,249,140,180);
    rectangle(450,240,148,189);
    floodfill(451,241,15);



    for( i=0;i<10;i++)
    {

    sound(999);
    setcolor(0);
    outtextxy(230,210," ACEESS DENIED ");
    delay(99);
    setcolor(15);
    outtextxy(230,210," ACEESS DENIED ");
    nosound();

     }

    delay(2000);
    exit(1);

  }

  }

   //BACKSPACE LOOP

    if(ch==8)
    {
    i--;
    i--;
    X=X-15;
    fflush(stdin);

    if(X<206)
   {
    X=206;
    }

    setcolor(15);
    settextstyle(2,0,7);
    outtextxy(X,Y,"*");
    X=X-15;
    nosound();

    }

    //ESCAPE LOOP

    if(ch==27)
    exit();

    if(i>10)
    {
     sound(9999);

     }

    sound(800);
    setcolor(0);
    settextstyle(2,0,7);
    outtextxy(X,Y,"*");

    X=X+15;
    delay(100);
    nosound();

  }

  }
  void secpage()
{

	int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	initialize_mouse();
	show_mouse();
	cleardevice();


    //outer grey box
    rectangle(10,10,620,440);
    rectangle(11,11,621,441);
    setfillstyle(1,8);
    floodfill(12,12,WHITE);

    //outer blue box
    rectangle(30,30,600,420);
    rectangle(31,31,601,421);
    setfillstyle(1,3);
    floodfill(32,32,WHITE);

    //FIRST BOX
    rectangle(50,50,200,100);
    rectangle(51,51,201,101);
    setfillstyle(1,BLACK);
    floodfill(53,53,WHITE);
    gotoxy(9,5);
    printf("1.ADD RECORD");

    //SECOND BOX
    rectangle(426,50,576,100);
    rectangle(427,51,577,101);
    setfillstyle(1,BLACK);
    floodfill(428,52,WHITE);
    gotoxy(56,5);
    printf("2.SEARCH RECORD");

    //THIRD BOX
    rectangle(50,150,200,200);
    rectangle(51,151,201,201);
    setfillstyle(1,BLACK);
    floodfill(52,152,WHITE);
    gotoxy(9,12);
    printf("3.DELETE RECORD");

    //FORTH BOX
    rectangle(426,150,576,200);
    rectangle(427,151,577,201);
    setfillstyle(1,BLACK);
    floodfill(428,152,WHITE);
    gotoxy(56,12);
    printf("4.MODIFY RECORD");

    //FIFTH BOX
    rectangle(50,250,200,300);
    rectangle(51,251,201,301);
    setfillstyle(1,BLACK);
    floodfill(52,252,WHITE);
    gotoxy(10,18);
    printf("5.LIST RECORDS");

    //SIXTH BOX
    rectangle(426,250,576,300);
    rectangle(427,251,577,301);
    setfillstyle(1,BLACK);
    floodfill(428,252,WHITE);
    gotoxy(55,18);
    printf("6.BACKUP DATABASE");

    //EXIT BOX
    rectangle(238,350,388,400);
    rectangle(239,351,389,401);
    setfillstyle(1,BLACK);
    floodfill(240,352,WHITE);
    gotoxy(34,24);
    printf("7.EXIT SYSTEM");

    //first body
    setcolor(WHITE);
    setfillstyle(1,8);
    ellipse(273,195,0,360,10,18);
    ellipse(273,195,0,360,11,19);
    floodfill(273,196,WHITE);

    //second body
    setfillstyle(1,8);
    ellipse(300,195,0,360,10,18);
    ellipse(300,195,0,360,9,17);
    floodfill(301,196,WHITE);

    //third body
    setfillstyle(1,8);
    ellipse(320,200,0,360,8,12);
    ellipse(320,200,0,360,7,11);
    floodfill(321,201,WHITE);

    //forth body
    setfillstyle(1,8);
    ellipse(342,190,0,360,11,23);
    ellipse(342,190,0,360,10,22);
    floodfill(343,191,WHITE);

    //first head
    setcolor(WHITE);
    setfillstyle(1,8);
    circle(273,160,9);
    circle(273,160,8);
    floodfill(271,153,WHITE);

     //second head
     setcolor(WHITE);
     setfillstyle(1,8);
     circle(300,160,8);
     circle(300,160,9);
     floodfill(301,161,WHITE);

      //third head
      setcolor(WHITE);
      setfillstyle(1,8);
      circle(320,180,5);
      circle(320,180,4);
      floodfill(321,181,WHITE);

      //forth head
      setcolor(WHITE);
      setfillstyle(1,8);
      circle(342,154,8);
      circle(342,154,9);
      floodfill(343,153,WHITE);
	 show_mouse();

   while(!kbhit())
  {


  show_mouse();
  get_mouse();
  if(o.x.bx==1&&o.x.cx<200&&o.x.cx>50&&o.x.dx<100&&o.x.dx>50)
    {
      
      add_student_record();
      delay(500);
      secpage();

    }

   if(o.x.bx==1&&o.x.cx<576&&o.x.cx>426&&o.x.dx<100&&o.x.dx>50)
    {
      search_student_record();
      delay(500);
	  secpage();
    }

   if(o.x.bx==1&&o.x.cx<200&&o.x.cx>50&&o.x.dx<200&&o.x.dx>150)
    {
      printf("Hello World i am delete function ");
      delay(500);
	  secpage();
    }

   if(o.x.bx==1&&o.x.cx<576&&o.x.cx>426&&o.x.dx<200&&o.x.dx>150)
    {
      printf("Hello World i am modify function");
      delay(500);
	  secpage();
    }

   if(o.x.bx==1&&o.x.cx<200&&o.x.cx>50&&o.x.dx<300&&o.x.dx>250)
    {
      printf("Hello World i am list function");
      delay(1000);
      secpage();

    }

   if(o.x.bx==1&&o.x.cx<576&&o.x.cx>426&&o.x.dx<300&&o.x.dx>250)
    {
      printf("Hello World i am backup function ");
      delay(500);
	  secpage();
    }

   if(o.x.bx==1&&o.x.cx<388&&o.x.cx>238&&o.x.dx<400&&o.x.dx>350)
    {
	   printf("Hello world I am exit function");
	   delay(500);
	   secpage();

    }
  }

}
void initialize_mouse()
   {

    i.x.ax=0;
    int86(0x33,&i,&o);

   }

   void show_mouse()
   {

    i.x.ax=1;
    int86(0x33,&i,&o);

   }

   void get_mouse()
   {

    i.x.ax=3;
    int86(0x33,&i,&o);

    }
	void add_window()
  {
    setcolor(3);
    settextstyle(12,0,1);
    outtextxy(110,50,"|||** ENTER STUDENT DATABASE MANUALLY **|||");

  

    setcolor(3);  /* INTERNAL WINDOW */
    setfillstyle(1,8);
    rectangle(570,400,60,100);
    rectangle(571,401,59,99);
    setcolor(3);    /* OUTER WINDOW  */
    rectangle(590,420,40,80);
    rectangle(591,421,39,79);
    floodfill(579,418,3);

   }

 void add_student_record()
   {
      char INPUT ;
      struct STUDENT S;
      int gd=DETECT,gm;
      FILE *fp;
      initgraph(&gd,&gm,"C:\\turboc3\\bgi");
      cleardevice();

      add_window();
      fp=fopen("SDATABASE.DAT","a");
      if(fp==NULL)
      {
      clrscr();
      printf("FILE OPENING ERROR ");
      delay(1000);
      exit(1);
      }
      fseek(fp,0,SEEK_END);
      fflush(stdin);
      INPUT='Y';
      while(INPUT=='Y'||INPUT=='y')
      {
      int gd=DETECT,gm;
      initgraph(&gd,&gm,"C:\\turboc3\\bgi");
      cleardevice();

      add_window();
      fflush(stdin);
      gotoxy(10,8);
      printf("ROLL NO OF STUDENT :: ");
      scanf("%d",&S.ROLL_NO);
      gotoxy(10,9);
      printf("ENTER FIRST NAME :: ");
      scanf("%s",S.F_NAME);
      gotoxy(10,10);
      printf("ENTER LAST NAME :: ");
      scanf("%s",S.L_NAME);
      gotoxy(10,11);
      printf(" SEX MALE OR FEMALE :: ");
      scanf("%s",S.SEX);
      gotoxy(10,12);
      printf(" COURSE NAME :: ");
      scanf("%s",S.COURSE_NAME);
      gotoxy(10,13);
      printf(" ADMISSION DATE DD/MM/YY FORMAT :: ");
      gotoxy(49,13);
      scanf("%d",&S.DAY);
      gotoxy(51,13);
      printf("/");
      gotoxy(53,13);
      scanf("%d",&S.MONTH);
      gotoxy(55,13);
      printf("/");
      gotoxy(56,13);
      scanf("%d",&S.YEAR);
      gotoxy(10,14);

      printf(" FEES STATUS [PAID OR DUE] :: ");
      scanf("%s",S.FEES);

      gotoxy(10,15);
      printf(" MARKS OF STUDENT :: ");
      scanf("%f",&S.MARKS);
      gotoxy(10,16);
    printf(" MOBILE NO. :: ");
    scanf("%s",S.MOBILE_NO);
    gotoxy(10,17);
    printf(" ADDRESS[STREET] :: ");
    scanf("%s",S.A.STREET);
    gotoxy(10,18);
    printf(" LAND MARK :: ");
    scanf("%s",S.A.IM);
    gotoxy(10,19);
    printf(" CITY :: ");
    scanf("%s",S.A.CITY);
    gotoxy(10,20);
    printf(" PIN :: ") ;
    scanf("%s",S.A.PIN);
    gotoxy(10,21);
    printf(" COUNTRY :: ");
    scanf("%s",S.A.COUNTRY);

    fwrite(&S,sizeof(S),1,fp);
    initgraph(&gd,&gm,"C:\\turboc3\\bgi");
    cleardevice();
    gotoxy(20,14);
    setcolor(3);
    setfillstyle(1,8);
    rectangle(460,249,140,180);
    rectangle(450,240,148,189);
    floodfill(451,241,3);
    printf("ADD ANOTHER RECORD (YES/NO) ");
    fflush(stdin);
    INPUT=getch();
    }
   fclose(fp);

  }
void search_student_record()
   {

    struct STUDENT S;
    int gd=DETECT,gm,RNO,yn;
    FILE *fp;
    initgraph(&gd,&gm,"C:\\turboc3\\bgi");

    RNO=search();

    fp=fopen("C:\\SDATABASE.DAT","rb+");
    if(fp==NULL)
    {
    cleardevice();
    gotoxy(25,10);
    printf("FILE OPENING ERROR !");
    delay(1500);
    }
    while(fread(&S,sizeof(S),1,fp)==1)
    {
    if(strcmp(&S.ROLL_NO,&RNO)==0)
    {
    cleardevice();
    initgraph(&gd,&gm,"C:\\turboc3\\bgi");

    display_data();

    gotoxy(10,8);
    printf("NAME :: %S ",S.L_NAME);
    gotoxy(28,8);
    printf("%s",S.F_NAME);
    gotoxy(10,10);
    printf("ROLL NO :: %d",S.ROLL_NO);
    gotoxy(35,10);
    printf("SEX :: %s",S.SEX);
    gotoxy(35,12);
    printf("ADMISSION DATE :: ");
    printf("%d/%d/%d",S.DAY,S.MONTH,S.YEAR);
    gotoxy(10,12);
    printf("COURSE_NAME :: %s",S.COURSE_NAME);
    gotoxy(10,14);
    printf("FEES STATUS :: %s",S.FEES);
    gotoxy(35,14);
    printf("MAKRS :: %f",S.MARKS);
    gotoxy(10,16);
    printf("MOBILE NO ::%s",S.MOBILE_NO);

    gotoxy(18,18);
    printf(" ****** ADDRESS ******* ");
    gotoxy(10,20);
    printf("%s",S.A.STREET);
    gotoxy(10,21);
    printf("%s",S.A.IM);
    gotoxy(10,22);
    printf("%s",S.A.CITY);
    gotoxy(10,23);
    printf("%s",S.A.PIN);
    gotoxy(10,24);
    printf("%s",S.A.COUNTRY);
    delay(5000);
    break;
     }
    }
   }
    void display_data()
    {
      setcolor(3);
    settextstyle(12,0,1);
    outtextxy(145,50,"|||** DETAILS OF STUDENT **|||");

  /* FOLLOWING COAD IS TO ADD RECORD/MODIFY */

    setcolor(3);  /* INTERNAL WINDOW  */
    setfillstyle(1,8);
    rectangle(570,400,60,100);
    rectangle(571,401,59,99);
    setcolor(3);    /* OUTER WINDOW */
    rectangle(590,420,40,80);
    rectangle(591,421,39,79);
    floodfill(579,418,3);
    }

int search()
{

  show_mouse();
  get_mouse();

  int rno;

  //HEADING
  settextstyle(1,0,4);
  outtextxy(200,30,"SEARCH RECORD");

  //BLUE BOX
  rectangle(50,70,600,420);
  rectangle(51,71,599,419);
  setfillstyle(1,3);
  floodfill(52,72,WHITE);

   //grey box
  rectangle(80,100,570,390);
  rectangle(81,101,569,389);
  setfillstyle(1,8);
  floodfill(82,102,WHITE);

  //ID TO BE DELETED
  settextstyle(8,0,2);
  outtextxy(155,145,"ENTER THE ID TO BE SEARCHED:");
  rectangle(225,195,425,245);
  rectangle(226,196,424,244);
  setfillstyle(1,BLACK);
  floodfill(227,197,WHITE);

  //DELETE BOX
  rectangle(145,265,245,305);
  rectangle(144,264,246,306);
  setfillstyle(1,RED);
  floodfill(146,266,WHITE);
  outtextxy(153,266,"SEARCH");

  //cancel box
  rectangle(395,265,495,305);
  rectangle(394,264,496,306);
  setfillstyle(1,GREEN);
  floodfill(396,266,WHITE);
  outtextxy(403,266,"CANCEL");

  fflush(stdin);
  gotoxy(20,14);
  scanf("%d",&rno);
  while(!kbhit())
  {

    if(o.x.bx==1&&o.x.cx<245&&o.x.cx>145&&o.x.dx<305&&o.x.dx>265)
    {
      sleep(4);
	  return rno;
    }
	if(o.x.bx==1&&o.x.cx<495&&o.x.cx>395&&o.x.dx<305&&o.x.dx>264)
    {
      sleep(3);
	  return 0;
    }
  }
}