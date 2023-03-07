#include <iostream>
#include "admin.cpp"
#include "messages.cpp"
// #include "register.cpp"
// #include "termsAndConditions.cpp"
// #include "login.cpp"

using namespace std;

int main(int argc, char *argv[])
{
	// Welcome Message
	welcome_message();

	// Get the Sign Up Funtionality
	int loginMethod;
	// Allow the user to enter input
	while (true)
	{

		cout << ">> ";
		cin >> loginMethod;

		if (loginMethod == 1)
		{
			cout << "Sign Up" << endl;
			string _first_name;
			string _last_name;
			string _email;
			string _password;
			while (true)
			{
			EnterFirstName:
				cout << "First Name: ";
				cin >> _first_name;
				if (_first_name.length() < 2)
				{
					cout << "First name is too short" << endl;
					goto EnterFirstName;
				}
				else
				{
				EnterLastName:
					cout << "Last name: ";
				}
				cin >> _last_name;
				if (_last_name.length() < 2)
				{
					cout << "Last name is too short" << endl;
					goto EnterLastName;
				}
				else
				{
				EnterEmailAddress:
					cout << "Email Address: ";
				}
				cin >> _email;
				if (!_email.find("com"))
				{
					cout << "Enter a valid email address" << endl;
					goto EnterEmailAddress;
				}
				else
				{
				EnterPassword:
					cout << "Password: ";
				}
				cin >> _password;
				if (_password.length() < 6)
				{
					cout << "Password must be at least 6 characters" << endl;
					goto EnterPassword;
				}
				User user = User(_first_name, _last_name, _email, _password);

				cout << "Welcome, " << user.getFirstName() << endl;
				cout << "***************************" << endl;

				while (true)
				{
				chooseAction:
					cout << "What do you wish to do? " << endl;
					cout << "1)Borrow Book\n2)Return Book\n3)Edit Profile\n4)Delete Account\n5)Log Out" << endl;
					cout << ">> ";
					int action;

					if (action == 1)
					{
						cout << "Borrow A book" << endl;
					}
					else if (action == 2)
					{
						cout << "Return A book" << endl;
					}

					else if (action == 3)
					{
						cout << "Edit Profile" << endl;
					}

					else if (action == 4)
					{
						cout << "Delete account" << endl;
					}

					else if (action == 5)
					{
						cout << "Logout" << endl;
					}
					else
					{
						cout << "Please enter a valid option!";
					}
				}
			}
			break;
		}

		else if (loginMethod == 2)
		{
			cout << "Log In" << endl;
			break;
		}

		else
		{
			cout << "Wrong Input entered!" << endl;
		}
	}
}