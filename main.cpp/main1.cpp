#include <iostream>
#include <string>
using namespace std;
    class borrower{
        public:
        int id;
        string name,phone,address,occupation,group;
        bool active;
        int choice;

        borrower(){
            id = 0;
            active = true;
        }

        void getborrowerdetails(){
            cout<<"\nEnter Borrower ID : ";
            cin>>id;
            cin.ignore();

            cout<<"\nEnter the Name : ";
            getline(cin,name);

            cout<<"Enter phone number : ";
            getline(cin,phone);

            cout<<"\nEnter the Address : ";
            getline(cin,address);

            cout<<"\nEnter the occupation : ";
            getline(cin,occupation);

            cout<<"\nEnter the group : ";
            cin>>group;

            active = true;
        }

        void displayborrower(){
            cout<<"Borrower ID : "<<id;
            cout<<"Name : "<<name;
            cout<<"Phone : "<<phone;
            cout<<"Address : "<<address;
            cout<<"Occupation : "<<occupation;
            cout<<"Group : "<<group;
            cout<<"\nStatus : "<<(active?"Active":"Inactive");
            cout<<"\n";
        
        }

        void updateborrower(){
            cin.ignore();

            cout<<"\nEnter New name : ";
            getline(cin,name);

            cout<<"\nEnter new phone : ";
            getline(cin,phone);

            cout<<"\nEnter New Address : ";
            getline(cin,address);

            cout<<"\nEnter Occupation : ";
            getline(cin,occupation);

            cout<<"\nEnter New group : ";
            getline(cin,group);
        }

        void changeborrowerstatus(){
            cout<<"\n1.Active \n2.Inactive";
            cout<<"\nEnter choice : ";
            cin>>choice;

            if(choice==1)
            active = true;
            else if(choice==2)
            active = false;
            else
            cout<<"Invalid choice";

        }
    };

    class payment{
    public:
        string receipt,date;
        double amount;

        payment(){
            amount=0;
        }

        void getPaymenyDetails(){
            cout<<"\nEnter recirpt number : ";
            cin.ignore();
            getline(cin,receipt);

            cout<<"\nEnter date : ";
            getline(cin,date);

            cout<<"\nEnter amount : ";
            cin>>amount;
        }

        void displayDetails(){
            cout<<"\nReciept Number : "<<receipt;
            cout<<"\nDate : "<<date;
            cout<<"\nAmount : "<<amount;
        }

    };


    int main(){
    int choice;

    do{
        cout<<"\n---------Microfinance Loan Managemeny---------\n";
        cout<<"1.Regidter Borrower\n";
        cout<<"2.Search Borrower\n";
        cout<<"3.Update Borrower\n";
        cout<<"4.Change Borrower status\n";
        cout<<"5.Apply Loan\n";
        cout<<"6.Review Loan\n";

    
        }while(choice!=0);
    

}