#include "StudentManagement.h"
#include "StudentDatabase.h"

// external data types
/////////////////////////////////////////
extern int i_student; // Change this i into number of student in your progrm
extern student st[STUDNET_NUM];
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

// Function to add the student
void add_student()
{
	FILE *textfile = fopen("studentdata.txt", "a");
	if (textfile == NULL)
	{
		printf("Error opening file!\n");
		exit(1);
	}
	fseek (textfile, 0, SEEK_END);
    int size = ftell(textfile);

    if (0 == size) {
		fprintf(textfile, "First, Last, Roll, CGPA, CoursesNum, CourseID\n");
    }
	printf("Add the Students Details\n");
	printf("-------------------------\n");
	printf("Enter the first "
		"name of student\n");
	scanf("%s", st[i_student].fname);
	printf("Enter the last name"
		" of student\n");
	scanf("%s", st[i_student].lname);
	printf("Enter the Roll Number\n");
	scanf("%d", &st[i_student].roll);
	printf("Enter the CGPA "
		"you obtained\n");
	scanf("%f", &st[i_student].cgpa);
	int coursesNum = 0;
	printf("Enter the number of courses:\n");
	scanf("%d", &st[StudentNum].coursesNum);
	for (int i = 0; i < st[StudentNum].coursesNum; i++)
	{
		printf("Enter the course ID: ");
		scanf("%d", &st[StudentNum].cid[i]);
	}

	fprintf(textfile, "%s,", st[StudentNum].fname);
	fprintf(textfile, "%s,", st[StudentNum].lname);
	fprintf(textfile, "%d,", st[StudentNum].roll);
	fprintf(textfile, "%f,", st[StudentNum].cgpa);
	fprintf(textfile, "%d,", st[StudentNum].coursesNum);
	for (int i = 0; i < st[StudentNum].coursesNum; i++)
	{
		fprintf(f, "%d|", st[StudentNum].cid[i]);
	}
	fprintf(textfile, "\n");
	
	StudentNum = StudentNum + 1;
	fclose(textfile);
}

// Function to find the student
// by the roll number

void readstFile()
{
	FILE *textfile = fopen("studentdata.txt", "r");
	if (textfile == NULL)
	{
		printf("Error opening file!\n");
		exit(1);
	}
	// Empty the array
	st = (student *)malloc(sizeof(student) * STUDNET_NUM);

	char line[256];
	fgets(line, sizeof(line), textfile);
	while (fgets(line, sizeof(line), textfile))
	{
		// printf("%s", line);
		char * fname = strtok(line, ",");
		printf("%s\n", fname);
		char * lname = strtok(NULL, ",");
		printf("%s\n", lname);
		char * roll = strtok(NULL, ",");
		printf("%s\n", roll);
		char * cgpa = strtok(NULL, ",");
		printf("%s\n", cgpa);
		char * coursesNum = strtok(NULL, ",");
		printf("%s\n", coursesNum);
		for (int i = 0; i < atoi(coursesNum); i++)
		{
			char * cid = strtok(NULL, "|");
			printf("%s\n", cid);
		}

	}

	fclose(textfile);
}
void find_rl()
{
	int x;
	printf("Enter the Roll Number"
		" of the student\n");
	scanf("%d", &x);
	for (int j = 1; j <= i_student; j++) {
		if (x == st[i_student].roll) {
			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i_student].fname);
			printf(
				"The Last name is %s\n",
				st[i_student].lname);
			printf(
				"The CGPA is %f\n",
				st[i_student].cgpa);
			printf(
				"Enter the course ID"
				" of each course\n");
		}
		for (int j = 0; j < 5; j++) {
			printf(
				"The course ID are %d\n",
				st[i_student].cid[j]);
		}
		break;
	}
}

// Function to find the student
// by the first name
void find_fn()
{
	char a[50];
	printf("Enter the First Name"
		" of the student\n");
	scanf("%s", a);
	int c = 0;

	for (int j = 1; j <= i_student; j++) {
		if (!strcmp(st[j].fname, a)) {

			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i_student].fname);
			printf(
				"The Last name is %s\n",
				st[i_student].lname);
			printf(
				"The Roll Number is %d\n ",
				st[i_student].roll);
			printf(
				"The CGPA is %f\n",
				st[i_student].cgpa);
			printf(
				"Enter the course ID of each course\n");

			for (int j = 0; j < 5; j++) {
				printf(
					"The course ID are %d\n",
					st[i_student].cid[j]);
			}
			c = 1;
		}
		else
			printf(
				"The First Name not Found\n");
	}
}

// Function to find
// the students enrolled
// in a particular course
void find_c()
{
	int id;
	printf("Enter the course ID \n");
	scanf("%d", &id);
	int c = 0;

	for (int j = 1; j <= i_student; j++) {
		for (int d = 0; d < 5; d++) {
			if (id == st[j].cid[d]) {

				printf(
					"The Students Details are\n");
				printf(
					"The First name is %s\n",
					st[i_student].fname);
				printf(
					"The Last name is %s\n",
					st[i_student].lname);
				printf(
					"The Roll Number is %d\n ",
					st[i_student].roll);
				printf(
					"The CGPA is %f\n",
					st[i_student].cgpa);

				c = 1;

				break;
			}
			else
				printf(
					"The First Name not Found\n");
		}
	}
}

// Function to print the total
// number of students
void tot_s()
{
	printf("The total number of"
		" Student is %d\n",
		i_student);
	printf("\n you can have a "
		"max of 50 students\n");
	printf("you can have %d "
		"more students\n",
		50 - i_student);
}

// Function to delete a student
// by the roll number
void del_s()
{
	int a;
	printf("Enter the Roll Number"
		" which you want "
		"to delete\n");
	scanf("%d", &a);
	for (int j = 1; j <= i_student; j++) {
		if (a == st[j].roll) {
			for (int k = j; k < 49; k++)
				st[k] = st[k + 1];
			i_student--;
		}
	}
	printf("The Roll Number"
		" is removed Successfully\n");
}

// Function to update a students data
void up_s()
{

	printf("Enter the roll number"
		" to update the entry : ");
	long int x;
	scanf("%ld", &x);
	for (int j = 0; j < i_student; j++) {
		if (st[j].roll == x) {
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
				scanf("%s", st[j].fname);
				break;
			case 2:
				printf("Enter the new "
					"last name : \n");
				scanf("%s", st[j].lname);
				break;
			case 3:
				printf("Enter the new "
					"roll number : \n");
				scanf("%d", &st[j].roll);
				break;
			case 4:
				printf("Enter the new CGPA : \n");
				scanf("%f", &st[j].cgpa);
				break;
			case 5:
				printf("Enter the new courses \n");
				scanf(
					"%d%d%d%d%d", &st[j].cid[0],
					&st[j].cid[1], &st[j].cid[2],
					&st[j].cid[3], &st[j].cid[4]);
				break;
			}
			printf("UPDATED SUCCESSFULLY.\n");
		}
	}
}

