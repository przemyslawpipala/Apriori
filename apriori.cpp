#include <iostream>
#include <conio.h>

// program wykonujacy algorytm apriori 

using namespace std;

int tab[4][4]={{1,3,4,0},{2,3,5,0},{1,2,3,5},{3,5,0,0}};
int s1,s2,s3,s4,s5;
int s1procent;
int s2procent;
int s3procent;
int s4procent;
int s5procent;
int minsup=50;
int minconf=80;
int c212=0;
int c213=0;
int c215=0;
int c223=0;
int c225=0;
int c235=0;

string i1="-";
string i2="-";
string i3="-";
string i4="-";
string i5="-";


main()
{
	cout << "c1={1,2,3,4,5}";
	s1=0;
for (int i=0; i<4; i++) 
	{
     	for (int j=0; j<4; j++)
        if (tab[i][j] == 1) s1++;
	}
	s1procent=((s1*100)/4);
	cout << endl << "sup{1}="<<s1procent<<"%";
	s2=0;
	for (int i=0; i<4; i++) 
	{
     	for (int j=0; j<4; j++)
        if (tab[i][j] == 2) s2++;
	}
	s2procent=((s2*100)/4);
	cout << endl << "sup{2}="<<s2procent<<"%";
	s3=0;
	for (int i=0; i<4; i++) 
	{
     	for (int j=0; j<4; j++)
        if (tab[i][j] == 3) s3++;
	}
	s3procent=((s3*100)/4);
	cout << endl << "sup{3}="<<s3procent<<"%";
	s4=0;
	for (int i=0; i<4; i++) 
	{
     	for (int j=0; j<4; j++)
        if (tab[i][j] == 4) s4++;
	}
	s4procent=((s4*100)/4);
	cout << endl << "sup{4}="<<s4procent<<"%";
	s5=0;
	for (int i=0; i<4; i++) 
	{
     	for (int j=0; j<4; j++)
        if (tab[i][j] == 5) s5++;
	}
	s5procent=((s5*100)/4);
	
	cout << endl << "sup{5}="<<s5procent<<"%";
	if (s1procent >= minsup) i1 = "1";
	if (s2procent >= minsup) i2 = "2";
	if (s3procent >= minsup) i3 = "3";
	if (s4procent >= minsup) i4 = "4";
	if (s5procent >= minsup) i5 = "5";
	
	cout << endl << "L1={"<< i1 <<","<<i2 <<","<<i3 <<","<<i4 <<","<<i5<<"}";

/*	if (tab[0][0]==1 && tab[0][1]==2) c212++;
	if (tab[0][0]==1 && tab[0][2]==2) c212++;
	if (tab[0][0]==1 && tab[0][3]==2) c212++;
	if (tab[0][1]==1 && tab[0][2]==2) c212++;
	if (tab[0][1]==1 && tab[0][3]==2) c212++;
	if (tab[0][2]==1 && tab[0][3]==2) c212++;
	
	if (tab[1][0]==1 && tab[1][1]==2) c212++;
	if (tab[1][0]==1 && tab[1][2]==2) c212++;
	if (tab[1][0]==1 && tab[1][3]==2) c212++;
	if (tab[1][1]==1 && tab[1][3]==2) c212++;
	if (tab[1][2]==1 && tab[1][3]==2) c212++;

	if (tab[2][0]==1 && tab[2][1]==2) c212++;
	if (tab[2][0]==1 && tab[2][2]==2) c212++;
	if (tab[2][0]==1 && tab[2][3]==2) c212++;
	if (tab[2][1]==1 && tab[2][2]==2) c212++;
	if (tab[2][1]==1 && tab[2][3]==2) c212++;
	if (tab[2][2]==1 && tab[2][3]==2) c212++;
	
	if (tab[3][0]==1 && tab[3][1]==2) c212++;
	if (tab[3][0]==1 && tab[3][2]==2) c212++;
	if (tab[3][0]==1 && tab[3][3]==2) c212++;
	if (tab[3][1]==1 && tab[3][2]==2) c212++;
	if (tab[3][1]==1 && tab[3][3]==2) c212++;
	if (tab[3][2]==1 && tab[3][3]==2) c212++;*/

	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 1) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 2) c212++; 
			} 
		} 
	}
	
	cout <<endl<< "sup{1,2}=" << c212;
	/*if (tab[0][0]==1 && tab[0][1]==3) c213++;
	if (tab[0][0]==1 && tab[0][2]==3) c213++;
	if (tab[0][0]==1 && tab[0][3]==3) c213++;
	if (tab[0][1]==1 && tab[0][2]==3) c213++;
	if (tab[0][1]==1 && tab[0][3]==3) c213++;
	if (tab[0][2]==1 && tab[0][3]==3) c213++;
	
	if (tab[1][0]==1 && tab[1][1]==3) c213++;
	if (tab[1][0]==1 && tab[1][2]==3) c213++;
	if (tab[1][0]==1 && tab[1][3]==3) c213++;
	if (tab[1][1]==1 && tab[1][2]==3) c213++;
	if (tab[1][1]==1 && tab[1][3]==3) c213++;
	if (tab[1][2]==1 && tab[1][3]==3) c213++;
	
	if (tab[2][0]==1 && tab[2][1]==3) c213++;
	if (tab[2][0]==1 && tab[2][2]==3) c213++;
	if (tab[2][0]==1 && tab[2][3]==3) c213++;
	if (tab[2][1]==1 && tab[2][2]==3) c213++;
	if (tab[2][1]==1 && tab[2][3]==3) c213++;
	if (tab[2][2]==1 && tab[2][3]==3) c213++;
	
	if (tab[3][0]==1 && tab[3][1]==3) c213++;
	if (tab[3][0]==1 && tab[3][2]==3) c213++;
	if (tab[3][0]==1 && tab[3][3]==3) c213++;
	if (tab[3][1]==1 && tab[3][2]==3) c213++;
	if (tab[3][1]==1 && tab[3][3]==3) c213++;
	if (tab[3][2]==1 && tab[3][3]==3) c213++;*/
	
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 1) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 3) c213++;  
			} 
		} 
	}
	
	cout << endl <<"sup{1,3}=" << c213;

	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 1) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 5) c215++; 
			} 
		} 
	}
	
	cout << endl << "sup{1,5}=" << c215;
	
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 2) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 3) c223++; 
			} 
		} 
	}
	
	cout << endl << "sup{2,3}=" << c223;
	
		for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 2) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 5) c225++; 
			} 
		} 
	}
	
	cout << endl << "sup{2,5}=" << c225;
	
		for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 3) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 5) c235++; 
			} 
		} 
	}
	
	cout << endl << "sup{3,5}=" << c235;
	
	getch();
	return 0;
}
