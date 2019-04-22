
#include"stdio.h"
#include"conio.h"
#include"fstream.h"
#include"stdlib.h"
#include"dos.h"
#include"string.h"
#include"graphics.h"
#include"iomanip.h"

//*******************************************************
//      CLASS NAME : BOOK
//*******************************************************

class book
{
public:
    char name[20];
    char author[20];
    int a;
    void getdata();
    void show();
};

//*******************************************************
//      FUNCTIONS TO GET AND SHOW DATA
//*******************************************************

void book::getdata()
{
    cout< <"\n\"        \"ENTER DETAILS ABOUT BOOK U WANT TO PURCHASE\" :\"";
    cout<<"\n\n\n\t\tEnter Name Of Book  :\t";
    cin>>name;
    cout< <"\n\t\tEnter Name Of Author    :\t";
    cin>>author;
    fflush(stdin);
    cout< <"\n\t\tEnter No. Of Copies  :\t";
    cin>>a;
}
void book::show()
{

    cout< <"BOOK      :"<<name;
    cout<<"\nAUTHOR  :"<<author;
    cout<<"\nCOPIES  :"<<a;
}

//*******************************************************
//      TO INVOKE WELCOME SCREEN, CREDIT SCREEN
//                   & ENDING SCREEN
//*******************************************************

void graph()
{
    for(int y=0; y&lt; 440; y=y+10)
    {
        fillellipse(50,y,50,50);
        setfillstyle(2,GREEN);
        fillellipse(100,y,50,50);
        setfillstyle(3,YELLOW);
        fillellipse(200,y+10,50,50);
        setfillstyle(2,WHITE);
        fillellipse(300,y-15,50,50);
        setfillstyle(3,6);
        fillellipse(400,y-5,50,50);
        setfillstyle(2,BLUE);
        fillellipse(500,y+20,50,50);
        setfillstyle(3,CYAN);
        clearviewport();

        for(int c=440; c&lt; 480; ++c)
        {
            setlinestyle(0,1,3);
            setcolor(WHITE);

            line(0,c,325,480);
            line(680,c,325,480);
        }
        delay(20);
    }

    int x[5];
    for(x[0]=50,x[1]=100,x[2]=200,x[3]=400,x[4]=500,y=450; y>=240; y=y-10,x[0]=x[0]+13,x[2]=x[2]+6,x[1]+=11,x[3]-=4,x[4]-=9)
    {
        fillellipse(x[0],y,20,20);
        setfillstyle(1,GREEN);
        fillellipse(x[1],y,20,20);
        setfillstyle(1,YELLOW);
        fillellipse(x[2],y+10,20,20);
        setfillstyle(1,WHITE);
        fillellipse(300,y-15,20,20);
        setfillstyle(1,6);
        fillellipse(x[3],y-5,20,20);
        setfillstyle(1,BLUE);
        fillellipse(x[4],y+20,20,20);
        setfillstyle(1,CYAN);

        clearviewport();
        for(int c=440; c&lt; 480; ++c)
        {
            setlinestyle(0,1,3);
            setcolor(BLACK);
            line(0,c,325,480);
            line(680,c,325,480);
        }
        delay(20);
    }

    for (int c=0; c&lt; 150; ++c)
    {
        setcolor(BLACK);
        fillellipse(325,240,c*1.5,c);
        delay(10);
    }
    setcolor(BLACK);
    settextstyle(7,0,5);
    outtextxy(115,200,"B O O K - S H O P");
    getch();
    clearviewport();
}

void main()
{
    clrscr();
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"\\tc\\bgi");
    graph();
    rectangle(10,10,630,470);
    setbkcolor(RED);
    rectangle(10,10,630,470);
    settextstyle(GOTHIC_FONT,0,4);
    setcolor(WHITE);
    outtextxy(30,35,"Developed By:-");
    settextstyle(10,0,3);
    outtextxy(150,100,"*iCBSE.com");
    getch();
    char s;
    book b1;
z:

    fstream f;
    f.open("book",ios::in|ios::out|ios::app|ios::ate|ios::binary);
    clearviewport();
    settextstyle(10,HORIZ_DIR,3);
    setbkcolor(GREEN);
    rectangle(10,10,630,470);
    outtextxy(100,15,"WHAT DO U WANT TO DO:");
    settextstyle(SANS_SERIF_FONT,0,3);
    outtextxy(250,100,"1 . TO BUY");
    outtextxy(250,150,"2 . TO SHOW ALL BOOKS");
    outtextxy(250,200,"3 . TO CHECK AVAILABILITY");
    outtextxy(250,250,"4 . TO MODIFY");
    outtextxy(250,300,"5 . TO DELETE");
    outtextxy(250,350,"6 . TO EXIT");
    int a;
    settextstyle(7,0,5);
    outtextxy(20,400, "ENTER UR CHOICE:");
    f.seekg(0);
    gotoxy(55,25);
    cin>>a;
    char x;
    gotoxy(1,1);

    switch (a)
    {

//*******************************************************
//      CASE       : 1
//      DETAILS    : TO ADD A BOOK�S RECORD
//*******************************************************

    case 1:
        gotoxy(1,1);
        clearviewport();
        rectangle(10,10,630,470);
        setbkcolor(RED);
        textbackground(13);
        textcolor(6);
        clrscr();
        fstream f;
        f.open("book",ios::in|ios::out|ios::ate|ios::app|ios::binary);
        char ans;
        b1.getdata();
        f.write((char *)&b1,sizeof(b1));
        getch();
        settextstyle(7,0,1);
        outtextxy(250,410,"Do You Want To Continue:");

        ans=getchar();
        if(ans=='Y' || ans=='y')
            goto z;
        else
            break;
	void class_result()
{
    clrscr();
    fp.open("student.dat",ios::in);
    if(!fp)
    {
        cout<<"ERROR!!! FILE COULD NOT BE OPEN\n\n\n Go To Entry Menu to create File";
        cout<<"\n\n\n Program is closing ....";
        getch();
        exit(0);
    }

    cout<<"\n\n\t\tALL STUDENTS RESULT \n\n";
    cout<<"====================================================\n";
    cout<<"Roll No. Name          P  C  M  E  CS  %age Grade\n";
    cout<<"====================================================\n";

    while(fp.read((char*)&st,sizeof(student)))
    {
        st.show_tabular();
    }
    fp.close();
    getch();
}




//***************************************************************
//      function to display result menu
//****************************************************************

void result()
{
    int ans,rno;
    char ch;
    clrscr();
    cout<<"\n\n\nRESULT MENU";
    cout<<"\n\n\n1. Class Result\n\n2. Student Report Card\n\n3.Back to Main Menu";
    cout<<"\n\n\nEnter Choice (1/2)? ";
    cin>>ans;
    switch(ans)
    {
    case 1 :
        class_result();
        break;
    case 2 :
    {
        do
        {
            clrscr();
            char ans;
            cout<<"\n\nEnter Roll Number Of Student : ";
            cin>>rno;
            display_sp(rno);
            cout<<"\n\nDo you want to See More Result (y/n)?";
            cin>>ans;
        }
        while(ans=='y'||ans=='Y');

        break;
    }
    case 3:
        break;
    default:
        cout<<"\a";
    }
}

//***************************************************************
//      INTRODUCTION FUNCTION
//****************************************************************

void intro()
{
    clrscr();
    gotoxy(35,11);
    cout<<"STUDENT";
    gotoxy(33,14);
    cout<<"REPORT CARD";
    gotoxy(35,17);
    cout<<"PROJECT";
    cout<<"\n\nMADE BY : Code With C";
    cout<<"\n\nCONTACT : codewithc.com";
    getch();

}


