#include "stdafx.h" /* UNREFERENCED_PARAMETER, NULL*/
#include "Toolbox.h" /* Function declarations */
#include "GameState.h" /* struct GameState, GameState_ChangeScore */
#include "GameFlags.h" /* GameFlags_IsInList */
#include "WorldData.h" /* WorldData_GetRoom */
#include "Room.h" /* Room_GetItemList, Room_SetDescription */
#include "ItemList.h" /* ItemList_FindItem, ItemList_Remove, ItemList_Add */
#include "Item.h" /* Item_Create */


#include <GameState.c>

void Toolbox_Use(CommandContext context, GameState* gameState, WorldData* worldData)
{
	printf("Now I am even more prepared to fix whatever is wrong with this ship!\n");

}

Item* Toolbox_Build()
{
	/* Create a "brick" item, using the functions defined in this file */
	return Item_Create("Toolbox", "A toolbox with every supply you would ever need to fix something on this ship!", false, Toolbox_Use, NULL, NULL);


}