// #include <iostream>
// #include<conio.h>
// #include <string>

// using namespace std;
// int main() {
// unsigned long long int size;
// cout<<"Enter Array Size : ";
// cin>>size;
//  unsigned long long int ssn[size];
//  string lastname[size];
//  string givenname[size];
//  float cgpa[size];
//  int year[size];
//  int i;

//  for(i=0;i<size;i++){
// cout<<i+1<<"\n";
//   cout << "Please enter Social Security Number: ";
//   cin >> ssn[i];

//   cout << "Please enter Last name: ";
//   cin >> lastname[i];

//   cout << "Please enter given name: ";
//   cin >> givenname[i];

//   cout << "Please enter cgpa: ";
//   cin >> cgpa[i];

//   cout << "Please enter year: ";
//   cin >> year[i];
//   cout<<"\n";
//  }

// cout << "Social Security No  Last Name  Given  Name   C  G  P  A    Y  e  a  r\n";

// for(i=0;i<size;i++){
//  cout << ssn[i]<<"             "<<lastname[i]<<"       "<<givenname[i]<<"         "<<cgpa[i]<<"            "<<year[i]<<"\n";
// } 
// getch();
// }

#include <iostream>
#include<conio.h>
#include <string>

using namespace std;
int main() {
 unsigned long long int ssn[]={211581329,169384248,166485842,187524076,126636382,135589565,172481849,192603157,160601826,166524147,186580430,187581123,174580732,183523865,135481397,182526712,184488539,187482377};
 string lastname[]={"Adams","Baile","Cheng","Davis","Edward","Fox","Green","Hopkins","Klein","Lee","Murphy","Newman","Osborn","Parker","Rogers","Schwab","Thompson","White"};
 string givenname[]={"Bruce","Irene","Kim","JohnC","Steven","Kenneth","Gerald","Gary","Deborah","John","William","Ronald","Paul","David","MaryJ","Jonna","DavidE","Adam"};
 double cgpa[]={2.55,3.25,3.40,2.85,1.75,2.80,2.35,2.70,3.05,2.60,2.30,3.90,2.05,1.55,1.85,2.95,3.15,2.50};
 int year[]={2,4,1,2,3,2,2,2,1,3,2,4,3,2,1,2,3,2};
 int i;
 int n = sizeof(ssn)/sizeof(ssn[0]);

cout << "Social Security No  Last Name  Given  Name   C  G  P  A    Y  e  a  r\n";
 for(i=0;i<n;i++){
  cout << ssn[i]<<"             "<<lastname[i]<<"       "<<givenname[i]<<"         "<<cgpa[i]<<"            "<<year[i]<<"\n";
 } 
 
getch();
}

// #include <iostream>
// #include<conio.h>
// #include <string>

// using namespace std;
// int main() {
//  unsigned long long int ssn[]={211581329,169384248,166485842,187524076,126636382,135589565,172481849,192603157,160601826,166524147,186580430,187581123,174580732,183523865,135481397,182526712,184488539,187482377};
//  string lastname[]={"Adams","Baile","Cheng","Davis","Edward","Fox","Green","Hopkins","Klein","Lee","Murphy","Newman","Osborn","Parker","Rogers","Schwab","Thompson","White"};
//  string givenname[]={"Bruce","Irene","Kim","JohnC","Steven","Kenneth","Gerald","Gary","Deborah","John","William","Ronald","Paul","David","MaryJ","Jonna","DavidE","Adam"};
//  float cgpa[]={2.55,3.25,3.40,2.85,1.75,2.80,2.35,2.70,3.05,2.60,2.30,3.90,2.05,1.55,1.85,2.95,3.15,2.50};
//  int year[]={2,4,1,2,3,2,2,2,1,3,2,4,3,2,1,2,3,2};
//  int i;
//  int n = sizeof(ssn)/sizeof(ssn[0]);

//  cout << "Social Security No|  |Last Name|  |  Given Name  |    |   CGPA    |   |   Year     |\n";

//  for(i=0;i<n;i++){
//   cout << ssn[i]<<"|           |"<<lastname[i]<<"|           |"<<givenname[i]<<"|             |"<<cgpa[i]<<"|            |"<<year[i]<<"|\n";
//  } 
//  getch();
// }

//Listing students whose CGPA is K
// #include <iostream>
// #include<conio.h>
// #include <string>

// using namespace std;
// int main() {
//  unsigned long long int ssn[]={211581329,169384248,166485842,187524076,126636382,135589565,172481849,192603157,160601826,166524147,186580430,187581123,174580732,183523865,135481397,182526712,184488539,187482377};
//  string lastname[]={"Adams","Baile","Cheng","Davis","Edward","Fox","Green","Hopkins","Klein","Lee","Murphy","Newman","Osborn","Parker","Rogers","Schwab","Thompson","White"};
//  string givenname[]={"Bruce","Irene","Kim","JohnC","Steven","Kenneth","Gerald","Gary","Deborah","John","William","Ronald","Paul","David","MaryJ","Jonna","DavidE","Adam"};
//  double cgpa[]={2.55,3.25,3.40,2.85,1.75,2.80,2.35,2.70,3.05,2.60,2.30,3.90,2.05,1.55,1.85,2.95,3.15,2.50};
//  int year[]={2,4,1,2,3,2,2,2,1,3,2,4,3,2,1,2,3,2};
//  int i;
//  int n = sizeof(ssn)/sizeof(ssn[0]);

// cout << "Social Security No  Last Name  Given  Name   C  G  P  A    Y  e  a  r\n";
//  for(i=0;i<n;i++){
//   cout << ssn[i]<<"             "<<lastname[i]<<"       "<<givenname[i]<<"         "<<cgpa[i]<<"            "<<year[i]<<"\n";
//  } 

// double k, index=0;
// cout<<"Enter the CGPA :";
// cin>>k;

//  for(i=0;i<n;i++){
//      if(cgpa[i]>=k){
//          k=cgpa[i];
//          index=i;
//  }
//  } 

//  cout << "Social Security No  Last Name  Given  Name   C  G  P  A    Y  e  a  r\n";
//  for(i=index;i<n;i++){
//   cout << ssn[i]<<"             "<<lastname[i]<<"       "<<givenname[i]<<"         "<<cgpa[i]<<"            "<<year[i]<<"\n";
//  } 
 
// getch();
// }

//Listing all stidents in year L