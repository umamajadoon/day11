#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

// Grocery item structure
struct GroceryItem {
    std::string name;
    double price;
};

// Function to display the inventory
void displayInventory(const std::vector<GroceryItem>& inventory) {
    std::cout << "\nAvailable items:\n";
    std::cout << "---------------------------------\n";
    for (size_t i = 0; i < inventory.size(); ++i) {
        std::cout << i + 1 << ". " << inventory[i].name << " - $" << std::fixed << std::setprecision(2) << inventory[i].price << "\n";
    }
    std::cout << "---------------------------------\n";
}

// Function to display the cart
void displayCart(const std::vector<GroceryItem>& cart) {
    std::cout << "\nItems in your cart:\n";
    std::cout << "---------------------------------\n";
    for (const auto& item : cart) {
        std::cout << item.name << " - $" << std::fixed << std::setprecision(2) << item.price << "\n";
    }
    std::cout << "---------------------------------\n";
}

// Function to calculate the total cost
double calculateTotal(const std::vector<GroceryItem>& cart) {
    double total = 0.0;
    for (const auto& item : cart) {
        total += item.price;
    }
    return total;
}

int main() {
    // Predefined list of grocery items
    std::vector<GroceryItem> inventory = {
        {"Apple", 0.99},
        {"Banana", 0.59},
        {"Milk", 2.49},
        {"Bread", 1.99},
        {"Eggs", 3.49},
        {"Orange Juice", 4.99},
        {"Chicken Breast", 5.99}
    };

    std::vector<GroceryItem> cart;
    int choice;

    while (true) {
        // Main menu
        std::cout << "\nGrocery Store Management System\n";
        std::cout << "1. View inventory\n";
        std::cout << "2. Add item to cart\n";
        std::cout << "3. View cart\n";
        std::cout << "4. Checkout\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            // View inventory
            displayInventory(inventory);
        } else if (choice == 2) {
            // Add item to cart
            int itemNumber;
            displayInventory(inventory);
            std::cout << "Enter the item number to add to cart: ";
            std::cin >> itemNumber;
            if (itemNumber > 0 && itemNumber <= inventory.size()) {
                cart.push_back(inventory[itemNumber - 1]);
                std::cout << inventory[itemNumber - 1].name << " has been added to your cart.\n";
            } else {
                std::cout << "Invalid item number. Please try again.\n";
            }
        } else if (choice == 3) {
            // View cart
            if (cart.empty()) {
                std::cout << "Your cart is empty.\n";
            } else {
                displayCart(cart);
            }
        } else if (choice == 4) {
            // Checkout
            if (cart.empty()) {
                std::cout << "Your cart is empty. Add items to the cart before checking out.\n";
            } else {
                displayCart(cart);
                double total = calculateTotal(cart);
                std::cout << "Total amount due: $" << std::fixed << std::setprecision(2) << total << "\n";
                cart.clear();
                std::cout << "Thank you for shopping with us!\n";
            }
        } else if (choice == 5) {
            // Exit
            std::cout << "Exiting the program. Goodbye!\n";
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}