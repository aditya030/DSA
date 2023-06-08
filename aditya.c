#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Hamming {
private:
    int r;
    string data; // Raw data received
    int m;       // Length of raw data
    char* msg;   // Stores all bits (data + redundant)
    
public:
    Hamming(string data) {
        this->data = data;
        reverse(data.begin(), data.end());
        m = data.size();
        int power = 1;
        r = 0;
        
        while (power < (m + r + 1)) {
            r++;
            power *= 2;
        }
        
        msg = new char[m + r + 1];
        int curr = 0;
        
        for (int i = 1; i <= m + r; i++) {
            if (i & (i - 1)) {
                msg[i] = data[curr++];
            } else {
                msg[i] = 'n';
            }
        }
        
        setRedundantBits();
    }
    
    void showMsg() {
        cout << "The data packet to be sent is: ";
        for (int i = m + r; i >= 1; i--) {
            cout << msg[i] << " ";
        }
        cout << endl;
    }
    
    void setRedundantBits() {
        int bit = 0;
        
        for (int i = 1; i <= m + r; i *= 2) {
            int count = 0;
            
            for (int j = i + 1; j <= m + r; j++) {
                if (j & (1 << bit)) {
                    if (msg[j] == '1') {
                        count++;
                    }
                }
            }
            
            if (count & 1) {
                msg[i] = '1';
            } else {
                msg[i] = '0';
            }
            
            bit++;
        }
        
        showMsg();
    }
    
    void receiver() {
        string ans = "";
        int bit = 0;
        
        for (int i = 1; i <= m + r; i *= 2) {
            int count = 0;
            
            for (int j = i + 1; j <= m + r; j++) {
                if (j & (1 << bit)) {
                    if (msg[j] == '1') {
                        count++;
                    }
                }
            }
            
            if (count & 1) {
                if (msg[i] == '1') {
                    ans.push_back('0');
                } else {
                    ans.push_back('1');
                }
            } else {
                if (msg[i] == '0') {
                    ans.push_back('0');
                } else {
                    ans.push_back('1');
                }
            }
            
            bit++;
        }
        
        if (ans.find('1') != string::npos) {
            int power = 1;
            int wrongBit = 0;
            
            for (int i = 0; i < ans.size(); i++) {
                if (ans[i] == '1') {
                    wrongBit += power;
                }
                power *= 2;
            }
            
            cout << "Bit number " << wrongBit << " is wrong and has an error." << endl;
        } else {
            cout << "Correct data packet received." << endl;
        }
    }
};

int main() {
    int choice;
    string data;
    bool dataEntered = false;
    Hamming* h = nullptr;
    while (true) {
        cout << "Menu:\n";
        cout << "1. Enter data\n";
        cout << "2. Send data\n";
        cout << "3. Receive data\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                h = new Hamming(data);
                dataEntered = true;
                break;
                
            case 2:
                if (dataEntered) {
                    h->showMsg();
                } else {
                    cout << "No data entered. Please enter data first." << endl;
                }
                break;
                
            case 3:
                if (dataEntered) {
                    h->receiver();
                } else {
                    cout << "No data entered. Please enter data first." << endl;
                }
                break;
                
            case 4:
                delete h;
                cout << "Exiting..." << endl;
                return 0;
                
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
        
        cout << endl;
    }
}