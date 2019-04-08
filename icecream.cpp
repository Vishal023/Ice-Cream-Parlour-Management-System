#include <iostream>
#include <conio.h>
#include <Windows.h>
//#include <time.h>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

void Contacts();
void Fun_Facts();
void menulist();
void Menu();
void Welcome1();
void Welcome();
void stock();
void dispstock();
/*TO UPDATE STOCK*/
void stock()
{
	Sleep(500);
	ofstream stockName,stockPrice;
	stockName.open("Stock_Items.txt",ios::app); 
	stockPrice.open("Stock_Price.txt",ios::app);
	
	string item,price;
	cout<<"ENTER THE NUMBER OF ITEMS TO BE ADDED : "<<endl;
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cout<<"\nENTER THE ITEM NAME AND PRICE : \n"<<endl;
		cin>>item;
		stockName<<item<<"\n";
		cin>>price;
		stockPrice<<price<<"\n";
	}
	
	cout<<" ___________________________________________________________________________________________________________________\n";
	cout<<"|                                                                                                                   |\n";
	cout<<"|                                 ----S T O C K----------U P D A T E D----                                          |\n";
	cout<<"|___________________________________________________________________________________________________________________|\n";
	
	stockName.close();
	stockPrice.close();
}
/*TO DISPLAY STOCK*/
void dispstock()
{
	Sleep(500);
	ifstream obj,obj1;
	obj.open("Stock_Items.txt");
	obj1.open("Stock_Price.txt");
	string name,price;
	getline(obj,name);
	obj1>>price;
	int c=0;
	cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
	while(obj)
	{
		Sleep(250);
		cout<<setw(30)<<setfill(' ')<<name<<" -> "<<price<<setw(30)<<setfill(' ');
		getline(obj,name);
		obj1>>price;
		c++;
		if(c==3)
		{
			c=0;
			cout<<'\n';
		}
	}
	
	cout<<"\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
	cout<<'\n';
}
/*ABOUT US*/
void Contacts()
{

			Sleep(2000);
			//HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE); 
			//SetConsoleTextAttribute(color, 5);			
    		cout<<"\t\t\t _______________________________________________________________ \n";
			cout<<"\t\t\t|   NAME            PHONE NUMBER          EMAIL ID              |\n";
			cout<<"\t\t\t|   VISHAL SINGH   +91 8840261170     v.singh.kld@gmail.com     |\n";
			cout<<"\t\t\t|_______________________________________________________________|\n";
}
/*FUN FACTS ABOUT ICE CREAM*/
void Fun_Facts()
{
	Sleep(1000);
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleTextAttribute(color, 4);
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
/*SEARCHING , SORTING OF ITEMS AND DISPLAYING RECIEPT*/
class account
{
	string items1[48]={
						"SINGLE CONE", "DOUBLE CONE", "KIDDIE CONE", "WAFFLE CONE", 
				     	"KIDDIE", "SINGLE", "DOUBLE", "MOLTED WAFLE", "CHOCO DIPPED", 
						"NUTS", "CANDIES", "SAUCE", "WHIPPED CREAM", "CHOCO",
	 					"ICE CREAM SODA", "ROOT FIZZ FLOAT", "SMOOTHIE", "MILKSHAKE", "CHOCO MALT",
	  					"CHOCOLATE", "STRAWBERRY", "MELON", "CARAMEL", "VANILLA", 
	 					"MINI SUNDAE", "CHOCO SUNDAE", "KIDDIE SUNDAE", "BANANA SPLIT", "OREO SUNDAE", 
	  					"MINI POPS", "CHOCO POPS", "KIDDIE POPS", "BANANA POPS", "OREO POPS", "KIDDIE POPS", 
	  					"SPRITE", "COKE","PEPSI", "MAAZA","SLICE", "7-UP",
	  					"NOODLES", "BURGER", "SANDWICH", "ICE CREAM ROLL", "ICE CUBES", "PASTRY"
	  				};	
    float price1[48]={
	 					15,30,10,25,
	 					10,15,20,35,30,
	 					10,5,8,12,15,
	 					40,100,50,70,80,
	 					20,25,20,25,20,
	 					100,170,120,150,250,
	 					10,9,8,10,12,5,
	 					40,40,40,40,40,40,
	 					50,40,35,60,5,35
	 			   };
	 			   string items[48];
    			   float price[48];
	public:
		account()
		{
			
		}
		void search(string name)
		{
			
			int count=0;
			string s;
			int ss; 
			
			ifstream ob,ob1;
			ob.open("Stock_Items.txt");
			ob1.open("Stock_Price.txt");
			getline(ob,s);
			ob1>>ss;
			while(ob)
			{
				if(name==s)
				{
					cout<<"\nTHE ITEM : "<<s<<"\nITS PRICE IS : "<<ss<<endl;
					count=0;
					break;
				}
				else
				{
				count=-1;
				}
				getline(ob,s);
				ob1>>ss;				
			}
			
			if(count==-1&&name!="0")
			{
				cout<<"\nOut of stock or Not Found\n";
			}
			cout<<"___________________________________________________________________________________________________________________";
			ob.close();
			ob1.close();	
			}
	
		void Sort_price()
		{
			string items[100];
			float price[100];
			ifstream ox,ox1;
	
			ox.open("Stock_Items.txt");
			ox1.open("Stock_Price.txt");
			string x;
			float n;
			getline(ox,x);
			ox1>>n;
			int k=0;
		
			while(ox)
			{
		
				items[k]=x;
				price[k]=n;
				k++;
			
				getline(ox,x);
				ox1>>n;
			}
			ox.close();
			ox1.close();
			int min=price[0];
			for (int i = 0;i<k-1; i++)
			{
				for (int j=0;j<k-i-1; j++)
				{
            	    if (price[j] > price[j+1])
                	{
                    
                    	float temp = price[j];
                    	price[j] = price[j+1];
                    	price[j+1] = temp;
                    	
						string temp1=items[j];
                    	items[j]=items[j+1];
                    	items[j+1]=temp1;
                    	
               		}	
				}	
			}
			cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
			int ccc=0;
			for(int i=0;i<k;i++)
			{
				cout<<setw(16) << setfill(' ')<<items[i]<< setw(16) << setfill(' ') <<"\t"<<price[i];
				ccc++;
				if(ccc==3)
				{
					ccc=0;
					cout<<"\n\n";
					Sleep(1000);
				}
			}
			cout<<"\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
            	
		}
			/* TODO (#9#): ADD DIFFERENT COLOR  TO EVERY LINE*/
		void reciept(string name[],int n[],int c)
		{
			HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE); 
			SetConsoleTextAttribute(color, 3);
			int sum_total=0,total_quan=0;
			cout<<" __________________________________________________________________________________________________________________"<<endl;
			cout<<"|                                                                                                                  |"<<endl;
			cout<<"|                                            R E C I E P T                                                         |"<<endl;
			cout<<"|__________________________________________________________________________________________________________________|"<<endl;
			cout<<"\n\t\t"<<setw(20)<<setfill(' ')<<"ITEM/S"<<setw(20)<<setfill(' ')<<"QUANTITY"<<setw(20)<<setfill(' ')<<"PRICE"<<setw(20)<<setfill(' ')<<"STOCK"<<endl;
			
			for(int i=0;i<c;i++)
			{
				int k=0;
				for(int j=0;j<48;j++)
				{
					if(name[i]==items1[j])
					{	
						cout<<"\t\t"<<setw(20)<<setfill(' ')<<name[i]<<setw(20)<<setfill(' ')<<"X"<<n[i]<<setw(20)<<setfill(' ')<<"RS."<<(n[i]*price1[j])<<setw(20)<<setfill(' ')<<"AVALIABLE"<<endl;
						sum_total+=(n[i]*price1[j]);
						total_quan+=n[i];
						k=1;
					}
				}		
				if(k==0)
				{
					cout<<"\t\t"<<setw(20)<<setfill(' ')<<name[i]<<setw(20)<<setfill(' ')<<"X"<<n[i]<<setw(20)<<setfill(' ')<<"  -----"<<setw(20)<<setfill(' ')<<"OUT OF STOCK"<<endl;
				}
			}
			cout<<" __________________________________________________________________________________________________________________"<<endl;
			cout<<"\n\t\t"<<setw(20)<<setfill(' ')<<"TOTAL ITEMS"<<setw(20)<<setfill(' ')<<"TOTAL QUANTITY"<<setw(20)<<setfill(' ')<<"SUB TOTAL"<<endl;
			cout<<"\t\t"<<setw(20)<<setfill(' ')<<c<<setw(20)<<setfill(' ')<<total_quan<<setw(20)<<setfill(' ')<<"RS."<<sum_total<<endl;
			cout<<" __________________________________________________________________________________________________________________"<<endl<<endl;
			cout<<" __________________________________________________________________________________________________________________"<<endl;
			cout<<"|                                                                                                                  |"<<endl;
			cout<<"|                      T H A N K  Y O U  F O R  V I S I T I N G - V I S I T  A G A I N                             |"<<endl;
			cout<<"|__________________________________________________________________________________________________________________|"<<endl;
				
		}
};
/*MENU LIST*/
void Menu()
{
	system("cls");
	Sleep(1000);
	system("color 09");
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleTextAttribute(color, 15);
	cout<<" __________________________________________________________________________________________________________________\n";
	cout<<"|                                                  MENU                                                            |\n";
	cout<<"|                                                                                                                  |\n";
	cout<<"|       I. CONE                               II. SCOOPS                         III. TOPPINGS                     |\n";
	cout<<"|          SINGLE CONE        Rs.15               KIDDIE         Rs.10                NUTS            RS.10        |\n";
	cout<<"|          DOUBLE CONE        Rs.30               SINGLE         Rs.15                CANDIES         RS.05        |\n";
	cout<<"|          KIDDIE CONE        Rs.10               DOUBLE         Rs.20                SAUCE           RS.08        |\n";
	cout<<"|          WAFFLE CONE        Rs.25               MOLTED WAFLE   Rs.35                WHIPPED CREAM   RS.12        |\n";
	cout<<"|                                                 CHOCO DIPPED   Rs.30                CHOCO           RS.15        |\n";
	cout<<"|                                                                                                                  |\n";
	cout<<"|       IV. SIPPERS                           V. POPSICLE STICKS                  VI. ICE CREAM STICKS             |\n";
	cout<<"|           ICE CREAM SODA    RS.40              CHOCOLATE        RS.20               MINI SUNDAE       RS.100     |\n";
	cout<<"|           ROOT FIZZ FLOAT   RS.100             STRAWBERRY       RS.25               CHOCO SUNDAE      RS.170     |\n";
	cout<<"|           SMOOTHIE          RS.50              MELON            RS.20               KIDDIE SUNDAE     RS.120     |\n";
	cout<<"|           MILKSHAKE         RS.70              CARAMEL          RS.25               BANANA SPLIT      RS.150     |\n";
	cout<<"|           CHOCO MALT        RS.80              VANILLA          RS.20               OREO SUNDAE       RS.250     |\n";
	cout<<"|                                                                                                                  |\n";
	cout<<"|       VII. ICE CREAM POPS                   VIII. SOFT DRINKS                  IX. OTHER                         |\n";
	cout<<"|            MINI POPS        RS.10                 SPRITE       RS.40               NOODLES            RS.50      |\n";
	cout<<"|            CHOCO POPS       RS.09                 COKE         RS.40               BURGER             RS.40      |\n";
	cout<<"|            KIDDIE POPS      RS.08                 PEPSI        RS.40               SANDWICH           RS.35      |\n";
	cout<<"|            BANANA POPS      RS.10                 MAAZA        RS.40               ICE CREAM ROLL     RS.60      |\n";
	cout<<"|            OREO POPS        RS.12                 SLICE        RS.40               ICE CUBES          RS.05      |\n";
	cout<<"|            KIDDIE POPS      RS.05                 7-UP         RS.40               PASTRY             RS.35      |\n";
	cout<<"|                                                                                                                  |\n";
	cout<<"|                                     MORE THINGS TO BE ADDED SOON                                                 |\n";
	cout<<"|__________________________________________________________________________________________________________________|\n";
	
}
/*WELCOME PORTAL #1*/
void Welcome1()
{
	SYSTEMTIME t;
    GetLocalTime(&t);
	        string s1=" ___________________________________________________________________________________________________________________\n";
			string s3="|                                                                                                                   |\n";
			string s4="|                              W E L C O M E  T O  T H E  D R E A M E R Y  C R E A M R Y                            |\n";
			string s6="|___________________________________________________________________________________________________________________|\n";
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
/*WELCOME PORTAL #2 CUSTOMER*/
void Welcome()
{
			cout<<"\t\t ______________________________________________________________________________________\n";
			Sleep(700);
			cout<<"\t\t|     *    ,                                                                           |\n";
			Sleep(650);
			cout<<"\t\t|` *~.|,~* '                          ()                          MONEY                |\n";
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
			
}

int main()
{
	
	int login,correct=0,choice,choice1;
	
	ofstream out,out1;
	out.open("Signup.txt",ios::app); 
	out1.open("Pass.txt",ios::app);
	string key,pass;
	
	ifstream in,in1;
	in.open("Signup.txt");
	in1.open("Pass.txt");
			
	string const mkey="icecreamshop@123";
	string mkey1;
	string uname,uid;
	
	char a=(char)177;
	char b=(char)219;
	
	SYSTEMTIME t;
    GetLocalTime(&t);/*CREATING OBJECT TO GET THE REAL TIME*/
    
	/*OBJECT TO HANDLE COLOR*/
    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE); 

	/* TODO (VISHAL#3#): LEARN ABOUT FONT SIZE  */
	/*
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 18;                  // Height
	std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	*/

    SetConsoleTextAttribute(color, 1);
    cout<<" ____________________________________________\n";
    SetConsoleTextAttribute(color, 11);
	cout<<"|              |             |               |\n";
	SetConsoleTextAttribute(color, 3);
	cout<<"| 1.SHOPKEEPER |  2.CUSTOMER | 3. NEW MEMBER |\n";
	SetConsoleTextAttribute(color, 10);
    cout<<"|______________|_____________|_______________|\n"<<endl;
    SetConsoleTextAttribute(color, 6);
    cout<<"\nENTER YOUR CHOICE\n";
    SetConsoleTextAttribute(color, 4);
	cout<<" _______\n";
	SetConsoleTextAttribute(color, 12);
	cout<<"|       |\n    ";
	SetConsoleTextAttribute(color, 12);
	cin>>login;
	cout<<"|_______|\n";
    cout<<"\n";
    Sleep(1000);
    

    
	switch(login)
    {
    	/*SHOPKEEPER CASE*/
    	case 1:
    		{
    				char text[10]={'L','O','G','I','N',' ','P','A','G','E'};
    				system("cls");
    				int k=1;
    				for(int i=0;i<10;i++)
					{
						SetConsoleTextAttribute(color,k++);
						cout<<text[i];
						Sleep(250);	
					}
    				system("cls");
    			    system("color 0A");
    			    cout<<" _____________________________________________\n";
    				cout<<"\n USERNAME -> ";
					cin>>uname;
    				cout<<" PASSWORD -> ";
    				cin>>uid;
    				cout<<'\r';
    				for(int i=0;i<uid.length();i++)
					{
						if(i==0)
						cout<<"             ";
						cout<<"^";
						Sleep(250);	
					}
					int name_counter=0,pass_counter=0;
				    in.seekg(0,ios::beg);
					in1.seekg(0,ios::beg);
					
					in>>key;
					while(in)
					{
						if(uname==key)
						{
							name_counter++;
							in1>>pass;
							while(in1)
							{
									
								if(pass==uid)
								{	
									pass_counter++;
									break;
								}
								else
								{
									pass_counter--;
								}
								in1>>pass;
							}	
							break;	
						}
						
						else
				    	{
							name_counter--;

						}
						in>>key;
					}
					if(name_counter!=pass_counter)
					{
						
					    cout<<"\n ____________________________________________"<<endl;
						cout<<"|                                            |"<<endl;
						cout<<"|                 INTRUDER                   |"<<endl;
						cout<<"|____________________________________________|"<<endl;
						//MessageBox(NULL,"Wrong Username Or Password\n",NULL, NULL);
						
					}	
					else
					{
						cout<<"\n";
						Sleep(2000);
						char text[16]={'L','O','G','G','I','N','G',' ','I','N','.','.','.','.','.','.'};   				
    					for(int i=0;i<16;i++)
						{
							SetConsoleTextAttribute(color,10);
							cout<<text[i];
							Sleep(250);	
						}
    				
						cout<<"\n";
						system("cls");
						system("COLOR FC");
						Welcome1();
						while(choice!=5)
						{
							cout<<" ___________________________________________________________________________________________________________________\n";
							cout<<"|                                                                                                                   |\n";
							cout<<"|      1. MENU              2. ACCOUNTS             3.ADD STOCK             4.CONTACT INFO             5.EXIT       |\n";
							cout<<"|___________________________________________________________________________________________________________________|\n"<<endl;
							cout<<"\n";
							cout<<"ENTER YOUR CHOICE : \n";	
							cout<<" _______\n";
							cout<<"|       |\n    ";
	        				cin>>choice;
	 	        			cout<<"|_______|\n";
	            			cout<<"\n";
	            			Sleep(1000);
	            			string item_name;
							            			
	            				switch(choice)
	            				{
	            				
	            					case 1:
	            						{
	            							Menu();
										break;	
										}
										
									case 2:
	            						{
	            							start:
	            							{
	            								system("cls");
	            								cout<<"\nENTER YOUR CHOICE\n";
	            						
	            								cout<<"\n1. ITEM NAME TO BE SEARCHED "<<endl;
	            								cout<<"2. SORT ITEMS BY PRICE"<<endl;
	            								cout<<"3. DISPLAY THE STOCK"<<endl;
	            								cout<<"4. EXIT"<<endl;
	            								
	            								cout<<" _______\n";
												cout<<"|       |\n    ";
	        									cin>>choice1;
	 	        								cout<<"|_______|\n";
	            								cout<<"\n";
	            							
												account obj;
											
	            								if(choice1==1)
	            								{
	            						  			getline(cin,item_name);
	            						  	
	            						 		 	while(item_name!="0")
										 		   	{
										  					cout<<"\nENTER THE ITEM NAME OR ENTER 0 TO EXIT : ";
	            											getline(cin,item_name);
	               											obj.search(item_name);
													}	
											  
	            								}
	            							
	            								if(choice1==2)
	            								{
	            									Sleep(1000);
	            									obj.Sort_price();
												}
											
												if(choice1==3)
												{
													dispstock();
												}
												
												if(choice1==4)
												{
													exit(0);
												}
												
												cout<<"\n";
												system("PAUSE");
												goto start;
												
											}
										
	            							break;	
										}
										
									case 3:
										{
											stock();
											break;
										}
										
									case 4:
	            						{
	            							Contacts();	
	            							break;	
										}
									case 5:
										{
											exit(0);
										}
								    default:
										cout<<"WRONG CHOICE ENETRED"<<endl;	
								}
								cout<<"\n";
						    	system("PAUSE");
								system("cls");							
							}
						}
						
			
					
					in.close();	
				break;
				}
    			
				
		
		/*CUSTOMER CASE*/	
    	case 2:
    		{
    				Sleep(2000);
					system("cls");
					SetConsoleTextAttribute(color, 10);
					cout<<"\nINITIALIZING...";
					Sleep(2000);
					cout<<'\r';
					for(int i=0;i<15;i++)
					{
						SetConsoleTextAttribute(color,4);
						cout<<b;
						Sleep(150);	
					}
					cout<<"\n";
					system("cls");
					system("COLOR E4");
					Welcome();
					Welcome1();
	            	while(choice!=6)
					{	
					
						cout<<" ___________________________________________________________________________________________________________________\n";
						cout<<"|                                                                                                                   |\n";
						cout<<"|               1. MENU     2. FUN FACTS     3.SPECIAL ORDER     4. FEEDBACK     5.CONTACT US     6.EXIT            |\n";
						cout<<"|___________________________________________________________________________________________________________________|\n"<<endl;	
						cout<<"\n";
						cout<<"ENTER YOUR CHOICE : \n";	
						cout<<" _______\n";
						cout<<"|       |\n    ";
        				cin>>choice;
 	        			cout<<"|_______|\n";
            			cout<<"\n";
            			Sleep(1000);
	            	 if(choice==1)
	           			 {
	            				Sleep(1500);
	      		      			Menu();
	            				cout<<"\nENTER THE ITEM/S YOU NEED WITH QUANTITY "<<endl;
	            				cout<<"\n(ENTER \"DONE\" WHEN YOU ARE FINISHED WITH ITEMS YOU NEED)"<<endl;
	            				string item,items[48];
	          	  				int q=1,qs[48];
	            				account obj;
	            				cout<<"\n";
	        	    			int i=0;
	    					while(item!="DONE")
							{
								cin.ignore();
								getline(cin,item);
								if(item=="DONE")
									continue;
								cin>>q;
								items[i]=item;
								qs[i]=q;
								i++;
							}
							obj.reciept(items,qs,i);
						}
						else if(choice==2)
						{
							Fun_Facts();
						}
						else if(choice==3)
						{
							string spcl;
							ofstream spc;
							spc.open("SPECIAL_ORDER.txt",ios::app);
							cout<<"WRITE THE SPECIAL ORDER YOU WISH TO HAVE!!!!!!!"<<endl;	
							cin.ignore();
							getline(cin,spcl);
							spc<<spcl<<"\n";
							cout<<"\n";
							cout<<" ___________________________________________________________________________________________________________________"<<endl;
							cout<<"|                                                                                                                   |"<<endl;
							cout<<"|                     T H A N K  Y O U  F O R  P L A C I N G  A  S P E C I A L  O R D E R                           |"<<endl;
							cout<<"|                                    YOU PLACED YOUR ORDER ON :"<<t.wDay<<"-"<<t.wMonth<<"-"<<t.wYear<<"                                            |"<<endl;
							cout<<"|                                  YOUR ORDER WILL BE READY AFTER 1 WEEK                                            |"<<endl;
							cout<<"|___________________________________________________________________________________________________________________|"<<endl;
						}
						else if(choice==4)
						{
							string feed;
							ofstream fback;
							fback.open("FEED_BACK.txt",ios::app);
							cout<<"PLEASE ENTER YOUR FEEDBACK :) :) :)"<<endl;
							cin.ignore();
							getline(cin,feed);
							fback<<feed<<"\n";
							cout<<"\n";
							cout<<" ___________________________________________________________________________________________________________________"<<endl;
							cout<<"|                                                                                                                   |"<<endl;
							cout<<"|                                T H A N K  Y O U  F O R  T H E  F E E D B A C K                                    |"<<endl;
							cout<<"|                                    D O   V I S I T  A G A I N ! ! ! ! !                                           |"<<endl;
							cout<<"|___________________________________________________________________________________________________________________|"<<endl;	
						}
						else if(choice==5)
						{
							Contacts();
						}
						else if(choice==6)
						{
							exit(0);
						}
						else
						{
							cout<<"\nWRONG CHOICE ENTERED!!!!!!!!!!!!!!!!!!!";
						}
						cout<<"\n";
						system("PAUSE");
						system("cls");
				}
				break;
			}
    		case 3:
    			{
    			system("cls");
				cout<<"\nINITIALIZING...";
				Sleep(2000);
				cout<<'\r';
				for(int i=0;i<15;i++)
				{
					SetConsoleTextAttribute(color,4);
						cout<<b;
					Sleep(150);	
					}
				cout<<"\n";
				system("cls");
				system("COLOR 02");
				Welcome1();
				cout<<"\n";
				cout<<" \t\t\t\t _______________________________________________________________\n";
				cout<<"\t\t\t\t|                         SIGN UP                               |\n";
				cout<<"\t\t\t\t|_______________________________________________________________|\n";
				cout<<"\t\t\t\t  USERNAME  : ";
				cin>>uname;
				cout<<"\t\t\t\t  PASSWORD  : ";
				cin>>uid;
				cout<<"\t\t\t\t  MASTER KEY: ";		
				
				cin>>mkey1;
				if(mkey1==mkey)	
				{
					out<<uname<<" ";
					out1<<uid<<" ";
					out.close();
					cout<<"\t\t\t\t _______________________________________________________________\n";
					cout<<"\t\t\t\t|                     WELCOME NEW MEMBER                        |\n";
					cout<<"\t\t\t\t|           NOW YOU CAN LOGIN TO SHOPKEEPER PORTAL              |\n";
					cout<<"\t\t\t\t|_______________________________________________________________|\n";
				}
				else
				{
					cout<<"\t\t\t\t _______________________________________________________________\n";
					cout<<"\t\t\t\t|                     WRONG MASTER KEY                          |\n";
					cout<<"\t\t\t\t|                     ACCESS DENIED!!!                          |\n";
					cout<<"\t\t\t\t|_______________________________________________________________|\n";
				}		
    		break;
    	
				}
    			
	}
	return 0;
}

