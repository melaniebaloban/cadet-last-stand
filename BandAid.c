#include "stdafx.h" /* UNREFERENCED_PARAMETER, NULL*/
#include "Warp.h" /* Function declarations */
#include "GameState.h" /* struct GameState, GameState_ChangeScore */
#include "GameFlags.h" /* GameFlags_IsInList */
#include "WorldData.h" /* WorldData_GetRoom */
#include "Room.h" /* Room_GetItemList, Room_SetDescription */
#include "ItemList.h" /* ItemList_FindItem, ItemList_Remove, ItemList_Add */
#include "Item.h" /* Item_Create */


#include <GameState.c>

void Bandage_Use(CommandContext context, GameState* gameState, WorldData* worldData)
{
	printf("Now you feel a lot better and can continue your mission to fix the ship!");

}

Item* Bandage_Build()
{
	/* Create a "brick" item, using the functions defined in this file */
	return Item_Create("Bandage", "A bandage to help your wound!", false, Bandage_Use, NULL, NULL);


}