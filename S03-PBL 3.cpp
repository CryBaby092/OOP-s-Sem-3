/*Create a class named Vehicle with two data member named mileage and price. Create its two 
subclasses:
*Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type 
(diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or 
oil), wheel type(alloys or spokes) and fuel tank size(in inches).
Make another two subclasses Audi and Ford of Car, each having a data member to store the model type.
Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type. Now, 
store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, 
seating capacity, fuel type, mileage and price.).
*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle
    {
        public:
          float mileage;
          long int price;
          void  get_data();
          void  put_data();
    };

class Car: public Vehicle
    {
        public:
long int ownership_cost;
       float warranty;
       int seating_cap;
       char fuel_type;

              void  Veh_getdata();
              void  Veh_displaydata();

    };

class Audi:public Car
    {
        public:
string model_type;
                void Car_getdata();
                void Car_displaydata();
    };

class Ford:public Car
    {
        public:
string model_type;
                void Car_getdata();
                void Car_displaydata();
    };

class Bike:public Vehicle
    {
        public:
int no_cylinders,no_gears,fueltnk_size;
string cooling_type,wheel_type;
                void Veh_getdata();
                void Veh_displaydata();

    };

class Bajaj:public Bike
    {

        public:
string model_type;
                void Bike_getdata();
                void Bike_displaydata();
    };

class TVS:public Bike
    {
        public:
          string model_type;
                void Bike_getdata();
                void Bike_displaydata();
    };


void Audi :: Car_getdata(){
    cout<<"Welcome to Audi"<<endl;
    cout<<"Enter Model-Type: ";
    cin>>model_type;
    cout<<"Enter Owernship-Cost:";
    cin>>ownership_cost;
    cout<<"Enter Warranty(in year):";
    cin>>warranty;
    cout<<"Enter Seating-Capacity";
    cin>>seating_cap;
    cout<<"Enter Fuel-Type(diesel or petrol):";
    cin>>fuel_type;
    cout<<"Enter Mileage:";
    cin>>mileage;
    cout<<"Enter Price of the Vehicle:";
    cin>>price;
}

void Ford :: Car_getdata(){
    cout<<endl;
    cout<<"Welcome to Ford "<<endl;
    cout<<"Enter Model-Type: ";
    cin>>model_type;
    cout<<"Enter Owernship-Cost:";
    cin>>ownership_cost;
    cout<<"Enter Warranty(in years):";
    cin>>warranty;
    cout<<"Enter Seating-Capacity:";
    cin>>seating_cap;
    cout<<"Enter Fuel-Type(diesel or petrol):";
    cin>>fuel_type;
    cout<<"Enter Mileage:";
    cin>>mileage;
    cout<<"Enter Price of the Vehicle:";
    cin>>price;
}

void Audi :: Car_displaydata(){
    cout<<endl;
    cout<<"Model-Type: "<<model_type<<endl;
    cout<<"Owernship-Cost: "<<ownership_cost<<endl;
    cout<<"Warrenty(in years): "<<warranty<<endl;
    cout<<"Seating-Capacity: "<<seating_cap<<endl;
    cout<<"Fuel-Type(diesel or petrol): "<<fuel_type;
    cout<<"Mileage: "<<mileage<<endl;
    cout<<"Price of the Vehicle: "<<price<<endl;
}

void Ford :: Car_displaydata(){
 cout<<endl;
   cout<<"Model-Type: "<<model_type<<endl;
   cout<<"Owernship-Cost: "<<ownership_cost<<endl;
   cout<<"Warrenty(in years): "<<warranty<<endl;
   cout<<"Seating-Capacity: "<<seating_cap<<endl;
   cout<<"Fuel-Type(diesel or petrol): "<<fuel_type;
   cout<<"Mileage: "<<mileage<<endl;
   cout<<"Price of the Vehicle: "<<price<<endl;
}

void Bajaj :: Bike_getdata(){
    cout<<"Welcome to Bajaj"<<endl;
    cout<<"Enter Model-Type: ";
    cin>>model_type;
    cout<<"Enter Number of Cylinders:";
    cin>>no_cylinders;
    cout<<"Enter Number of Gears:";
    cin>>no_gears;
    cout<<"Enter Fuel-Tank Size(in inches):";
    cin>>fueltnk_size;
    cout<<"Enter Cooling-Type(air,liquid or oil):";
    getline(cin>>ws,cooling_type);
    cout<<"Enter Wheel-Type(alloys or spokes):";
    getline(cin>>ws,wheel_type);
    cout<<"Enter Mileage:";
    cin>>mileage;
    cout<<"Enter Price of the Vehicle:";
    cin>>price;
}

void Bajaj :: Bike_displaydata(){
 cout<<endl;
   cout<<"Model-Type: "<<model_type<<endl;
   cout<<"Number of Cylinders: "<<no_cylinders<<endl;
   cout<<"Number of Gears: "<<no_gears<<endl;
   cout<<"Fuel-Tank Size(in inches): "<<fueltnk_size<<endl;
   cout<<"Cooling-Type(air,liquid or oil): "<<cooling_type;
   cout<<"Wheel-Type(alloys or spokes): "<<wheel_type;
   cout<<"Mileage: "<<mileage<<endl;
   cout<<"Price of the Vehicle: "<<price<<endl;
}

void TVS :: Bike_getdata(){
    cout<<"Welcome to Bajaj"<<endl;
    cout<<"Enter Model-Type: ";
    cin>>model_type;
    cout<<"Enter Number of Cylinders:";
    cin>>no_cylinders;
    cout<<"Enter Number of Gears:";
    cin>>no_gears;
    cout<<"Enter Fuel-Tank Size(in inches):";
    cin>>fueltnk_size;
    cout<<"Enter Cooling-Type(air,liquid or oil):";
    getline(cin>>ws,cooling_type);
    cout<<"Enter Wheel-Type(alloys or spokes):";
    getline(cin>>ws,wheel_type);
    cout<<"Enter Mileage:";
    cin>>mileage;
    cout<<"Enter Price of the Vehicle:";
    cin>>price;
}

void TVS :: Bike_displaydata()
{
 cout<<endl;
   cout<<"Model-Type: "<<model_type<<endl;
   cout<<"Number of Cylinders: "<<no_cylinders<<endl;
   cout<<"Number of Gears: "<<no_gears<<endl;
   cout<<"Fuel-Tank Size(in inches): "<<fueltnk_size<<endl;
   cout<<"Cooling-Type(air,liquid or oil): "<<cooling_type;
   cout<<"Wheel-Type(alloys or spokes): "<<wheel_type;
   cout<<"Mileage: "<<mileage<<endl;
   cout<<"Price of the Vehicle: "<<price<<endl;
}

int main()
{
    Audi o1;
    Ford o2;
    Bajaj o3;
    TVS o4;
    o1.Car_getdata();
    o1.Car_displaydata();
    o2.Car_getdata();
    o2.Car_displaydata();
    o3.Bike_getdata();
    o3.Bike_displaydata();
    o4.Bike_getdata();
    o4.Bike_displaydata();
    return 0;
}
