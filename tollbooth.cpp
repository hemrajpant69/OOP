// -*-*-*-*-*-*-*Book Management System -*-*-*-*-*-*-*

// Header Files
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
using namespace std;

// Global Variable
char titleArray[20][20];
int bookPrice[20];
int bookCount[20];
int increment;
int itemNum;

// Class
class book
{
private:
    char *author, *title, *publisher;
    float *price;
    int *stock;
    int count;
    static int isBookBuy;

public:
    book()
    {
        author = new char[20];
        title = new char[20];
        publisher = new char[20];
        price = new float;
        stock = new int;
    }
    void feedData();
    void editData();
    void showData();
    int search(char[], char[]);
    void buyBook();
    void showBook();
    void display();
    void bill();
    friend void bookBought(book b);
};
int book::isBookBuy;
// Member function definition
void book::feedData()
{
    system("cls");
    display();
    cout << "\n\n\t    --------New Data Creation--------" << endl;
    cin.ignore();
    cout << "\nEnter Author Name: ";
    cin.getline(author, 20);
    cout << "Enter Title Name: ";
    cin.getline(title, 20);
    cout << "Enter Publisher Name: ";
    cin.getline(publisher, 20);
    cout << "Enter Price: ";
    cin >> *price;
    cout << "Enter Book Stock: ";
    cin >> *stock;

    cout << "\n\nNew Details Added!!" << endl;
    cout << "\n\t\tReturning main menu in 3sec!!";
    Sleep(3000);
}

void book::editData()
{
    system("cls");
    int choose;
    while (1)
    {
        system("cls");
        display();
        cout << "\n\n\t    --------Edit Data--------" << endl;
        cout << "\n1. Edit all details"
             << "\n2. Change price of " << title
             << "\n3. Change stock of " << title
             << "\n4. Exit to main menu"
             << "\n\nEnter your Choice: ";
        cin >> choose;

        switch (choose)
        {
        case 1:
            system("cls");
            display();
            cout << "\n\n\t    --------Book Details Edit--------" << endl;
            cin.ignore();
            cout << "\nEnter Author Name: ";
            cin.getline(author, 20);
            cout << "Enter Title Name: ";
            cin.getline(title, 20);
            cout << "Enter Publisher Name: ";
            cin.getline(publisher, 20);
            cout << "Enter Price: ";
            cin >> *price;
            cout << "Enter Stock number: ";
            cin >> *stock;
            cout << "\n\n\t\tData Edited!!" << endl;
            cout << "\tReturning menu in 3sec!!";
            Sleep(3000);
            break;
        case 2:
            system("cls");
            display();
            cout << "\n\n\t    --------Book Price Edit--------" << endl;
            cout << "Enter Price: ";
            cin >> *price;
            cout << "\nPrice changed of " << title;
            cout << "\n\n\t\tReturning menu in 3sec!!";
            Sleep(3000);
            break;
        case 3:
            system("cls");
            display();
            cout << "\n\n\t    --------Book Stock Edit--------" << endl;
            cout << "Enter Stock number: ";
            cin >> *stock;
            cout << "\nStock number changed of " << title;
            cout << "\n\n\t\tReturning menu in 3sec!!";
            Sleep(3000);
            break;
        case 4:
            cout << "\n\n\t\tReturning main menu in 3sec!!";
            Sleep(3000);
            break;

        default:
            display();
            cout << "\nInvalid Choice Entered";
            cout << "\n\n\t\tReturning menu in 3sec!!";
            Sleep(3000);
        }
        if (choose == 4)
            break;
    }
}

void book::showData()
{
    system("cls");
    display();
    cout << "\n\n\t    --------Book Found--------" << endl;
    cout << "\nAuthor Name: " << author;
    cout << "\nTitle Name: " << title;
    cout << "\nPublisher Name: " << publisher;
    cout << "\nPrice: " << *price;
    cout << "\nStock Position: " << *stock;
    cout << endl
         << endl;
    cout << "\n\n\t\tReturning main menu in 3sec!!";
    Sleep(3000);
}

int book::search(char tBuy[20], char aBuy[20])
{
    if (strcmp(tBuy, title) == 0 && strcmp(aBuy, author) == 0)
        return 1;
    else
        return 0;
}

void book::buyBook()
{
    system("cls");
    display();
    cout << "\n\n\t    --------Cart--------" << endl;
    cout << "\nEnter Number Of Books to buy: ";
    cin >> count;
    if (count <= *stock)
    {
        *stock = *stock - count;
        cout << "\nBooks Bought Successfully";
        cout << "\nAmount: Rs. " << (*price) * count;
        isBookBuy = 1;
        Sleep(2000);
    }
    else
    {
        cout << "\nRequired Copies not in Stock";
        Sleep(2000);
    }
}
void book::bill()
{   
    if (isBookBuy == 0)
    {
        cout << "Sorry no Book bought\nCannot make a bill!!\n\n";
        Sleep(2000);
    }
    else
    {
        float netTotal, total;
        string name;
        system("cls");
        display();
        cout << "\n\nEnter name of buyer: ";
        cin >> name;
        system("cls");
        cout << "\n\n\t      ABC Stationary" << endl;
        cout << "\t    -----------------" << endl;

        cout << "\nDate : " << __DATE__ << endl;
        cout << "Invoice To:" << name << endl;
        cout << "---------------------------------------" << endl;
        cout << "Items\t\t";
        cout << "Qty\t\t";
        cout << "Total\t\t";
        cout << "\n---------------------------------------" << endl;
        cout << "\n\n";
        increment = 0;
        int sum = 0;
        for (int x = 0; x < itemNum; x++, increment++)
        {
            total = bookCount[increment] * (bookPrice[increment]);
            cout << "" << titleArray[increment] << "\t\t";
            cout << "" << bookCount[increment] << "\t\t";
            cout << "" << total << "\t\t";
            cout << "\n";
            sum += total;
        }
        increment = 0;
        count = 0;
        itemNum = 0;
        printf("\n");
        float dis = 0.1 * sum;
        netTotal = sum - dis;
        cout << "---------------------------------------" << endl;
        cout << "Sub Total\t\t\t" << sum << endl;
        cout << "Discount @10%\t\t\t" << dis << endl;
        cout << "---------------------------------------" << endl;
        cout << "Net Total\t\t\t" << netTotal << endl;
        cout << "---------------------------------------" << endl;

        cout << "\n\n\t\tpress any key to continue..." << endl;
        getch();
        isBookBuy = 0;
    }
}
void book::showBook()
{
    cout << "\nAuthor Name: " << author;
    cout << "\nTitle Name: " << title;
    cout << "\nPublisher Name: " << publisher;
    cout << "\nPrice: " << *price;
    cout << "\nStock Position: " << *stock << endl;
}
void book::display()
{
    cout << "\n****************************************************";
    cout << "\n*\t\t\t\t\t\t   *\n";
    cout << "*\t\tBOOK MANAGEMENT SYSTEM\t\t   *";
    cout << "\n*\t\t\t\t\t\t   *\n";
    cout << "****************************************************\n";
}
void bookBought(book b)
{
    bookPrice[increment] = (*b.price);
    bookCount[increment] = b.count;
    strcpy(titleArray[increment], b.title);
    increment++;
    itemNum++;
}
int main()
{
    book *B[20];
    book d;
    int i = 0, r, t, choice, isSearch = 0;
    char titleBuy[20], authorBuy[20];
    char next = 'y';
    while (1)
    {
        system("cls");
        d.display();
        cout << "\n\n\t------MENU------\n"
             << "\n1. Entry of New Book"
             << "\n2. Search For Book"
             << "\n3. Edit Details Of Book"
             << "\n4. Buy Book"
             << "\n5. Show Book Details"
             << "\n6. Exit"
             << "\n\nEnter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            B[i] = new book;
            B[i]->feedData();
            i++;
            break;

        case 2:
            system("cls");
            d.display();
            cin.ignore();
            cout << "\n\n\t    --------Search Book--------" << endl;
            cout << "\nEnter Title Of Book: ";
            cin.getline(titleBuy, 20);
            cout << "Enter Author Of Book: ";
            cin.getline(authorBuy, 20);

            for (t = 0; t < i; t++)
            {
                isSearch = B[t]->search(titleBuy, authorBuy);
                if (isSearch)
                {
                    B[t]->showData();
                    break;
                }
            }
            if (isSearch == 0)
            {
                cout << "\nThis Book is Not in Stock";
                cout << "\n\n\t\tReturning main menu in 3sec!!";
                Sleep(3000);
            }
            break;

        case 3:
            system("cls");
            d.display();
            cout << "\n\n\t    --------Edit Book Details--------" << endl;

            cin.ignore();
            cout << "\nEnter Title Of Book: ";
            cin.getline(titleBuy, 20);
            cout << "Enter Author Of Book: ";
            cin.getline(authorBuy, 20);

            for (t = 0; t < i; t++)
            {
                isSearch = B[t]->search(titleBuy, authorBuy);
                if (isSearch)
                {
                    B[t]->editData();
                    break;
                }
            }
            if (isSearch == 0)
            {
                cout << "\nThis Book is Not in Stock";
                cout << "\n\n\t\tReturning main menu in 3sec!!";
                Sleep(3000);
            }
            break;
        case 4:
            next = 'y';
            while (next == 'y')
            {
                cin.ignore();
                system("cls");
                d.display();
                cout << "\n\n\t    --------Search Book--------" << endl;
                cout << "\nEnter Title Of Book: ";
                cin.getline(titleBuy, 20);
                cout << "Enter Author Of Book: ";
                cin.getline(authorBuy, 20);
                for (t = 0; t < i; t++)
                {
                    isSearch = B[t]->search(titleBuy, authorBuy);
                    if (isSearch)
                    {
                        B[t]->buyBook();
                        bookBought(*(B[t]));
                        break;
                    }
                }
                if (isSearch == 0)
                {
                    cout << "\nThis Book is Not in Stock";
                    Sleep(1000);
                }
                cout << "\n\n\t\tPress 'y' to buy another books\n\t\tPress 'n' to exit";
                next = getch();
            }
            system("cls");
            d.display();
            cout << "\n\n--------Billing--------";
            cout << "\n\n\t\tPress p to print the bill\n\t\t\tPress 'b' to Back";
            next = getch();
            if (next == 'p')
                d.bill();
            else
            {
                cout << "\n\n\t\tReturning into main menu...";
                Sleep(2000);
            }
            break;
        case 5:
            system("cls");
            d.display();
            cout << "\n*****************Book Details*****************\n\n ";

            for (t = 0; t < i; t++)
            {
                B[t]->showBook();
            }
            cout << "\n\n\t\tPress any key to continue...";
            getch();
            cout << "\n\n\t\t    Returning main menu in 3sec!!";
            Sleep(3000);
            break;

        case 6:
            exit(0);
        default:
            d.display();
            cout << "\nInvalid Choice Entered";
            cout << "\n\n\t\tReturning main menu in 3sec!!";
            Sleep(3000);
        }
    }

    return 0;
}
