
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


