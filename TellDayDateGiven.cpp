#Trying To change Code

#include<iostream>
using namespace std;
int isCenturyYear(int year){
       if(year%100==0){
        return true;
       }
       else{
        return false;
       }}
int isLeapYear(int year){
    if(isCenturyYear(year)){
        if((year%400)==0){
            return true;
        }
        else{
            return false;
        }
    }
    else{
       if((year%4)==0){
            return true;
        }
        else{
            return false;
        }
    }
} 
int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;

    int oddDaysYear=0;

    for(int i=1;i<year;i++){
        if(isLeapYear(i)){
            oddDaysYear=oddDaysYear+2;
        }
        else{
            oddDaysYear=oddDaysYear+1;
        }
    }
    oddDaysYear=oddDaysYear%7;
    cout<<oddDaysYear<<endl;



    int month;
    cout<<"Enter Month: ";
    cin>>month;
    int oddDaysMonth=0;

    for(int i=1;i<month;i++){
        if(isLeapYear(year)){
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                oddDaysMonth=oddDaysMonth+3;
            }
            else if(i==2){
                oddDaysMonth=oddDaysMonth+1;
            }
            else {
               oddDaysMonth=oddDaysMonth+2;
            }
        }
        else{
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                oddDaysMonth=oddDaysMonth+3;
            }
            else if(i==2){
                oddDaysMonth=oddDaysMonth+0;
            }
            else {
               oddDaysMonth=oddDaysMonth+2;
            }
        }
    }
    oddDaysMonth=oddDaysMonth%7;
    cout<<oddDaysMonth<<endl;


    int date;
    cout<<"Enter date: ";
    cin>>date;
    int oddDaydDate=date%7;
    cout<<oddDaydDate<<endl;


    int TotalOddDays =((oddDaydDate + oddDaysMonth + oddDaysYear)%7);
    cout<<"Number of odd days: "<<TotalOddDays<<endl;
    
    switch(TotalOddDays){
        case 0:
        cout<<"Sunday";
           break;
        case 1:
        cout<<"Monday";
           break;
        case 2:
        cout<<"Tuesday";
            break; //Because 1st day of this universe is assumed to be monday.
        case 3:
        cout<<"Wednesday";
            break;
        case 4:
        cout<<"Thursday";
            break;
        case 5:
        cout<<"Friday";
            break;
        case 6:
        cout<<"Saturday";
            break;
        case 7:
        cout<<"Sunday";
            break;
    
    }
    

    
}
