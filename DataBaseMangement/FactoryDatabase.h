#ifndef FACTORYDATABASE_H_INCLUDED
#define FACTORYDATABASE_H_INCLUDED

// Declare some constants
#define WORKER_NUM  50

//////////////////////////////////////
typedef struct Worker worker;
struct Worker {
	char fname[WORKER_NUM];
	char lname[WORKER_NUM];
	int id;
	int working_hours;
	float salary;
};

#endif // FACTORYDATABASE_H_INCLUDED
