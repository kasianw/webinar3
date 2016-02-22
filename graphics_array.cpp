#define MENU_ELEMENTS_NUMBER 4
#include <iostream>
#include <string>
#include <conio.h>


using namespace std;
char menu()
{
    string menu[MENU_ELEMENTS_NUMBER] = { "load new file", "modify image", "save changes", "exit" };
	for ( int i = 0; i < MENU_ELEMENTS_NUMBER; i++ )
		cout << i+1 << ". "<<menu[i] << endl;
    char decision=getch();
    return decision;
};

char submenu()
{
    string submenu[] = { "sepia", "black&white", "negative", "contour", "back to options"};
    int submenu_elements = sizeof(submenu)/sizeof(submenu[0]);
    for ( int j = 0; j < submenu_elements; )
			{
				cout << j+1<< ". " << submenu[j++] << endl;
			}

    char decision=getch();
    return decision;
};

int main()
 {

    bool exit = false;
    cout << "Graphics"<< endl;
	cout << "What do you think about programming?" << endl;
	do
    {

	switch(menu())
      {
		case '1':
			cout << "Loading file ..." << endl;
			// powinna pojawic sie instrukcja wczytujjąca plik
			break; //alternatywa dla wczytania innej grafiki
		case '2':
		{


            switch( submenu() )
            {
                case '1':
                cout << "Add efekt sepia..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                case '2':
                cout << "Add efekt black and white..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                case '3':
                cout << "Add efekt negative..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                case '4':
                cout << "Add efekt contour..." << endl;
                // powinna pojawic sie instrukcja modyfikująca plik
                break;
                case '5':
                break;
                default: //else
                cout << "Try one more time" << endl;
            }
            break;
		}
		case '3':
			cout << "Saving ..." << endl;
			// powinna pojawic sie instrukcja zapisująca plik
			 break;
        case '4':
            {
            cout << " Thank you for the use of this program. " << endl;
			exit = true;
			break;
            }
		default: // else
			cout << "Try one more time" << endl; break;
        }
    } while (exit == false);
	return 0;

}
