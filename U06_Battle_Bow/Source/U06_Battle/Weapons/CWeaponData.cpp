#include "Weapons/CWeaponData.h"
#include "Weapons/CEquipment.h"
#include "Weapons/CAttachment.h"

void UCWeaponData::SetAttachment(ACAttachment* InAttachment)
{
	Attachment = InAttachment;
}

void UCWeaponData::SetEquipment(UCEquipment* InEquipment)
{
	Equipment = InEquipment;
}
