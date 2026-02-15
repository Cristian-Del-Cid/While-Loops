/*Author: Cristian Del Cid 
Date: 02/15/2026

This program wille showcase different ways to write While Loop

First loop will accepts three nonzero intigers as input and will determine and display wheather they
 could represent the sides of a right triangle.

 The second loop will read in the sidea of a square and then print that square out of asterisk.

 The third code is to produce a table of values 

 The fourth code is to learn how to read and write decimal numbers in c++ program.
 */
 
 #include <iostream> // Library package 
 #include <iomanip> 
 using namespace std;

 int main() // Main function
 {
    
    int threepossiblesidecounters; // possible side counters
    int hypotenuse; // Declare an integer variable to hold the hypotenuse of the triangle
    int altitude; // Declare an integer variable to hold the altitude of the triangle 
    int base; // Declare an integer variable to hold the base of the triangle 
    int nestedloop; // bucle inside another one 
    int hollowsquare; // so the square can be printed 
    int row; // row of asterisks (horizontal)
    int column; // column of asterisks (vertical)
    int size; // for the size of the square 
    int a; // integer for the table 
    double itemprice; // to get the itemprice with decimals
    double taxrate = 0.0825; //8.25% taxrate
    double finaltotal =0; // for the total price 
    
    // Display program heading 
    cout << "******Part I******" <<endl;
    cout << "This program will determine if three nonzero integers can represent the sides of a right triangle." <<endl;

    threepossiblesidecounters =1; // Starts loop with 1

  while (threepossiblesidecounters <=3 ) // start loop with condition 
  { 
    cout << "\nEnter three nonzero intigers: "; // Prompt the user to enter three nonzero intigers
    cin >> hypotenuse >> altitude >> base; // read the three intigers from the user and store then in the variables side1, side2, and side3 
   
    if (altitude <= 0)
       cout << "\nError altitude must be nonzero" << endl; // if the user input 0 it outputs an error 
    else if (base <= 0)
       cout << "\nError base must be nonzero" << endl; // if the user input 0 it outputs an error 
    else if (hypotenuse <= 0)
      cout <<"\nError hypotenuse must be nonzero" <<endl; // if the user input 0 it outputs an error 
    else if (hypotenuse * hypotenuse == altitude * altitude + base * base) // formula for the pythagoras Theorem first case
        cout << "Your triangle is a right triangle" << endl;
    else if (altitude * altitude == hypotenuse * hypotenuse + base *base) // formula for the pythagoras Theorem second case
        cout << "Your triangle is a right triangle" << endl;
    else if (base *base == hypotenuse * hypotenuse + altitude * altitude) // formula for the pythagoras Theorem third case
        cout << "Your triangle is a right triangle" << endl;
    else 
        cout << "your triangle is not a right triangle" << endl;

    threepossiblesidecounters++; // increase counter by 1
        }// end while loop
   

  cout << "\n*****Part II*****" << endl;
  cout << "This code will read in the side of a square and print it out of astersiks." << endl;
  
  cout << "\nEnter the size of the square from 1 to 20" << endl;
  cin >> size;
  
  row = 1; // assigned the value one 
  while (row <= size){
  int column =1;
  while (column <= size){
  
  
  if (row ==1) // to check if row is equeal to one 
    cout <<"*";
  else if (row == size) // to check if it is equal to size 
    cout << "*";
  else if (column == 1)
    cout << "*";
  else if (column == size)
    cout << "*";
  else 
   cout << " ";
  column++; // increase counter by oe
  }
  cout << endl;
  row++; // increase counter by one 
  
  }
  
  cout <<"\n*****Part III*****" << endl;
  cout <<"\nThis program will produce a table of values:" <<endl;

  a = 3; // Starting point 

  cout << "A\tA+2\tA+4\tA+6\n\n";

  while (a <= 15) // each digit vales "3" so you can just have 5 digits per row 
  {
      cout <<a << "\t"
      << (a+2) << "\t"
      << (a+4) << "\t"
      << (a+6) << endl;

      a= a+3; // to add 3 in each "a" 
  }


  cout << "*****Part IV*****" << endl;
  cout << "This program calculates the total price charged for a purchasing item********\n\n" << endl;
  cout << "Enter the item price: $"; //prompting for input
  
  

  //Reading item price from user
  cin >>itemprice;
 
  while (itemprice != -1) // while item price is not equal to negative one it can still be runing 
  {
   
   //calculation
   finaltotal += itemprice + (itemprice *taxrate);
  
  cout << "\nEnter next price or -1 to end" <<endl;

  cin >> itemprice;

  }
  
  system ("pause"); // pause the program until you press a key

  

  return 0; // end this function and report success

 }

