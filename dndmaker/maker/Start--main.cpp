#include <iostream>
#include <fstream>
#include <damount.h>
#include <otherdata.h>
#include <things.h>
#include <tempdata.h>
#include <listing.h>
using namespace std

int main(){
int choice;
int ch1;
int maindamount[];
int other;
int total;
 cout << "Welcome to DnDmaker!! Enter on your selection on the keyboard, your options are.."  << "1.make a new modifyed adventure" << "2.import an adventure and edit it" << "3. import an adventure and play it" << "4.view manual//instructions"
 cin >> choice
 switch(choice) {case 1 :

 cout << "please select game elements you want to add or modify, " << "0.continue with current elements" << "1.dice amount" << "2.Races" <<""<< "7.Starting narritive" << "8.scene objects"
cin >> ch1;
switch(ch1){
 case 0 :
 case 1 : cout << "first specify amount of dice you want in the game"; cin >> i; basedice[i]; for(x=0; x=i; x++){basedice[x] = dstart(x)}
 case 7 : cout << " please enter the narrative which the player will start with"; cin >> basenarrative;
 case 8 : Make()
}


 }


}
