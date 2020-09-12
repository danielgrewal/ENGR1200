#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// TUTORIAL 4: DANIEL GREWAL 100768376 - RECEIPT PROGRAM FOR COFFEE AND DONUTS

	// Initialize variables and get input...

	int coffee(0), doughnut(0);
	double subtotal(0.00), hst(0.00), total(0.00);

	cout << "***COFFEE AND DONUT RECEIPT GENERATOR***" << endl;

	cout << "\nNo. of COFFEE: ";
		cin >> coffee;
	cout << "No. of DOUGHNUTS: ";
		cin >> doughnut;
	
	// Calculations for receipt...

	subtotal = coffee * 4.99 + doughnut * 1.99;
	hst = 0.13 * subtotal;
	total = subtotal + hst;

	// Output of the receipt with formating for decimal places and columns...

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << endl;
	cout << "CUSTOMER RECEIPT" << endl;
	cout << "================" << endl;
	cout << endl;
	cout << "COFFEE     " << setw(15) << coffee << "x\t$" << setw(10) << coffee * 4.99 << endl;
	cout << "DOUGHNUT   " << setw(15) << doughnut << "x\t$" << setw(10) << doughnut * 1.99 << endl;
	cout << endl;
	cout << "*SUBTOTAL* " << setw(15) << "\t$" << setw(10) << subtotal << endl;
	cout << "**HST**    " << setw(15) << "\t%13\t$" << setw(10) << hst << endl;
	cout << endl;
	cout << "***TOTAL***" << setw(15) << "\t$" << setw(10) << total << endl;

	system("pause");	// wait for user to exit
	return 0;
}

