//GAME FLAMES
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
	int color()
	{
	unsigned t=time(NULL);
	srand(t);
	int i=rand()/100%15+1;
	textcolor(i);
	return i;
	}

	void reet()
	{
	textcolor(7);
	clrscr();
	textcolor(7);
	gotoxy(1,25);
	_setcursortype(_NOCURSOR);
	cout<<"\n\n\nThanks for playing the game!!!\t\t\t\t\tCREATED BY ";
	int o=color();
	textcolor(o);
	cprintf("Reet Awwsum");
	getch();
	exit(0);
	}


	void flamesresult(int size)
	{
		switch (size)
		{
		case 3:
		case 5:
		case 14:
		case 16:
		case 18:
		case 21: int g=color();
			 textcolor(g);
			 cprintf("FRIENDS");
			 break;
		case 19:
		case 10: int h=color();
			 textcolor(h);
			 cprintf("LOVER");
			 break;
		case 8:
		case 12:
		case 13:
		case 17: int f=color();
			 textcolor(f);
			 cprintf("AFFECTION");
			 break;
		case 15:
		case 11:
		case 6: int d=color();
			textcolor(d);
			cprintf("MARRIAGE");
			break;
		case 2:
		case 4:
		case 7:
		case 9:
		case 20:
		case 22:int l=color();
			textcolor(l);
			cprintf("ENEMY");
			break;
		case 1: int k=color();
			textcolor(k);
			cprintf("SWEETHEARTS");
			break;
		default: int u=color();
			textcolor(u);
			cprintf("MADE FOR EACH OTHER");
		}
	}

	void flamesalgo(char a[25],char b[25])
	{
	int size=0;
	int l=strlen(a);
	int m=strlen(b);
	for (int i=0; i<l; i++)
	{
		for (int j=0; j<m; j++)
		{
			if (a[i]==b[j])
			{
			a[i]='\0';
			b[j]='\0';
			}
		}
	}

	for (i=0; i<l; i++)
	{
		if (a[i]!='\0'&&a[i]!=' ')
		size++;
	}

	for (int j=0; j<m; j++)
	{
		if (b[j]!='\0'&&b[j]!=' ')
		size++;
	}

	cout<<endl;
	_setcursortype(_NOCURSOR);
	cout<<"Wait for the processing";
	delay(920);
	cprintf(".");
	delay(920);
	cprintf(".");
	delay(920);
	cprintf(".");
	delay(920);
	cprintf(".");
	delay(920);
	_setcursortype(_NORMALCURSOR);
	cout<<"\nThe relationship between you and your crush is ";
	flamesresult(size);

	}

void main()
{
clrscr();
color();
gotoxy(35,12);
cprintf("FLAMES");
cout<<endl;
cout<<"\t\t\t--*--*--*--*--*--*--*--*--";
_setcursortype(_NOCURSOR);
int g=getch();

	if (g==27)
	reet();

textcolor(7);
loop:
clrscr();
_setcursortype(_NOCURSOR);
for (int r=1; r<4; r++)
	{
	textcolor(7);
	clrscr();
	textcolor(12);
	gotoxy(35,12);
	cprintf("LOADING");
	delay(520);
	cprintf(".");
	delay(520);
	cprintf(".");
	delay(520);
	cprintf(".");
	delay(520);
	}
textcolor(7);
clrscr();
_setcursortype(_NORMALCURSOR);
int c,d,e;
char a[25],b[25];
int p=color();
textcolor(p);
gotoxy(36,2);
cprintf("FLAMES");
cout<<endl;
cout<<"\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
textcolor(10);
cprintf("F");
cout<<"riends       ";
textcolor(4);
cprintf("L");
cout<<"over       ";
textcolor(14);
cprintf("A");
cout<<"ffection       ";
textcolor(12);
cprintf("M");
cout<<"arriage       ";
textcolor(6);
cprintf("E");
cout<<"nemy      ";
textcolor(9);
cprintf("S");
cout<<"weethearts       ";
cout<<endl;
cout<<"Your name = ";
gets(a);
cout<<"Your Crush= ";
gets(b);
flamesalgo(a,b);
cout<<"\nDo you want to test again (Y/N) : ";
char flag=getch();
	if (flag=='y'||flag=='Y')
	{
	textcolor(7);
	goto loop;
	}

	else
	{
	textcolor(7);
	clrscr();
	textcolor(7);
	gotoxy(1,25);
	_setcursortype(_NOCURSOR);
	cout<<"\n\n\nThanks for playing the game!!!\t\t\t\t\tCREATED BY ";
	int o=color();
	textcolor(o);
	cprintf("REET");
	}

getch();
}