//Grades Teri Homicile
#include <iostream>
//#include <cstdlib>
#include <iomanip>
//#include <cmath>
using namespace std;

int main()
{
    const int SIZE = 15;
    int grade [SIZE] = {0};
    int a,b,c,d,f;
    char loop = 'n';
    float added;
    int temp;
    int index = 0;
    int mode [4]= {101,101,101,101};
    
    int count = 1;
    int longest =1'
   
    // BLURB

    do
    {
        //"i" starts out 1 so i can output the score # to the user
        for (int i = 1; i < SIZE + 1; i++)
        {
            cout << "Enter score " << i << ":\t";
            cin >> grade [i-1];
            //bounds check
            if (grade [i-1] < 0 || grade [i-1] > 100)
            {
                cout << "The entered value was invalid. Try again with a value "
                        "between 0 and 100.\n";
                //so that the new answer is recorded in the right spot
                i--;
            }
        }
        
        a=0; b=0; c=0; d=0; f=0; added=0; 

        //sorting array (least to greatest)
        for (int pass = 1; pass < SIZE; pass++)
            for (int i = 0; i < SIZE-pass; i++)
            {
                if (grade [i] > grade [i+1])
                {
                    temp = grade [i];
                    grade [i] = grade [i+1];
                    grade [i+1] = temp;
                }
            }
        
        for (int i = 0; i < SIZE; i++)
        {
            //average
            added += grade [i];
            //grade distribution
            if (grade [i] >= 90)
                a++;
            else if (grade [i] >= 80)
                b++;
            else if (grade [i] >= 70)
                c++;
            else if (grade [i] >=60)
                d++;
            else
                f++;
        }

        //score summary (pt 1)
        cout << "\nScore Summary:\n\n";
        cout << "Minimum:\t" << grade [0] << endl;
        cout << "Maximum:\t" << grade[SIZE-1] << endl;
        cout << "Range:\t\t" << grade[SIZE-1] - grade [0] << endl;
        cout << fixed << setprecision(1) << "Average:\t" << added/SIZE << endl;

        //break for mode

        for (i)
        //fills mode array
 //       for (int if=0; i<=100; i++)
   //         mode2 [i] = i;

        //get mode
//        for (int j=0; j<=100; j++)
  //          if (mode2[i]= 


        //finds unique numbers
        for (int i = 0; i < SIZE - 1; i++)
        {
            for (int m = i + 1; m < SIZE; m++)
            {
                if (grade [i] == grade [m])
                {
                    count++; 
                    grade[m] = -1;
                }
            }
        }

        for (int i = 1; i < num; i++)
        {
            if (grade [i] == -1)
            {
                count++; // counts # of -1 after a #
                if (count > count2)
                {
                    
                }
                
                
                mode [index] = grade [i-1];
                // the # to beat to become next mode
                if (count > count2)
            }
            else 
            {
                if (count > count2)
                {
                    mode [index] = grade [i];
                    index = 0;
                }
                else
                {
                    mode [index] = 0;
                    index++; 
                    count=1;
                }
            }
                
        }

        cout << mode [0] << endl << mode [1] << endl << mode [2] << endl << mode [3] << endl;
        
        for (int j = 0; j < SIZE; j++)
            if (grade[j] != -1)
            {
                mode [index] = grade [j];
                index++;
                cout << mode [index-1] << endl;
            }
        
//        cout << grade [0] << " ";
  //      cout << mode [0] << " ";
    //    for (int j = 0; j < SIZE; j++)
      //      if (count < 3)
        //    {
          //      mode[index] = grade [j];
            //    index++;
              //  cout << mode[index] << endl;
//            }
  //      
    //    cout << mode [0] << " ." << mode [1] << endl;
      //  cout << count << endl;

        //score summary (pt 2)
 //       if (mode [0] == 101 || mode [3] != 101) // true if values haven't been written over, meaning no mode or @ least 4 modes
 //           cout << "Mode:\t\t N/A";
   //     else
     //   {
       //     cout << "Mode:\t\t";
         //   for (int k = 0; k < index; k++)
           //     cout << mode [k] << " ";
   //     }

        cout << "\nScore Distribution:\nA's:\t" << a << endl << "B's:\t" << b << endl << "C's:\t" << c
        << endl << "D's:\t" << d << endl << "F's:\t" << f << endl;

        //looping the data
        cout << "\nWould you like to calculate another set of grades? (y/n)\n";
        cin >> loop;

    } while (loop == 'y'|| loop == 'Y');

    if (loop == 'n'|| loop == 'N')
        cout << "Goodbye.\n\n";

    return 0;

}
