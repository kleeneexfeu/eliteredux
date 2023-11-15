#include "global.h"
#include "mail.h"
#include "constants/items.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "text.h"
#include "international_string_util.h"
#include "constants/easy_chat.h"

void ClearMailData(void)
{
    u8 i;

    for (i = 0; i < MAIL_COUNT; i++)
        ClearMailStruct(&gSaveBlock1Ptr->mail[i]);
}

void ClearMailStruct(struct MailStruct *mail)
{
    s32 i;

    for (i = 0; i < MAIL_WORDS_COUNT; i++)
        mail->words[i] = EC_EMPTY_WORD;

    for (i = 0; i < PLAYER_NAME_LENGTH + 1; i++)
        mail->playerName[i] = EOS;

    for (i = 0; i < TRAINER_ID_LENGTH; i++)
        mail->trainerId[i] = 0;

    mail->species = SPECIES_BULBASAUR;
    mail->itemId = ITEM_NONE;
}

u8 GiveMailToMon(struct Pokemon *mon, u16 itemId)
{
    return MAIL_NONE;
}

u16 SpeciesToMailSpecies(u16 species, u32 personality)
{
    if (species == SPECIES_UNOWN)
    {
        u32 species = GetUnownLetterByPersonality(personality) + 30000;
        return species;
    }

    return species;
}

u16 MailSpeciesToSpecies(u16 mailSpecies, u16 *buffer)
{
    u16 result;

    if (mailSpecies >= 30000 && mailSpecies < (30000 + NUM_UNOWN_FORMS))
    {
        result = SPECIES_UNOWN;
        *buffer = mailSpecies - 30000;
    }
    else
    {
        result = mailSpecies;
    }

    return result;
}

u8 GiveMailToMon2(struct Pokemon *mon, struct MailStruct *mail)
{
    return MAIL_NONE;

}

void TakeMailFromMon(struct Pokemon *mon)
{
}

void ClearMailItemId(u8 mailId)
{
    gSaveBlock1Ptr->mail[mailId].itemId = ITEM_NONE;
}

u8 TakeMailFromMon2(struct Pokemon *mon)
{
    return MAIL_NONE;
}

bool8 ItemIsMail(u16 itemId)
{
    return FALSE;
}
