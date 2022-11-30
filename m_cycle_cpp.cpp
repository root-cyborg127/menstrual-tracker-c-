#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
//	clrscr();
	int cycleLength,menstrualLength,mEnds,oPeriod,oEnd,A;
	int day,month,year;
	
	//BANNER 
	
cout<<"\t    __  __________   _________________  __  _____    __       __________  ___   ________ __ __________ \n\t   /  |/  / ____/ | / / ___/_  __/ __ \/ / / /   |  / /      /_  __/ __ \/   | / ____/ //_// ____/ __ \ \n\t  / /|_/ / __/ /  |/ /\__ \ / / / /_/ / / / / /| | / /     / / / /_/ / /| |/ /   / ,<  / __/ / /_/ / \n\t / /  / / /___/ /|  /___/ // / / _, _/ /_/ / ___ |/ /___     / / / _, _/ ___ / /___/ /| |/ /___/ _, _/ \n\t/_/  /_/_____/_/ |_//____//_/ /_/ |_|\____/_/  |_/_____/    /_/ /_/ |_/_/  |_\____/_/ |_/_____/_/ |_|  \n \t\n";
                                                                                                      
cout<<"\t\t\t\t\t v1.0\t\tDEVELOPED BY : VISHWAJITH SHAIJUKUMAR \n\n\n\n\n";



	cout<<"CYCLE TRACKER Step 1 : CYCLE LENGTH \n\n";
	cout<<"\tPLEASE ENTER THE NUMBER OF DAYS OF YOUR PREVIOUS CYCLE LASTED  :\t";
	cin>>cycleLength;
	
	cout<<"\n\n\n\n";
	
	
	cout<<"CYCLE TRACKER Step 2 : PERIOD LENGTH :\t";
	cin>>menstrualLength;
	
	
	cout<<"CYCLE TRACKER Step 3 : WHEN DID YOUR LAST PERIOD START ? : \t";
	cin>>day>>month>>year;
	cout<<"\n\n\n\n";
	
	day = day+ cycleLength;

	if(day>31){
	month+=1;
	day=day-31;
	}
		cout<<"<<=============================  YOUR NEXT PERIOD STARTS FROM :" << day<<"-"<<month <<"-"<<year <<" =============================>>\n\n\n";
	
		mEnds = day + menstrualLength;
		if(day>31){
	month+=1;
	day=day-31;
	mEnds=mEnds-31;
	}
	 cout<<"<<=============================  YOUR PERIODS ENDS ON :" << mEnds<<"-"<<month<<"-"<<year <<"   =============================>>\n\n\n";
	 
		
	
	A = day + 10;
	
	oPeriod = A;
	
	if(A>31){
		A=A-31;
	month+=1;
	
	}
	cout<<"<<=============================  YOUR OVULATION STARTS ON : " << A<<"-"<<month<<"-"<<year<< "   =============================>>\n\n\n";
	
	oEnd = A + 6;
	
		

	
		if(A>31){
	month+=1;
	A=A-31;
	}
	
	cout<<"<<=============================  YOUR OVULATION ENDS ON : " << oEnd<<"-"<<month<<"-"<<year<< "   =============================>>\n\n\n";
	
	cout<<"\n\n\n";
	
	cout<<"Ask your doctor about any concerns or questions you may have about your menstrual experience for best results.";
	cout<<"\n";
	cout<<"For more information, visit WomensHealth.gov or GirlsHealth.gov for more facts about menstruation.";	
	getch();
	
	


}
