#include<iostream>
#include<string>
using namespace std;

int main()
{
    int age, height, property;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 20)
    {
        cout << "Enter your height: ";
        cin >> height;

        if(height < 160)
        {
            cout << "Your status = UNFRIEND";
            return 0;
        }
        else
        {
            if(height < 175)
            {
                cout << "Your status = FRIEND";
                return 0;
            }
            else
            {
                cout << "Enter your property: ";
                cin >> property;

                if(property > 69000000)
                {
                    cout << "Your status = MARRIED";
                    return 0;
                }
                else
                {
                    cout << "Your status = ONE-NIGHT-STAND";
                    return 0;
                }
            }
        }
    }
    else
    {
        if(age < 30)
        {
            cout << "Enter your property: ";
            cin >> property;

            if(property > 10000000)
            {
                cout << "Your status = BEST FRIEND";
                return 0;
            }
            else
            {
                cout << "Your status = UNFRIEND";
                return 0;
            }
        }
        else
        {
            cout << "Your status = UNFRIEND";
            return 0;
        }
    }
}

