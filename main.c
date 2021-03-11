/******************************************************************************
filename    main.c
author      Justin Chambers
DP email    justin.chambers@digipen.edu
course      GAM100 ** Do not use this code in your team project

Brief Description:
This file implements the main function and game loop.

******************************************************************************/
#include "stdafx.h" /* NULL, bool */
#include "InputProvider.h" /* GetDefaultInputFunc, ParseCommand */
#include "CommandData.h" /* struct CommandData */
#include "CommandListFactory.h" /* CreateCommandList */
#include "CommandList.h" /* CommandList_Free */
#include "CommandHandler.h" /* HandleCommand */
#include "GameStateFactory.h" /* CreateInitialGameState */
#include "GameState.h" /* struct GameState */
#include "WorldDataFactory.h" /* CreateTestWorldData */
#include "WorldData.h" /* WorldData_PrintIntroduction, WorldData_Free */
#include <stdio.h>
#include <time.h>



/* The main program loop */
int main()
{
	/* ------------------------------------------------------------------------ */
	/* Initilization and Setup */
	/* ------------------------------------------------------------------------ */
	GameState* gameState; /* The game state, reflecting the user's progress */
	WorldData* worldData; /* The world data */
	CommandList* commandList; /* The set of supported commands */
	CommandData command; /* The command entered by the user */
	time_t seconds;

	/* create the initial game objects */
	gameState = CreateInitialGameState();
	worldData = CreateInitialWorldData();
	commandList = CreateCommandList();

	/* initialize the command CommandData values */
	command.commandList = commandList;
	command.context = CommandContext_User;


	seconds = time(NULL);

	/* print the world introduction*/
	WorldData_PrintIntroduction(worldData, gameState->currentRoomIndex);



	/* ------------------------------------------------------------------------ */
	/* GAME LOOP */
	/* ------------------------------------------------------------------------ */
	/* while the game is running, accept input and handle commands */
	while (gameState->isRunning)
	{
		printf("min till ship explodes = %ld\n", (long)(30 - ((time(NULL) - seconds) / 60)));

		if (time(NULL) - seconds > 1800)
		{
			printf(" Ship Exploded! |You Lose|");

			break;
		}


		/* print command prompt */
		printf("\nWhat is your command?\n>> ");

		/* accept user input */
		ParseCommand(GetDefaultInputFunc(), &command);

		/* include an empty line before printing the result of a command */
		printf("\n");

		/* handle the command */
		HandleCommand(&command, gameState, worldData);
	}



	/* ------------------------------------------------------------------------ */
	/* Cleanup and Exit */
	/* ------------------------------------------------------------------------ */
	WorldData_Free(&worldData);
	GameState_Free(&gameState);
	CommandList_Free(&commandList);

	/* wait for input before closing the command window */
	getchar();

	/* cleanly exit */
	return 0;
}