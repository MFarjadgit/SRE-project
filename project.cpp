#include<iostream>
using namespace std;

class place{
	public:
		string a,d;
		char k[100];
		double b;
		double c;
		double h;
		int price;
		float per;
		double payment;
		virtual void info()=0;
		virtual void city()=0;
	
};
class Lahore: public place{
	public:
	
		void info()
		{
			cout<<"               ---------------------------     "<<endl;
			cout<<"               Welcome to Explore Pakistan     "<<endl;
			cout<<"               ---------------------------     "<<endl;
			
			cout<<"\n	 ***************************************************************"<<endl;
			cout<<"\t We arrange trips to different cities of Pakistan from Islamabad "<<endl;
			cout<<"\t  *************************************************************** "<<endl;
			cout<<"\n";
		}
	
	void city()
	{
	
		cout<<"|List of cities|"<<endl;
		cout<<"\n";
		cout<<"1. Lahore"<<endl;
		cout<<"2. Karachi"<<endl;
		cout<<"3. Kashnir"<<endl;
	}
	

		void dur(){
			cout<<"\n";
			cout<<"We arrange trip to Lahore for"<<endl;
			cout<<"\n";
			cout<<"1. 7 days"<<endl;
			cout<<"2. 15 days"<<endl;
		}
		void cost(){
			cout<<"\n";
			cout<<"|Pacakge|"<<endl;
			cout<<"\n";
			cout<<"1. 10,000 PKR for 7 days"<<endl;
			cout<<"2. 20,000 PKR for 15 days"<<endl;
			cout<<"\n";
			cout<<"This cost includes Transport, 3 times meal and stay in hotel"<<endl;
		}
		void sh(){
			cout<<"\n";
			cout<<"As you have chosen 7 days package"<<endl;
			cout<<"\n";
			cout<<"You have to pay 5000 PKR as advance and remaining at departure time "<<endl;
			cout<<"\n";
			
		
		}
		void lo(){
			cout<<"\n";
			cout<<"As you have chosen 15 days package"<<endl;
			cout<<"\n";
			cout<<"You have to pay 10,000 PKR as advance and remaining at departure time"<<endl;
			cout<<"\n";
		}
		void payment()
		{
			cout<<"*********************\n";
			cout<<"Pay with Card or Cash\n";
			cout<<"*********************\n";
			cout<<"1.Card\n";
			cout<<"2.Cash\n";
		}	
		void pay(){
			cout<<"Press 1 to continue payment or 2 to cancel"<<endl;
		}
	
		
};
class Karachi: public place{
	public:
		void info()
		{
			cout<<"               ---------------------------     "<<endl;
			cout<<"               Welcome to Explore Pakistan     "<<endl;
			cout<<"               ---------------------------     "<<endl;
			cout<<"\n";
			cout<<"		***************************************************************"<<endl;
			cout<<"		We arrange trips to different cities of Pakistan from Islamabad "<<endl;
			cout<<"     *************************************************************** "<<endl;
			cout<<"\n";
		}

	void city()
	{
		
		cout<<"|List of cities|"<<endl;
		cout<<"\n";
		cout<<"1. Lahore"<<endl;
		cout<<"2. Karachi"<<endl;
		cout<<"3. Kashnir"<<endl;
	}
		void dur(){
			cout<<"\n";
			cout<<"We arrange trip to Karachi for"<<endl;
			cout<<"\n";
			cout<<"1. 7 days"<<endl;
			cout<<"2. 10 days"<<endl;
			cout<<"3. 15 days"<<endl;
		}
		void cost(){
			cout<<"\n";
			cout<<"|Pacakge|"<<endl;
			cout<<"\n";
			cout<<"1. 18,000 PKR for 7 days"<<endl;
			cout<<"2. 23,000 PKR for 10 days"<<endl;
			cout<<"3. 35,000 PKR for 15 days"<<endl;
			cout<<"\n";
			cout<<"This cost includes Transport, 3 times meal and stay in hotel"<<endl;
		}
		void sh(){
			cout<<"\n";
			cout<<"As you have chosen 7 days package"<<endl;
			cout<<"\n";
			cout<<"You have to pay 10,000 PKR as advance and remaining at departure time "<<endl;
			cout<<"\n";
		}
		void med(){
			cout<<"\n";
			cout<<"As you have 10 days package"<<endl;
			cout<<"\n";
			cout<<"You have to pay 13,000 PKR as advance and remaining at departure time"<<endl;
			cout<<"\n";
		}
		void lo(){
			cout<<"\n";
			cout<<"As you have chosen 15 days package"<<endl;
			cout<<"\n";
			cout<<"You have to pay 20,000 PKR as advance and remaining at departure time"<<endl;
			cout<<"\n";
		}
		void payment()
		{
			cout<<"*********************\n";
			cout<<"Pay with Card or Cash\n";
			cout<<"*********************\n";
			cout<<"1.Card\n";
			cout<<"2.Cash\n";
		}		
		void pay(){
			cout<<"Press 1 to continue payment or 2 to cancel"<<endl;
		}
};
class Kashmir:public place{
	public:
		void info()
		{
			cout<<"               ---------------------------     "<<endl;
			cout<<"               Welcome to Explore Pakistan     "<<endl;
			cout<<"               ---------------------------     "<<endl;
			cout<<"\n";
			cout<<"		***************************************************************"<<endl;
			cout<<"		We arrange trips to different cities of Pakistan from Islamabad "<<endl;
			
			cout<<"     *************************************************************** "<<endl;
			cout<<"\n";
		}

	void city()
	{
	
		cout<<"\n";
		cout<<"|List of cities|"<<endl;
		cout<<"\n";
		cout<<"1. Lahore"<<endl;
		cout<<"2. Karachi"<<endl;
		cout<<"3. Kashnir"<<endl;
	}
		void dur(){
			cout<<"\n";
			cout<<"We arrange trip to Kashmir for"<<endl;
			cout<<"\n";
			cout<<"1. 7 days"<<endl;
			cout<<"2. 10 days"<<endl;
			cout<<"3. 15 days"<<endl;
		}
		void cost(){
			cout<<"\n";
			cout<<"|Pacakge|"<<endl;
			cout<<"\n";
			cout<<"1. 15,000 PKR for 7 days"<<endl;
			cout<<"2. 20,000 PKR for 10 days"<<endl;
			cout<<"3. 28,000 PKR for 15 days"<<endl;
			cout<<"\n";
			cout<<"This cost includes Transport, 3 times meal and stay in hotel"<<endl;
		}
		void sh(){
			cout<<"\n";
			cout<<"As you have chosen 7 days package"<<endl;
			cout<<"\n";
			cout<<"You have to pay 7,000 PKR as advance and remaining at departure time "<<endl;
			cout<<"\n";
			
		}
		void med(){
			cout<<"\n";
			cout<<"As you have 10 days package"<<endl;
			cout<<"\n";
			cout<<"You have to pay 10,000 PKR as advance and remaining at departure time"<<endl;
			cout<<"\n";
		}
		void lo(){
			cout<<"\n";
			cout<<"As you have chosen 15 days package"<<endl;
			cout<<"\n";
			cout<<"You have to pay 15,000 PKR as advance and remaining at departure time"<<endl;
			cout<<"\n";
		}
		void payment()
		{
			cout<<"*********************\n";
			cout<<"Pay with Card or Cash\n";
			cout<<"*********************\n";
			cout<<"1.Card\n";
			cout<<"2.Cash\n";
		}		
		void pay(){
			cout<<"Press 1 to continue payment or 2 to cancel"<<endl;
		}
};
int main(){
	place *p[3];
	Lahore la;
	Karachi ki;
	Kashmir ka;
	p[0]=&la;
	p[1]=&ki;
	p[2]=&ka;
	string choice;
	do
	{
		p[0]->info();
		p[0]->city();
		int x,y,z,f,ad;
		int price,per,payment;
		cout<<"\n";
		cout<<"Enter the serial no of city you want to travel"<<endl;
		cin>>x;
		switch(x){
		case 1:{
			la.dur();
			la.cost();
			cout<<"\n";
			cout<<"Enter the serial no of Days you want to travel with us"<<endl;
			cin>>y;
			switch(y){
				case 1:{
					la.sh();
					la.payment();
					price=10000;
					cin>>f;
					if(f==1){
						per=price*0.02;
						payment=price-per;
						ad=payment-5000;
						cout<<"you want to pay this payment after discount :"<<ad<<endl;
						
			}
			else if(f==2){
				cout<<"your payment is :"<<price<<endl;
			}
					
					break;
				}
				case 2:{
					la.lo();
					la.payment();
					price=20000;
					cin>>f;
					if(f==1)
						{
			
						per=price*0.02;
						payment=price-per;
						ad=payment-10000;
						cout<<"you want to pay this payment after discount :"<<ad<<endl;
						
			}
			else if(f==2){
			
				cout<<"your payment is :"<<price<<endl;
			}
				
			}
			}
			cout<<"\n";
			la.pay();
			cin>>z;
			switch(z){
				case 1:{
					cout<<"Reach at 10:00am on Sunday"<<endl;
					cout<<"Thankyou"<<endl;
					break;
				}
				case 2:{
					cout<<"Thankyou for coming"<<endl;
					break;
				}
			}
			break;
		}
		case 2:{
			ki.dur();
			ki.cost();
			cout<<"\n";
			cout<<"Enter the serial no of Days you want to travel with us"<<endl;
			cin>>y;
			switch(y){
				case 1:{
					ki.sh();
					ki.payment();
					price=18000;
					cin>>f;
					if(f==1){
						per=price*0.02;
						payment=price-per;
						ad=payment-10000;
						cout<<"you want to pay this payment after discount :"<<ad<<endl;
						
			}
						else if(f==2){
						cout<<"your payment is :"<<price<<endl;
			}
					break;
				}
				case 2:{
					ki.med();
					ki.payment();
					price=23000;
					cin>>f;
					if(f==1){
						per=price*0.02;
						payment=price-per;
						ad=payment-13000;
						cout<<"you want to pay this payment after discount :"<<ad<<endl;
						
			}
						else if(f==2){
						cout<<"your payment is :"<<price<<endl;
			}
					break;
				}
				case 3:{
					ki.lo();
					ki.payment();
					price=35000;
					cin>>f;
					if(f==1){
						per=price*0.02;
						payment=price-per;
						ad=payment-20000;
						cout<<"you want to pay this payment after discount :"<<ad<<endl;
						
			}
						else if(f==2){
						cout<<"your payment is :"<<price<<endl;
			}
					break;
				}
			}
			cout<<"\n";
			ki.pay();
			cin>>z;
			switch(z){
				case 1:{
					cout<<"Reach at 10:00am on Sunday"<<endl;
					cout<<"Thankyou"<<endl;
					break;
				}
				case 2:{
					cout<<"Thankyou for coming"<<endl;
					break;
				}
			}
			break;
		}
		case 3:{
			ka.dur();
			ka.cost();
			cout<<"\n";
			cout<<"Enter the serial no of Days you want to travel with us"<<endl;
			cin>>y;
			switch(y){
				case 1:{
					ka.sh();
					ka.payment();
					price=15000;
					cin>>f;
					if(f==1){
						per=price*0.02;
						payment=price-per;
						ad=payment-7000;
						cout<<"you want to pay this payment after discount :"<<ad<<endl;
						
			}
						else if(f==2){
						cout<<"your payment is :"<<price<<endl;
			}
					break;
				}
				case 2:{
					ka.med();
					ka.payment();
					price=20000;
					cin>>f;
					if(f==1){
						per=price*0.02;
						payment=price-per;
						ad=payment-10000;
						cout<<"you want to pay this payment after discount :"<<ad<<endl;
						
			}
						else if(f==2){
						cout<<"your payment is :"<<price<<endl;
			}
					break;
				}
				case 3:{
					ka.lo();
					ka.payment();
					price=28000;
					cin>>f;
					if(f==1){
						per=price*0.02;
						payment=price-per;
						ad=payment-15000;
						cout<<"you want to pay this payment after discount :"<<ad<<endl;
						
			}
						else if(f==2){
						cout<<"your payment is :"<<price<<endl;
			}
					break;
				}
			}
			cout<<"\n";
			ka.pay();
			cin>>z;
			switch(z){
				case 1:{
					cout<<"Reach at 10:00am on Sunday"<<endl;
					cout<<"Thankyou"<<endl;
					break;
				}
				case 2:{
					cout<<"Thankyou for coming"<<endl;
					break;
				}
			}
			break;
		}
			
		
		}
	cout << "Do you wish to vist other place?" << endl << "Press yes to continue, press no to exit" << endl;
	cin >> choice;
	}
	while(choice=="yes");
	system("pause");
	return 0;
}

