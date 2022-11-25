#ifndef HOTELDATABASE_H_INCLUDED
#define HOTELDATABASE_H_INCLUDED

// Declare some constants
#define GUEST_NUM  50
#define ROOM_NUM   100

//////////////////////////////////////
typedef struct Guest guest;
struct Guest {
	char fname[GUEST_NUM];
	char lname[GUEST_NUM];
	int id;
	int stayDuration;
	float totalCost;
	int roomID[ROOM_NUM];
};

#endif // HOTELDATABASE_H_INCLUDED
