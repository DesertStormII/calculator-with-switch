#include <iostream>
using namespace std;
int main()
{
    int z, x, answer;
    char sign;
    cout << "My programm like calculator,enter numbers" << endl;
    cout << " First number is  ";
    cin >> z;
    cout << endl << " Second number is  ";
    cin >> x;
    cout << " Choose mathematical symbol(+,-,/,*)  ";
    cin >> sign;
    switch (sign)
    {
    case '+':
        answer = z + x;
        cout << "answer equal " << answer;
        break;
    case '*':
        answer = z * x;
        cout << "answer equal " << answer;
        break;
    case '-':
        answer = z - x;
        cout << "answer equal " << answer;
        break;
    case '/':
        answer = z * x;
        cout << "answer is equal to" << answer;
        break;
    default:
        cout << "choose one of this (+,-,/,*)";
        break;
    }


    return 0;
}