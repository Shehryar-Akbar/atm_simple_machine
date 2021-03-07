#include<fstream>
#include<iostream>
#include<windows.h>
#include<string>
#include<iomanip>
#include<conio.h>
using namespace std;
void all_in_one(void);
void instru(void);
void creat(void);
void login(void);
void loading(void);
void start(void);
void access(void);
void deposit(void);
void check(void);
void withdraw(void);	
void menu(void);
/*==============================*/
int mon=50000;

/*===========	THIS IS THE MAIN FUNCTION	=============*/

int main()
{
	all_in_one();
}

/*=========== ALL IN ONE FUNCTION ===============*/
void all_in_one(void)
{
	loading();
	start();
	system("cls");
	login();
}

/*=============== THIS THE FUNCTION FOR THE LOADING OF THE PAGE ==============*/

void loading(void)
{
		system("color 4a");
		cout<<endl<<endl<<endl;
		cout<<"\t\t\t\tPage loading...\n";
		cout<<"\n\n\n\t\t";

		Sleep(1500);cout<<"\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf";
		Sleep(1000);cout<<"\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf";
		Sleep(2000);cout<<"\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf";
		Sleep(200);cout<<"\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf";
		Sleep(1050);cout<<"\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf";
		Sleep(2000);cout<<"\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf";
		system("cls");
}


/*===================== THIS IS THE FUNCTION FOR THE SCREEN DISPLAY OF ATM ==================*/
void start(void)
{	system("color 3f");
cout<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t             *******        ******************************    ***********         ************  "<<endl;Sleep(200);
cout<<"\t\t            *********       ******************************    *************      *************  "<<endl;Sleep(200);
cout<<"\t\t           ***********      ******************************    *************** * **************  "<<endl;Sleep(200);
cout<<"\t\t          *************                 ******                ****** ****************** ******  "<<endl;Sleep(200);
cout<<"\t\t         ******   ******                ******                ******   **************   ******  "<<endl;Sleep(200);
cout<<"\t\t        ******     ******               ******                ******     **********     ******  "<<endl;Sleep(200);
cout<<"\t\t       ******       ******              ******                ******       ******       ******  "<<endl;Sleep(200);
cout<<"\t\t      *********************             ******                ******         **         ******  "<<endl;Sleep(200);
cout<<"\t\t     ***********************            ******                ******                    ******  "<<endl;Sleep(200);
cout<<"\t\t    *************************           ******                ******                    ******  "<<endl;Sleep(200);
cout<<"\t\t   ******               ******          ******                ******                    ******  "<<endl;Sleep(200);
cout<<"\t\t  ******                 ******         ******                ******                    ******  "<<endl;Sleep(200);
Sleep(2000);
}

/*=========== 	THIS IS FOR THE ACCOUNT		=============*/

void creat(void)
{
	system("cls");
	cout<<"Enter any four number code please\t";
	char pswrd1[4];
	string sr1,sr2;
    int i=0;
    while((pswrd1[i]=getch())!='\r')
    	{
		  	cout<<"*";
	    	i++;
		}
	sr1 = pswrd1; 
	for(int i=0; i<sr1.length()-1; i++)	/*== we run the loop total length -1 bcz the last chacter any char array is '\0' which we have to ignoren ==*/
	{
		sr2+=sr1[i];
	}
	cout<<"\nConform your code please\t";
	char pswrd2[4];
	string sr3,sr4;
    int j=0;
    while((pswrd1[j]=getch())!='\r')
    	{
		  	cout<<"*";
	    	j++;
		}
	sr3 = pswrd2; 
	{
		sr4+=sr3[i];
	}
	cout<<"\n Please wait a while we are preparing account for you ";
	Sleep(2000);
	system("cls");
	fstream file;
	file.open("account.txt",ios::out);
	system("cls");
	cout<<"(1)  Enter your name\t"<<endl; 
	char name1[25];
	cin.ignore();
	cin.getline(name1,25);
	file<<"\nNAME:\t"<<name1;
	cout<<endl<<endl;
	char CNIC[13];
	cout<<"(2)  Enter your CNIC number please\t";
	cin>>CNIC;
	file<<"\nCNIC:\t"<<CNIC;
	cout<<endl<<endl;
	char p_no[11];
	cout<<"(4)  Enter your phone number please\t";
	cin>>p_no;
	file<<"\nPHONE NUM:\t"<<p_no;
	file.close();
	cout<<"\n Please remamber your name and code that you have entered"<<endl;
	cout<<endl<<"Enter any key to exit";
	getch();
	exit(0);
}

/*========= 	THIS IS THE FUNCTION OF THE LOGIN	===========*/

void login(void)													
{													    
	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t****************************************************************"<<endl;
	cout<<"\t\t\t****************************************************************"<<endl;  
	cout<<"\t\t\t****************************************************************"<<endl;           
	cout<<"\t\t\t*********                                              *********"<<endl;
	cout<<"\t\t\t*********    Enter 1 to access your account            *********"<<endl;
	cout<<"\t\t\t*********                                              *********"<<endl;
	cout<<"\t\t\t*********    Enter 2 to creat a new account            *********"<<endl;
	cout<<"\t\t\t*********                                              *********"<<endl;
	cout<<"\t\t\t*********    Enter 0 to exit                           *********"<<endl;
	cout<<"\t\t\t*********                                              *********"<<endl;
	cout<<"\t\t\t****************************************************************"<<endl;
	cout<<"\t\t\t****************************************************************"<<endl;
	cout<<"\t\t\t****************************************************************"<<endl;  
	int n1;   
	cout<<"\t\t\t\t\t\t"; 
	cin>>n1;                                           
	switch(n1)                                         
		{                                             
			case 1:                                   
				{                               
					access();    
					break;                 
				}	                             
			case 2:                           
				{                         
					creat();
					break;	          
				}
			case 0:
				exit(0);	                     
		}                                	                                  
}                                        

/*============== THIS IS THE SECOND ACCOUNT FUNCTION =================*/

void access(void)
{
	system("color 3b");
	system("cls");
	again:
	char name2[25];
	cout<<"Enter your name   ";
	cin.ignore();
	cin.getline(name2,25);
	cout<<"\nEnter code   ";
	char pswrd2[4];
	string sr3,sr4;
	int i=0;
	while((pswrd2[i]=getch())!='\r')
	{
		cout<<"*";
		i++;
	}
	sr3 = pswrd2; 				    
	for(int i=0; i<sr3.length()-1; i++)	
	// we run the loop total length -1 bcz the last chacter any char array is '\0' which we have to ignore
	{
		sr4+=sr3[i];
	}	
	cout<<endl<<endl;
	Sleep(1500);cout<<"\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf";
	Sleep(1000);cout<<"\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf";
	Sleep(2000);cout<<"\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf";
	system("color f2");
	system("cls");	
	
	/*============== CALL TO MENU() FUNCTION =================*/		
	menu();	
}




/*=================== THIS IS THE MENU FUNCTION ===================*/


void menu(void)
{
		cout<<"Ener 1 to withdraw the money"<<endl;
		cout<<"Enter 2 to deposit the money"<<endl;
		cout<<"Enter 3 to check the money\n"<<endl;
		cout<<"Enter 0 to exit"<<endl;
		int n;
		cin>>n;
		switch(n)
		{
			case 1:
				{
					withdraw();
					break;
				}							
			case 2:	
				{
					deposit();
					break;
				}
			case 3:
				{							
					check();
					break;																								
				}
			case 0:
			{
				exit(0);
			}					
		}	
}



/*=============== THIS IS THE FUNCTION OF CHECKING THE MONEY ======================*/

void check(void)
{
	fstream file;
	file.open("account.txt",ios::in);
	string line;
	while(!file.eof())
	{
		getline(file,line);
		cout<<line<<endl;
	}
	cout<<"Balance: 40000";
	file.close();
	cout<<"\n=====================\n";
	cout<<endl;
	int n;
	cout<<"Press 1 to go back to manu";
	cout<<"\nPress 0 to exit "<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			{
				system("cls");
				menu();
			}
		case 0:
			{
				exit(0);
			}
	}
}


/*================= THIS IS THE FUNCTION OF THE WITHDRAW =====================*/

void withdraw(void)
{
	
	int n1;
	cout<<"Enter the amount please in multiple of 500(PKr) ";
	cin>>n1;
	if(n1 % 500 == 0)
	{
		if(mon > n1)
		{
			mon=mon-n1;
			cout<<"your balence is successful withdrawed\n";
			cout<<"will you wish to make another transection (Y/N) ";
			char op1;
	 		cin>>op1;
	 		if (op1 =='Y' || op1 =='y')
			 {
				{
					system("cls");
					menu();
				}	
			}
		 	else if(op1 =='n' || op1 =='N')
			 {
		 		cout<<"\nDo you wish to print a receipt (Y/N): ";
		 		char op2;
		 		cin>>op2;
		 		if (op2 =='Y' || op2 =='y')
				{
					fstream file;
					file.open("account.txt",ios::in);
					string line;
					while(!file.eof())
					{
						getline(file,line);
						cout<<line<<endl;
					}
					file.close();
					cout<<"Date: 27/1/2021\n";
					cout<<"Balance: 20500";
				}
			 	else if(op2 =='n' || op2 =='N')
			 	{
			 		cout<<"Enter any key to exit";
			 		getch();
			 		exit(0);
				}
			}	
		}
		else
		{
			cout<<"\nYour entered amount is greater then the stored amount ";
			int n2;
			cout<<"\n1 to go back ";
			cout<<"\n0 to exit"<<endl;
			cin>>n2;
			switch(n2)
			{
				case 1:
					{
						system("cls");
						withdraw();
						break;
					}
				case 2:
					exit(0);
			}
		}
	}
	else
	{
		cout<<"Enter amount is not multiple of 500 "<<endl;
		cout<<"Press enter to re-enter the amount";
		getch();
		system("cls");
		withdraw();
	}
}


/*================== THIS IS THE deposit() FUNCTION =========================*/


void deposit(void)
{
	long int n1;
	cout<<"Enter the amount please in multiple of 500(PKr) ";
	cin>>n1;
	long n2=n1/500;
	if(n1 % 500 == 0)
	{
		if(mon > n1)
			{
				mon=mon-n1;
				cout<<"your balence is successful deposited\n";
				cout<<"will you wish to make another transection (Y/N) ";
				char op1;
		 		cin>>op1;
		 		if (op1 =='Y' || op1 =='y')
				 {
					{
						system("cls");
						menu();
					}	
				}
			 	else if(op1 =='n' || op1 =='N')
				 {
			 		cout<<"\nDo you wish to print a receipt (Y/N): ";
			 		char op2;
			 		cin>>op2;
			 		if (op2 =='Y' || op2 =='y')
					{
						fstream file;
						file.open("account.txt",ios::in);
						string line;
						while(!file.eof())
						{
							getline(file,line);
							cout<<line<<endl;
						}
						file.close();
					}
				 	else if(op2 =='n' || op2 =='N')
				 	{
				 		cout<<"Enter any key to exit";
				 		getch();
				 		exit(0);
					}
			}
			else
			{
				cout<<"\nYour entered amount is greater then the stored amount ";
				int n3;
				cout<<"\n1 to go back ";
				cout<<"\n0 to exit"<<endl;
				cin>>n3;
				switch(n3)
				{
					case 1:
						{
							system("cls");
							withdraw();
							break;
						}
					case 2:
						exit(0);
				}
			}
		}
		else
		{
			cout<<"Enter amount is not multiple of 500 "<<endl;
			cout<<"Press enter to re-enter the amount";
			getch();
			system("cls");
			deposit();
		}
	}

}



