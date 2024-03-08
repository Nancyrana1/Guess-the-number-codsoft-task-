#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
 cout<<"Welcome to the number guessing Game!!\n";
 cout<<"\nYou have to guess and enter the correct number between1-80";
 cout<<"\n\nYou will be provided unlimited choices until you guesses the correct number...";

  srand(time(0));     //it gives the function a new seed, a starting point and then  do many operations on that number to generate the next.
  
  int random_number = rand() % 80 + 1;
  int guess_the_number;
  int chances=0;
while(guess_the_number!=random_number){
    cout<<"Enter the number: ";
    cin>>guess_the_number;
    chances++;   //for the incese in the no of attempts

    //for checking whether the no. is coorect or not

    if(guess_the_number==random_number){
        cout<<"Great!! You've entered the correct number"<<chances<<"chances"<<endl;
    }

    //for high guesses!!

    else if(guess_the_number>random_number){
        cout<<"OOPS! You are guessing it too high\n";
        cout<<"Try Again.";
    }

    //for low guesses!!


    else{
        cout<<"It's too low. Try it Again\n";
    }

} 
    return 0;
}