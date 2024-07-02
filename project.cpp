#include <bits/stdc++.h>
using namespace std;

int main()
{
	int Rooms = 0, pasta = 0, burger = 0, noodl = 0, shake = 0, chicken = 0;

	int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;

	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

	int choice, q;

	cout << "\n\t\tQuantity of items we have";
	cout << "\n Rooms avaliable : ";
	cin >> Rooms;
	cout << "\n Quantity of Pasta : ";
	cin >> pasta;
	cout << "\n Quantity of Burger : ";
	cin >> burger;
	cout << "\n Quantity of Noodles : ";
	cin >> noodl;
	cout << "\n Quantity of Shake : ";
	cin >> shake;
	cout << "\n Quantity of Chicken-roll : ";
	cin >> chicken;
p:
	//	system("cls");
	cout << "\n\t\t\tPlease select from the given menu options";
	cout << "\n\n 1) Rooms";
	cout << "\n 2) Pasta";
	cout << "\n 3) Burger";
	cout << "\n 4) Noodles";
	cout << "\n 5) Shake";
	cout << "\n 6) Chicken-roll";
	cout << "\n 7) Information regarding sales and collection";
	cout << "\n 8) Exit";
	cout << "\n\n Please enter Your Choice : ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "\n\n Enter Number of rooms you want : ";
		cin >> q;
		if (Rooms - Srooms >= q)
		{
			Srooms = Srooms + q;
			Total_rooms = Total_rooms + (q * 1200);
			cout << "\n\n\t\t" << q << " room/rooms have been alotted! ";
		}
		else

			cout << "\n\tOnly " << Rooms - Srooms << " Rooms Remaining in hotel";
		break;

	case 2:
		cout << "\n\n Enter Pasta Quantity : ";
		cin >> q;
		if (pasta - Spasta >= q)
		{
			Spasta = Spasta + q;
			Total_pasta = Total_pasta + (q * 250);
			cout << "\n\t" << q << " Pasta is the order";
		}
		else
			cout << "\n\n\t\tOnly " << pasta - Spasta << " Pastas Remaining in stock";
		break;

	case 3:
		cout << "\n\n Enter Burger Quantity : ";
		cin >> q;
		if (burger - Sburger >= q)
		{
			Sburger = Sburger + q;
			Total_burger = Total_burger + q * 50;
			cout << "\n\n\t\t" << q << " Burger is the order";
		}
		else
			cout << "\n\tOnly " << burger - Sburger << " Burgers Remaining in stock";
		break;

	case 4:
		cout << "\n\n Enter Noodles Quantity : ";
		cin >> q;
		if (noodl - Snoodles >= q)
		{
			Snoodles = Snoodles + q;
			Total_noodles = Total_noodles + (q * 200);
			cout << "\n\n\t\t" << q << " Noodles is the order";
		}
		else
			cout << "\n\tOnly " << noodl - Snoodles << " Noodles Remaining in stock";
		break;

	case 5:
		cout << "\n\n Enter Shakes Quantity : ";
		cin >> q;
		if (shake - Sshake >= q)
		{
			Sshake = Sshake + q;
			Total_shake = Total_shake + q * 170;
			cout << "\n\n\t\t" << q << " shakes is the order";
		}
		else
			cout << "\n\tOnly " << shake - Sshake << " shakes Remaining in stock";
		break;

	case 6:
		cout << "\n\n Enter Chicken-roll Quantity : ";
		cin >> q;
		if (chicken - Schicken >= q)
		{
			Schicken = Schicken + q;
			Total_chicken = Total_chicken + q * 160;
			cout << "\n\n\t\t" << q << " Chicken-rolls is the order";
		}
		else
			cout << "\n\tOnly " << chicken - Schicken << " Chicken-roll Remaining in stock";
		break;

	case 7:

		cout << "\n\t\tDetails of sales and collection ";
		cout << "\n\n Number of Rooms we had : " << Rooms;
		cout << "\n Number of Rooms we gave for rent : " << Srooms;
		cout << "\n Remaining Rooms : " << Rooms - Srooms;
		cout << "\n\n Total Rooms collection for the Day : " << Total_rooms;

		cout << "\n\n Number of Pastas we had : " << pasta;
		cout << "\n Number of Pastas we sold : " << Spasta;
		cout << "\n Remaining Pastas : " << pasta - Spasta;
		cout << "\n\n Total Pasta collection for the Day : " << Total_pasta;

		cout << "\n\n Number of burgers we had : " << burger;
		cout << "\n Number of burgers we sold : " << Sburger;
		cout << "\n Remaining Burgers : " << burger - Sburger;
		cout << "\n\n Total Burger collection for the Day : " << Total_burger;

		cout << "\n\n Number of Noodles we had : " << noodl;
		cout << "\n Number of Noodles we sold : " << Snoodles;
		cout << "\n Remaining Noodles : " << noodl - Snoodles;
		cout << "\n\n Total Noodles collection for the Day : " << Total_noodles;

		cout << "\n\n Number of shakes we had : " << shake;
		cout << "\n Number of Shakes we sold : " << Sshake;
		cout << "\n Remaining Shakes : " << shake - Sshake;
		cout << "\n\n Total Shakes collection for the Day : " << Total_shake;

		cout << "\n\n Number of Chicken-roll we had : " << chicken;
		cout << "\n Number of Chicken-roll we sold : " << Schicken;
		cout << "\n Remaining Chicken-roll : " << chicken - Schicken;
		cout << "\n\n Total Chicken-roll collection for the Day : " << Total_chicken;

		cout << "\n\n\n Total Collection for the day : " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
		break;
	case 8:
		exit(0);
	default:
		cout << "\n Please select from the numbers mentioned above!";
	}

	goto p;
}
