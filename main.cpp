#include <iostream>

using namespace std;

int main()
{
    int money;
    cout << "Please enter the money you have to spend at our restaurant here: $";
    cin >> money;
    int customerChoice;
    cout << "Welcome to our Resaurant. Here are our general types of our recipies from the menu. Please type their number to show the prices." << endl;
    cout << " (1) Grilled Meat\n (2) Soups\n (3) Salads\n (4) Pizza\n (5) Burger\n (6) Dessert\n (7) Pop" << endl;
    cout << "Enter your choice here: ";
    cin >> customerChoice;
    
    switch(customerChoice)
    {
        case 1:
            cout << "Grilled Meat (eg. Grilled Chicken etc.) of any choice costs: $16.95 per plate" << endl;
            cout << "After You have bought a plate of Grilled Meat, you will have $" << money - 16.95 << " left" << endl;
            break;
        
        case 2:
            cout << "Soups (eg. Tomato Soup etc.) of any choice costs: $9.99 per bowl" << endl;
            cout << "After You have bought a bowl of Soup, you will have $" << money - 9.99 << " left" << endl;
            break;
        
        case 3:
            cout << "Salads (eg. Spinach Salad etc.) of any choice costs: $ 12.50 per bowl" << endl;
            cout << "After You have bought a bowl of Salad, you will have $" << money - 12.50 << " left" << endl;
            break;
        
        case 4: 
            cout << "Pizza (eg. Cheese Pizza etc.) of any choice costs $ 12.99 per box" << endl;
            cout << "After You have bought a box of Pizza, you will have $" << money - 12.99 << " left" << endl;
            break;
        
        case 5: 
            cout << "Burger (eg. Turkey Burger etc.) of any choice costs $ 7.97" << endl;
            cout << "After You have bought a Burger, you will have $" << money - 7.97 << " left" << endl;
            break;
        
        case 6:
            cout << "Dessert (eg. Vanilla Ice Cream etc.) of any choice costs $ 5.99 per bowl" << endl;
            cout << "After You have bought a bowl of Dessert, you will have $" << money - 5.99 << " left" << endl;
            break;
        
        case 7:
            cout << "Pop (eg. Coca Cola etc.) of any choice costs $ 1.99 per can" << endl;
            cout << "After You have bought a can of Pop, you will have $" << money - 1.99 << " left" << endl;
            break;
        
        default:
            cout << "ERROR! You must choose a number between 1 and 7 as per the menu. Run the code to try again." << endl;
    }
    
    return 0;
}
