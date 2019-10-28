//Valeria Corona
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> list;
  string userItems;
  int numItems = 0;
  char input= ' ';
  
  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    if(!list.empty())
    {
      cout<<"\n (D)elete last item";
    }
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;
    cin.ignore();
    if(input == 'A' || input == 'a')
    {
        cout<<"What is the item?\n";
        cin>>userItems;
        cin.ignore();
        list.push_back(userItems);
        numItems++;
    }
    if(!list.empty())
    {
      if(input == 'D' || input == 'd')
      {
        userItems=list.at(list.size()-1);
        cout<<userItems<<" was deleted from the list.\n"; 
        list.pop_back();
      }
    }
   }while(input!= 'Q' && input!= 'q');
  if(numItems>0)
  {
    cout<<"==ITEMS TO BUY==\n";
    for(int numItems=0; numItems<list.size(); numItems++)
    {
      cout<<numItems+1<<' ';
      cout<<list[numItems]<<endl;
    }
  }else if(numItems==0)
  { 
    cout<<"No items to buy!\n";
  }
  return 0;
}
