#include "stdafx.h" /* UNREFERENCED_PARAMETER, NULL*/
#include "Warp.h" /* Function declarations */
#include "GameState.h" /* struct GameState, GameState_ChangeScore */
#include "GameFlags.h" /* GameFlags_IsInList */
#include "WorldData.h" /* WorldData_GetRoom */
#include "Room.h" /* Room_GetItemList, Room_SetDescription */
#include "ItemList.h" /* ItemList_FindItem, ItemList_Remove, ItemList_Add */
#include "Item.h" /* Item_Create */
///All content © 20xx DigiPen (USA) Corporation, all rights reserved.



void Warp_Use(CommandContext context, GameState* gameState, WorldData* worldData)
{
	UNREFERENCED_PARAMETER(context);
	UNREFERENCED_PARAMETER(worldData);

	printf("False alarm it was glowing red beucase of low batteries luckly oyu had spares laying around ");

	GameFlags_Add(gameState->gameFlags, "FixedDrive");

}

Item* Warp_Build()
{
	/* Create a "brick" item, using the functions defined in this file */
	return Item_Create("Warp Drive", "Warp drive is glowing red?", false, Warp_Use, NULL, NULL);


}