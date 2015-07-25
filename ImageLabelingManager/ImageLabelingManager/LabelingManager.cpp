//------------------------------------
// Project Name : ImageLabelingManager
// File Name : LabelingManager.cpp
// User Name : sawkm3 (GitHubID)
// Created Date : 2015/07/26(Sun)
//------------------------------------
#include "LabelingManager.h"

namespace ImageLabelingManager
{
	LabelingManager::LabelingManager()
	{
		// Memory is wasteful.
		labelArray = new unsigned int[Categories];
	}

	LabelingManager::~LabelingManager()
	{
		delete[] labelArray;
	}

	LabelingManager* LabelingManager::Create(std::vector<int>& labelingVector)
	{
		LabelingManager* gen;
		
		// If it is different from labelingVector's capacity and "Categories", this function warn error.
		if (labelingVector.size() != Categories) gen = NULL;
		else
		{
			gen = new LabelingManager();
			
			// copy
			for (int i = 0; i < Categories; i++)
			{
				gen->labelArray[i] = labelingVector[i];
			}
		}

		return gen;
	}

	void LabelingManager::ToggleLabel(int category)
	{
		// A boolean operator:NOT is used to toggle the label.
		labelArray[category] = !labelArray[category];
	}
}