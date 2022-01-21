
//parking of vehecles program doveloped by saksham jain;

#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#include<conio.h>

int main()
{
	system("color 3F");
	int choice; 
	int pin=1234;
	int enteredpin;
	float biket,cart,truckt;
	int continueparking=1;
	float bike2h=5,car2h=10,truck2h=20;
	float bikeeh=2.2,careh=3.5,truckeh=7.5;
	float biker,carr,truckr;
	
	//this code displays current time....
	
	time_t now;
	time(&now);
	printf("\n");
	printf("\t\t\t          %s",ctime(&now));
	
	//This code checks the pin that your entered pin is correct or not.... 
	 
	printf("\n\nPlease enter pin to unlock parking system  : ");
	scanf("%d",&enteredpin);
	
	if(enteredpin!=pin)
	{
		printf("\n\nPlease enter valid pin number");
		exit(0);
	}
	
	//This code is to display three opstion eg.bike,car,truck.....
	
	while(continueparking != 0)
	{
	printf("\n\n\t\t\t================*PARKING FARE*================");
	
	printf("\n\n\t1.Bike");
	printf("\n\n\t2.Car");
	printf("\n\n\t3.Truck");
	printf("\n\n\t4.Exit");
	
	/*
	This code is for choose one opstion from three opstions....
	eg.car,bike and truck.
	
	and also contain some conditions which are usefull to dovelop 
	that program..... 
	*/
	
	printf("\n\n\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n\nFirst two hour parking fare for bike is  : %.1f",bike2h);
			printf("\n\nAfter two hour.Next Every one hour parking fare for bike is  : %.1f",bikeeh);
			printf("\n\nEnter time(hours) for the parking for your bike : ");
			scanf("%f",&biket);
			
			if(biket<2)
			{
				printf("\n\nSorry minimum 2hour parking time is required");
				exit(0);
			}
			if(biket==2)
			{
				printf("\n\nPrice for 2hour parking fare of your bike is :  %.1f",bike2h);
			}
			
			if(biket>2)
			{
				//biker=biket/2;
				//=bike2h+biker;
				biker=bike2h+fmod(biket,2)*bikeeh;
				printf("\n\nparking fare for %.1fhour parking of your bike is :  %.2f",biket,biker);
			}
			break;
			
		case 2:
			printf("\n\nFirst two hour parking fare for car is  : %.1f",car2h);
			printf("\n\nAfter two hour.Next Every one hour parking fare for car is  : %.1f",careh);
		    printf("\n\nEnter time(hours) for the parking for your car : ");
		    scanf("%f",&cart);
		
			if(cart<2)
			{
				printf("\n\nSorry minimum 2hour parking time is required");
				exit(0);
			}
			if(cart==2)
			{
				printf("\n\nPrice for First 2hour parking of your car is :  %.2f",car2h);
			}
			
			if(cart>2)
			{
				//biker=biket/2;
				//=bike2h+biker;
				carr=car2h+fmod(cart,2)*careh;
				printf("\n\nparking fare for %.1fhour parking of your car is :  %.2f",cart,carr);
			}
			//carr=0;
			break;
			
		case 3:
			printf("\n\nFirst two hour parking fare for truck is  : %.1f",truck2h);
			printf("\n\nAfter two hour.Next Every one hour parking fare for truck is  : %.1f",truckeh);
			printf("\n\nEnter time(hours) for the parking for your truck : ");
		    scanf("%f",&truckt);
		    
		    	if(truckt<2)
			{
				printf("\n\nSorry minimum 2hour parking time is required");
				exit(0);
			}
			if(truckt==2)
			{
				printf("\n\nPrice for 2hour parking of your truck is :  %.2f",truck2h);
			}
			
			if(truckt>2)
			{
				//biker=biket/2;
				//=bike2h+biker;
				truckr=truck2h+fmod(truckt,2)*truckeh;
				printf("\n\nPrice for %.1fhour parking fare for your truck is :  %.2f",truckt,truckr);
			  //  truck2h=0;
			//    truckr=0;
				break;
			    case 4:
			    	exit(0);
			    	
			    default:
			    printf("\n\nplease enter valid vehecle number");
			}
			//printf("\n\nIf you want to park again press[1],else press[0]");

	}
	}
	return(0);
}
