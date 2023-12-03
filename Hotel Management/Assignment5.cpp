#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

//class Customer

class Customer{
    public: 
        char name[100];
        char address[100];
        char phone[10];
        char email[100];
        char from_date[20];
        char to_date[20];
        float advance_paymemt[20];
        int booking_id;
};


int main(){
    int i, j, opt, room_no;
    string room_type, room_status;
    float room_price;
    char ch;

    system("cls");
    do{
        system("cls");
        cout << "\t\t\t Hotel Management System" << endl;
        cout << "\t\t--------------------------------------" << endl;
        cout << "\t\t 1. Manage Room" << endl;
        cout << "\t\t 2. Check-In room" << endl;
        cout << "\t\t 3. Availble room" << endl;
        cout << "\t\t 4. Check-Out room" << endl;
        cout << "\t\t 5. Search Customer" << endl;
        cout << "\t\t 6. Guest Summary" << endl;
        cout << "\t\t 7. Exit" << endl;
        cin>> opt;

        switch(opt){
            case 1:
                system("cls");
                cout << "\t\t\t Manage Room" << endl;
                cout << "\t\t ----------------------------------------------" << endl;
                cout << "\t\t 1. Add room" << endl;
                cout << "\t\t 2. Delete room" << endl;
                cout << "\t\t 3. Edit room" << endl;
                cout << "\t\t 4. Back" << endl;
                cout << "\t\t -----------------------------------------------" << endl;
                cout << "\t\t Enter your choice: ";
                cin >> opt;

                switch(opt){
                    case 1: 
                        system("cls");
                        cout << "\t\t\t Add room" << endl;
                        cout << "\t\t ---------------------------------------------------" << endl;
                        cout << "\t\t Enter room number: ";
                        cin >> room_no;
                        cout << "\t\t Enter room type: ";
                        cin >> room_type; 
                        cout << "\t\t Enter room price:";
                        cin >> room_price;
                        cout << "\t\t Enter room status: ";
                        cin >> room_status;
                        cout << "\t\t -------------------------------------------------------" << endl;
                        cout << "\t\t Room added successfully" << endl;
                        cout << "\t\t -------------------------------------------------------" << endl;
                        cout << "\t\t press any key to continue..." << endl;
                        getch();
                        break;
                    case 2:
                        system("cls");
                        cout << "\t\t\t Delete room" << endl;
                        cout << "\t\t -------------------------------------------------------" << endl;
                        cin >> room_no;
                        cout << "\t\t Room deleted successfully" << endl;
                        cout << "\t\t -------------------------------------------------------" << endl;
                        cout << "\t\t Press any key to continue...." <<endl;
                        getch();
                        break;
                    case 3:
                    system("cls");
                    cout << "\t\t\t Edit room" << endl;
                    cout << "\t\t -------------------------------------------------------" << endl;
                    cout << "\t\t Enter room number: ";
                    cin >> room_no;
                    cout << "\t\t Enter room type:";
                    cin >> room_type;
                    cout << "\t\t Enter room price:";
                    cin >> room_price;
                    cout << "\t\t Enter room status:";
                    cin >> room_status;   
                        
                }
        }


    }while(opt != 7);
}