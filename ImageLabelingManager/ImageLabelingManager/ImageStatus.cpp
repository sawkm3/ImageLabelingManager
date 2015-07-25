//------------------------------------
// Project Name : ImageLabelingManager
// File Name : ImageStatus.h
// User Name : sawkm3 (GitHubID)
// Created Date : 2015/07/26(Sun)
//------------------------------------
#include "ImageStatus.h"
#include "LabelingManager.h"

namespace ImageLabelingManager
{
	ImageStatus::ImageStatus()
	{
		
	}

	ImageStatus::~ImageStatus()
	{
		delete labelingManager;
	}

	ImageStatus* ImageStatus::Create(int sId, int iId, int uId, int date, std::vector<int>& labels, std::vector<std::string>& tags)
	{
		ImageStatus* gen;
		LabelingManager* tmpLM = LabelingManager::Create(labels);
		
		if (tmpLM == NULL) gen = NULL;
		else
		{
			gen = new ImageStatus();
			gen->sysId = sId;
			gen->imgId = iId;
			gen->usrId = uId;
			gen->postDate = date;
			gen->labelingManager = tmpLM;
			gen->tagVector = tags;
		}

		return gen;
	}

	int ImageStatus::GetSysId()
	{
		return sysId;
	}

	int ImageStatus::GetImgId()
	{
		return imgId;
	}
	int ImageStatus::GetUsrId()
	{
		return usrId;
	}

	int ImageStatus::GetPostDate()
	{
		return postDate;
	}

	// Entrust
	LabelingManager* ImageStatus::GetLabelingManager()
	{
		return labelingManager;
	}

	// These tags are read only.
	const std::vector<std::string>& ImageStatus::GetTagVector()
	{
		return tagVector;
	}
}