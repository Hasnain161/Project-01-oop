#include<iostream>
#include <string>
using namespace std;
class Menu{
	protected:
		char choice;
        int selectionNmbr;
        string config;
        long Rent;
        string name;
        double cnic;
        int RentDays;
	public:
		int CarMenu()
		{
			cout<<"\n\t\t\t\t\t\t>--->---------->Press A for SUV<------<----------<"<<endl;
			cout<<"\n\t\t\t\t\t\t>--->---------->Press B for SEDAN<----<----------<"<<endl;
			cout<<"\n\t\t\t\t\t\t>--->---------->Press C for WAGON<----<----------<"<<endl;
			return 1;
			}
			int Suv()
			{
				cout<<"Available SUV are: "<<endl;
				cout<<"\n\tMercedes G350d>_________>_____>____>Press 01 for chose this vehicle"<<endl;
				cout<<"\n\tNissan Patrol Y64>______>_____>____>Press 02 for chose this vehicle"<<endl;
				cout<<"\n\tAudi Q7 tdsi 3.0*>______>_____>____>Press 03 for chose this vehicle"<<endl;
				cout<<"\n\tBMW X7>_________________>_____>____>Press 04 for chose this vehicle"<<endl;
				return 1;
			}
			int Sedan()
			{
				cout<<"Available SEDAN are: "<<endl;
				cout<<"\n\t\t\tMercedes S400h_____>_____>____>Press 01 for chose this vehicle"<<endl;
				cout<<"\n\t\t\tBMW 720i 7series___>_____>____>Press 02 for chose this vehicle"<<endl;
				cout<<"\n\t\t\tBentley Arnage_____>_____>____>Press 03 for chose this vehicle"<<endl;
				return 1;
			}
			int Wagon()
			{
				cout<<"Available Wagon are: "<<endl;
				cout<<"\n\tMercedes V class________>_____>____>Press 01 for chose this vehicle"<<endl;
				return 1;
			}
			int RentalSystem()
			{
				cout<<"\n\tEnter your name : ";
				cin>>name;
				cout<<"\n\tEnter your CNIC : ";
				cin>>cnic;
				cout<<"\n\tEnter the Days that you wish to rent this vehicle : ";
				cin>>RentDays;
				while(RentDays<1)
				{
					cout<<"\n\tEnter the Days that you wish to rent this vehicle : ";
			    	cin>>RentDays;
				}
				long d=RentDays*Rent;
				cout<<"\n\tYour Rent for this vehicle is Rs-"<<d<<endl;
				return 1;
			}
			int instructions()
			{
				cout<<"\n****Please read the instructions carefully"<<endl;
				cout<<"\n\n___01): If you late return our vehicle then you will pay double of your rent"<<endl;
				cout<<"___02): If our vehicle damaged by you then you must fill the penalty"<<endl;
				cout<<"___03): Please kindly check our vehicle carefully before hand"<<endl;
				cout<<"___04): Thanks for your cooperation"<<endl;
				return 1;
			}
			int confirmation()
			{
				
				if(config=="confirmed")
				{
					RentalSystem();
					instructions();
				}
				return 1;
			}
};
class Selection: public Menu
{
    public:
    	
    int SelectVehicle()
    {
        CarMenu();
        cout<<"\n---------->Please select your vehicle catagory: ";
        cin>>choice;
        while (choice != 'A' && choice != 'B' && choice != 'C') 
		{
			cout << "\n---------->Please press correct button to select your vehicle catagory" << endl;
            cout << "---------->Select the correct choice: ";
            cin >> choice;
        }

        if(choice=='A')
        {
        	Suv();
        		cout<<"\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>.........<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	         	cout<<"\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>.........<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        		cout<<"\n---------->Please select your vehicle : ";
          		cin>>selectionNmbr;
        		while(selectionNmbr<1 || selectionNmbr>4)
        		{
         			cout<<"\n---------->Please press correct button to select your vehicle : ";
        	    	cin>>selectionNmbr;
        		}
        		 switch(selectionNmbr) 
        {
        	case 1:
        		Rent=20000;
        		cout<<"\n---------->---Mercedes G 350d---<----------"<<endl;
        		cout<<"\n---------->Specs :"<<endl;
       			cout<<"---------->---------->7 seater suv"<<endl;
        		cout<<"---------->---------->Engine 5687cc Petrol turbo v8"<<endl;
        		cout<<"---------->---------->Automatic transmission"<<endl;
        		cout<<"---------->---------->Rent per day= Rs-"<<Rent<<endl;
        		cout<<"\nFor confirm this vehicle press confirmed : ";
        		cin>>config;
        		while (config != "confirmed") 
				{
                    cout << "\nFor confirming this vehicle, enter 'confirmed': ";
                    cin >> config; 
                }
        		confirmation();
        		break;
        	case 2:
				Rent=35000;
        		cout<<"\n---------->---Nissan Patrol Y64---<----------"<<endl;
        		cout<<"\n---------->Specs :"<<endl;
       			cout<<"---------->---------->7 seater suv"<<endl;
        		cout<<"---------->---------->Engine 3478cc Diesel turbo v6"<<endl;
        		cout<<"---------->---------->Automatic transmission"<<endl;
        		cout<<"---------->---------->Rent per day= Rs-"<<Rent<<endl;
        		cout<<"\nFor confirm this vehicle enter confirmed : ";
        		cin>>config;
        		while (config != "confirmed") 
				{
                    cout << "\nFor confirming this vehicle, enter 'confirmed': ";
                    cin >> config; 
                }
        		confirmation();
        		break;
        	case 3:
        		Rent=18000;
        		cout<<"\n----------------->---Audi Q7---<-----------------"<<endl;
        		cout<<"\n---------->Specs :"<<endl;
       			cout<<"---------->---------->7 seater suv"<<endl;
        		cout<<"---------->---------->Engine  2995cc petrol 6 cylinders"<<endl;
        		cout<<"---------->---------->Automatic transmission"<<endl;
        		cout<<"---------->---------->Rent per day= Rs-"<<Rent<<endl;
        		cout<<"\nFor confirm this vehicle enter confirmed : ";
        		cin>>config;
        		while (config != "confirmed") 
				{
                    cout << "\nFor confirming this vehicle, enter 'confirmed': ";
                    cin >> config; 
                }
        		confirmation();
        		break;
        	case 4:
        		Rent=25000;
        		cout<<"\n-------------------->---BMW X7---<---------------------"<<endl;
        		cout<<"\n---------->Specs :"<<endl;
       			cout<<"---------->---------->7 seater suv"<<endl;
        		cout<<"---------->---------->Engine  2988cc V6 TURBO DIESEL"<<endl;
        		cout<<"---------->---------->Automatic transmission"<<endl;
        		cout<<"---------->---------->Rent per day= Rs-"<<Rent<<endl;
        		cout<<"\nFor confirm this vehicle enter confirmed : ";
        		cin>>config;
        		while (config != "confirmed") 
				{
                    cout << "\nFor confirming this vehicle, enter 'confirmed': ";
                    cin >> config; 
                }
        		confirmation();
        		break;
        	}
        	return 0;
		}
		else if(choice=='B')
		{
			Sedan();
				cout<<"\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>.........<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	         	cout<<"\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>.........<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        		cout<<"\n---------->Please select your vehicle : ";
          		cin>>selectionNmbr;
				while(selectionNmbr<1 || selectionNmbr>3)
        		{
         			cout<<"\n---------->Please press correct button to select your vehicle : ";
        	    	cin>>selectionNmbr;
        		}
        		 switch(selectionNmbr) 
        		 {
        		 		case 1:
        		Rent=22000;
        		cout<<"\n-------------------->Mercedes S400h<---------------------"<<endl;
        		cout<<"\n---------->Specs :"<<endl;
       			cout<<"---------->---------->5 seater sedan"<<endl;
        		cout<<"---------->---------->Engine  3498cc Hybrid"<<endl;
        		cout<<"---------->---------->Automatic transmission"<<endl;
        		cout<<"---------->---------->Rent per day= Rs-"<<Rent<<endl;
        		cout<<"\nFor confirm this vehicle enter confirmed : ";
        		cin>>config;
        		while (config != "confirmed") 
				{
                    cout << "\nFor confirming this vehicle, enter 'confirmed': ";
                    cin >> config; 
                }
        		confirmation();
        		break;
        	case 2:
        		Rent=25000;
        		cout<<"\n-------------------->BMW 720i 7series<---------------------"<<endl;
        		cout<<"\n---------->Specs :"<<endl;
       			cout<<"---------->---------->5 seater sedan"<<endl;
        		cout<<"---------->---------->Engine  2998cc Hybrid"<<endl;
        		cout<<"---------->---------->Automatic transmission"<<endl;
        		cout<<"---------->---------->Rent per day= Rs-"<<Rent<<endl;
        		cout<<"\nFor confirm this vehicle enter confirmed : ";
        		cin>>config;
        		while (config != "confirmed") 
				{
                    cout << "\nFor confirming this vehicle, enter 'confirmed': ";
                    cin >> config; 
                }
        		confirmation();
        		break;
        	case 3:
        		Rent=30000;
        		cout<<"\n-------------------->Bentley Arnage<---------------------"<<endl;
        		cout<<"\n---------->Specs :"<<endl;
       			cout<<"---------->---------->5 seater sedan"<<endl;
        		cout<<"---------->---------->Engine  6761cc petrol V12"<<endl;
        		cout<<"---------->---------->Automatic transmission"<<endl;
        		cout<<"---------->---------->Rent per day= Rs-"<<Rent<<endl;
        		cout<<"\nFor confirm this vehicle enter confirmed : ";
        		cin>>config;
        		while (config != "confirmed") 
				{
                    cout << "\nFor confirming this vehicle, enter 'confirmed': ";
                    cin >> config; 
                }
        		confirmation();
        		break;
				 }
				 return 0;
		}
		else if(choice=='C')
		{
			Wagon();
				cout<<"\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>.........<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	         	cout<<"\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>.........<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        		cout<<"\n---------->Please select your vehicle : ";
          		cin>>selectionNmbr;
				while(selectionNmbr!=1)
        		{
         			cout<<"\n---------->Please press correct button to select your vehicle : ";
        	    	cin>>selectionNmbr;
        		}
        		 switch(selectionNmbr) 
        		 {
        		 		case 1:
        		Rent=30000;
        		cout<<"\n-------------------->Mercedes V class<---------------------"<<endl;
        		cout<<"\n---------->Specs :"<<endl;
       			cout<<"---------->---------->9 seater van"<<endl;
        		cout<<"---------->---------->Engine  1950 cc DIESEL"<<endl;
        		cout<<"---------->---------->Automatic transmission"<<endl;
        		cout<<"---------->---------->Rent per day= Rs-"<<Rent<<endl;
        		cout<<"\nFor confirm this vehicle enter confirmed : ";
        		cin>>config;
        		while (config != "confirmed") 
				{
                    cout << "\nFor confirming this vehicle, enter 'confirmed': ";
                    cin >> config; 
                }
        		confirmation();
        		break;
	        	}
	        	return 0;}
		else
		{
			cout<<"INVALID___________INVALID___________INVALID___________INVALID___________INVALID___________INVALID"<<endl;
		}}

};
int main()
{
	Selection obj;
    string D;
    do{
    	system("CLS");
    	obj.SelectVehicle();
    	cout<<"-------------------->Press OK to continue.........."<<endl;
    	cout<<"-------------------->Press EXIT to leave.........."<<endl;
    	cin>>D;
	}while(D=="ok");
    return 0;
}
