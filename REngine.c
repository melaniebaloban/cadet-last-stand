#include "stdafx.h" /* UNREFERENCED_PARAMETER, NULL*/
#include "REngine.h" /* Function declarations */
#include "GameState.h" /* struct GameState, GameState_ChangeScore */
#include "GameFlags.h" /* GameFlags_IsInList */
#include "WorldData.h" /* WorldData_GetRoom */
#include "Room.h" /* Room_GetItemList, Room_SetDescription */
#include "ItemList.h" /* ItemList_FindItem, ItemList_Remove, ItemList_Add */
#include "Item.h" /* Item_Create */


#include <GameState.c>

void REngine_Use(CommandContext context, GameState* gameState, WorldData* worldData)
{
	printf("You see a roll of flex tape then sealed the pipe with it, it held on tight Thank you Phill.");

	GameFlags* GameFlags_Add(GameFlags * gameFlags, const char* flag);

}

Item* REngine_Build()
{
	/* Create a "brick" item, using the functions defined in this file */
	return Item_Create("Right Engine", "You see a leaking pipe.", false, REngine_Use, NULL, NULL);


}