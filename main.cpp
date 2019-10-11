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
          list[numItems] = userItems;
          numItems++;
        }
    }
   }while(input!= 'Q' && input!= 'q');
 
  cout<<"==ITEMS TO BUY==\n";
    for(numItems=0; numItems<5; numItems++)
    {
      cout<<numItems+1<<' ';
      cout<<list[numItems]<<endl;
    }
    
  return 0;
}
