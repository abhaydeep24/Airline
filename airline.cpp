#include<iostream>
#include<iomanip>
#include<fstream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void mainMenu();

class Details{
public:
static string name, gender;
int phoneNo;
int age;
string address;
static int cId;
char arr[100];
void information(){
    cout<<"\n Enter the customer Id";
    cin>>cId;
    cout<<"\n Enter the name :";
    cin>>name;
    cout<<"\n Enter the age :";
    cin>>age;
    cout<<"\n Enter the address :";
    cin>>address;
    cout<<"\n Gender :";
    cin>>gender;
    cout<<"Your details are saved with us \n"<<endl;    
}
};

// now sicne we need to use some details of details class into another class so 
int Details::cId;
string Details::name;
string Details::gender;

class Registration{
public:
static int choice;
int choice1;
int back;
static float charges;

void flight(){  
    string flights[]={"Dubai","Canada","UK","USA","Australia","Europe"};
    for(int i=0;i<6;i++){
        cout<<(i+1)<<" flight to "<<flights[i]<<endl;
    }
    cout<<"\n Welcome to the Singh Airline"<<endl;
    cout<<"Press the number of the flight of which you want to book your flight"<<endl;
    cin>>choice;

    switch(choice){
        case 1:{
            cout<<"________________Welcome to Dubai Emirates__________________\n"<<endl;
            cout<<"Your comfort is our priority, Enjoy your Journey !"<<endl;
            cout<<"Folloeing are the flights \n"<<endl;
            cout<<"1. DUB-498"<<endl;
            cout<<"\t03.01.2025 8:00 AM 10 hrs Rs. 14000"<<endl;

            cout<<"2. DUB-658"<<endl;
            cout<<"\t06.01.2025 10:00 AM 12 hrs Rs. 12000"<<endl;
            
            cout<<"3. DUB-508"<<endl;
            cout<<"\t10.01.2025 11:00 AM 11 hrs Rs. 10000"<<endl;

            cout<<"Select the flight you want to book :"<<endl;
            cin>>choice1;
        if(choice1==1){
            charges=14000;
            cout<<"\n You have successfully booked a flight DUB-498"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else if(choice1==2){
            charges=12000;
            cout<<"\n You have successfully booked a flight DUB-658"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else if(choice1==3){
            charges=10000;
            cout<<"\n You have successfully booked a flight DUB-508"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else {
            cout<<"Invalid input, shifting to the previous menu."<<endl;
            flight();
        }
        cout<<"Press any key to go back to main menu."<<endl;
        cin>>back;
        if(back==1){
            mainMenu();
        }
        else{
            mainMenu();
        }

        }
    
    case 2:{
        cout<<"________________Welcome to Canadian Emirates __________________\n"<<endl;
            cout<<"Your comfort is our priority, Enjoy your Journey !"<<endl;
            cout<<"Folloeing are the flights \n"<<endl;
            cout<<"1. CA-198"<<endl;
            cout<<"\t04.01.2025 7:00 AM 10 hrs Rs. 10000"<<endl;

            cout<<"2. CA-158"<<endl;
            cout<<"\t07.01.2025 10:00 AM 12 hrs Rs. 9000"<<endl;
            
            cout<<"3. CA-108"<<endl;
            cout<<"\t10.01.2025 11:00 AM 11 hrs Rs. 8000"<<endl;

            cout<<"Select the flight you want to book :"<<endl;
            cin>>choice1;
        if(choice1==1){
            charges=10000;
            cout<<"\n You have successfully booked a flight CA-198"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else if(choice1==2){
            charges=9000;
            cout<<"\n You have successfully booked a flight CA-158"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else if(choice1==3){
            charges=8000;
            cout<<"\n You have successfully booked a flight CA-108"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else {
            cout<<"Invalid input, shifting to the previous menu."<<endl;
            flight();
        }
        cout<<"Press any key to go back to main menu."<<endl;
        cin>>back;
        if(back==1){
            mainMenu();
        }
        else{
            mainMenu();
        }

        }
    case 3:{
        cout<<"________________Welcome to UK Airways __________________\n"<<endl;
            cout<<"Your comfort is our priority, Enjoy your Journey !"<<endl;
            cout<<"Folloeing are the flights \n"<<endl;
            cout<<"1. UK-198"<<endl;
            cout<<"\t04.01.2025 7:00 AM 10 hrs Rs. 10000"<<endl;

            cout<<"Select the flight you want to book :"<<endl;
            cin>>choice1;
        if(choice1==1){
            charges=10000;
            cout<<"\n You have successfully booked a flight UK-198"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else {
            cout<<"Invalid input, shifting to the previous menu."<<endl;
            flight();
        }
        cout<<"Press any key to go back to main menu."<<endl;
        cin>>back;
        if(back==1){
            mainMenu();
        }
        else{
            mainMenu();
        }

        }
    case 4:{
        cout<<"________________Welcome to USA Airways __________________\n"<<endl;
            cout<<"Your comfort is our priority, Enjoy your Journey !"<<endl;
            cout<<"Folloeing are the flights \n"<<endl;
            cout<<"1. USA-198"<<endl;
            cout<<"\t04.01.2025 7:00 AM 10 hrs Rs. 10000"<<endl;

            cout<<"2. USA-158"<<endl;
            cout<<"\t07.01.2025 10:00 AM 12 hrs Rs. 9000"<<endl;
            
            cout<<"3. USA-108"<<endl;
            cout<<"\t10.01.2025 11:00 AM 11 hrs Rs. 8000"<<endl;

            cout<<"Select the flight you want to book :"<<endl;
            cin>>choice1;
        if(choice1==1){
            charges=10000;
            cout<<"\n You have successfully booked a flight USA-198"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else if(choice1==2){
            charges=9000;
            cout<<"\n You have successfully booked a flight USA-158"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else if(choice1==3){
            charges=8000;
            cout<<"\n You have successfully booked a flight USA-108"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else {
            cout<<"Invalid input, shifting to the previous menu."<<endl;
            flight();
        }
        cout<<"Press any key to go back to main menu."<<endl;
        cin>>back;
        if(back==1){
            mainMenu();
        }
        else{
            mainMenu();
        }

        }
    case 5:{
        cout<<"________________Welcome to Australian Airways __________________\n"<<endl;
            cout<<"Your comfort is our priority, Enjoy your Journey !"<<endl;
            cout<<"Folloeing are the flights \n"<<endl;
            cout<<"1. AUS-198"<<endl;
            cout<<"\t04.01.2025 7:00 AM 10 hrs Rs. 10000"<<endl;

            cout<<"2. AUS-158"<<endl;
            cout<<"\t07.01.2025 10:00 AM 12 hrs Rs. 9000"<<endl;
            
            cout<<"3. AUS-108"<<endl;
            cout<<"\t10.01.2025 11:00 AM 11 hrs Rs. 8000"<<endl;

            cout<<"Select the flight you want to book :"<<endl;
            cin>>choice1;
        if(choice1==1){
            charges=10000;
            cout<<"\n You have successfully booked a flight AUS-198"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else if(choice1==2){
            charges=9000;
            cout<<"\n You have successfully booked a flight AUS-158"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else if(choice1==3){
            charges=8000;
            cout<<"\n You have successfully booked a flight AUS-108"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else {
            cout<<"Invalid input, shifting to the previous menu."<<endl;
            flight();
        }
        cout<<"Press any key to go back to main menu."<<endl;
        cin>>back;
        if(back==1){
            mainMenu();
        }
        else{
            mainMenu();
        }

        }
    case 6:{
        cout<<"________________Welcome to Europian Airlines __________________\n"<<endl;
            cout<<"Your comfort is our priority, Enjoy your Journey !"<<endl;
            cout<<"Folloeing are the flights \n"<<endl;
            cout<<"1. EU-198"<<endl;
            cout<<"\t04.01.2025 7:00 AM 10 hrs Rs. 10000"<<endl;

            cout<<"2. EU-158"<<endl;
            cout<<"\t07.01.2025 10:00 AM 12 hrs Rs. 9000"<<endl;
            
            cout<<"3. EU-108"<<endl;
            cout<<"\t10.01.2025 11:00 AM 11 hrs Rs. 8000"<<endl;

            cout<<"Select the flight you want to book :"<<endl;
            cin>>choice1;
        if(choice1==1){
            charges=10000;
            cout<<"\n You have successfully booked a flight EU-198"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else if(choice1==2){
            charges=9000;
            cout<<"\n You have successfully booked a flight EU-158"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else if(choice1==3){
            charges=8000;
            cout<<"\n You have successfully booked a flight EU-108"<<endl;
            cout<<"You can back to menu and take the ticket"<<endl;
        }
        else {
            cout<<"Invalid input, shifting to the previous menu."<<endl;
            flight();
        }
        cout<<"Press any key to go back to main menu."<<endl;
        cin>>back;
        if(back==1){
            mainMenu();
        }
        else{
            mainMenu();
        }

        }
    default:{
        cout<<"Invalid input, shifting to the main menu";
        mainMenu();
        break;
    }


    }
         
    }
};

// since we have to use some variables of reg. calss so declaring thnm here
float Registration::charges;
int Registration::choice;

class Ticket : public Registration,Details {
public:
void bill(){
    string destination="";
    ofstream outf("records.txt");  // fostream is used to create or write info in the files and here outf is the object of the ofstream.
    // records will store the data of the flights
    {
        outf<<"_______________________SINGH AIRLINES____________________"<<endl;
        outf<<"   _______________________Tickets____________________"<<endl;
        outf<<"       ___________________________________________"<<endl;
        outf<<"Customer ID :"<< Details::cId<<endl;
        outf<<"Customer Name :"<< Details::name<<endl;
        outf<<"Customer Gender :"<< Details::gender<<endl;
        outf<<"\t Discription:"<<endl;

        if(Registration::choice==1){
            destination="Dubai";
        }
        else if(Registration::choice==2){
            destination="Canada";
        }
        else if(Registration::choice==3){
            destination="UK";
        }
        else if(Registration::choice==4){
            destination="USA";
        }
        else if(Registration::choice==5){
            destination="Australia";
        }
        else if(Registration::choice==6){
            destination="Europe";
        }
        
        outf<<"Destination\t\t"<<destination<<endl;
        outf<<"Flight cost :\t\t"<<Registration::charges<<endl;
    }
    outf.close();
}
void display(){
    // ifstream class is used to read from the file
    ifstream ifs("records.txt");
    {
        if(!ifs){
            cout<<"File error !"<<endl;
        }
        while(!ifs.eof()){
            ifs.getline(arr,100);
            cout<<arr<<endl;
        }
    }
    ifs.close();
    }
};



class Management{
// making a constructor coz we have created obj oof this class so cons will be called
public:
Management(){
    mainMenu();
}

};

void mainMenu(){
    int lchoise;
    int schoise;
    int back;
cout<<"\t                         SINGH AIRLINES \n"<<endl;
cout<<"\t_________________________Main Menu_________________________ \n"<<endl;
cout<<"\t___________________________________________________________"<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t \t \t \t"<<endl;
cout<<"\t     \t\tPress 1 to add the Customer Details     \t"<<endl;
cout<<"\t \t \tPress 2 for Flight Registration         \t"<<endl;
cout<<"\t \t \tPress 3 for Ticket and Charges          \t"<<endl;
cout<<"\t \t \tPress 4 to Exit                         \t"<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
cout<<"\t____________________________________________________________"<<endl<<endl;
cout<<"Enter the Choise :";
cout<<endl;
cin>> lchoise;
Details d;     // classname obj name
Registration r;     // classname obj name
Ticket t;   // classname obj name

switch(lchoise){
    case 1 :{
        cout<<"                 Customers \n"<<endl;
        d.information();
        cout<<"Press any to go back to Main menu";
        cin>>back;

        if(back==1) mainMenu();
        else mainMenu();
        break;
    }
    case 2: {
        cout<<"______________________Book a flight using this system______________________\n"<<endl;
        r.flight();
        break;
    }
    case 3:{
        cout<<"_________________GET YOUR TICKET_________________\n"<<endl;
        t.bill();
        cout<<"Your ticket is printed, you can collect it \n "<<endl;
        cout<<"Press 1 to display your ticket";
        cin>>back;
    
        if(back==1){
            t.display();
            cout<<"Press any key to go back to Main menu :";
            cin>>back;
            if(back==1) mainMenu();
            else mainMenu();
        }
        break;
    }
    case 4:{
        cout<<"\n\n\t______Thank You______"<<endl;
        break;
    }
    default:{
        cout<<"Invalid input, Please try again \n"<<endl;
        mainMenu();
        break;
    }
}
}


int main(){
Management Mobj;  // name of class n object
return 0;  
}
