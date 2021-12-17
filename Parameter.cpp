#include <iostream>
using namespace std;

class Car {
public:
int Speed (int maxSpeed);
};
int Car :: Speed (int maxSpeed)  {
return maxSpeed;
}
int main ()  {
Car myObj;
cout<< myObj.Speed(200);

return 0;
}
