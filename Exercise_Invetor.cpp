#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int numCities;
    cout << "Enter number of entries: ";
    cin >> numCities;
    cin.ignore();

    unordered_map<string, double> cityCosts;

    for (int i = 0; i < numCities;) {
        string city;
        double price;
        int quantity;

        cout << "Enter city name: ";
        getline(cin, city);

        cout << "Enter price per product: ";
        cin >> price;

        cout << "Enter quantity of products: ";
        cin >> quantity;
        cin.ignore();
        if (cityCosts[city] == 0) {
            i++;
        }

        double totalCost = price * quantity;
        cityCosts[city] += totalCost;
    }

    cout << "\nTotal Costs per City:\n";
    for (const auto &entry: cityCosts) {
        cout << entry.first << " " << fixed << setprecision(2) << entry.second << endl;
    }

    return 0;
}
