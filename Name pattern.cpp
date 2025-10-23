#include<iostream>
#include<conio.h>
#include<windows.h>
//void gotoxy(int ,int);
using namespace std;
void gotoxy(int x, int y) 
{ 
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
int main()
{
	//R
	   for(int i=20,j=2;j<=12;j++)
    {
    	gotoxy(i,j);
       Sleep(100);
    	cout<<"*";
    
	}
	for(int i=20,j=2;i<=32;i++)
	{
			gotoxy(i,j);
    	 Sleep(100);
    	cout<<"*";
    
	}
	for(int i=32,j=2;j<=6;j++){
		
			gotoxy(i,j);
     Sleep(100);
    	cout<<"*";
	}
		for(int i=20,j=6;i<=32;i++){
		
			gotoxy(i,j);
 Sleep(100);
    	cout<<"*";
	}
		for(int i=20,j=6;i<=32;i++){
		
			gotoxy(i,j);
   Sleep(100);
    	cout<<"*";
	}
 // diagonal line of R
for(int i=20, j=6; i<=26; i++, j++) {
    gotoxy(i, j);
     Sleep(100);
    cout << "*";
}
//E
   for(int i=36,j=2;j<=12;j++)
    {
    	gotoxy(i,j);
    Sleep(100);
    	cout<<"*";
    
	}
  for(int i=36,j=2;i<=46;i++)
	   {
    	gotoxy(i,j);
    Sleep(100);
    	cout<<"*";
    
	}
    for(int i=36,j=6;i<=46;i++)
	   {
    	gotoxy(i,j);
    Sleep(100);
    	cout<<"*";
    
	}
     for(int i=36,j=12;i<=46;i++)
	   {
    	gotoxy(i,j);
    Sleep(100);
    	cout<<"*";
    
	}
  //H
    for(int i=50,j=2;j<=12;j++)
	   {
    	gotoxy(i,j);
    Sleep(100);
    	cout<<"*";
    
	}
   for(int i=60,j=2;j<=12;j++)
	   {
    	gotoxy(i,j);
    Sleep(100);
    	cout<<"*";
    
	}
   for(int i=50,j=6;i<=60;i++)
	   {
    	gotoxy(i,j);
    Sleep(100);
    	cout<<"*";
    
	}
  //A
    
    for(int i=65,j=2;j<=12;j++)
    {
    	gotoxy(i,j);
    	 Sleep(100);
    	cout<<"*";
  
	}
	for(int i=65,j=2;i<=77;i++){
			gotoxy(i,j);
     Sleep(100);
    	cout<<"*";
 
	}
	for(int i=77,j=2;j<=12;j++){
				gotoxy(i,j);
   Sleep(100);
    	cout<<"*";
    
	}
  for(int i=65,j=6;i<=77;i++){
				gotoxy(i,j);
   Sleep(100);
    	cout<<"*";
    
	}
  //N
    for(int i=85,j=2;j<=12;j++){
				gotoxy(i,j);
   Sleep(100);
    	cout<<"*";
    
	}
for(int i=85,j=2;j<=12;i++,j++){
  			gotoxy(i,j);
   Sleep(100);
    	cout<<"*";
    
}
 for(int i=97,j=2;j<=12;j++){
				gotoxy(i,j);
   Sleep(100);
    	cout<<"*";
    
	}
	
	getch();
}

