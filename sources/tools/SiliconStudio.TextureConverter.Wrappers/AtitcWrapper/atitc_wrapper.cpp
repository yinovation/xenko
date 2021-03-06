#include "atitc_wrapper.h"

#include <stdlib.h>


int atitcCalculateBufferSize(const ATI_TC_Texture* pTexture)
{
	return ATI_TC_CalculateBufferSize(pTexture);
}

ATI_TC_ERROR  atitcConvertTexture(const ATI_TC_Texture* pSourceTexture, ATI_TC_Texture* pDestTexture, const ATI_TC_CompressOptions* pOptions)
{
	return ATI_TC_ConvertTexture(pSourceTexture, pDestTexture, pOptions, NULL, NULL, NULL);
}

void atitcDeleteData(ATI_TC_Texture* pTexture)
{
	delete pTexture->pData;
}