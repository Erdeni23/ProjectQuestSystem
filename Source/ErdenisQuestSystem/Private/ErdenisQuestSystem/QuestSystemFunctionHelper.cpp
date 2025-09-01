// Мой гитхаб! https://github.com/Erdeni23/ProjectQuestSystem

#include "ErdenisQuestSystem/QuestSystemFunctionHelper.h"

//Эта функция нужна для явного удаления из памяти UObject квеста.
void UQuestSystemFunctionHelper::DestroyUObject(UObject* ObjectToDestroy)
{
	if( ObjectToDestroy )
		ObjectToDestroy->ConditionalBeginDestroy();
}