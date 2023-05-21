#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class passenger{
    public:
 char firstName[20];
 char secondName[20];
 int age;
 int Id;
 char country[15];
 char address[15];




void p_info(){
     passenger p;

    fstream info;
    info.open("p_info.txt", ios::app );
        char y;
        do{
        cout<<"please enter your first name"<<endl;
        cin>>p.firstName;
        cout<<"please enter your second name"<<endl;
        cin>>p.secondName;
        cout<<"please enter your age "<<endl;
        cin>>p.age;
        cout<<"please enter your ID"<<endl;
        cin>>p.Id;
        cout<<"please enter your country "<<endl;
        cin>>p.country;
        cout<<"please enter your address"<<endl;
        cin>>p.address;
        cout<<"if you want to to add another passenger enter y \nif you want to exit press any key"<<endl;
        cin>>y;


        info.write((char*)&p,sizeof(p));

        }
        while(y=='y');
        info.close();




}
void view_pas_inf(){
    passenger v;
    fstream data;
    data.open("p_info.txt", ios::in);
    if(data.is_open()){
            int id=0;
            while(!data.eof()){
                data.read((char*)&v, sizeof(v));
                if(v.Id!=id){
                cout<<"Name: "<<v.firstName<<" "<<v.secondName<<endl;
                cout<<"ID: "<<v.Id<<endl;
                cout<<"Age: "<<v.age<<endl;
                cout<<"Country: "<<v.country<<endl;
                cout<<"Address: "<<v.address<<endl;
                cout<<"**************************"<<endl;
                id=v.Id;
                }
            }
        data.close();

    }else{
    cout<<"can't find this file!!!!!!"<<endl;
    }




}
void searchByFirstName(){


char t_name[15];
cout<<"Enter the name you search for ????"<<endl;
cin>>t_name;
passenger p;
bool found=false;
fstream data;
data.open("p_info.txt", ios::in);
if(data.is_open()){
    data.read((char*)&p,sizeof(p));
    while(!data.eof()){
        if(strcmp(t_name,p.firstName)== 0){
            cout<<"the name of passenger is: "<<p.firstName<<p.secondName<<endl;
            cout<<"the ID of passenger is: "<<p.Id<<endl;
            cout<<"the age of passenger is: "<<p.age<<endl;
            cout<<"the address of passenger is: "<<p.address<<endl;
            cout<<"the country of passenger is: "<<p.country<<endl;
            cout<<"***********************************************"<<endl;
            found=true;

        }
        data.read((char*)&p,sizeof(p));

    }
    if(!found){
        cout<<"can't find this passenger!!!!!!"<<endl;
    }
    data.close();
}
else{
    cout<<"can't find this file !!!!!!!!"<<endl;
}









}
void searchBysecondName(){


char t_name[15];
cout<<"Enter the name you search for ????"<<endl;
cin>>t_name;
passenger p;
bool found=false;
fstream data;
data.open("p_info.txt", ios::in);
if(data.is_open()){
    data.read((char*)&p,sizeof(p));
    while(!data.eof()){
        if(strcmp(t_name,p.secondName)== 0){
            cout<<"the name of passenger is: "<<p.firstName<<" "<<p.secondName<<endl;
            cout<<"the ID of passenger is: "<<p.Id<<endl;
            cout<<"the age of passenger is: "<<p.age<<endl;
            cout<<"the address of passenger is: "<<p.address<<endl;
            cout<<"the country of passenger is: "<<p.country<<endl;
            cout<<"***********************************************"<<endl;
            found=true;

        }
        data.read((char*)&p,sizeof(p));

    }
    if(!found){
        cout<<"can't find this passenger!!!!!!"<<endl;
    }
    data.close();
}
else{
    cout<<"can't find this file !!!!!!!!"<<endl;
}









}
void searchById(){


int id;
cout<<"Enter the ID you search for ????"<<endl;
cin>>id;
passenger p;
bool found=false;
fstream data;
data.open("p_info.txt", ios::in);
if(data.is_open()){
    data.read((char*)&p,sizeof(p));
    while(!data.eof()){
        if(id==p.Id){
            cout<<"the name of passenger is: "<<p.firstName<<" "<<p.secondName<<endl;
            cout<<"the ID of passenger is: "<<p.Id<<endl;
            cout<<"the age of passenger is: "<<p.age<<endl;
            cout<<"the address of passenger is: "<<p.address<<endl;
            cout<<"the country of passenger is: "<<p.country<<endl;
            cout<<"***********************************************"<<endl;
            found=true;

        }
        data.read((char*)&p,sizeof(p));

    }
    if(!found){
        cout<<"can't find this passenger!!!!!!"<<endl;
    }
    data.close();
}
else{
    cout<<"can't find this file !!!!!!!!"<<endl;
}





}
void updateAgeById(){


int id;
cout<<"Enter the ID of the passenger you want to update .."<<endl;
cin>>id;
passenger p;
bool found=false;
fstream data;
data.open("p_info.txt", ios::in | ios::out);
if(data.is_open()){
    data.read((char*)&p,sizeof(p));
    while(!data.eof()){
        if(id==p.Id){


           cout<<"Enter the updated age for "<<p.firstName<<" "<<p.secondName<<endl;
           cin>>p.age;
           data.seekp(data.tellg()-sizeof(p),ios::beg);
           data.write((char*)&p,sizeof(p));
            found=true;

        }
        data.read((char*)&p,sizeof(p));

    }
    if(!found){
        cout<<"can't find this passenger!!!!!!"<<endl;
    }
    data.close();


}
else{
    cout<<"can't find this file !!!!!!!!"<<endl;
}




}
void updateFirstNameById(){



int id;
cout<<"Enter the ID of the passenger you want to update .."<<endl;
cin>>id;
passenger p;
bool found=false;
fstream data;
data.open("p_info.txt", ios::in | ios::out);
if(data.is_open()){
    data.read((char*)&p,sizeof(p));
    while(!data.eof()){
        if(id==p.Id){


           cout<<"Enter the first name of person with Id:  "<<p.Id<<endl;
           cin>>p.firstName;
           data.seekp(data.tellg()-sizeof(p),ios::beg);
           data.write((char*)&p,sizeof(p));
            found=true;

        }
        data.read((char*)&p,sizeof(p));

    }
    if(!found){
        cout<<"can't find this passenger!!!!!!"<<endl;
    }
    data.close();


}
else{
    cout<<"can't find this file !!!!!!!!"<<endl;
}



}
void updateSecondNameById(){



int id;
cout<<"Enter the ID of the passenger you want to update .."<<endl;
cin>>id;
passenger p;
bool found=false;
fstream data;
data.open("p_info.txt", ios::in | ios::out);
if(data.is_open()){
    data.read((char*)&p,sizeof(p));
    while(!data.eof()){
        if(id==p.Id){


           cout<<"Enter the last name of the person with Id : "<<p.Id<<endl;
           cin>>p.secondName;
           data.seekp(data.tellg()-sizeof(p),ios::beg);
           data.write((char*)&p,sizeof(p));
            found=true;

        }
        data.read((char*)&p,sizeof(p));

    }
    if(!found){
        cout<<"can't find this passenger!!!!!!"<<endl;
    }
    data.close();

}
else{
    cout<<"can't find this file !!!!!!!!"<<endl;
}


}
void deletePassenger(){


int id;
cout<<"Enter the ID of the passenger you want to delete"<<endl;
cin>>id;
passenger p;
bool found=false;
fstream data;
fstream cdata;
data.open("p_info.txt", ios::in );
cdata.open("temp.txt",ios::out);
if(data.is_open()){
    data.read((char*)&p,sizeof(p));
    while(!data.eof()){
        if(id!=p.Id){

    cdata.write((char*)&p,sizeof(p));
    found=true;

        }
        data.read((char*)&p,sizeof(p));

    }

    if(!found){
        cout<<"can't find this passenger!!!!!!"<<endl;
    }
    data.close();
    cdata.close();
    remove("p_info.txt");
    rename("temp.txt","p_info.txt");
}
else{
    cout<<"can't find this file !!!!!!!!"<<endl;
}



}


};

class book{
public:
    char airline_name[15],toLocation[15],departureTime[15],arrivalTime[15],date[15];
    int x,airline_id;
    char y[15];
void schedule(){
    book b;
    cout<<"for Dubai enter 1 "<<endl;
    cout<<"for Kanada enter 2 "<<endl;
    cout<<"for Usa enter 3"<<endl;
    cout<<"for England enter 4"<<endl;
    cout<<"for Austoralia enter 5"<<endl;
    cin>>x;
    switch(x){

    case 1:{
    cout<<"                                      Schedule for Dubai        "<<endl;
    cout<<"                                      ------------------        "<<endl;

    cout<<"Air_line name        Air_line id          Date           Departure time         Arrival time"<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    cout<<"  Misrair                11             1-1-2024             4:00 am              6:00 am  "<<endl;
    cout<<"  Misrair                21             1-1-2024             4:40 am              6:40 am  "<<endl;
    cout<<"  Misrair                31             1-1-2024             8:00 am             10:00 am  "<<endl;
    cout<<"  Misrair                41             1-1-2024            10:00 am             12:00 pm  "<<endl;
    cout<<"  Misrair                51             1-1-2024            11:40 am              1:40 pm  "<<endl;
    cout<<"  Misrair                61             1-1-2024             3:30 pm              5:30 pm  "<<endl;
    cout<<"  Misrair                71             1-1-2024             4:00 pm              6:00 pm  "<<endl;
    cout<<"  Misrair                81             1-1-2024             8:00 pm             10:00 pm  "<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;

    cout<<"....................enter the Air line data that suitable for you........................"<<endl;


    b.book_tickets();



    }
    break;
    b.menu();

    case 2:{
    cout<<"                                      Schedule for Kanada      "<<endl;
    cout<<"                                      ------------------        "<<endl;

    cout<<"Air_line name        Air_line id          Date           Departure time         Arrival time"<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    cout<<"  Misrair                12              1-1-2024             4:00 am              6:00 am  "<<endl;
    cout<<"  Misrair                22              1-1-2024             4:40 am              6:40 am  "<<endl;
    cout<<"  Misrair                32              1-1-2024             8:00 am             10:00 am  "<<endl;
    cout<<"  Misrair                42              1-1-2024            10:00 am             12:00 am  "<<endl;
    cout<<"  Misrair                52              1-1-2024            11:40 am              1:40 pm  "<<endl;
    cout<<"  Misrair                62              1-1-2024             3:30 pm              5:30 pm  "<<endl;
    cout<<"  Misrair                72              1-1-2024             4:00 pm              6:00 pm  "<<endl;
    cout<<"  Misrair                82              1-1-2024             8:00 pm             10:00 pm  "<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;

    cout<<"....................enter the Air line data that suitable for you........................"<<endl;


    b.book_tickets();




    }
    break;
    b.menu();
     case 3:{
    cout<<"                                      Schedule for Usa      "<<endl;
    cout<<"                                      ------------------        "<<endl;

    cout<<"Air_line name        Air_line id          Date           Departure time         Arrival time"<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    cout<<"  Misrair                13              1-1-2024             4:00 am              6:00 am  "<<endl;
    cout<<"  Misrair                23              1-1-2024             4:40 am              6:40 am  "<<endl;
    cout<<"  Misrair                23              1-1-2024             8:00 am             10:00 am  "<<endl;
    cout<<"  Misrair                43              1-1-2024            10:00 am             12:00 am  "<<endl;
    cout<<"  Misrair                53              1-1-2024            11:40 am              1:40 pm  "<<endl;
    cout<<"  Misrair                63              1-1-2024             3:30 pm              5:30 pm  "<<endl;
    cout<<"  Misrair                73              1-1-2024             4:00 pm              6:00 pm  "<<endl;
    cout<<"  Misrair                83              1-1-2024             8:00 pm             10:00 pm  "<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;


    cout<<"....................enter the Air line data that suitable for you........................"<<endl;


b.book_tickets();




    }
    break;
    b.menu();
     case 4:{
    cout<<"                                      Schedule for England     "<<endl;
    cout<<"                                      ------------------        "<<endl;

    cout<<"Air_line name        Air_line id          Date           Departure time         Arrival time"<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    cout<<"  Misrair                14              1-1-2024             4:00 am              6:00 am  "<<endl;
    cout<<"  Misrair                24              1-1-2024             4:40 am              6:40 am  "<<endl;
    cout<<"  Misrair                34              1-1-2024             8:00 am             10:00 am  "<<endl;
    cout<<"  Misrair                44              1-1-2024            10:00 am             12:00 am  "<<endl;
    cout<<"  Misrair                54              1-1-2024            11:40 am              1:40 pm  "<<endl;
    cout<<"  Misrair                64              1-1-2024             3:30 pm              5:30 pm  "<<endl;
    cout<<"  Misrair                74              1-1-2024             4:00 pm              6:00 pm  "<<endl;
    cout<<"  Misrair                84              1-1-2024             8:00 pm             10:00 pm  "<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;


    cout<<"....................enter the Air line data that suitable for you........................"<<endl;



    b.book_tickets();



    }
    break;
    b.menu();
     case 5:{
    cout<<"                                      Schedule for Austoralia     "<<endl;
    cout<<"                                      ------------------        "<<endl;

    cout<<"Air_line name        Air_line id          Date           Departure time         Arrival time"<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    cout<<"  Misrair                15             1-1-2024             4:00 am              6:00 am  "<<endl;
    cout<<"  Misrair                25             1-1-2024             4:40 am              6:40 am  "<<endl;
    cout<<"  Misrair                35             1-1-2024             8:00 am             10:00 am  "<<endl;
    cout<<"  Misrair                45             1-1-2024            10:00 am             12:00 am  "<<endl;
    cout<<"  Misrair                55             1-1-2024            11:40 am              1:40 pm  "<<endl;
    cout<<"  Misrair                65             1-1-2024             3:30 pm              5:30 pm  "<<endl;
    cout<<"  Misrair                75             1-1-2024             4:00 pm              6:00 pm  "<<endl;
    cout<<"  Misrair                85             1-1-2024             8:00 pm             10:00 pm  "<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;


    cout<<"....................enter the Air line data that suitable for you........................"<<endl;


b.book_tickets();




    }
    break;
    b.menu();
    default :{


    b.menu();

    }

    }






}

void book_tickets(){
    book b;
fstream booking;
    booking.open("booking.txt", ios::app );

char l;
        do{

    cout<<"enter airline id"<<endl;
    cin>>b.airline_id;
    cout<<"enter flight date"<<endl;
    cin>> b.date;
    cout<<"enter departure Time"<<endl;
    cin>>b.departureTime;
    cout<<"enter arraival time"<<endl;
    cin>>b.arrivalTime;

        cout<<"if you want to book another ticket enter y \nif you want to return min menu enter m"<<endl;
        cin>>l;


        booking.write((char*)&b,sizeof(b));

        }

        while(l=='y');
        booking.close();
        if(l=='m'){
            b.menu();}
        b.schedule();




}

void searchById(){


int id;
cout<<"Enter the ID of  plan  you search for ????"<<endl;
cin>>id;
book b;
bool found=false;
fstream booking;
booking.open("booking.txt", ios::in);
if(booking.is_open()){
    booking.read((char*)&b,sizeof(b));
    while(!booking.eof()){
        if(id==b.airline_id){
            cout<<"the airline Id: "<<b.airline_id<<endl;
            cout<<"the date of plan: "<<b.date<<endl;
            cout<<"the departure time : "<<b.departureTime<<endl;
            cout<<"the arrival time: "<<b.arrivalTime<<endl;
            cout<<"***********************************************"<<endl;
            found=true;

        }
        booking.read((char*)&b,sizeof(b));

    }
    if(!found){
        cout<<"can't find this plan!!!!!!"<<endl;
    }
    booking.close();
}
else{
    cout<<"can't find this file !!!!!!!!"<<endl;
}





}


void editDepartue(){





int id;
cout<<"Enter the ID of the journey you want to update .."<<endl;
cin>>id;
book b;;
bool found=false;
fstream booking;
booking.open("booking.txt", ios::in | ios::out);
if(booking.is_open()){
    booking.read((char*)&b,sizeof(b));
    while(!booking.eof()){
        if(id==b.airline_id){


           cout<<"Enter the updated departure for  the journey with Id "<<b.airline_id<<endl;
           cin>>b.departureTime;

            cout<<"Enter the updated arrival for  the journey with Id "<<b.airline_id<<endl;
           cin>>b.arrivalTime;

           booking.seekp(booking.tellg()-sizeof(b),ios::beg);
           booking.write((char*)&b,sizeof(b));
            found=true;

        }
        booking.read((char*)&b,sizeof(b));

    }
    if(!found){
        cout<<"can't find this journey!!!!!!"<<endl;
    }
    booking.close();
}
else{
    cout<<"can't find this file !!!!!!!!"<<endl;
}




}



void cancelJourney(){


int id;
cout<<"Enter the ID of the journey you want to cancel"<<endl;
cin>>id;
book b;
bool found=false;
fstream booking;
fstream cbooking;
booking.open("booking.txt", ios::in );
cbooking.open("temp.txt",ios::out);
if(booking.is_open()){
    booking.read((char*)&b,sizeof(b));
    while(!booking.eof()){
        if(id!=b.airline_id){

    cbooking.write((char*)&b,sizeof(b));
    found=true;

        }
        booking.read((char*)&b,sizeof(b));

    }

    if(!found){
        cout<<"can't find this journey!!!!!!"<<endl;
    }
    booking.close();
    cbooking.close();
    remove("booking.txt");
    rename("temp.txt","booking.txt");
}
else{
    cout<<"can't find this file !!!!!!!!"<<endl;
}




}

void menu(){
    book b;
    passenger p;
    int s;

cout<<".....................welcome..................."<<endl;
cout<<"------------------------------------------------"<<endl;
cout<<"           control passenger info enter  1             "<<endl;
cout<<"             book a ticket  enter  2              "<<endl;
cout<<"            print passenger data enter 3          "<<endl;
cin>>s;

switch(s){
case 1:{
        int t;
    cout<<"...........add new passenger enter 1.........."<<endl;
    cout<<".............update old info enter 2.........."<<endl;
    cout<<".........delete passenger info enter 3........."<<endl;
    cout<<".........return to the min menu enter 4........"<<endl;
    cin>>t;
    switch(t){

    case 1:{
        p.p_info();

    }
    break;
    case 2:{
        int q;
        cout<<"............update age enter 1.........."<<endl;
        cout<<".........update first name enter 2......."<<endl;
        cout<<".........update second name enter 3......."<<endl;
        cin>>q;
        switch(q){
            case 1:{
            p.updateAgeById();

            }
            break;
            case 2:{

            p.updateFirstNameById();
            }
            break;
            case 3:{
            p.updateSecondNameById();

            }break;
            default:{
            b.menu();

            }


        }


    }
    break;
    case 3:{
        p.deletePassenger();
    }
    break;
    default:{
    b.menu();
    }


    }





    }
    break;
case 2:{
    int w;
    cout<<".............book ticket enter 1........."<<endl;
    cout<<".............edit ticket enter 2........."<<endl;
    cout<<".............cancel ticket enter 3......."<<endl;
    cin>>w;
    switch(w){
    case 1:{

        b.schedule();

    }
    break;
    case 2:{
        b.editDepartue();

    }
    break;
    case 3:{
        b.cancelJourney();
    }
    break;
    default:{
   b.menu();
    }


    }



    }
    break;
    case 3:{

     p.searchById();
    b.searchById();
    cout<<"return min menu enter m"<<endl;
    char m;
    cin >>m;
    if(m=='m')
        b.menu();


    }
    break;



    default:{
    b.menu();}

}









}








};



int main()
{

    passenger pa;
    book b;
   b.menu();







    return 0;
}
