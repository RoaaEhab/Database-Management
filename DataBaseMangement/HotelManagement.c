#include "HotelManagement.h"
#include "HotelDatabase.h"


// external data types
/////////////////////////////////////////
extern int i; // Change this i into number of workers in your progrm
extern guest gs[GUEST_NUM];
//////////////////////////////////////////////////////////////////


//function definetion
/////////////////////////////////////////////////////////

// Function to add the guest
void add_guest()
{

	printf("Add the Guest Details\n");
	printf("-------------------------\n");
	printf("Enter the first "
		"name of guest\n");
	scanf("%s", gs[i].fname);
	printf("Enter the last name"
		" of guest\n");
	scanf("%s", gs[i].lname);
	printf("Enter the ID\n");
	scanf("%d", &gs[i].id);
	printf("Enter the Stay Duration \n");
	scanf("%d", &gs[i].stayDuration);
	printf("Enter the Total Cost\n");
	scanf("%f", &gs[i].totalCost);
	i = i + 1;
}

// Function to find the student
// by the roll number
void find_guest_number_from_id()
{
	int x;
	printf("Enter the ID"
		" of the guest\n");
	scanf("%d", &x);
	for (int j = 1; j <= i; j++) {
		if (x == gs[i].id) {
			printf(
				"The Guest Details are\n");
			printf(
				"The First name is %s\n",
				gs[i].fname);
			printf(
				"The Last name is %s\n",
				gs[i].lname);
			printf(
				"The id is %d\n",
				gs[i].id);
			printf(
				"The stayDuration is %d\n ",
				gs[i].stayDuration);
            printf(
				"The total cost is %f\n ",
				gs[i].totalCost);
		}
		else
			printf(
				"The id not Found\n");
	}
}

// Function to find the student
// by the first name
void find_guest_number_from_fname()
{
	char a[50];
	printf("Enter the First Name"
		" of the guest\n");
	scanf("%s", a);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		if (!strcmp(gs[j].fname, a)) {

			printf(
				"The Worker Details are\n");
			printf(
				"The First name is %s\n",
				gs[i].fname);
			printf(
				"The Last name is %s\n",
				gs[i].lname);
			printf(
				"The ID is %d\n ",
				gs[i].id);
			printf(
				"The stay duration is %d\n",
				gs[i].stayDuration);
			printf(
				"The total cost is %f\n ",
				gs[i].totalCost);
			c = 1;
		}
		else
			printf(
				"The First Name not Found\n");
	}
}

// Function to print the total
// number of students
void total_guests()
{
	printf("The total number of"
		" guests is %d\n",
		i);
	printf("\n you can have a "
		"max of 50 guests\n");
	printf("you can have %d "
		"more guests\n",
		50 - i);
}

// Function to delete a student
// by the roll number
void delete_guest()
{
	int a;
	printf("Enter the id"
		" which you want "
		"to delete\n");
	scanf("%d", &a);
	for (int j = 1; j <= i; j++) {
		if (a == gs[j].id) {
			for (int k = j; k < 49; k++)
				gs[k] = gs[k + 1];
			i--;
		}
	}
	printf("The guest"
		" is removed Successfully\n");
}

// Function to update a students data
void update_guest()
{

	printf("Enter the id"
		" to update the entry : ");
	long int x;
	scanf("%ld", &x);
	for (int j = 0; j < i; j++) {
		if (gs[j].id == x) {
			printf("1. first name\n"
				"2. last name\n"
				"3. roll no.\n"
				"4. CGPA\n"
				"5. courses\n");
			int z;
			scanf("%d", &z);
			switch (z) {
			case 1:
				printf("Enter the new "
					"first name : \n");
				scanf("%s", gs[j].fname);
				break;
			case 2:
				printf("Enter the new "
					"last name : \n");
				scanf("%s", gs[j].lname);
				break;
			case 3:
				printf("Enter the new "
					"id :  \n");
				scanf("%d", &gs[j].id);
				break;
			case 4:
				printf("Enter the new stay duration : \n");
				scanf("%f", &gs[j].stayDuration);
				break;
			case 5:
				printf("Enter the new "
					"total cost :  \n");
				scanf("%d", &gs[j].totalCost);
				break;
			}
			printf("UPDATED SUCCESSFULLY.\n");
		}
	}
}

