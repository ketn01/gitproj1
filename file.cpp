
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
	//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************

#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>
#include<iomanip.h>

//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************

class student
{
    int rollno;
    char name[50];
    int p_marks,c_marks,m_marks,e_marks,cs_marks;
    float per;
    char grade;
    int std;
    void calculate()
    {
        per=(p_marks+c_marks+m_marks+e_marks+cs_marks)/5.0;
        if(per>=60)
            grade='A';
        else if(per>=50 && per<60)
            grade='B';
        else if(per>=33 && per<50)
            grade='C';
        else
            grade='F';
    }
public:
    void getdata()
    {
        cout<<"\nEnter The roll number of student ";
        cin>>rollno;
        cout<<"\n\nEnter The Name of student ";
        gets(name);
        cout<<"\nEnter The marks in physics out of 100 : ";
        cin>>p_marks;
        cout<<"\nEnter The marks in chemistry out of 100 : ";
        cin>>c_marks;
        cout<<"\nEnter The marks in maths out of 100 : ";
        cin>>m_marks;
        cout<<"\nEnter The marks in english out of 100 : ";
        cin>>e_marks;
        cout<<"\nEnter The marks in computer science out of 100 : ";
        cin>>cs_marks;
        calculate();
    }

    void showdata()
    {
        cout<<"\nRoll number of student : "<<rollno;
        cout<<"\nName of student : "<<name;
        cout<<"\nMarks in Physics : "<<p_marks;
        cout<<"\nMarks in Chemistry : "<<c_marks;
        cout<<"\nMarks in Maths : "<<m_marks;
        cout<<"\nMarks in English : "<<e_marks;
        cout<<"\nMarks in Computer Science :"<<cs_marks;
        cout<<"\nPercentage of student is  :"<<setprecision(2)<<per;
        cout<<"\nGrade of student is :"<<grade;
    }

    void show_tabular()
    {
        cout<<rollno<<setw(12)<<name<<setw(10)<<p_marks<<setw(3)<<c_marks<<setw(3)<<m_marks<<setw(3)<<e_marks<<setw(3)<<cs_marks<<setw(6)<<setprecision(3)<<per<<"   "<<grade<<endl;
    }

    int  retrollno()
    {
        return rollno;
    }

};         //class ends here



//***************************************************************
//      global declaration for stream object, object
//****************************************************************

fstream fp;
student st;

//***************************************************************
//      function to write in file
//****************************************************************

void write_student()
{
    fp.open("student.dat",ios::out|ios::app);
    st.getdata();
    fp.write((char*)&st,sizeof(student));
    fp.close();
    cout<<"\n\nstudent record Has Been Created ";
    getch();
}


//***************************************************************
//      function to read all records from file
//****************************************************************


void display_all()
{
    clrscr();
    cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
    fp.open("student.dat",ios::in);
    while(fp.read((char*)&st,sizeof(student)))
    {
        st.showdata();
        cout<<"\n\n====================================\n";
        getch();
    }
    fp.close();
    getch();
}


//***************************************************************
//      function to read specific record from file
//****************************************************************


void display_sp(int n)
{
    int flag=0;
    fp.open("student.dat",ios::in);
    while(fp.read((char*)&st,sizeof(student)))
    {
        if(st.retrollno()==n)
        {
            clrscr();
            st.showdata();
            flag=1;
        }
    }
    fp.close();
    if(flag==0)
        cout<<"\n\nrecord not exist";
    getch();
}


//***************************************************************
//      function to modify record of file
//****************************************************************


void modify_student()
{
    int no,found=0;
    clrscr();
    cout<<"\n\n\tTo Modify ";
    cout<<"\n\n\tPlease Enter The roll number of student";
    cin>>no;
    fp.open("student.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
    {
        if(st.retrollno()==no)
        {
            st.showdata();
            cout<<"\nPlease Enter The New Details of student"<<endl;
            st.getdata();
            int pos=-1*sizeof(st);
            fp.seekp(pos,ios::cur);
            fp.write((char*)&st,sizeof(student));
            cout<<"\n\n\t Record Updated";
            found=1;
        }
    }
    fp.close();
    if(found==0)
        cout<<"\n\n Record Not Found ";
    getch();
}


//***************************************************************
//      function to delete record of file
//****************************************************************


void delete_student()
{
    int no;
    clrscr();
    cout<<"\n\n\n\tDelete Record";
    cout<<"\n\nPlease Enter The roll number of student You Want To Delete";
    cin>>no;
    fp.open("student.dat",ios::in|ios::out);
    fstream fp2;
    fp2.open("Temp.dat",ios::out);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&st,sizeof(student)))
    {
        if(st.retrollno()!=no)
        {
            fp2.write((char*)&st,sizeof(student));
        }
    }
    fp2.close();
    fp.close();
    remove("student.dat");
    rename("Temp.dat","student.dat");
    cout<<"\n\n\tRecord Deleted ..";
    getch();
}


//***************************************************************
//      function to display all students grade report
//****************************************************************

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




//***************************************************************
//      ENTRY / EDIT MENU FUNCTION
//****************************************************************
void entry_menu()
{
    clrscr();
    char ch2;
    cout<<"\n\n\n\tENTRY MENU";
    cout<<"\n\n\t1.CREATE STUDENT RECORD";
    cout<<"\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
    cout<<"\n\n\t3.SEARCH STUDENT RECORD ";
    cout<<"\n\n\t4.MODIFY STUDENT RECORD";
    cout<<"\n\n\t5.DELETE STUDENT RECORD";
    cout<<"\n\n\t6.BACK TO MAIN MENU";
    cout<<"\n\n\tPlease Enter Your Choice (1-6) ";
    ch2=getche();
    switch(ch2)
    {
    case '1':
        clrscr();
        write_student();
        break;
    case '2':
        display_all();
        break;
    case '3':
        int num;
        clrscr();
        cout<<"\n\n\tPlease Enter The roll number ";
        cin>>num;
        display_sp(num);
        break;
    case '4':
        modify_student();
        break;
    case '5':
        delete_student();
        break;
    case '6':
        break;
    default:
        cout<<"\a";
        entry_menu();
    }
}


//***************************************************************
//      THE MAIN FUNCTION OF PROGRAM
//****************************************************************


void main()
{
    char ch;
    intro();
    do
    {
        clrscr();
        cout<<"\n\n\n\tMAIN MENU";
        cout<<"\n\n\t01. RESULT MENU";
        cout<<"\n\n\t02. ENTRY/EDIT MENU";
        cout<<"\n\n\t03. EXIT";
        cout<<"\n\n\tPlease Select Your Option (1-3) ";
        ch=getche();
        switch(ch)
        {
        case '1':
            clrscr();
            result();
            break;
        case '2':
            entry_menu();
            break;
        case '3':
            exit(0);
        default :
            cout<<"\a";
        }
    }
    while(ch!='3');
}

//*******************************************************
//      INCLUDED HEADER FILES
//*******************************************************

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
//      DETAILS    : TO ADD A BOOK?S RECORD
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

//*******************************************************
//      CASE       : 2
//      DETAILS    : TO SHOW ALL BOOKS? RECORDS
//*******************************************************

    case 2:
    {
        clearviewport();
        rectangle(10,10,630,470);
        setbkcolor(LIGHTBLUE);
        textbackground(3);
        textcolor(6);
        cout< <"\n\n";
        fstream f;
        f.open("book",ios::in|ios::out|ios::ate|ios::app|ios::binary);
        char ans;
        f.seekg(0);
        int ctr=0;
        while(f.read((char *)&b1,sizeof(b1)) )
        {
            ctr=ctr+1;
            if(ctr==8)
            {
                getchar();
                clrscr();
                ctr=0;
            }
            b1.show();
            if(f.eof()==1)
            {
                break;
            }
        }
        f.close();
        settextstyle(7,0,1);
        outtextxy(250,410,"Do You Want To Continue:");
        cin>>ans;
        if(ans=='y'|| ans=='Y')
            goto z;
        else
        {
            closegraph();
            exit(1);
        }
    }

//*******************************************************
//      CASE       : 3
//      DETAILS    : TO CHECK AVAILABILITY
//*******************************************************

    case 3:
    {
        gotoxy(60,25);
        clearviewport();
        rectangle(10,10,630,470);
        setbkcolor(DARKGRAY);
        textbackground(3);
        textcolor(5);
        clrscr();
        char ans;
        ifstream f;
        book b1;
        char name[20];
        char author[20];
        int a;
        f.open("book",ios::in|ios::binary);
        cout< <"\n\n\n          Enter book name whose record to be seen  :";
        cin>>name;
        do
        {
            f.read((char *)&b1,sizeof(b1));
            if(f.eof()==1)
            {
                break;
            }
            if(strcmp(b1.name,name)==0)
            {
                cout< <"\n                  Name     :"<<b1.name;
                cout<<"\n                 author   :"<<b1.author;
                cout<<"\n                 copies   :"<<b1.a;
                getchar();
            }
        }
        while(f);
        f.close();
//  a:
        settextstyle(7,0,1);
        outtextxy(250,410,"Do You Want To Continue:");
        ans=getchar();
        if(ans=='Y'||ans=='y')
            goto z;
        else
            break;
    }

//*******************************************************
//      CASE       : 4
//      DETAILS    : TO MODIFY A RECORD
//*******************************************************

    case 4:
    {
        clearviewport();
        rectangle(10,10,630,470);
        setbkcolor(BROWN);
        setcolor(WHITE);
        clrscr();
        char ans;
        fstream f;
        book b1;
        char name[20];
        char author[20];
        int a;
        f.open("book",ios::in|ios::binary);
        cout<<"\n";
        cout<<" Enter book name whose record to be changed  :";
        cin>>name;
        do
        {
            f.read((char *)&b1,sizeof(b1));
            if(f.eof()==1)
            {
                break;
            }
            if(strcmp(b1.name,name)==0)
            {
                cout< <"\n        Name     :"<<b1.name;
                cout<<"\n        Author   :"<<b1.author;
                cout<<"\n        Copies   :" <<b1.a;
                getchar();
                cout<<"\n                 Enter New Values" ;
                cout<<"\n\n      Enter the book name  :";
                cin>>name;
                cout< <"\n        Enter author name    :";
                cin>>author;
                cout< <"\n        Enter no. of copies  :";
                cin>>a;
                strcpy(b1.name,name);
                strcpy(b1.author,author);
                b1.a=a;
                int l=f.tellg();
                f.close();
                f.open("book",ios::out|ios::binary|ios::ate);
                f.seekg(l-sizeof(b1));
                f.write((char *)&b1,sizeof(b1));
            }
        }
        while(f);

        f.close();
        settextstyle(7,0,1);
        outtextxy(250,410,"Do You Want To Continue:");
        ans=getchar();
        if(ans=='Y'||ans=='y')
        {
            goto z;
        }
        else
            break;
    }

//*******************************************************
//      CASE       : 5
//      DETAILS    : TO DELETE A BOOK?S RECORD
//*******************************************************

    case 5:
    {
        clearviewport();
        rectangle(10,10,630,470);
        setbkcolor(BROWN);
        setcolor(WHITE);
        char name[20];
        f.close();
        f.open("video",ios::in|ios::ate|ios::binary);
        settextstyle(7,0,3);
        outtextxy(200,30,"DELETING:-");
        cout< <"\n\n\n\n\n\n     Enter The  Name U Want To delete:\t";
        fflush(stdin);
        cin>>name;
        f.seekg(0);
        int k=0;
        do
        {
            f.close();
            f.open("book",ios::in|ios::ate|ios::binary);
            f.seekg(k);
            fflush(stdin);
            f.read((char *)&b1,sizeof(b1));
            if(f.eof())
                break;
            if(strcmp(b1.name,name)==0)
            {
                k+=46;
                continue;
            }
            else
            {
                f.close();
                f.open("book2",ios::out|ios::ate|ios::binary);
                f.write((char*)&b1, sizeof b1);
                k+=46;
            }
        }
        while(f);
        f.close();
        remove ("book");
        rename ("book2","book");
        cout< <"\n\n\n\n\n\tPress Any Key...";
        getch();
        goto z;
    }

//*******************************************************
//      CASE       : 6
//      DETAILS    : TO EXIT
//*******************************************************

    case 6:
    {
        clearviewport();
        rectangle(10,10,630,470);
        setbkcolor(BROWN);
        setcolor(BLUE);
        settextstyle(8,0,4);
        outtextxy(150,200,"NOW YOU WANT TO GO");
        if(getch())
        {
            fflush(stdin);
            clearviewport();
            rectangle(10,10,630,470);
            setbkcolor(LIGHTBLUE);
            setcolor(RED);
            window(10,10,40,11);
            settextstyle(8,0,4);
            outtextxy(150,200,"\"THANKS FOR VISITING\"");
            getch();
            closegraph();
            exit(1);
        }
        else
        {
            goto z;
        }
    }
    default:
        goto z;
    }
}
