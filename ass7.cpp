#include <iostream>
#include <string>
using namespace std;
class Film 
{
private:
    string name;
    string language;
    string type;
    int duration;
public:
    // Default constructor
    Film() : language("Hindi"), duration(3) {}
    // Input function to insert details
    void inputDetails() {
        cout << "Enter film name: ";
        getline(cin, name);
        cout << "Enter film type: ";
        getline(cin, type);
    }
    // Destructor
    ~Film() {
        cout << "Film \"" << name << "\" has been destroyed." << endl;
    }
    // Display function
    void displayDetails() {
        cout << "Film Name: " << name << endl;
        cout << "Language: " << language << endl;
        cout << "Type: " << type << endl;
        cout << "Duration: " << duration << " hrs." << endl;
    }
};
int main()
 {
    Film myFilm;
    cout << "Enter film details:" << endl;
    myFilm.inputDetails();
    cout << "\nFilm details:" << endl;
    myFilm.displayDetails();
    return 0;
}
