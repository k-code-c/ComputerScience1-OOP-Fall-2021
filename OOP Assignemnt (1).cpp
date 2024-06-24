/*#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::cout;
using std::endl;
using std::string;

struct shirt {
    string name;
    string color;
    float amountShirts; //important
    string size;
    float cost; //important
};

/*float calculateOnHandInventory(shirt s, float sales);*/

float calculateOnHandInventory(shirt s, float, float);
/*float calculateOnHandInventory(string, float, float); */

int main(int argc, char* argv[])
{
    shirt s; //creates new name for each kind of shirt
    s.name = "TShirt";
    s.cost = 5.99;
    s.amountShirts = 2000.00;
    s.color = "Red";
    s.size = "Large";

    shirt l;
    l.name = "Long Sleeve Shirts";
    l.cost = 7.99;
    l.amountShirts = 4000.0;
    l.color = "Blue"; 
    l.size = "Small";


    float TshirtTotal = calculateOnHandInventory(s, s.cost, s.amountShirts); //comTotal = combined total

    cout << "The Price of a T-Shirt is: " << s.cost << endl;

    cout << s.name << " Inventory: " << TshirtTotal << endl;

    cout << "There are " << s.amountShirts << " T-Shirts" << endl; 

    float longShirtTotal = calculateOnHandInventory(l, l.cost, l.amountShirts);

    cout << "The Price of a Long SLeeve Shirt is: " << l.cost << endl;

    cout << l.name << " Inventory: " << longShirtTotal << endl;

    cout << "There are " << l.amountShirts << " Long sleeve shirts" << endl; 

    return 0;
}


float calculateOnHandInventory(shirt , float price, float totalAmount) {
    float result = 0.0;
    result = price * totalAmount;
    return result;  


}

/*

float calculateOnHandInventory(shirt s, float sales) {
    float amountShirts = 0;
    float revenue = sales * s.cost;
    float cost = 100 * sales;
    amountShirts = revenue / sales;
    //divide revenue by some rate
    //result should be the amount in inventory
    return amountShirts;
}
    //rate
*/