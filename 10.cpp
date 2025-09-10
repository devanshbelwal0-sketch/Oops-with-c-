#include <iostream>
#include <string>
using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    double pricePerItem;

public:
    Invoice(string pn, string pd, int qty, double ppi) {
        partNumber = pn;
        partDescription = pd;
        quantity = (qty > 0) ? qty : 0;
        pricePerItem = (ppi > 0.0) ? ppi : 0.0;
    }

    void setPartNumber(string pn) { partNumber = pn; }
    void setPartDescription(string pd) { partDescription = pd; }
    void setQuantity(int qty) { quantity = (qty > 0) ? qty : 0; }
    void setPricePerItem(double ppi) { pricePerItem = (ppi > 0.0) ? ppi : 0.0; }

    string getPartNumber() const { return partNumber; }
    string getPartDescription() const { return partDescription; }
    int getQuantity() const { return quantity; }
    double getPricePerItem() const { return pricePerItem; }

    double getInvoiceAmount() const {
        return quantity * pricePerItem;
    }
};

int main() {
    Invoice item1("Devansh", "hammer", 5, 299.99);

    cout << "Part Number: " << item1.getPartNumber() << endl;
    cout << "Description: " << item1.getPartDescription() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Price per Item: RS " << item1.getPricePerItem() << endl;
    cout << "Total Invoice Amount: RS " << item1.getInvoiceAmount() << endl;

    item1.setQuantity(-3);
    item1.setPricePerItem(-100.0);

    cout << "\nAfter updating with invalid values:" << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Price per Item: RS " << item1.getPricePerItem() << endl;
    cout << "Total Invoice Amount: RS " << item1.getInvoiceAmount() << endl;

    return 0;
}