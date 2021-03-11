#include "stdafx.h" /* UNREFERENCED_PARAMETER, NULL*/
#include "Spacesuits.h" /* Function declarations */
#include "GameState.h" /* struct GameState, GameState_ChangeScore */
#include "GameFlags.h" /* GameFlags_IsInList */
#include "WorldData.h" /* WorldData_GetRoom */
#include "Room.h" /* Room_GetItemList, Room_SetDescription */
#include "ItemList.h" /* ItemList_FindItem, ItemList_Remove, ItemList_Add */
#include "Item.h" /* Item_Create */
///All content © 20xx DigiPen (USA) Corporation, all rights reserved.



void Spacesuits_Use(CommandContext context, GameState* gameState, WorldData* worldData)
{
	UNREFERENCED_PARAMETER(context);
	UNREFERENCED_PARAMETER(gameState);
	UNREFERENCED_PARAMETER(worldData);
	printf("It seems like they are good to go! I should hurry!\n");

}

Item* Spacesuits_Build()
{
	/* Create a "brick" item, using the functions defined in this file */
	return Item_Create("Spacesuits", "These spacesuits need to be ready for emergency use!", false, Spacesuits_Use, NULL, NULL);


}