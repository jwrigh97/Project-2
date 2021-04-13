#include <iostream>
#include <iomanip>
using namespace std;

intmain()
{
	//varialbles
	int gSpeed, pSpeed; //variables that hold the speed of the graphics card and processor
	int cores, resolutionChoice; //variables that hold the number of cores and menu choice
	double multiplier; //variable that hold the multiplier based on the resolution choice
	string resolutionString; //variable that hold the text of the selected resolution
	double performanceScore; //variable that hold the calculated performance score
	string quality; //variable that hold the text of the recommended graphics quality
	int computers; //variable that hold the number of computers to be processed
	
	//string object to hld the output title
	string title = "COMPUTER HARDWARE GRAPHICS QUALITY RECOMMENDATION TOOL" ;
	
	//input of the number of computers that are being processed
	cout << "How many computers are being processed?" ;
	cin >> computers;
	
	//validate number of computers being processed
	while(computers < 1)
	{
		cout << "\nERROR: AT LEAST ONE COMPUTER MUST BE PROCESSED.\n" ;
		cout << "How many computers are being processed?" ;
		cin >> computers;
	}
	
