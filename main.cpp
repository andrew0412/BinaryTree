#include <iostream>
#include "binary_tree.h"

using namespace std;

int main(int argc, char **argv)
{
  	node *tree = nullptr;
  int option; // user's entered option will be saved in this variable
  do //do-while loop starts here.that display menu again and again until user select to exit program
  { 
     cout << "1) Enter values " << endl;
     cout << "2) Print inorder " << endl;
     cout << "3) Print preorder " << endl;
	 cout << "4) Print postorder " << endl;
     cout << "5) Search for a value " << endl;
      cout << "6) Delete tree " << endl;
     cout << "7) Exit Program " << endl;
    cout << "Please select an option : ";
     cin >> option;  // taking option value as input and saving in variable "option"
     
     if(option == 1) // Checking if user selected option 1
     {
	// Declare the tree - nullptr to a node	
	// LOOp until -1 entered
	while (true)
	{
		int num;
		cout << "Enter number (-1 to exit): ";
		cin >> num;
		
		if (num == -1)
			break;
		insert(&tree, num);
	}
     }
     else if(option == 2) // Checking if user selected option 2
     {
		inorder(tree);
		cout << endl;
	 }
      else if(option == 3) // Checking if user selected option 2
     {

		preorder(tree);
		cout << endl;
     }
     else if(option == 4) // Checking if user selected option 2
     {
		postorder(tree);
		cout << endl;
     }
	 else if(option == 5) // Checking if user selected option 3
     {
		int cent;
		cout << "Enter search term: ";
		cin>>cent;
		search(tree, cent);
		cout << endl;
     }
     else if(option == 6) // Checking if user selected option 4
     {
		delete_tree(tree);
     }
      else if(option == 7) // Checking if user selected option 4
     {
		cout << "Terminating" << endl;
     }
	 else //if user has entered invalid choice (other than 1,2,3 or 4)
     {

     }
  }
  while(option != 7);  //condition of do-while loop
   
   return 0;
}