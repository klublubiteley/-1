#include <iostream>
#include <string>

using namespace std; 

struct Player {
    string name;
    float height;
    int weight;
};

int main() {
    Player a1, a2, a3, a4, a5, a6, a7;

    cout << "Vvodite imena i rost igrokov po primery: Name height weight\n";
    cout << "\n";

    cout << "Vvedite imya i rost pervogo igroka: ";
    cin >> a1.name >> a1.height >> a1.weight;

    cout << "Vvedite imya i rost vtorogo igroka: ";
    cin >> a2.name >> a2.height >> a2.weight;

    cout << "Vvedite imya i rost tretego igroka: ";
    cin >> a3.name >> a3.height >> a3.weight;

    cout << "Vvedite imya i rost chetvertogo igroka: ";
    cin >> a4.name >> a4.height >> a4.weight;

    cout << "Vvedite imya i rost pyatogo igroka: ";
    cin >> a5.name >> a5.height >> a5.weight;

    cout << "Vvedite imya i rost shestogo igroka: ";
    cin >> a6.name >> a6.height >> a6.weight;

    cout << "Vvedite imya i rost sedmogo igroka: ";
    cin >> a7.name >> a7.height >> a7.weight;

    cout << "\n";
    cout << "\n";

    float totalHeight = a1.height + a2.height + a3.height + a4.height + a5.height + a6.height + a7.height;
    float averageHeight = totalHeight / 7;


    cout << "Imena i ves igrokov chey rost nizhe srednego : " << endl;
    cout << "\n";
    if (a1.height < averageHeight) {
        cout << a1.name << ": " << a1.weight << " kg" << endl;
    }
    if (a2.height < averageHeight) {
        cout << a2.name << ": " << a2.weight << " kg" << endl;
    }
    if (a3.height < averageHeight) {
        cout << a3.name << ": " << a3.weight << " kg" << endl;
    }
    if (a4.height < averageHeight) {
        cout << a4.name << ": " << a4.weight << " kg" << endl;
    }
    if (a5.height < averageHeight) {
        cout << a5.name << ": " << a5.weight << " kg" << endl;
    }
    if (a6.height < averageHeight) {
        cout << a6.name << ": " << a6.weight << " kg" << endl;
    }
    if (a7.height < averageHeight) {
        cout << a7.name << ": " << a7.weight << " kg" << endl;
    }

    return 0;
}