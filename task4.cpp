#include <iostream>
using namespace std;
int hours(int neededhours,int days,int workers);
main()
{
    system("cls");
    int neededhours;
    int days;
    int workers;
    int result;
    cout << "Enter number of hours : ";
    cin >> neededhours;
    cout << "Enter number of days  : ";
    cin >> days;
    cout << "Enter No. of workers  : ";
    cin >> workers;
    result=hours(neededhours,days,workers);
    if(result>=neededhours)
    {
        cout << "Yes! " << result <<" hours left.";
    }
    if(result<neededhours)
    {
        
        cout << "Not enough time! " <<result << " hours needed.";
    }

}
int hours(int neededhours,int days,int workers)
{
    int result;
    result=((days*9)*workers)-neededhours;
    if(result>=neededhours)
    {
        return result;
    }
    if(result<neededhours)
    {
        //result=(-1)*result;
        return result;
    }
    return 0;
}