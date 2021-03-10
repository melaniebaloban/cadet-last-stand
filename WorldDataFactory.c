/******************************************************************************
filename    WorldDataFactory.c
author      Justin Chambers
DP email    justin.chambers@digipen.edu
course      GAM100 ** Do not use this code in your team project

Brief Description:
This file defines the WorldData factory, which creates the WorldData objects used
in this game.

This could be used to create default states as well as loaded state.

******************************************************************************/
#include "WorldDataFactory.h" /* Function declarations */
#include "WorldData.h" /* WorldData_Create, WorldData_SetRoom */
#include "Room.h" /* Room_Create, Room_AddRoomExit, Room_GetItemList */
#include "ItemList.h" /* ItemList_Add */
#include "BrickFunctions.h" /* Brick_Build */
#include "GoldPieceFunctions.h" /* GoldPiece_Build */
#include "ExitDoorFunctions.h" /* ExitDoor_Build */
#include "LEngine.h"
#include "REngine.h"
#include "Warp.h"
#include "Nav.h"
#include "Bandage.h"
#include "Toolbox.h"
#include "CrewMember.h"
#include "Spacesuits.h"


/******************************************************************************
	Build room TEMPLATE
    Use this example function to build additional rooms
******************************************************************************/
Room* RoomN_Build()
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("DEBUG: This is a template - Include a description for the room here\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "north", 1);  /* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());

	/* Return the new room */
	return room;
}





/* TODO REQUIRED: Build room 1 */
Room* Room1_Build()///1
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("DEBUG: This is a template - Include a description for the room here\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "east", 8);
	Room_AddRoomExit(room, "west", 6); /* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());

	/* Return the new room */
	return room;
}


/* TODO REQUIRED: Build room 2 */
Room* Room2_Build()///2
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("DEBUG: This is a template - Include a description for the room here\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "east", 14);  /* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());

	/* Return the new room */
	return room;
}


/* TODO ADVANCED: Build room 3 */
Room* Room3_Build()///3
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("DEBUG: I sohuld comback here when I have finished everything on the ship.\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "south", 14);  /* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());

	ItemList_AddItem(Room_GetItemList(room), Nav_Build());

	/* Return the new room */
	return room;
}


/* TODO ADVANCED: Build room 4 */
Room* Room4_Build()///4
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("I should get a bandage for the cut on arm! All this stress, I didn't even notice it.\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "west", 14);  /* 1 = the room index this exit connects to */
	Room_AddRoomExit(room, "east", 5);
	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());
	ItemList_AddItem(Room_GetItemList(room), Bandage_Build());

	/* Return the new room */
	return room;
}

Room* Room5_Build()///4
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("I should grab the toolbox from the Storage Room so I can fix whatever is broken right away.\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "west", 4);  /* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());
	ItemList_AddItem(Room_GetItemList(room), Toolbox_Build());


	/* Return the new room */
	return room;
}

Room* Room6_Build()///6
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("Let's check the Crew Quarters!\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "north", 7); 
	Room_AddRoomExit(room, "east", 1);/* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());
	ItemList_AddItem(Room_GetItemList(room), CrewMember_Build());

	/* Return the new room */
	return room;
}


Room* Room7_Build()///7
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("I should make sure the spacesuits in the Airlock are ready for emergency use! \n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "south", 6);  /* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());
	ItemList_AddItem(Room_GetItemList(room), Spacesuits_Build());

	/* Return the new room */
	return room;
}


Room* Room8_Build()///8
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("DEBUG: This is a template - Include a description for the room here\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "west", 1);
	Room_AddRoomExit(room, "east", 9);/* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());

	/* Return the new room */
	return room;
}


Room* Room9_Build()///9
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("DEBUG: elctrical could be a shocking place to be in \n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "west", 8);  /* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());

	/* Return the new room */
	return room;
}


Room* Room10_Build()///10
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("DEBUG: the left engine equally important as the right engine I should check the Engine.\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "east", 13);  /* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());

	ItemList_AddItem(Room_GetItemList(room), LEngine_Build());

	

	/* Return the new room */
	return room;
}

Room* Room11_Build()///11
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("DEBUG: warp drive the place to warp my problems away by that i mean go to a far away galaxy I should check the Drive.\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "north", 13);  /* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());

	ItemList_AddItem(Room_GetItemList(room), Warp_Build());




	/* Return the new room */
	return room;
}

Room* Room12_Build()///12
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("DEBUG: the right engine equally important as the left engine i should check the Engine.\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "west", 13);  /* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());

	ItemList_AddItem(Room_GetItemList(room), REngine_Build());



	/* Return the new room */
	return room;
}

Room* Room13_Build()///13
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("DEBUG: Hall way 4 places to go\n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "north", 1);
	Room_AddRoomExit(room, "east", 12);
	Room_AddRoomExit(room, "west", 10);
	Room_AddRoomExit(room, "south", 11);/* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());

	/* Return the new room */
	return room;
}

Room* Room14_Build()///14
{
	/* Pre-declare a room pointer which we will use to build the new room */
	Room* room;

	/* Create the room
	   include an initial room description */
	room = Room_Create("DEBUG: Hallway 4 places to go  \n");

	/* Exits
	   add one or more exits to allow navigation between rooms */
	Room_AddRoomExit(room, "north", 3);
	Room_AddRoomExit(room, "east", 4);
	Room_AddRoomExit(room, "south", 1);
	Room_AddRoomExit(room, "west", 2);/* 1 = the room index this exit connects to */

	/* Items
	   add items to the room */
	ItemList_AddItem(Room_GetItemList(room), ExitDoor_Build());

	/* Return the new room */
	return room;
}

/* ------------------------------------------------------- */
/* Create the world data for a new game */
/* ------------------------------------------------------- */
WorldData* CreateInitialWorldData()
{
	/* The new world data */
	WorldData* worldData;

	/* TODO REQUIRED: update room count to match the number of rooms you have created and added to the world
	   if this number doesn't match then your game will either crash or you will end up stuck in a broken room with no exits */
	int roomCount = 14;

	/* create the new WorldData object with 3 rooms */
	worldData = WorldData_Create("Welcome to my GAM100 Game!\n\n", roomCount);

	/* build each room and assign them to the world data */
	WorldData_SetRoom(worldData, 1, Room1_Build());
	WorldData_SetRoom(worldData, 2, Room2_Build());
	WorldData_SetRoom(worldData, 3, Room3_Build());
	WorldData_SetRoom(worldData, 4, Room4_Build());
	WorldData_SetRoom(worldData, 5, Room5_Build());
	WorldData_SetRoom(worldData, 6, Room6_Build());
	WorldData_SetRoom(worldData, 7, Room7_Build());
	WorldData_SetRoom(worldData, 8, Room8_Build());
	WorldData_SetRoom(worldData, 9, Room9_Build());
	WorldData_SetRoom(worldData, 10, Room10_Build());
	WorldData_SetRoom(worldData, 11, Room11_Build());
	WorldData_SetRoom(worldData, 12, Room12_Build());
	WorldData_SetRoom(worldData, 13, Room13_Build());
	WorldData_SetRoom(worldData, 14, Room14_Build());
	/* TODO REQUIRED: add rooms 1 and 2 to the world data */

	/* TODO ADVANCED: add additional advanced rooms */

	/* return the new object */
	return worldData;
}