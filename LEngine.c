#include "stdafx.h" /* UNREFERENCED_PARAMETER, NULL*/
#include "LEngine.h" /* Function declarations */
#include "GameState.h" /* struct GameState, GameState_ChangeScore */
#include "GameFlags.h" /* GameFlags_IsInList */
#include "WorldData.h" /* WorldData_GetRoom */
#include "Room.h" /* Room_GetItemList, Room_SetDescription */
#include "ItemList.h" /* ItemList_FindItem, ItemList_Remove, ItemList_Add */
#include "Item.h" /* Item_Create */


#include <GameState.c>



Item* LEngine_Build()
{
	/* Create a "brick" item, using the functions defined in this file */
	return Item_Create("Left Engine", "You see a leaking pipe and sealed it using Flex Tape.", false, NULL, NULL, NULL);

	
}