#include <iostream>
#include <conio.h>

// program wykonujacy algorytm apriori 

using namespace std;
const int minsup=50;

int tab[4][4];
int s1,s2,s3,s4,s5;
int s12,s13,s14,s15,s23,s24,s25,s34,s35,s45;
int s123,s124,s125,s134,s135,s234,s235,s345;
int s1234,s1235,s1245,s1345,s2345;
int s1procent, s2procent, s3procent, s4procent, s5procent;
int s12procent, s13procent, s14procent, s15procent, s23procent, s24procent, s25procent, s34procent, s35procent, s45procent;
int s123procent, s124procent, s125procent, s134procent, s135procent, s145procent, s234procent, s235procent, s345procent;
int s1234procent,s1235procent,s1245procent,s1345procent,s2345procent;


string i1="-";
string i2="-";
string i3="-";
string i4="-";
string i5="-";
string i12="-";
string i13="-";
string i14="-";
string i15="-";
string i23="-";
string i24="-";
string i25="-";
string i34="-";
string i35="-";
string i45="-";
string i123="-";
string i124="-";
string i125="-";
string i134="-";
string i135="-";
string i234="-";
string i235="-";
string i345="-";
string i1234="-";
string i1235="-";
string i1245="-";
string i1345="-";
string i2345="-";


main()
{
//WCZYTYWANIE DANYCH DO TABELI
	cout << "Witaj w programie, ktory wykorzystuje algorytm Apriori do zbadania zaleznosci np. miedzy poszczegolnymi produktami w listach zakupow.";
	getch();
	cout <<endl<< "Jest to bardzo prosty program, wiec moze obliczyc jedynie zaleznosci miedzy 4 roznymi listami, ktore moga pomiescic 4 dane o wartosci od 1 do 5.";
	getch();
	cout <<"Wprowadz dane, jezeli dana lista bedzie zawierac np. tylko 3 produkty, to 4 produkt wprowadz jako 0."<<endl;
	
	for (int i=0; i<4; i++) 
	{
    	for (int j=0; j<4; j++)
		{
			cout << "Lista zakupow " << i+1 << " miejsce nr " << j+1 << " produkt nr: ";
  			cin >> tab[i][j];
  		}
	}
	

// C1
	for (int i=0; i<4; i++) 
	{
    for (int j=0; j<4; j++)
  		if (tab[i][j] == 1) i1="1";
	}
    	for (int i=0; i<4; i++) 
	{
    for (int j=0; j<4; j++)
  		if (tab[i][j] == 2) i2="2";
	}	for (int i=0; i<4; i++) 
	{
    for (int j=0; j<4; j++)
  		if (tab[i][j] == 3) i3="3";
	}	for (int i=0; i<4; i++) 
	{
    for (int j=0; j<4; j++)
  		if (tab[i][j] == 4) i4="4";
	}	for (int i=0; i<4; i++) 
	{
    for (int j=0; j<4; j++)
  		if (tab[i][j] == 5) i5="5";
	}
	cout << "C1={"<< i1 << ","<<i2<< ","<<i3<< ","<<i4<< ","<<i5<<"}";
												
												
												//OBLICZANIE L1
												
												
for (int i=0; i<4; i++) 
	{
     	for (int j=0; j<4; j++)
        if (tab[i][j] == 1) s1++;
	}
	s1procent=((s1*100)/4);
	cout << endl << "sup{1}="<<s1procent<<"%";
	for (int i=0; i<4; i++) 
	{
     	for (int j=0; j<4; j++)
        if (tab[i][j] == 2) s2++;
	}
	s2procent=((s2*100)/4);
	cout << endl << "sup{2}="<<s2procent<<"%";
	for (int i=0; i<4; i++) 
	{
     	for (int j=0; j<4; j++)
        if (tab[i][j] == 3) s3++;
	}
	s3procent=((s3*100)/4);
	cout << endl << "sup{3}="<<s3procent<<"%";
	for (int i=0; i<4; i++) 
	{
     	for (int j=0; j<4; j++)
        if (tab[i][j] == 4) s4++;
	}
	s4procent=((s4*100)/4);
	cout << endl << "sup{4}="<<s4procent<<"%";
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



															// OBLICZANIE L2
															
// C2
	if (s1procent >= minsup && s2procent >= minsup) i12 = "{1,2}";
	if (s1procent >= minsup && s3procent >= minsup) i13 = "{1,3}";
	if (s1procent >= minsup && s4procent >= minsup) i14 = "{1,4}";
	if (s1procent >= minsup && s5procent >= minsup) i15 = "{1,5}";
	if (s2procent >= minsup && s3procent >= minsup) i23 = "{2,3}";
	if (s2procent >= minsup && s4procent >= minsup) i24 = "{2,4}";
	if (s2procent >= minsup && s5procent >= minsup) i25 = "{2,5}";
	if (s3procent >= minsup && s4procent >= minsup) i34 = "{3,4}";
	if (s3procent >= minsup && s5procent >= minsup) i35 = "{3,5}";		
	if (s4procent >= minsup && s5procent >= minsup) i45 = "{4,5}";							
	cout << endl << "C2={" << i12 <<","<<i13 <<","<<i14 <<","<<i15 <<","<<i23<< i24 <<","<<i25 <<","<<i34 <<","<<i35 <<","<<i45<<"}";
// S12
	if (s1procent >=minsup && s2procent >=minsup)
	{
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 1) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 2) s12++; 
			} 
		} 
	}
	s12procent=((s12*100)/4);
	cout <<endl<< "sup{1,2}=" << s12procent << "%";
	}
// S13
	if (s1procent >=minsup && s3procent >=minsup)
	{
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 1) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 3) s13++;  
			} 
		} 
	}
	s13procent=((s13*100)/4);
	cout <<endl<< "sup{1,3}=" << s13procent << "%";
	}
// S14
	if (s1procent >=minsup && s4procent >=minsup)
	{
		for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 1) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 4) s14++; 
			} 
		} 
	}
	s14procent=((s14*100)/4);
	cout <<endl<< "sup{1,4}=" << s14procent << "%";
	}
// S5	
	if (s1procent >=minsup && s5procent >=minsup)
	{
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 1) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 5) s15++; 
			} 
		} 
	}
	s15procent=((s15*100)/4);
	cout <<endl<< "sup{1,5}=" << s15procent << "%";
	}
// S23
	if (s2procent >=minsup && s3procent >=minsup)
	{
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 2) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 3) s23++; 
			} 
		} 
	}
	s23procent=((s23*100)/4);
	cout <<endl<< "sup{2,3}=" << s23procent << "%";
	}
// S24
	if (s2procent >=minsup && s4procent >=minsup)
	{
			for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 2) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 4) s24++; 
			} 
		} 
	}
	s24procent=((s24*100)/4);
	cout <<endl<< "sup{2,4}=" << s24procent << "%";
	}
// S25
	if (s2procent >=minsup && s5procent >=minsup)
	{
		for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 2) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 5) s25++; 
			} 
		} 
	}
	s25procent=((s25*100)/4);
	cout <<endl<< "sup{2,5}=" << s25procent << "%";
	}
// S34
	if (s3procent >=minsup && s4procent >=minsup)
	{
			for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 3) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 4) s34++; 
			} 
		} 
	}
	s34procent=((s34*100)/4);
	cout <<endl<< "sup{3,4}=" << s34procent << "%";
	}
// S35
	if (s3procent >=minsup && s5procent >=minsup)
	{
		for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 3) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 5) s35++; 
			} 
		} 
	}
	s35procent=((s35*100)/4);
	cout <<endl<< "sup{3,5}=" << s35procent << "%";
	}
// S45
	if (s4procent >=minsup && s5procent >=minsup)
	{
		for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 4) 
			{ 
				for (int x=0; x<4; x++) 
				if(tab[i][x] == 5) s35++; 
			} 
		} 
	}
	s45procent=((s45*100)/4);
	cout <<endl<< "sup{4,5}=" << s45procent << "%";
	}
// WYSWIETLANIE LISTY L2	
	if (s12procent >= minsup) i12 = "{1,2}";
	if (s13procent >= minsup) i13 = "{1,3}";
	if (s14procent >= minsup) i14 = "{1,4}";
	if (s15procent >= minsup) i15 = "{1,5}";
	if (s23procent >= minsup) i23 = "{2,3}";
	if (s24procent >= minsup) i24 = "{2,4}";
	if (s25procent >= minsup) i25 = "{2,5}";
	if (s34procent >= minsup) i34 = "{3,4}";
	if (s35procent >= minsup) i35 = "{3,5}";
	if (s45procent >= minsup) i45 = "{4,5}";
	
	cout << endl << "L2={"<< i12 <<","<<i13 <<","<<i14 <<","<<i15 <<","<<i23<<","<<i24<< i25 <<","<<i34 <<","<<i35 <<","<<i45 <<"}";
// C3
	if (s12procent >= minsup && s13procent >= minsup && s23procent >= minsup) i123 = "{1,2,3}";
	if (s12procent >= minsup && s14procent >= minsup && s24procent >= minsup) i124 = "{1,2,4}";
	if (s12procent >= minsup && s15procent >= minsup && s25procent >= minsup) i125 = "{1,2,5}";
	if (s23procent >= minsup && s24procent >= minsup && s34procent >= minsup) i234 = "{2,3,4}";
	if (s23procent >= minsup && s25procent >= minsup && s35procent >= minsup) i235 = "{2,3,5}";
	if (s34procent >= minsup && s35procent >= minsup && s45procent >= minsup) i345 = "{3,4,5}";
	cout << endl << "C3={"<< i123 <<","<<i124 <<","<<i125 <<","<<i234 <<","<<i235<<","<<i345<<"}";
															
															
																//OBLICZANIE L3	
// S123																
	if (s12procent >= minsup && s13procent >= minsup && s23procent >= minsup)
	{																		
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 1) 
			for (int z=0; z<4; z++) 
			{ 
				if (tab[i][z] == 2) 
				{ 
					for (int x=0; x<4; x++) 
					if(tab[i][x] == 3) s123++; 
				} 
			} 
		}
	}
	s123procent=((s123*100)/4);
	cout << endl << "sup{1,2,3}="<< s123procent<<"%";
	}
// S124	
	if (s12procent >= minsup && s14procent >= minsup && s24procent >= minsup)
	{																		
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 1) 
			for (int z=0; z<4; z++) 
			{ 
				if (tab[i][z] == 2) 
				{ 
					for (int x=0; x<4; x++) 
					if(tab[i][x] == 4) s124++; 
				} 
			} 
		}
	}
	s124procent=((s124*100)/4);
	cout << endl << "sup{1,2,4}="<< s124procent<<"%";
	}
// S125
	if (s12procent >= minsup && s15procent >= minsup && s25procent >= minsup)
	{																		
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 1) 
			for (int z=0; z<4; z++) 
			{ 
				if (tab[i][z] == 2) 
				{ 
					for (int x=0; x<4; x++) 
					if(tab[i][x] == 5) s125++; 
				} 
			} 
		}
	}
	s125procent=((s125*100)/4);
	cout << endl << "sup{1,2,5}="<< s125procent<<"%";
	}
// S234
	if (s23procent >= minsup && s24procent >= minsup && s34procent >= minsup)
	{																		
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 2) 
			for (int z=0; z<4; z++) 
			{ 
				if (tab[i][z] == 3) 
				{ 
					for (int x=0; x<4; x++) 
					if(tab[i][x] == 4) s234++; 
				} 
			} 
		}
	}
	s234procent=((s234*100)/4);
	cout << endl << "sup{2,3,4}="<< s234procent<<"%";
	}
// S235
	if (s23procent >= minsup && s25procent >= minsup && s35procent >= minsup)
	{																		
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 2) 
			for (int z=0; z<4; z++) 
			{ 
				if (tab[i][z] == 3) 
				{ 
					for (int x=0; x<4; x++) 
					if(tab[i][x] == 5) s235++; 
				} 
			} 
		}
	}
	s235procent=((s235*100)/4);
	cout << endl << "sup{2,3,5}="<< s235procent<<"%";
	}
// S345
	if (s34procent >= minsup && s35procent >= minsup && s45procent >= minsup)
	{																		
	for (int i=0; i<4; i++) 
	{ 
		for (int j=0; j<4; j++) 
		{ 
			if (tab[i][j] == 3) 
			for (int z=0; z<4; z++) 
			{ 
				if (tab[i][z] == 4) 
				{ 
					for (int x=0; x<4; x++) 
					if(tab[i][x] == 5) s345++; 
				} 
			} 
		}
	}
	s345procent=((s345*100)/4);
	cout << endl << "sup{3,4,5}="<< s345procent<<"%";
	}
	
// WYSWIETLANIE LISTY L3
	if (s123procent >= minsup) i123 = "{1,2,3}";
	if (s124procent >= minsup) i124 = "{1,2,4}";
	if (s125procent >= minsup) i125 = "{1,2,5}";
	if (s234procent >= minsup) i234 = "{2,3,4}";
	if (s235procent >= minsup) i235 = "{2,3,5}";
	if (s345procent >= minsup) i345 = "{3,4,5}";
	cout << endl << "L3={" << i123 <<","<<i124 <<","<<i125 <<","<<i234 <<","<<i235<<","<<i345<<"}";
	
// C4	
	if (s12procent >= minsup && s13procent >= minsup && s14procent >= minsup && s23procent >= minsup && s24procent >= minsup && s34procent >= minsup) i1234 = "{1,2,3,4}";
	if (s12procent >= minsup && s13procent >= minsup && s15procent >= minsup && s23procent >= minsup && s25procent >= minsup && s35procent >= minsup) i1235 = "{1,2,3,5}";
	if (s12procent >= minsup && s14procent >= minsup && s15procent >= minsup && s24procent >= minsup && s25procent >= minsup && s45procent >= minsup) i1245 = "{1,2,4,5}";
	if (s13procent >= minsup && s14procent >= minsup && s15procent >= minsup && s34procent >= minsup && s45procent >= minsup && s45procent >= minsup) i1345 = "{1,3,4,5}";
	if (s23procent >= minsup && s24procent >= minsup && s24procent >= minsup && s34procent >= minsup && s35procent >= minsup && s45procent >= minsup) i2345 = "{2,3,4,5}";
	cout << endl << "C4={"<< i1234 <<","<<i1235 <<","<<i1245 <<","<<i1345 <<","<<i2345<<"}";
	
// S1234
	if (s12procent >= minsup && s13procent >= minsup && s14procent >= minsup && s23procent >= minsup && s24procent >= minsup && s34procent >= minsup)
	{																		
	for (int i=0; i<4; i++) 
	{
		for (int c=0; c<4; c++) 
		{
			if (tab[i][c] == 1) 
			{ 
				for (int j=0; j<4; j++) 
				{ 
					if (tab[i][j] == 2) 
					for (int z=0; z<4; z++) 
					{ 
						if (tab[i][z] == 3) 
						{ 
							for (int x=0; x<4; x++) 
							if(tab[i][x] == 4) s1234++; 
						} 
					} 
				}
			}
		}
	}
		s1234procent=((s1234*100)/4);
		cout << endl << "sup{1,2,3,4}="<< s1234procent<<"%";
	}
// S1235
	if (s12procent >= minsup && s13procent >= minsup && s15procent >= minsup && s23procent >= minsup && s25procent >= minsup && s35procent >= minsup)
	{																		
	for (int i=0; i<4; i++) 
	{
		for (int c=0; c<4; c++) 
		{
			if (tab[i][c] == 1) 
			{ 
				for (int j=0; j<4; j++) 
				{ 
					if (tab[i][j] == 2) 
					for (int z=0; z<4; z++) 
					{ 
						if (tab[i][z] == 3) 
						{ 
							for (int x=0; x<4; x++) 
							if(tab[i][x] == 5) s1235++; 
						} 
					} 
				}
			}
		}
	}
		s1235procent=((s1235*100)/4);
		cout << endl << "sup{1,2,3,5}="<< s1235procent<<"%";
	}
	// S1245
	if (s12procent >= minsup && s14procent >= minsup && s15procent >= minsup && s24procent >= minsup && s25procent >= minsup && s45procent >= minsup)
	{																		
	for (int i=0; i<4; i++) 
	{
		for (int c=0; c<4; c++) 
		{
			if (tab[i][c] == 1) 
			{ 
				for (int j=0; j<4; j++) 
				{ 
					if (tab[i][j] == 2) 
					for (int z=0; z<4; z++) 
					{ 
						if (tab[i][z] == 4) 
						{ 
							for (int x=0; x<4; x++) 
							if(tab[i][x] == 5) s1245++; 
						} 
					} 
				}
			}
		}
	}
		s1245procent=((s1245*100)/4);
		cout << endl << "sup{1,2,4,5}="<< s1245procent<<"%";
	}
		// S1345
	if (s13procent >= minsup && s14procent >= minsup && s15procent >= minsup && s34procent >= minsup && s35procent >= minsup && s45procent >= minsup)
	{																		
	for (int i=0; i<4; i++) 
	{
		for (int c=0; c<4; c++) 
		{
			if (tab[i][c] == 1) 
			{ 
				for (int j=0; j<4; j++) 
				{ 
					if (tab[i][j] == 3) 
					for (int z=0; z<4; z++) 
					{ 
						if (tab[i][z] == 4) 
						{ 
							for (int x=0; x<4; x++) 
							if(tab[i][x] == 5) s1345++; 
						} 
					} 
				}
			}
		}
	}
		s1345procent=((s1345*100)/4);
		cout << endl << "sup{1,3,4,5}="<< s1345procent<<"%";
	}
	// S2345
	if (s23procent >= minsup && s24procent >= minsup && s25procent >= minsup && s34procent >= minsup && s34procent >= minsup && s45procent >= minsup)
	{																		
	for (int i=0; i<4; i++) 
	{
		for (int c=0; c<4; c++) 
		{
			if (tab[i][c] == 2) 
			{ 
				for (int j=0; j<4; j++) 
				{ 
					if (tab[i][j] == 3) 
					for (int z=0; z<4; z++) 
					{ 
						if (tab[i][z] == 4) 
						{ 
							for (int x=0; x<4; x++) 
							if(tab[i][x] == 5) s2345++; 
						} 
					} 
				}
			}
		}
	}
		s2345procent=((s2345*100)/4);
		cout << endl << "sup{2,3,4,5}="<< s2345procent<<"%";
	}
	// WYSWIETLANIE LISTY L4
	if (s1234procent >= minsup) i1234 = "{1,2,3,4}";
	if (s1235procent >= minsup) i1235 = "{1,2,3,5}";
	if (s1245procent >= minsup) i1245 = "{1,2,4,5}";
	if (s1345procent >= minsup) i1345 = "{1,3,4,5}";
	if (s2345procent >= minsup) i2345 = "{2,3,4,5}";
	cout << endl << "L4={" << i1234 <<","<<i1235 <<","<<i1245 <<","<<i1345<<","<<i2345<<"}";
	
	getch();
	return 0;
}
