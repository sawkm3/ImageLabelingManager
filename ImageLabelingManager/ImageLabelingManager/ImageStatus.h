//------------------------------------
// Project Name : ImageLabelingManager
// File Name : ImageStatus.h
// User Name : sawkm3 (GitHubID)
// Created Date : 2015/07/26(Sun)
//------------------------------------
#ifndef _IMAGESTATUS_H_
#define _IMAGESTATUS_H_
#include <vector>
#include <string>
#include "LabelingManager.h"

namespace ImageLabelingManager
{
	class ImageStatus
	{
	private:

		int sysId;
		int imgId;
		int usrId;
		int postDate;
		LabelingManager* labelingManager;
		std::vector<std::string> tagVector;
		
		// private constructor
		ImageStatus();

	public:

		~ImageStatus();

		// Factory
		static ImageStatus* Create(int, int, int, int, std::vector<int>&, std::vector<std::string>&);

		int GetSysId();
		int GetImgId();
		int GetUsrId();
		int GetPostDate();

		// Entrust
		LabelingManager* GetLabelingManager();

		// These tags are read only.
		const std::vector<std::string>& GetTagVector();
	};
}

#endif