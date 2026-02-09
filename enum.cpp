#include <iostream>
using namespace std;
extern int s=10;
int main() {
    enum Day {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };
    register int a=10;
    cout<<a;
    
    cout<<s;
    

    // Day today = Wednesday;
    // cout << static_cast<int>(today);  // prints index
    // int dayIndex = 2;
    // //print the day corresponding to the index
    // switch (dayIndex)
    // {
    // case Monday:
    //     cout<<endl<< "Monday";
    //     break;
    // case Tuesday:
    //     cout<<endl<< "Tuesday";
    //     break;
    // case Wednesday:
    //     cout<<endl<< "Wednesday";
    //     break;
    // case Thursday:
    //     cout<<endl<< "Thursday";
    //     break;
    // case Friday:
    //     cout<<endl<< "Friday";
    //     break;
    // case Saturday:
    //     cout<<endl<< "Saturday";
    //     break;
    // case Sunday:
    //     cout<<endl<< "Sunday";
    //     break;
    // }
    // cout<<Day::Monday;  // prints index
    return 0;
}
