// GitHubAssignment5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// ProgrammingAssignment5.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Prompt: Johnny Utah owns a surf shop on the beach called “Point Break Surf Shop”. 
          Johnny sells surfboards in 3 three sizes: small (2 meters), medium (3 meters), and large (4 meters). 
          The cost of one small surfboard is $175.00, one medium is $190.00, and one large is $200.00.  
          Write a program that will make the surf shop operational.  
          Your program should allow the user to do the following:
                Buy any surfboard in any size and in any quanity.
                At any time show the total number of surfboards of each size sold.
                At any time show the total money made.
*/

#include <iostream>
#include <iomanip>

using namespace std;


//Define constant variables
const int iTotalSmall = 175;
const int iTotalMedium = 190;
const int iTotalLarge = 200;


void ShowUsage();
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge);
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);


int main()
{
    // Formats the title
    string str = " Welcome to my Johnny Utah's PointBreak Surf Shop ";
    string a = "";
    cout << setfill('*');
    cout << setw(63) << a << endl;
    cout << setw(5) << a << setw(51) << str << setw(7) << a << endl;
    cout << setw(63) << a << endl;
    cout << endl;
    cout << endl;



    //Declare Variables
    char choice;
    int quantity =0;
    char type;
    int counter;
    int small =0;    //stores the amount of small surfboards
    int medium =0;   //stores the amount of medium surfboards
    int large =0;    //stores the amount of large surfboards
    int xs = 0;  // stores the amount of extra small surfboards
    double amountDue = 0.00;
    double total;
    
    // Go through the choices

    cout << "To show program usage 'S'" << endl;
    cout << "To purchase a surfboard, press 'P' " << endl;
    cout << "To display current purchases press 'C'" << endl;
    cout << "To display total amount press 'T'" << endl;
    cout << "To quit the program press 'Q'" << endl;

    do
    {
        ShowUsage();
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 'S':
        case 's':
            cout << "To show program usage 'S'" << endl;
            cout << "To purchase a surfboard, press 'P' " << endl;
            cout << "To display current purchases press 'C'" << endl;
            cout << "To display total amount press 'T'" << endl;
            cout << "To quit the program press 'Q'" << endl;

            
            break;

        case 'P':
        case 'p':

           
            cout << " Please enter the quantity and type (Xs=Xtra-Small, S=small, M=medium, L=large) of surfborard you would like to purchase:" << endl;
            cin >> quantity >> type;
            cout << endl;
            if (type == 'XS' || 'xs')
                xs = quantity;
            if (type == 's' || 'S')
                small = quantity;
            if (type == 'm' || 'M')
                medium = quantity;
            if (type == 'l' || 'L')
                large = quantity;
            break;

          //  MakePurchase(small, medium,  large);
            break;

       
        case 'C':
        case 'c':
         
            if (small >= 1) {
                cout << "The total number of small surfboards is " << quantity << endl;
            }
            else if (medium >= 1) {
                cout << "The total number of medium surfboards is " << quantity << endl;
            }
            else  if (large >= 1) {
                cout << "The total number of large surfboards is " << quantity << endl;
            }
            else
                cout << "No purchases made yet." << endl;



            break;
        case 'T':
        case 't':
            DisplayTotal(iTotalSmall, iTotalMedium, iTotalLarge);
            total = iTotalSmall * quantity + iTotalMedium * quantity + iTotalLarge;

            cout << iTotalMedium;
            cout << quantity;
            cout << "The total number of medium surfboards is " << total  << "at a total of $";
           


            cout << "Amount due: $" << total << endl;



            break;

        case 'Q':
        case 'q':
            cout << "Thank you" << endl;
            break;

        }
    }
    while (choice != 'q' || 'Q');
      cout << "Thank you" << endl;
    

    system("pause");
    return 0;
}

void ShowUsage() {
    cout << "\nPlease enter selection :" ;

}

// A function to sell surfboards
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge) {

    iTotalSmall = iTotalSmall;
    iTotalMedium = iTotalMedium;
    iTotalLarge = iTotalLarge;
}



// function to show the number of surfboards of each size sold.
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge) {
     
   
     
}


// Shows the total amount of money made.
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge) {
    
    //DisplayTotal(iTotalSmall, iTotalMedium, iTotalLarge);
    //total = iTotalSmall * quantity + iTotalMedium * quantity + iTotalLarge;

    //cout << iTotalMedium;
    //cout << quantity;
    //cout << "The total number of medium surfboards is " << total << "at a total of $";



    //cout << "Amount due: $" << total << endl;



  

}