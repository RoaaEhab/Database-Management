#include "FactoryManagement.h"
#include "FactoryDatabase.h"

// external data types
/////////////////////////////////////////
extern int i; // Change this i into number of workers in your progrm
extern worker wr[WORKER_NUM];
//////////////////////////////////////////////////////////////////

// 2- Function to add the student
// 3- Function to find the student
// by the roll number
// 4- Function to find the student
// by the first name
// 5- Function to find
// the students enrolled
// in a particular course
// 6- Function to print the total
// number of students
// 7- Function to delete a student
// by the roll number
// 8- Function to update a students data


//function definetion
/////////////////////////////////////////////////////////

// Function to add the worker
void add_worker()
{

	printf("Add the Worker Details\n");
	printf("-------------------------\n");
	printf("Enter the first "
		"name of worker\n");
	scanf("%s", wr[i].fname);
	printf("Enter the last name"
		" of worker\n");
	scanf("%s", wr[i].lname);
	printf("Enter the ID\n");
	scanf("%d", &wr[i].id);
	printf("Enter the salary "
		"you obtained\n");
	scanf("%f", &wr[i].salary);
	printf("Enter the working hours\n");
	scanf("%d", &wr[i].working_hours);
	i = i + 1;
}

// Function to find the student
// by the roll number
void find_worker_from_id()
{
	int x;
	printf("Enter the ID"
		" of the worker\n");
	scanf("%d", &x);
	for (int j = 1; j <= i; j++) {
		if (x == wr[i].id) {
			printf(
				"The Worker Details are\n");
			printf(
				"The First name is %s\n",
				wr[i].fname);
			printf(
				"The Last name is %s\n",
				wr[i].lname);
			printf(
				"The salary is %f\n",
				wr[i].salary);
			printf(
				"The number of working hours is is %d\n ",
				wr[i].working_hours);
		}
		else
			printf(
				"The id not Found\n");
	}
}

// Function to find the student
// by the first name
void find_worker_from_fname()
{
	char a[50];
	printf("Enter the First Name"
		" of the worker\n");
	scanf("%s", a);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		if (!strcmp(wr[j].fname, a)) {

			printf(
				"The Worker Details are\n");
			printf(
				"The First name is %s\n",
				wr[i].fname);
			printf(
				"The Last name is %s\n",
				wr[i].lname);
			printf(
				"The ID is %d\n ",
				wr[i].id);
			printf(
				"The salary is %f\n",
				wr[i].salary);
			printf(
				"The number of working hours is %d\n ",
				wr[i].working_hours);
			c = 1;
		}
		else
			printf(
				"The First Name not Found\n");
	}
}

// Function to print the total
// number of students
void total_workers()
{
	printf("The total number of"
		" workers is %d\n",
		i);
	printf("\n you can have a "
		"max of 50 workers\n");
	printf("you can have %d "
		"more workers\n",
		50 - i);
}

// Function to delete a student
// by the roll number
void delete_workers()
{
	int a;
	printf("Enter the id"
		" which you want "
		"to delete\n");
	scanf("%d", &a);
	for (int j = 1; j <= i; j++) {
		if (a == wr[j].id) {
			for (int k = j; k < 49; k++)
				wr[k] = wr[k + 1];
			i--;
		}
	}
	printf("The worker"
		" is removed Successfully\n");
}

// Function to update a students data
void update_workers()
{

	printf("Enter the id"
		" to update the entry : ");
	long int x;
	scanf("%ld", &x);
	for (int j = 0; j < i; j++) {
		if (wr[j].id == x) {
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
				scanf("%s", wr[j].fname);
				break;
			case 2:
				printf("Enter the new "
					"last name : \n");
				scanf("%s", wr[j].lname);
				break;
			case 3:
				printf("Enter the new "
					"id :  \n");
				scanf("%d", &wr[j].id);
				break;
			case 4:
				printf("Enter the new salary : \n");
				scanf("%f", &wr[j].salary);
				break;
			case 5:
				printf("Enter the new "
					"working hours :  \n");
				scanf("%d", &wr[j].working_hours);
				break;
			}
			printf("UPDATED SUCCESSFULLY.\n");
		}
	}
}

