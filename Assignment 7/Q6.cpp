#include <iostream>
#include <vector>
using namespace std;

class Item {
public:
    int itemId;
    string itemName;
    float price;
};

class ShoppingCart {
    vector<Item> items;

public:
    void addItem() {
        Item it;
        cout << "Enter Item ID: ";
        cin >> it.itemId;
        cout << "Enter Item Name: ";
        cin >> it.itemName;
        cout << "Enter Price: ";
        cin >> it.price;
        items.push_back(it);
    }

    void displayItems() {
        if (items.empty()) {
            cout << "Cart is empty\n";
            return;
        }
        for (auto it : items) {
            cout << "ID: " << it.itemId 
                 << " Name: " << it.itemName 
                 << " Price: " << it.price << endl;
        }
    }

    void totalBill() {
        float total = 0;
        for (auto it : items) {
            total += it.price;
        }
        cout << "Total Bill: " << total << endl;
    }
};

int main() {
    ShoppingCart cart;
    int choice;

    do {
        cout << "\n1. Add Item\n2. Display Items\n3. Calculate Total Bill\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cart.addItem();
                break;
            case 2:
                cart.displayItems();
                break;
            case 3:
                cart.totalBill();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}