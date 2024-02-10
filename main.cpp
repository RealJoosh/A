#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    //Defining Price Value Constants
    double coffee_price = 2.00, tea_price = 1.50, cake_price = 3.00, muffin_price = 2.50;
    //Defining Variables
    int item_selected, item_selected_quantity;
    double total_cost, coffee_quantity, tea_quantity, cake_quantity, muffin_quantity = 0.00;
    char order_cont = 'y';

    // Main Loop
    while (order_cont == 'y')
    {
        //Displaying Text-Based Menu
        cout << left <<"Welcome to the SpudBucks!";
        cout << left <<"\nMenu:";
        cout << left <<"\n1. Coffee    - $ 2.00 \n2. Tea       - $ 1.50\n3. Cake      - $ 3.00\n4. Muffin    - $ 2.50\n";
        cout << endl;

        //Selection Input
        cout << left << "Select an item (1-4): " ;
        cin >> item_selected;

        //Selection Validation While Statement
        while (item_selected < 1 || item_selected > 4) {
            cout << left << "\nSelect an item (1-4): ";
            cin >> item_selected;
        }
        //Quantity Input
        cout << "Enter Quantity: ";
        cin >> item_selected_quantity;

        //Quantity Validation While Statement
        while (item_selected_quantity <= 0) {
            cout << left << "Enter Quantity: ";
            cin >> item_selected_quantity;
        }

        //Total Cost Calculation
        switch (item_selected) {
            case 1:
                total_cost += 2 * item_selected_quantity;
                coffee_quantity = coffee_quantity +item_selected_quantity;
                break;
            case 2:
                total_cost += 1.5 * item_selected_quantity;
                tea_quantity = tea_quantity + item_selected_quantity;
                break;
            case 3:
                total_cost += 3 * item_selected_quantity;
                cake_quantity = cake_quantity + item_selected_quantity;
                break;
            case 4:
                total_cost += 2.5 * item_selected_quantity;
                muffin_quantity = muffin_quantity + item_selected_quantity;
                break;
            default:
                break;
        }
        //Continuation Prompt
        cout << left << "\nDo you want to add to this order? (y/n): ";
        cin >> order_cont;

        //Order Continuation Validation Statement
        while (order_cont != 'y' && order_cont != 'n') {
            cout << left << "\nDo you want to add to this order? (y/n): ";
            cin >> order_cont;
        }
    }
    //Output Summary
    cout << left << "Your Order Summary:\n";
    cout << left << "Item      Quantity  Price\n";
    cout << left << "------------------------------\n";
    cout  << setw(10) << left << "Coffee" << setw(10) << coffee_quantity << "$" << setw(10) << fixed << setprecision(2) << coffee_quantity*coffee_price << endl;
    cout  << setw(10) << left << "Tea" << setw(10) << setprecision(0) << tea_quantity << "$" << setw(10) << fixed << setprecision(2) << tea_quantity*tea_price << endl;
    cout  << setw(10) << left << "Cake" << setw(10) << setprecision(0) << cake_quantity << "$" << setw(10) << fixed << setprecision(2) << cake_quantity*cake_price << endl;
    cout  << setw(10) << left << "Muffin" << setw(10) << setprecision(0) << muffin_quantity << "$" << setw(10) << fixed << setprecision(2) << muffin_quantity*muffin_price << endl;
    cout << "\nTotal Price: $" << total_cost << "\nThank you for visiting!";
    return 0;
}


