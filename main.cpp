#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <math.h>

using namespace std;

bool almostEqual(float a, float b)
{
    return abs(a-b) <= 1.0e-05;
}


int main()
{
    bool debug = true;
    srand(time(NULL));
    while(true)
    {

        float a = (rand() % 1000);
        float b = (rand() % 1000);
        float c = (rand() % 10);
        float d = (rand() % 5);
        int e = (rand() % 13);
        float f[] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196};
        a = a/100;
        b = b/100;

        cout << " " << endl;
        cout << "Choose 1: + ,2: - , 3: *, 4: /, 5: ^, 6: Kvardratroden" << endl;

        string input = "";
        float valg = 0;
        try
        {
            cin >> input;
            valg = stof(input);
        }
        catch (std::invalid_argument iaex)
        {
            if(false)
            {
                std::cout << "You have to use numbers!" << std::endl;
            }
        }


        if(debug)
        {
            cout << "you choose :" << valg << endl;
        }

        if(valg == 1)
        {
            cout << "Calculate the following " << endl;
            cout << a  << "+" << b << endl;
            string usvar = "";
            float csvar = a+b;
            float svar = -1;
            bool trueInput = false;

            while(!trueInput)
            {
                try
                {
                    cin >> usvar;
                    svar = stof(usvar);
                    trueInput = true;
                }
                catch (std::invalid_argument iaex)
                {
                    if(true)
                    {
                        std::cout << "Wrong input! Try again:" << std::endl;
                        trueInput = false;
                    }
                }
            }


            if(debug)
            {
                cout << "your answered: " << usvar << endl;
            }

            if(almostEqual(csvar, svar))
            {
                cout << "Correct!!" <<endl;
            }
            else
            {
                cout << "Wrong, the correct answer is " << csvar << endl;
            }
        }

        else if(valg == 2)
        {
            cout << "Calculate the following " << endl;
            cout << a  << "-" << b << endl;
            string usvar = "";
            float csvar = a-b;
            float svar = -1;

            bool trueInput = false;

            while(!trueInput)
            {
                try
                {
                    cin >> usvar;
                    svar = stof(usvar);
                    trueInput = true;
                }
                catch (std::invalid_argument iaex)
                {
                    if(true)
                    {
                        std::cout << "Wrong input! Try again:" << std::endl;
                        trueInput = false;
                    }
                }
            }

            if(debug)
            {
                cout << "your answered " << usvar << endl;
            }

            if(almostEqual(csvar, svar))
            {
                cout << "Correct!!" <<endl;
            }
            else
            {
                cout << "Wrong, the correct answer is " << csvar << endl;
            }
        }

        else if((int)valg == 3)

        {
            cout << "Calculate the following " << endl;
            cout << a  << "*" << b << endl;
            string usvar = "";
            float csvar = a*b;
            float svar = -1;
            bool trueInput = false;

            while(!trueInput)
            {
                try
                {
                    cin >> usvar;
                    svar = stof(usvar);
                    trueInput = true;
                }
                catch (std::invalid_argument iaex)
                {
                    if(true)
                    {
                        std::cout << "Wrong input! Try again:" << std::endl;
                        trueInput = false;
                    }
                }
            }
            if(debug)
            {
                cout << "your answered " << usvar << endl;
            }

            if(almostEqual(csvar, svar))
            {
                cout << "Correct!!" <<endl;
            }
            else
            {
                cout << "Wrong, the correct answer is " << csvar << endl;
            }
        }
        else if(valg == 4)
        {
            cout << "Calculate the following " << endl;
            cout << a  << "/" << b << endl;
            string usvar = "";
            float csvar = a/b;
            float svar = -1;
            bool trueInput = false;

            while(!trueInput)
            {
                try
                {
                    cin >> usvar;
                    svar = stof(usvar);
                    trueInput = true;
                }
                catch (std::invalid_argument iaex)
                {
                    if(true)
                    {
                        std::cout << "Wrong input! Try again:" << std::endl;
                        trueInput = false;
                    }
                }
            }

            if(debug)
            {
                cout << "your answered " << usvar << endl;
            }

            if(almostEqual(csvar, svar))
            {
                cout << "Correct!!" <<endl;
            }
            else
            {
                cout << "Wrong, the correct answer is " << csvar << endl;
            }
        }
        else if(valg == 5)
        {
            cout << "Calculate the following " << endl;
            cout << c  << "^" << d << endl;
            string usvar = "";
            float csvar = pow(c,d);
            float svar = -1;
            bool trueInput = false;

            while(!trueInput)
            {
                try
                {
                    cin >> usvar;
                    svar = stof(usvar);
                    trueInput = true;
                }
                catch (std::invalid_argument iaex)
                {
                    if(true)
                    {
                        std::cout << "Wrong input! Try again:" << std::endl;
                        trueInput = false;
                    }
                }
            }

            if(debug)
            {
                cout << "your answered " << usvar << endl;
            }

            if(almostEqual(csvar, svar))
            {
                cout << "Correct!!" <<endl;
            }
            else
            {
                cout << "Wrong, the correct answer is " << csvar << endl;
            }
        }
        else if(valg == 6)
        {
            cout << "Calculate the following " << endl;
            cout << "kvadratroden af " << f[e] << endl;
            string usvar = "";
            float csvar = sqrt(f[e]);
            float svar = -1;
            bool trueInput = false;

            while(!trueInput)
            {
                try
                {
                    cin >> usvar;
                    svar = stof(usvar);
                    trueInput = true;
                }
                catch (std::invalid_argument iaex)
                {
                    if(true)
                    {
                        std::cout << "Wrong input! Try again:" << std::endl;
                        trueInput = false;
                    }
                }
            }

            if(debug)
            {
                cout << "your answered " << usvar << endl;
            }

            if(almostEqual(csvar, svar))
            {
                cout << "Correct!!" <<endl;
            }
            else
            {
                cout << "Wrong, the correct answer is " << csvar << endl;
            }
        }

        else
        {
            cout << "Wrong input";
            continue;
        }
    }
}
