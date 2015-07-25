//------------------------------------
// Project Name : ImageLabelingManager
// File Name : LabelingManager.h
// User Name : sawkm3 (GitHubID)
// Created Date : 2015/07/26(Sun)
//------------------------------------
#ifndef _LABELINGMANAGER_H_
#define _LABELINGMANAGER_H_
#include <vector>

namespace ImageLabelingManager
{
	class LabelingManager
	{
	private:

		unsigned int* labelArray;

		// private constructor
		LabelingManager();

	public:

		~LabelingManager();

		// Tentatively...
		static const int Categories = 2;

		// Factory
		static LabelingManager* Create(std::vector<int>&);

		// Labeling status are read only.
		const unsigned int* GetLabelArray();

		// The Label is toggled by a label number choosen by user.
		void ToggleLabel(int);
	};
}

#endif