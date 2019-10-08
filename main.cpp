//Valeria Corona
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  string userItems;
  int numItems = 0;
  char input= ' ';

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;
    cin.ignore();
    if(input == 'A' || input == 'a')
    {
      cout<<"What is the item?\n";
      cin>>userItems;
      cin.ignore();
      if(numItems >= 5)
      {
        cout<<"You'll need a bigger list!\n";
      }else
      {
      numItems++;
      }
    }
   
   }while(input!= 'Q' && input!= 'q');

  return 0;
}
