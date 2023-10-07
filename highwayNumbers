#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   
   cin >> highwayNumber;

   if ((((highwayNumber >= 1) && (highwayNumber <= 99)))) {                         //primary interstates
      if ((highwayNumber % 2) == 0) {
      cout << "I-" << highwayNumber << " is primary, going east/west." << endl;
      }
      else {
         cout << "I-" << highwayNumber << " is primary, going north/south." << endl;
      }   
   }
   if ((highwayNumber <= 0) || (highwayNumber > 999)) {                             //invalid inputs
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }
   if ((highwayNumber >= 100) && (highwayNumber <= 999)){
      if ((highwayNumber % 100) == 0){
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
      }
      else { 
         cout << "I-" << highwayNumber << " is auxiliary, serving I-";
         highwayNumber = highwayNumber % 100;
            if ((((highwayNumber >= 1) && (highwayNumber <= 99)))) {                  //aux interstates
               if ((highwayNumber % 2) == 0) {
                  cout << highwayNumber << ", going east/west." << endl;
               }
            else {
               cout << highwayNumber << ", going north/south." << endl;
            }   
            }
      }
   }   
   
   return 0;
}
