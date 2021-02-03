#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;
class books
{
	private:
	char bkname[20];
	char bknmbr[10];
	char authorname[20];
	public:
		void addbooks();
		void searchbooks();
		void showbook();
		void updatebooks();
		void removebook(); 
		void serchbkan();
		void searchbkbk();
		};
class student
{
	private:
	char stid[15];
	char bkname[20];
	char bknmbr[10];
	char authorname[20];
	int dd;
	int mm;
	int yy;
	int dd1;
	int mm1;
	int yy1;
	int fine;
	public:
		void issuebook();
		void showstrecord();
		void returnbook();
		void show1();
		void rembooks();
		void showbook();
		}		;
void books::addbooks()
{  
	ofstream qq;
	ifstream pp;
	books bk;
	qq.open("tt.txt",ios::app);
	//for(int i=0;i<=0;i++)
	{
		cout<<"ENTER BOOKNAME,AUTHORNAME,BOOKNUMBER RESPECTIVELY AFTER PRESSING ENTER AFTER EACH NAME:"<<endl;
		cin>>bk.bkname>>bk.authorname>>bk.bknmbr;
		qq<<bk.bkname<<" "<<bk.authorname<<" "<<bk.bknmbr<<" "<<endl;
		cout<<"BOOK ADDED: "<<setw(10)<<bk.bkname<<endl<<"AUTHOR: "<<setw(10)<<bk.authorname<<endl<<"NUMBER: "<<setw(10)<<bk.bknmbr;
	}
	qq.close();
	pp.close();	
}
void books::showbook()
{
	books bk;
	ifstream b;
	ofstream c;
	b.open("tt.txt",ios::in);
	cout<<"BOOKNAME"<<setw(20)<<"AUTHORNAME"<<setw(20)<<"BOOKNUMBER"<<setw(10)<<endl;
	while(!b.eof()){
	
 	b>>bk.authorname>>bk.bkname>>bk.bknmbr;	
	cout<<bk.authorname<<setw(10)<<bk.bkname<<setw(10)<<bk.bknmbr<<setw(10)<<endl;
	}
//	cout<<bk.authorname<<bk.bkname<<bk.bknmbr<<endl;}
}
void books::searchbooks()

		{
		books bk;
		cout << "ENTER BOOK NAME "; string nm,nm2,nm3, nm1; cin>> nm; 
		ifstream b;
		b.open("tt.txt");
		while(!b.eof())
		{
			b >> nm1;
			b >> nm2;
			b >> nm3;
			if(nm1 == nm){
				getline(b, nm1);
				//getline(b,nm1);
				cout <<"BOOK NAME"<<setw(10)<<nm <<nm1<<endl<<"AUTHOR NAME"<<setw(10)<<nm2<<endl<<"BOOK NUMBER"<<setw(10)<<nm3<< endl;
			}
		}
		b.close();
		}
void books::serchbkan()
 {
	books bk;
		cout << "ENTER AUTHOR NAME "; string nm,nm2,nm3, nm1; cin>> nm; 
		ifstream b;
		b.open("tt.txt");
		while(!b.eof())
		{
			b >> nm1;
			b>> nm2;
			b>> nm3;
			if(nm2 == nm){
				getline(b, nm2);
				//getline(b,nm1);
				cout <<"BOOK NAME"<<setw(15) <<nm1<<endl<<"AUTHOR NAME"<<setw(15)<<nm<<nm2<<endl<<"BOOK NUMBER"<<setw(15)<<nm3<< endl;
			}
		}
		b.close();
		}		
		
	void books::searchbkbk()	
	{
	books bk;
		cout << "ENTER BOOK SHELF NUMBER: "; string nm,nm2,nm3, nm1; cin>> nm; 
		ifstream b;
		b.open("tt.txt");
		while(!b.eof())
		{
			b >> nm1;
			b>> nm2;
			b>> nm3;
			if(nm3 == nm){
				getline(b, nm3);
				//getline(b,nm1);
				cout <<"BOOK NAME"<<setw(15) <<nm1<<endl<<"AUTHOR NAME"<<setw(15)<<nm2<<endl<<"BOOK NUMBER"<<setw(15)<<nm<<nm3<< endl;
			}
		}
		b.close();
		}		
				
void books::updatebooks()
		{
		books z;
		ifstream b;
		ofstream d;
		b.open("tt.txt",ios::in);
		d.open("gg.txt");
		string s2,temp,s3 ,s4;
	    string v;
		cout<<"ENTER THE BOOKNAME AUTHORNAME BOOKNUMBER RESPECTIVELY AFTER PRESSING ENTER EACH ENTRY:"<<endl;
		cin>>s2>>s3>>s4;
		string h,j,k;
		while(getline(b,v))
//	while(!b.eof())
		{
			  if(v!=(s2+" "+s3+" "+s4))
			  {
			  	d<<v<<endl;
			  }
			  else if(v==(s2+" "+s3+" "+s4))
			  {
			  	cout<<"enter the updated records"<<endl;
			  	cin>>h>>j>>k;
			  	d<<h<<" "<<j<<" "<<k<<endl;
			  	cout<<"BOOKNAME "<<h<<" "<<endl<<"AUTHORNAME "<<j<<endl<<" "<<"BOOKNUMBER "<<k<<endl;
			  }
		}
		b.close();
		d.close();
		remove("tt.txt");
		rename("gg.txt","tt.txt");
		ofstream c;
		c.open("tt.txt",ios::app);
	//	c<<h<<" "<<j<<" "<<k<<endl;
		c.close();
		//z.showbook();
		}
void books::removebook()	
{
	    books z;
		ifstream b;
		ofstream d;
		b.open("tt.txt",ios::in);
		d.open("gg.txt");
		string s2,temp,s3 ,s4;
        	//cin>>s2>>s3>>s4; // "hhh iii 888";
        	string v;
        	cout<<"ENTER THE BOOKNAME AUTHORNAME BOOKNUMBER RESPECTIVELY AFTER PRESSING ENTER EACH ENTRY:"<<endl;
			cin>>s2>>s3>>s4;
			string r = v;
		string h,j,k;//	void books::viewbookss() = v;
		while(getline(b,temp))
		{
			  if(temp!=(s2+" "+s3+" "+s4))
			  {
			  	d<<temp<<endl;
			  }
			  else if(temp==(s2+" "+s3+" "+s4))
			  {
			  	continue;
			  }
		}
		b.close();
		d.close();
		remove("tt.txt");
		rename("gg.txt","tt.txt");
	//	string h,j,k;
	//	cout<<"enter"<<endl;
	//	cin>>h>>j>>k;
		ofstream c;
		
		c.open("tt.txt",ios::app);
		//c<<h<<j<<k;
		c.close();
	
		}
void student :: issuebook()	
{
	student st;
	ifstream a;
	a.open("tt.txt");
	ofstream b;
	b.open("ss.txt",ios::app);
	cout<<"enter student registration number:"<<endl;
	cin>>st.stid;
	//b<<st.stid;
	cout<<"enter the book you want to issue please book name:"<<endl;

    string bk,an,bn, bk1; cin>> bk; 
		int dd,mm,yy,dd1,mm1,yy1;
	
		while(!a.eof())
		{
			a >> bk1;
			a >> an;
			a >> bn;
			if(bk1 == bk){
				getline(a,bk1);
				//getline(b,nm1);
				cout <<"book is available:"<<" "<<"Book name: "<<bk<<bk1<<endl<<"Author name: "<<an<<endl<<"Book number: "<<bn<<endl;
				b<<bk<<bk1<<" "<<an<<" "<<bn<<" "<<st.stid<<" ";
				break;
				
	}	
	else
	{
		//cout<<"book is not available"<<endl;
	}}
	getline(a,bk1);
//	getline(a,);
	//cout<<"enter date of issuing book in DD-MM-YY"<<endl;
//	cin>>st.dd>>st.mm>>st.yy;
	//b<<st.dd<<"-"<<st.mm<<"-"<<st.yy<<" ";
	cout<<"enter date of returning book"<<endl;
	cin>>st.dd>>st.mm>>st.yy;
	b<<st.dd<<"-"<<st.mm<<"-"<<st.yy<<" "<<endl;
	cout<<"BOOK ISSUED SUCCESSFULLY"<<endl;
	a.close();
	b.close();		
	 books z;
		ifstream e;
		ofstream d;
		e.open("tt.txt",ios::in);
		d.open("gg.txt");
		string s2,temp,s3 ,s4;
        	//cin>>s2>>s3>>s4; // "hhh iii 888";
        	string v;
        	cout<<"enter the book its author and its number respectively to confirm its issue status:"<<endl;
			cin>>s2>>s3>>s4;
			string r = v;
		string h,j,k;//	void books::viewbookss() = v;
		while(getline(e,temp))
		{
			  if(temp!=(s2+" "+s3+" "+s4))
			  {
			  	d<<temp<<endl;
			  }
			  else if(temp==(s2+" "+s3+" "+s4))
			  {
			  	continue;
			  }
		}
		e.close();
		d.close();
		remove("tt.txt");
		rename("gg.txt","tt.txt");
	//	string h,j,k;
	//	cout<<"enter"<<endl;
	//	cin>>h>>j>>k;
		ofstream c;
		
		c.open("tt.txt",ios::app);
		 //c<<h<<j<<k;
		c.close();
	
		}
		

void student::showstrecord() //FUNCTION FOR RETURNING BOOK
{
	string aa,bb,cc,dd,ee,ff;
    student st;
	books bk;
    ifstream a;
    ofstream b;
    ofstream c;
    ofstream z;
    int d,d1,m,m1,y,y1;
    a.open("ss.txt");
    b.open("tt.txt",ios::app);
    c.open("ss.txt",ios::app);
    z.open("aa.txt",ios::app);
    cout<<"enter student registration number"<<endl;
	string s;
	cin>>s;
	while(!a.eof())
	{
		a>>aa>>bb>>cc>>dd>>ee;
		if(dd==s)
		{
			getline(a,dd);
			//z<<s<<" "<<aa<<" "<<bb<<" "<<cc<<" "<<dd<<" "<<ee<<" "<<ff<<endl;
			cout<<s<<aa<<bb<<cc<<dd<<ee<<ff<<endl;
			
		}
	}
	cout<<"enter the date displayed on the screen now on which stufent has to must return the book: "<<endl;
	cin>>d>>m>>y;
	cout<<"enter todays date"<<endl;
	cin>>d1>>m1>>y1;
	int fine=0;
	if(d1>d&&m1>m&&y1>=y)
    {
    	fine =fine+10;
	}
	else if(m1>m&&y1>=y)
	{
		fine =fine+10;
	}
	else if (d1>d&&y1>=y)
	{
		fine =fine+10;
	}
	else
	{
		fine=0;
	}
	while(!a.eof())
	{
	    a>>aa>>bb>>cc>>dd>>ee;
		if(dd==s)	
		{
			getline(a,dd);
				z<<s<<" "<<aa<<" "<<bb<<" "<<cc<<" "<<dd<<" "<<ee<<" "<<ff<<fine<<endl;
	cout<<"STUDENTREGNO: "<<s<<endl<<"BOOKNAME: "<<aa<<endl<<"AUTHORNAME: "<<bb<<endl<<"BOOKNUMBER"<<cc<<endl<<"BOOKRETDATEthatTIME: "<<dd<<" "<<ee<<" "<<ff<<endl<<"FINE: "<<fine<<endl;
		}
	}
//	z<<s<<" "<<aa<<" "<<bb<<" "<<cc<<" "<<dd<<" "<<ee<<" "<<ff<<fine<<endl;
//	cout<<"STUDENTREGNO: "<<s<<endl<<"BOOKNAME: "<<aa<<endl<<"AUTHORNAME: "<<bb<<endl<<"BOOKNUMBER"<<cc<<endl<<"BOOKRETDATEthatTIME: "<<dd<<" "<<ee<<" "<<ff<<endl<<"FINE: "<<fine<<endl;
	a.close();
	b.close();
	c.close();
			}		
			
void student::show1()
{
	string aa,bb,cc,dd,ee,ff;
    student st;
	books bk;
    ifstream a;
   ofstream b;
    ofstream c;
    ifstream z;
    int d,d1,m,m1,y,y1;
    a.open("ss.txt");
    b.open("tt.txt",ios::app);
    c.open("ss.txt",ios::app);
    z.open("aa.txt");
    cout<<"enter student registration number"<<endl;
	string s;
	cin>>s;
	while(!z.eof())
	{
		z>>aa>>bb>>cc>>dd>>ee;
		if(dd==s)
		{
			getline(a,dd);
			//z<<s<<" "<<aa<<" "<<bb<<" "<<cc<<" "<<dd<<" "<<ee<<" "<<ff<<endl;
			//cout<<s<<aa<<bb<<cc<<dd<<ee<<ff<<endl;
		}
	}
    cout<<"STUDENTREGNO: "<<s<<endl<<"LASTBOOKRETDATE: "<<aa<<endl<<"FINE "<<bb<<endl<<"BOOKNAME: "<<cc<<endl<<"AUTHORNAME: "<<dd<<endl<<"BOOKNUMBER: "<<fine<<endl;
	//cout<<s<<" "<<aa<<" "<<bb<<" "<<cc<<" "<<dd<<" "<<ee<<" "<<ff<<fine<<endl;
	a.close();
	b.close();
	c.close();
			}		
			
	int main();
void librarian();	
void slibrarian()
{
    //system("cls");
	int p;
		int x;
		books bk;
		student st;			
		cout<<"********NOW YOU CAN MANAGE LIBRARY AS A LIBRARIAN*************"<<endl;
		cout<<"        SEE BELOW FOR MANAGING SUITABLE OPERATIONS FOR LIBRARY"<<endl;
		cout<<"        1-ADD A NEW BOOK TO LIBRARY"<<endl;
		cout<<"        2-SEARCH A BOOK BY ITS NAME"<<endl;
		cout<<"        3-SEARCH A BOOK BY ITS AUTHOR NAME"<<endl;
		cout<<"        4-SEARCH A BOOK BY ITS NUMBER"<<endl;
		cout<<"        5-UPDATE AN EXISTING BOOK"<<endl;
		cout<<"        6-REMOVE AN EXISTING BOOK"<<endl;
		cout<<"        7-ISSUE A BOOK TO STUDENT"<<endl;
		cout<<"        8-RETURN A BOOK FROM STUDENT"<<endl;
		cout<<"        9-SHOW ALL REMAINING BOOKS"<<endl;
		cout<<"        0-SEARCH A STUDENT RECORD"<<endl;
		cout<<"********IMPORTANT NOTE-USE '_' INPLACE OF SPACE WHEREEVER YOU WANT TO USE SPACE**************"<<endl;
		cout<<"ENTER: "; 
		cin>>x;
		if(x==1)
		{
			bk.addbooks();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==2)
		{
			bk.searchbooks();
			
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==3)
		{
			bk.serchbkan();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==4)
		{
			bk.searchbkbk();
				cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==5)
		{
			bk.updatebooks();
				cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==6)
		{
			bk.removebook();
				cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==7)
		{
			st.issuebook();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==8)
		{
			st.showstrecord();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==9)
		{
			bk.showbook();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==0)
		{
			st.show1();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==11)
		{
			main();
		}
			
	else
	{
		system("cls");
		for(int k=0;k<=4;k++){
			librarian();
		}	
	                 //system("exit");
	}
	}
	
void ssts()
{
	books bk;
	student st;
	int l;
	cout<<"***********NOW YOU CAN ACCESS LIBRARY AS A STUDENT***************"<<endl;
	cout<<"           ENTER A SUITABLE OPTION TO ACCESS"<<endl;
	cout<<"           1-SHOW BOOKS PRESENT IN LIBRARY"<<endl;
	cout<<"           2-SEARCH BOOK BY ITS NAME"<<endl;
	cout<<"           3-SEARCH BOOK BY ITS AUTHORNAME"<<endl;
	cout<<"           4-SEARCH BOOK BY ITS SHELFNUMBER"<<endl;
	cout<<"           5-SEARCH SPECIFIC STUDENT RECORD"<<endl;
	cout<<"           6-MAIN MENU"<<endl;
	cout<<"ENTER"; cin>>l;
	if(l==1){
		bk.showbook();
		ssts();
	}
	if(l==2){
		bk.searchbooks();
		ssts();
	//	sts();
	}
	if(l==3){
		bk.serchbkan();
		ssts();
	//sts();
	}
	if(l==4){
		bk.searchbkbk();
		ssts();
	//sts();
	}
	if(l==5){
		st.show1();
		ssts();
	//sts();
	}
	if(l==6){
		main();	
	}
	else
	{
		main();
	}
	
		}		
void sts()
{
	system("cls");
	books bk;
	student st;
	int l;
	cout<<"***********NOW YOU CAN ACCESS LIBRARY AS A STUDENT*************"<<endl;
	cout<<"           ENTER A SUITABLE OPTION TO ACCESS"<<endl;
	cout<<"           1-SHOW BOOKS PRESENT IN LIBRARY"<<endl;
	cout<<"           2-SEARCH BOOK BY ITS NAME"<<endl;
	cout<<"           3-SEARCH BOOK BY ITS AUTHORNAME"<<endl;
	cout<<"           4-SEARCH BOOK BY ITS SHELFNUMBER"<<endl;
	cout<<"           5-SEARCH SPECIFIC STUDENT RECORD"<<endl;
	cout<<"           6-MAIN MENU"<<endl;
	cout<<"********IMPORTANT NOTE-USE '_' INPLACE OF SPACE WHEREEVER YOU WANT TO USE SPACE**************"<<endl;
	cout<<"ENTER"; cin>>l;
	if(l==1){
		bk.showbook();
        ssts();
	}
	if(l==2){
		bk.searchbooks();
		ssts();
     //	sts();
	}
	if(l==3){
		bk.serchbkan();
		ssts();
	//	sts();
	}
	if(l==4){
		bk.searchbkbk();
		ssts();
	//	sts();
	}
	if(l==5){
		st.show1();
		ssts();
	//	sts();
	}
	if(l==6){
		main();		
	}
	else
	{
		main();
	}
	
						}						
void librarian()
	
	
	{ system("CLS");
	 int p;
		int x;
		books bk;
		student st;			
		cout<<"********NOW YOU CAN MANAGE LIBRARY AS A LIBRARIAN*************"<<endl;
		cout<<"        SEE BELOW FOR MANAGING SUITABLE OPERATIONS FOR LIBRARY"<<endl;
		cout<<"        1-ADD A NEW BOOK TO LIBRARY"<<endl;
		cout<<"        2-SEARCH A BOOK BY ITS NAME"<<endl;
		cout<<"        3-SEARCH A BOOK BY ITS AUTHOR NAME"<<endl;
		cout<<"        4-SEARCH A BOOK BY ITS NUMBER"<<endl;
		cout<<"        5-UPDATE AN EXISTING BOOK"<<endl;
		cout<<"        6-REMOVE AN EXISTING BOOK"<<endl;
		cout<<"        7-ISSUE A BOOK TO STUDENT"<<endl;
		cout<<"        8-RETURN A BOOK FROM STUDENT"<<endl;
		cout<<"        9-SHOW ALL REMAINING BOOKS"<<endl;
		cout<<"        0-SEARCH A STUDENT RECORD"<<endl;
		cout<<"********IMPORTANT NOTE-USE '_' INPLACE OF SPACE WHEREEVER YOU WANT TO USE SPACE**************"<<endl;
		cout<<"ENTER: "; 
		cin>>x;
		if(x==1)
		{
			bk.addbooks();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==2)
		{
			bk.searchbooks();		
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER:"<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==3)
		{
			bk.serchbkan();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==4)
		{
			bk.searchbkbk();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==5)
		{
			bk.updatebooks();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==6)
		{
			bk.removebook();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
                slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
	            system("exit");
			}
		}
		if(x==7)
		{
			st.issuebook();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1)
			{
	     		slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==8)
		{
			st.showstrecord();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==9)
		{
			bk.showbook();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "<<endl; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==0)
		{
			st.show1();
			cout<<"ENTER THE OPTION YOU WANT TO CHOOSE"<<endl;
			cout<<"1-MANAGE AS LIBRARIAN"<<endl;
			cout<<"2-MAIN MAENU"<<endl;
			cout<<"3-EXIT"<<endl;
			cout<<"ENTER: "; cin>>p;
			if(p==1){
				slibrarian();
			}
			if(p==2)
			{
				main();
			}
			if(p==3)
			{
				system("exit");
			}
		}
		if(x==11)
		{
			main();
		}
			
	else
	{
		system("cls");
		for(int k=0;k<=4;k++){
			librarian();
		}
		
		//system("exit");
	}
	}
int main()
{
	books bk;
	student st;
	ifstream b;
	b.open("mm.txt");
	int x;
	string g,h,i,j;
	int c;
	cout<<endl<<endl<<endl<<"******************************WELCOME TO LIBRARY MANAGEMENT SYSTEM OF UET LAHORE****************************************"<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                                   "<<endl;
	cout<<"                                ENTER 1,2 FOR SUITABLE LOGIN OPTION"<<endl;
	cout<<"                                1-LIBRARIAN"<<endl;
	cout<<"                                2-STUDENT"<<endl;
	cout<<"                                3-EXIT"<<endl;
	cout<<"                                enter: "; cin>>c;
	if(c==1)
	{
	system("CLS");
	cout<<"ENTER THE USERNAME and PASSWORD OF LIBRARIAN"<<endl;
	cout<<"USERNAME: ";
	cin>>g;
	cout<<"PASSWORD: ";
	cin>>h;
	b>>i>>j;
	if(i==g&&j==h)
	{
		system("CLS");
		cout<<"********NOW YOU CAN MANAGE LIBRARY AS A LIBRARIAN*************"<<endl;
		cout<<"        SEE BELOW FOR MANAGING SUITABLE OPERATIONS FOR LIBRARY"<<endl;
		cout<<"        1-ADD A NEW BOOK TO LIBRARY"<<endl;
		cout<<"        2-SEARCH A BOOK BY ITS NAME"<<endl;
		cout<<"        3-SEARCH A BOOK BY ITS AUTHOR NAME"<<endl;
		cout<<"        4-SEARCH A BOOK BY ITS NUMBER"<<endl;
		cout<<"        5-UPDATE AN EXISTING BOOK"<<endl;
		cout<<"        6-REMOVE AN EXISTING BOOK"<<endl;
		cout<<"        7-ISSUE A BOOK TO STUDENT"<<endl;
		cout<<"        8-RETURN A BOOK FROM STUDENT"<<endl;
		cout<<"        9-SHOW ALL REMAINING BOOKS"<<endl;
		cout<<"        0-SEARCH A STUDENT RECORD"<<endl;
		cout<<"        11-MAIN MENU"<<endl;
		cout<<"********IMPORTANT NOTE-USE '_' INPLACE OF SPACE WHEREEVER YOU WANT TO USE SPACE**************"<<endl;
		cout<<"ENTER: "; 
		cin>>x;
		if(x==1)
		{
	        bk.addbooks();
	        slibrarian();
	      }
		if(x==2)
		{
			bk.searchbooks();
			slibrarian();
		}
		if(x==3)
		{
			bk.serchbkan();
			slibrarian();
		}
		if(x==5)
		{
			bk.updatebooks();
			slibrarian();
		}
		if(x==6)
		{
			bk.removebook();
			slibrarian();
		}
		if(x==7)
		{
			st.issuebook();
			slibrarian();
		}
		if(x==8)
		{
			st.showstrecord();
			slibrarian();
		}
		if(x==9)
		{
			bk.showbook();
			slibrarian();
		}
		if(x==0)
		{
			st.show1();
			slibrarian();
		}
		if(x==11)
		{
			main();
		}
		}
	
	else
	{	
	cout<<"?????????ENTER CORRECT USERNAME OR PASSWORD??????????"<<endl;
	cout<<"USERNAME: ";
	cin>>g;
	cout<<"PASSWORD: ";
	cin>>h;
	b>>i>>j;
	if(i==g&&j==h)
	{
		system("CLS");
	librarian();
	}}
		
	}
	if(c==2)
	{
		sts();
	}
	if(c==3){
		system("exit");
	}
		}	
	

