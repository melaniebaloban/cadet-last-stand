#include "stdafx.h" /* UNREFERENCED_PARAMETER, NULL*/
#include "CrewMember.h" /* Function declarations */
#include "GameState.h" /* struct GameState, GameState_ChangeScore */
#include "GameFlags.h" /* GameFlags_IsInList */
#include "WorldData.h" /* WorldData_GetRoom */
#include "Room.h" /* Room_GetItemList, Room_SetDescription */
#include "ItemList.h" /* ItemList_FindItem, ItemList_Remove, ItemList_Add */
#include "Item.h" /* Item_Create */


#include <GameState.c>

void CrewMember_Use(CommandContext context, GameState* gameState, WorldData* worldData)
{
	UNREFERENCED_PARAMETER(context);
	UNREFERENCED_PARAMETER(gameState);
	UNREFERENCED_PARAMETER(worldData);
	printf("The alarm woke me up from my nap! I already checked this room, it seems fine.\n");

}

Item* CrewMember_Build()
{
	/* Create a "brick" item, using the functions defined in this file */
	return Item_Create("Crew Member", "My crew member, Spencer, appears to be in this room!", false, CrewMember_Use, NULL, NULL);


}