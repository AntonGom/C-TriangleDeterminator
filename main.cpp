//Antonio Gomez
//2/12/19
//Project 1 Triangle Type (decision with loop)


#include <iostream>
#include<iomanip>
using namespace std;

int main () {
    char answer = 'y';

    double side1;
    double side2;
    double side3;

    do
    {
        cout<<"Identify the type of triangle based on the lengths of its sides"<<endl;
        cout<<"Enter 3 numbers"<<endl;

        cin>>side1;
        cin>>side2;
        cin>>side3;


        if(side1<=0 || side2<=0 || side3<=0)                        //1. If any side is 0 or any negative number the user will be prompted that the...
            //...input is not valid and the program cannot proceed
        {
            cout<<"These sides do not form a triangle."<<endl;
            cout<<"All sides must be greater than zero."<<endl;
        }
        else                                                        //2. If this 'else' is true then anything under it has permision to execute
        {



            if (side2+side3<=side1)
            {
                cout<<"This is not triangle because the sum of the\ntwo smaller sides is not greater than the largest side."<<endl;  //3. If true program stops

            }
            else                                                   //4. Once the program knows that side1+side2 is greater than side 3 then everything under this statement...
                                                                    //...can excecute
            {
                cout<<"It is "<<endl;   //5. This statement has permission to excecute before the program can even calculate what type of triangle it is becuase it was granted...
                                        //...permission in comment #2 AND comment #4


                if (side1==side3 && side2 == side3)
                {
                    cout<<"an equilateral triangle because all sides are equal."<<endl;   //6. Checks to see if this is true, if not, then program moves onto the next statement

                }
                else if (side1==side2 || side1==side3 || side2==side3)                   //7. 'Else if' is required so only one statement can be true
                {
                    cout<<"an isosceles triangle because exactly two sides are equal."<<endl;
                }
                else                                                    //8. If none of the statements above are true then the program concludes that it must be a scalene traingle
                {
                    cout<<"a scalene triangle because no sides are equal."<<endl;
                }
            }
        }           answer='n';                                         //9. Terminates an infinite loop
        cout<<"Would you like to try again?(Y/y)"<<endl;
        cin>>answer;

    }

    while(answer=='Y'||answer=='y');


}

