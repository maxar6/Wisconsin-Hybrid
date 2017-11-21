/*
 * ApplicationSecurity.c
 *
 */

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "Application.h"

/*---- SECURITY CALIBRATIONS ------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_cals_rodata.h>

/* Name: project_id CType:uint1 ClassID:VAR StorageID:FLASH Access:RW4+RO3+RO2+RO1 TypeID:UINT1 Gain:1
   Min:0 Max:255 Format:3.0 UpdateID:REMOTE Struct:g_eProjectID
   Group:"System | System Config | Project Config" Help:"This is the Platform ID used by the tools." */
Calconst E_ProjectID g_eProjectID __SECTION_CALS_RODATA__ = (E_ProjectID)
  PROJECTID_MPC555;

/* Name: ProductID Unit:ID ClassID:VAR StorageID:FLASH Access:RW4+RO3+RO2+RO1 TypeID:UINT4 Gain:1
   Min:0.00 Max:4294967295.00 CType:uint4 Struct:g_u4ProductID UpdateID:REMOTE
   Group:"System | System Config | Project Config" Help:"Customer's ID used by the tools."  */
Calconst uint4 g_u4ProductID __SECTION_CALS_RODATA__ = PRODUCTID_TESTCODE;

#include <Pragma_Section_End_rodata.h>

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_text_code.h>

/* Setup the MotoTron protocol security keys */
void OpenApplicationSecurity(void)
{
  S_RegisterMotoTronSpecificInfo MotoTronSpecificConfigObj;

  /* Setup the Project ID and Product ID */
  MotoTronSpecificConfigObj.uValidAttributesMask = USE_MOTO_SECURITY_PROJECT_ID |
    USE_MOTO_SECURITY_PRODUCT_ID;
  MotoTronSpecificConfigObj.eProjectID = (E_ProjectID) g_eProjectID;
  MotoTronSpecificConfigObj.u4ProductID = g_u4ProductID;
  RegisterMotoTronSpecificArchive(&MotoTronSpecificConfigObj);
}

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
