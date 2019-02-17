#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
using namespace std;
void Fun_Facts()
{
	Sleep(1000);
	system("color 79");
	cout<<" __________________________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t\t\tFUN FACTS ABOUT ICE CREAM\n";
	cout<<" __________________________________________________________________________________________________________________\n";
	Sleep(1000);
	cout<<"|                                                                                                                  |"<<endl;
	cout<<"| BEFORE THE INVENTION OF FRIDGES ICE CREAM WAS CONSIDERED A LUXURY IN THE UNITED STATES.                          |"<<endl;
	cout<<"| FOOD VENDORS AT THE 1904 WORLD'S FAIR IN ST. LOUIS USED WAFFLES WHEN THEIR CUPS HAD RUN OUT!                     |"<<endl;
	cout<<"| FAMOUS ICE CREAM MAKERS BASKIN ROBBINS BOASTED 31 FLAVORS - ONE FOR EACH DAY OF THE MONTH.                       |"<<endl;
	cout<<"| SORBET IS LIKE ICE CREAM BUT CONTAINS NO MILK.                                                                   |"<<endl;
	cout<<"| GELATO ALSO HAS LESS CREAM OR MILK FAT THAN ICE CREAM.                                                           |"<<endl;
	cout<<"| BRITISH PRIME MINISTER MARGARET WAS OF THE TEAM THAT FIRST INVENTED THE METHOD OF MAKING SOFT SERVE ICE CREAM.   |"<<endl;
	cout<<"| BUFFALO, TWO RIVERS, ITHACA AND EVANSTON ALL CLAIM TO BE THE BIRTHPLACE OF THE ICE CREAM SUNDAE.                 |"<<endl;
	cout<<"|__________________________________________________________________________________________________________________|\n";
}
void Menu()
{
	Sleep(1000);
	system("color 09");
	
	
}
void Welcome()
{
	SYSTEMTIME t;
    GetLocalTime(&t);
	string s1="___________________________________________________________________________________________________________________\n";
			string s3="|                                                                                                                   |\n";
			string s4="|                              W E L C O M E  T O  T H E  D R E A M E R Y  C R E A M R Y                            |\n";
			string s6="|___________________________________________________________________________________________________________________|\n";
			
			cout<<"\t\t ______________________________________________________________________________________\n";
			Sleep(700);
			cout<<"\t\t|     *    ,                                                                           |\n";
			Sleep(650);
			cout<<"\t\t|` *~.|,~* '                          ()                           MONEY               |\n";
			Sleep(600);
			cout<<"\t\t|'  ,~*~~* `     _                   (__)                       CAN'T BUY              |\n";
			Sleep(550);
			cout<<"\t\t| ,* / \\`* '    //                  (____)                         YOU                 |\n";
			Sleep(500);
			cout<<"\t\t|  ,* ; \\,O.   //                  (______)                     HAPPINESS              |\n";
			Sleep(450);
			cout<<"\t\t|      ,(:::)=//                  (________)	              BUT IT CAN BUY           |\n";
			Sleep(400);
			cout<<"\t\t|    (  `~(###)                  (__________)	                   YOU                 |\n";
			Sleep(350);
			cout<<"\t\t|     \\---'`\"/                    \\/\\/\\/\\/\\/                    ICE CREAM              |\n";
			Sleep(300);
			cout<<"\t\t|      \\    /                      \\/\\/\\/\\/                  WHICH IS PRETTY           |\n";
			Sleep(250);
			cout<<"\t\t|       \\  /                        \\/\\/\\/                 MUCH THE SAME THING         |\n";
			Sleep(200);
			cout<<"\t\t|      __)(__                        \\/\\/	                                       |\n";
			Sleep(150);
			cout<<"\t\t|     '------`                        \\/	                                       |\n";
			Sleep(100);
			cout<<"\t\t|______________________________________________________________________________________|\n";
			Sleep(50);
			
			for(int i=0;i<s1.length();i++)
			{
				cout<<s1[i];
				Sleep(5);
	 		}
			for(int i=0;i<s3.length();i++)
			{
				cout<<s3[i];
				Sleep(5);
			}
			for(int i=0;i<s4.length();i++)
			{
				cout<<s4[i];
				Sleep(50);
			}
			for(int i=0;i<s6.length();i++)
			{
				cout<<s6[i];
				Sleep(5);
			}
			cout<<"\t\t\t\t\t\t\t\t\t\t   TIME -> "<<t.wHour<<":"<<t.wMinute<<":"<<t.wSecond<<" DAY -> "<<t.wDay<<"-"<<t.wMonth<<"-"<<t.wYear;													 
			cout<<"\n";	
			Sleep(2000);
			
}

int main()
{
	
	int login,correct=0,choice;
	string uname,uid;
	char a=(char)177;
	char b=(char)219;
	SYSTEMTIME t;
    GetLocalTime(&t);
    cout<<" ____________________________________________\n";
	cout<<"|              |             |               |\n";
	cout<<"| 1.SHOPKEEPER |  2.CUSTOMER | 3. NEW MEMBER |\n";
    cout<<"|______________|_____________|_______________|\n"<<endl;
    cout<<"\nENTER YOUR CHOICE\n";
	cout<<" _______\n";
	cout<<"|       |\n    ";
	cin>>login;
	cout<<"|_______|\n";
    cout<<"\n";
	switch(login)
    {
    	case 1:
    		while(correct!=3)
			{
    			cout<<"USERNAME -> ";
				cin>>uname;
    			cout<<"PASSWORD -> ";
    			cin>>uid;
    			cout<<'\r';
    			for(int i=0;i<uid.length();i++)
				{
					if(i==0)
					cout<<"            ";
					cout<<"^";
					Sleep(250);	
				}
				if(uname=="vishal"&&uid=="1234")
				{
					break;
				}	
				else
				{
					cout<<"\nIncorrect Username or Password\n\n";
					correct++;
				}
		    }
		if(correct==3)
		{
			cout<<"INTRUDER  \b";
		}
		else
		{
			Sleep(2000);
			
			system("color 04");
			cout<<"\nINITIALIZING...";
			Sleep(2000);
			cout<<'\r';
			for(int i=0;i<15;i++)
			{
				cout<<b;
				Sleep(150);	
			}
			cout<<"\n";
			system("cls");
			system("COLOR FC");
			
			Welcome();
			cout<<" ___________________________________________________________________________________________________________________\n";
			cout<<"|                                                                                                                   |\n";
			cout<<"| 1. MENU		2. ACCOUNTS 		3. HISTORY		4. OTHER		5.CONTACT INFO      |\n";
			cout<<"|___________________________________________________________________________________________________________________|\n"<<endl;
			cout<<"\n";
			cout<<"ENTER YOUR CHOICE : \n";	
			
		}
			break;
    	case 2:
    		Sleep(2000);
			
			system("color 04");
			cout<<"\nINITIALIZING...";
			Sleep(2000);
			cout<<'\r';
			for(int i=0;i<15;i++)
			{
				cout<<b;
				Sleep(150);	
			}
			cout<<"\n";
			system("cls");
			system("COLOR E4");
			Welcome();
			cout<<" ___________________________________________________________________________________________________________________\n";
			cout<<"|                                                                                                                   |\n";
			cout<<"| 1. MENU		2. FUN FACTS		3. HISTORY		4. OTHER		5.CONTACT US        |\n";
			cout<<"|___________________________________________________________________________________________________________________|\n"<<endl;
			cout<<"\n";
			cout<<"ENTER YOUR CHOICE : \n";	
			cout<<" _______\n";
			cout<<"|       |\n    ";
        	cin>>choice;
 	        cout<<"|_______|\n";
            cout<<"\n";
			if(choice==2)
			{
				Fun_Facts();
			}
    		break;
    		
    		/*case 3:
    			break;*/
    	
	}
	
    getch();
	return 0;
}
