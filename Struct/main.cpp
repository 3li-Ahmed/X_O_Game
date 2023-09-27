// In struct there is no encapsulation
// In struct there is something is similar to index in array but by names
#include<iostream>
#include<string>
using namespace std;
struct Distance
        {
    int feet;
    int inches;
        };
//---------------------------------------------
struct Car
        {
    // initial values you can write the program without it
    string name = "Ali";
    string color = "Red";
    int max_speed = 120;
    int model = 2030;
        };
Distance add_distance(Distance d1  , Distance d2)
{
    Distance result ;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    return result;
}
int main()
{
    Car car1;
    car1.name="BMW";
    car1.color="Blue";
    car1.max_speed=120;
    car1.model=2024;
    cout<<"NAME : "<<car1.name<<endl
        <<"MODEL : "<<car1.model<<endl
        <<"COLOR : "<<car1.color<<endl
        <<"MAX_SPEED : "<<car1.max_speed<<" KM/H"<<endl;
    cout<<"++++++++++++++++++++++\n";
    Car car2;
    car2 = {"Fiat","Red",220,2030};
    cout<<"NAME : "<<car2.name<<endl
        <<"MODEL : "<<car2.model<<endl
        <<"COLOR : "<<car2.color<<endl
        <<"MAX_SPEED : "<<car2.max_speed<<" KM/H"<<endl;
    cout<<"++++++++++++++++++++++++++++\n";
    cout<<"Comparing between Fiat and BMW \n";
    cout<<"1-MAX_SPEED"<<endl;
    if (car1.max_speed>car2.max_speed)
    {
        cout<<"BMW is the winner"<<endl;
    }
    else
    {
        cout<<"Fiat is the winner"<<endl;
    }
cout<<"===========================\n";
Distance d1 ={10,10};
Distance d2 = {20,20};
Distance result = add_distance(d1,d2);
    cout<<"THE sum of the inches is "<<result.inches<<endl;
    cout<<"The sum of the feet is "<<result.feet<<endl;
    cout<<"--------------------------------\n";

}