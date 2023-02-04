#include <iostream>
#include<math.h>

char op;

using namespace std;

void summation()
{
    double n;
    double sum = 0;
    int numberitems;

    cout << "Enter number of items: ";
    cin >> numberitems;

    for(int i = 1; i <= numberitems; i++)
    {
        cout << "Enter number: " << i << endl;
        cin >> n;
        sum += n;
    }
    cout << "Sum = " << sum << endl << endl;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)";

}

void subtraction()
{
    double sub;
    double n1,n2;

    cout << "enter two numbers to find the subtraction:\n\n";
    cout << "enter first number:";
    cin >> n1;
    cout << "\nenter second number:";
    cin >> n2;
    sub = n1 - n2;
    cout << "\nThe Subtraction is: " << sub << endl << endl;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)";

}

void product()
{
    double pro = 1;
    double n;
    int numberitems;

    cout << "Enter number of items: ";
    cin >> numberitems;

    for (int i = 0; i < numberitems ; i++)
    {

        cout << "\nEnter number: ";
        cin >> n;
        pro *= n;
    }
    cout << "The product operation is: " << pro << endl << endl;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)";

}

void div()
{

    double n1;
    double n2;
    double div;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    div = n1 / n2;

    if (n2 == 0)
        cout << "\n\nDIV BY ZERO IS NOT EXIST.";

    cout << "\n\nThe division operator is: " << div << endl << endl;

    cout << "For exit (press ctrl + F2) or Enter to continue,\n\n Thanks :)";

}

void mod()
{
    int n1;
    int n2;
    int mod = 0;


    cout << "\nEnter a first number: ";
    cin >> n1;
    cout << "\n\nEnter a second number: ";
    cin >> n2;

    mod = n1 % n2;

    cout << "\nThe mod of number is: " << mod << endl << endl;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)";

}

void Xor()
{

    int a;
    int b;
    int Xor;

    cout << "Enter a first number: ";
    cin >> a;
    cout << "Enter a second number: ";
    cin >> b;

    Xor = a ^ b;

    cout << "The result is : " << Xor;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)" << endl << endl;

}

void ShiftR()
{

    int a;
    int b;
    int shfR;

    cout << "Enter a first number: ";
    cin >> a;
    cout << "Enter a second number: ";
    cin >> b;

    shfR = a >> b;

    cout << "The result of shift to right is: " << shfR << endl << endl;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)";

}

void ShiftL()
{
    int a;
    int b;
    int shfL;

    cout << "Enter a first number: ";
    cin >> a;
    cout << "Enter a second number: ";
    cin >> b;

    shfL = a << b;

    cout << "The result of shift to left is: " << shfL << endl << endl;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)";

}

void cosinex()
{

    double x;

    cout << "Enter a number for cos(x): ";
    cin >> x;

    cout << "cos(" << x << ") = " << cos(x) << endl << endl;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)";

}

void sinx()
{

    double x;

    cout << "Enter a number for sin (x): ";
    cin >> x;

    cout << "sin(" << x << ") = " << sin(x) << endl << endl;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)";
}

void tanx()
{

    double x;

    cout << "Enter a number for tan (x): ";
    cin >> x;

    cout << "tan(" << x << ") = " << tan(x) << endl << endl;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)";

}

void power()
{

    long double p;
    int res = 1;
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "\nEnter power: ";
    cin >> p;

    cout << "The power is : " << pow(n, p) << endl << endl;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)";

}

void sq()
{

    double s;
    double n;

    cout << "Enter a number to find if it's square root: ";
    cin >> n;
    s = sqrt(n);
    cout << "The square root of " << n << " is " << s << endl << endl;

    cout << "For exit press (ctrl + F2) or Enter to continue,\n\n Thanks :)";

}

int main ()
{

    cout << "**-you can press your operation or a number for this operation.-**" << endl;
    cout << "___________________________\n";
    cout << "| Press 1 for shift right.|\n";
    cout << "| Press 2 for shift left. |\n";
    cout << "| Press 3 for tan (x).    |\n";
    cout << "| Press 4 for cos (x).    |\n";
    cout << "| Press 5 for sin (x).    |\n";
    cout << "| Press 6 for power.      | \n";
    cout << "| Press 7 for square root.|\n";
    cout << "|_________________________|\n";
    cout << "** If you want continue after the one time don't forget insert your number or your operation again. **";

    cout << "\nEnter your operation: ";
    cin >> op;

    do
    {

        switch (op) {

            case '+' :
                summation();
                break;

            case '-' :
                subtraction();
                break;

            case '*' :
                product();
                break;

            case '/':
                div();
                break;

            case '%':
                mod();
                break;

            case '^':
                Xor();
                break;

            case '1':
                ShiftR();
                break;

            case '2':
                ShiftL();
                break;

            case '3' :
                tanx();
                break;

            case '4' :
                cosinex();
                break;

            case '5' :
                sinx();
                break;

            case '6' :
                power();
                break;

            case '7':
                sq();
                break;
        }

    } while (cin >> op);
}