#include "stdafx.h" /* UNREFERENCED_PARAMETER, NULL*/
#include "Nav.h" /* Function declarations */
#include "GameState.h" /* struct GameState, GameState_ChangeScore */
#include "GameFlags.h" /* GameFlags_IsInList */
#include "WorldData.h" /* WorldData_GetRoom */
#include "Room.h" /* Room_GetItemList, Room_SetDescription */
#include "ItemList.h" /* ItemList_FindItem, ItemList_Remove, ItemList_Add */
#include "Item.h" /* Item_Create */
///All content © 20xx DigiPen (USA) Corporation, all rights reserved.


#include <GameState.c>

void Nav_Use(CommandContext context, GameState* gameState, WorldData* worldData)
{
	
	if (GameFlags_IsInList(gameState->gameFlags, "FixedPipe") && GameFlags_IsInList(gameState->gameFlags, "FixedPipe2") && GameFlags_IsInList(gameState->gameFlags, "FixedDrive"))
	{
		
		printf("Time to go home |You win|. All content © 20xx DigiPen (USA) Corporation, all rights reserved. \n");
		return;
	}
	else
	{
		printf("did you finish the impotant stuff?");
	}
}

Item* Nav_Build()
{
	/* Create a "brick" item, using the functions defined in this file */
	return Item_Create("Nav Check", "Did i finish everything?", false, Nav_Use, NULL, NULL);


}