#ifndef GUARD_CONSTANTS_POKEMON_H
#define GUARD_CONSTANTS_POKEMON_H

// Pokemon types
#define TYPE_NONE             255
#define TYPE_NORMAL           0
#define TYPE_FIGHTING         1
#define TYPE_FLYING           2
#define TYPE_POISON           3
#define TYPE_GROUND           4
#define TYPE_ROCK             5
#define TYPE_BUG              6
#define TYPE_GHOST            7
#define TYPE_STEEL            8
#define TYPE_MYSTERY          9
#define TYPE_FIRE             10
#define TYPE_WATER            11
#define TYPE_GRASS            12
#define TYPE_ELECTRIC         13
#define TYPE_PSYCHIC          14
#define TYPE_ICE              15
#define TYPE_DRAGON           16
#define TYPE_DARK             17
#define TYPE_FAIRY            18
#define NUMBER_OF_MON_TYPES   19

// Pokemon egg groups
#define EGG_GROUP_NONE          0
#define EGG_GROUP_MONSTER       1
#define EGG_GROUP_WATER_1       2
#define EGG_GROUP_BUG           3
#define EGG_GROUP_FLYING        4
#define EGG_GROUP_FIELD         5
#define EGG_GROUP_FAIRY         6
#define EGG_GROUP_GRASS         7
#define EGG_GROUP_HUMAN_LIKE    8
#define EGG_GROUP_WATER_3       9
#define EGG_GROUP_MINERAL       10
#define EGG_GROUP_AMORPHOUS     11
#define EGG_GROUP_WATER_2       12
#define EGG_GROUP_DITTO         13
#define EGG_GROUP_DRAGON        14
#define EGG_GROUP_UNDISCOVERED  15

#define EGG_GROUPS_PER_MON      2

// Pokemon natures
#define NATURE_HARDY    0 // Neutral
#define NATURE_LONELY   1 // +Atk -Def
#define NATURE_BRAVE    2 // +Atk -Speed
#define NATURE_ADAMANT  3 // +Atk -SpAtk
#define NATURE_NAUGHTY  4 // +Atk -SpDef
#define NATURE_BOLD     5 // +Def -Atk
#define NATURE_DOCILE   6 // Neutral
#define NATURE_RELAXED  7 // +Def -Speed
#define NATURE_IMPISH   8 // +Def -SpAtk
#define NATURE_LAX      9 // +Def -SpDef
#define NATURE_TIMID    10 // +Speed -Atk
#define NATURE_HASTY    11 // +Speed -Def
#define NATURE_SERIOUS  12 // Neutral
#define NATURE_JOLLY    13 // +Speed -SpAtk
#define NATURE_NAIVE    14 // +Speed - SpDef
#define NATURE_MODEST   15 // +SpAtk -Atk
#define NATURE_MILD     16 // +SpAtk -Def
#define NATURE_QUIET    17 // +SpAtk -Speed
#define NATURE_BASHFUL  18 // Neutral
#define NATURE_RASH     19 // +SpAtk -SpDef
#define NATURE_CALM     20 // +SpDef -Atk
#define NATURE_GENTLE   21 // +SpDef -Def
#define NATURE_SASSY    22 // +SpDef -Speed
#define NATURE_CAREFUL  23 // +SpDef -SpAtk
#define NATURE_QUIRKY   24 // Neutral
#define NUM_NATURES     25

// Pokemon Stats
#define STAT_HP      0
#define STAT_ATK     1
#define STAT_DEF     2
#define STAT_SPEED   3
#define STAT_SPATK   4
#define STAT_SPDEF   5
#define STAT_ACC     6 // Only in battles.
#define STAT_EVASION 7 // Only in battles.

#define NUM_NATURE_STATS NUM_STATS - 1 // excludes HP
#define NUM_BATTLE_STATS NUM_STATS + 2 // includes Accuracy and Evasion

#define MIN_STAT_STAGE     0
#define DEFAULT_STAT_STAGE 6
#define MAX_STAT_STAGE    12

// Shiny odds
#define SHINY_ODDS   64   // Actual probability is SHINY_ODDS/65536  -> 1/1024
#define SHINY_ODDS_1 512   // Actual probability is SHINY_ODDS/65536 -> 1/128
#define SHINY_ODDS_2 13107 // Actual probability is SHINY_ODDS/65536 -> 1/5

// Ribbon IDs used by TV and Pokénav
#define CHAMPION_RIBBON       0
#define COOL_RIBBON_NORMAL    1
#define COOL_RIBBON_SUPER     2
#define COOL_RIBBON_HYPER     3
#define COOL_RIBBON_MASTER    4
#define BEAUTY_RIBBON_NORMAL  5
#define BEAUTY_RIBBON_SUPER   6
#define BEAUTY_RIBBON_HYPER   7
#define BEAUTY_RIBBON_MASTER  8
#define CUTE_RIBBON_NORMAL    9
#define CUTE_RIBBON_SUPER    10
#define CUTE_RIBBON_HYPER    11
#define CUTE_RIBBON_MASTER   12
#define SMART_RIBBON_NORMAL  13
#define SMART_RIBBON_SUPER   14
#define SMART_RIBBON_HYPER   15
#define SMART_RIBBON_MASTER  16
#define TOUGH_RIBBON_NORMAL  17
#define TOUGH_RIBBON_SUPER   18
#define TOUGH_RIBBON_HYPER   19
#define TOUGH_RIBBON_MASTER  20
#define WINNING_RIBBON       21
#define VICTORY_RIBBON       22
#define ARTIST_RIBBON        23
#define EFFORT_RIBBON        24
#define MARINE_RIBBON        25
#define LAND_RIBBON          26
#define SKY_RIBBON           27
#define COUNTRY_RIBBON       28
#define NATIONAL_RIBBON      29
#define EARTH_RIBBON         30
#define WORLD_RIBBON         31

#define FIRST_GIFT_RIBBON MARINE_RIBBON
#define LAST_GIFT_RIBBON  WORLD_RIBBON
#define NUM_GIFT_RIBBONS  (1 + LAST_GIFT_RIBBON - FIRST_GIFT_RIBBON)

// The above gift ribbons (Marine - World) are
// special distribution ribbons that correspond to
// 1 bit each in the Pokémon struct. Gen 4 hard-codes
// each of these to the given name. In Gen 3 they're
// used to get an index into giftRibbons in the save block,
// which can have a value 0-64 (0 is 'no ribbon') that 
// corresponds to one of the special ribbons listed
// in gGiftRibbonDescriptionPointers. Most of these were
// never distributed
#define MAX_GIFT_RIBBON 64

#define MIN_LEVEL 1
#define MAX_LEVEL 100

#define OT_ID_PLAYER_ID       0
#define OT_ID_PRESET          1
#define OT_ID_RANDOM_NO_SHINY 2

#define MON_GIVEN_TO_PARTY      0
#define MON_GIVEN_TO_PC         1
#define MON_CANT_GIVE           2

#define PLAYER_HAS_TWO_USABLE_MONS     0
#define PLAYER_HAS_ONE_MON             1
#define PLAYER_HAS_ONE_USABLE_MON      2

#define MON_ALREADY_KNOWS_MOVE  0xFFFE
#define MON_HAS_MAX_MOVES       0xFFFF

#define LEVEL_UP_MOVE_ID   0x01FF
#define LEVEL_UP_MOVE_LV   0xFE00
#define LEVEL_UP_END       0xFFFF

#define MAX_LEVEL_UP_MOVES       300

#define MON_MALE       0x00
#define MON_FEMALE     0xFE
#define MON_GENDERLESS 0xFF

// Constants for AdjustFriendship
#define FRIENDSHIP_EVENT_GROW_LEVEL       0
#define FRIENDSHIP_EVENT_VITAMIN          1 // unused, handled by PokemonUseItemEffects
#define FRIENDSHIP_EVENT_BATTLE_ITEM      2 // unused, handled by PokemonUseItemEffects
#define FRIENDSHIP_EVENT_LEAGUE_BATTLE    3
#define FRIENDSHIP_EVENT_LEARN_TMHM       4
#define FRIENDSHIP_EVENT_WALKING          5
#define FRIENDSHIP_EVENT_FAINT_SMALL      6
#define FRIENDSHIP_EVENT_FAINT_FIELD_PSN  7
#define FRIENDSHIP_EVENT_FAINT_LARGE      8 // If opponent was >= 30 levels higher. See AdjustFriendshipOnBattleFaint

#define MAX_FRIENDSHIP  0xFF

#define MAX_PER_STAT_IVS 31
#define MAX_IV_MASK 31
#define USE_RANDOM_IVS (MAX_PER_STAT_IVS + 1)
#define MAX_PER_STAT_EVS 252
#define MAX_TOTAL_EVS 510
#define EV_ITEM_RAISE_LIMIT 252

// Battle move flags
#define FLAG_MAKES_CONTACT                        (1 << 0)
#define FLAG_PROTECT_AFFECTED                     (1 << 1)
#define FLAG_MAGIC_COAT_AFFECTED                  (1 << 2)
#define FLAG_SNATCH_AFFECTED                      (1 << 3)
#define FLAG_MIRROR_MOVE_AFFECTED                 (1 << 4)
#define FLAG_KINGS_ROCK_AFFECTED                  (1 << 5)
#define FLAG_HIGH_CRIT                            (1 << 6)
#define FLAG_RECKLESS_BOOST                       (1 << 7)
#define FLAG_IRON_FIST_BOOST                      (1 << 8)
#define FLAG_SHEER_FORCE_BOOST                    (1 << 9)
#define FLAG_STRONG_JAW_BOOST                     (1 << 10)
#define FLAG_MEGA_LAUNCHER_BOOST                  (1 << 11)
#define FLAG_STAT_STAGES_IGNORED                  (1 << 12)
#define FLAG_STRIKER_BOOST                        (1 << 13) // For Striker
#define FLAG_DMG_UNDERGROUND                      (1 << 14)
#define FLAG_DMG_UNDERWATER                       (1 << 15)
#define FLAG_SOUND                                (1 << 16)
#define FLAG_BALLISTIC                            (1 << 17)
#define FLAG_PROTECTION_MOVE                      (1 << 18)
#define FLAG_POWDER                               (1 << 19)
#define FLAG_TARGET_ABILITY_IGNORED               (1 << 20)
#define FLAG_DANCE                                (1 << 21)
#define FLAG_DMG_2X_IN_AIR                        (1 << 22) // If target is in the air, can hit and deal double damage.
#define FLAG_DMG_IN_AIR                           (1 << 23) // If target is in the air, can hit.
#define FLAG_DMG_UNGROUNDED_IGNORE_TYPE_IF_FLYING (1 << 24) // Makes a Ground type move do 1x damage to flying and levitating targets
#define FLAG_THAW_USER                            (1 << 25)
#define FLAG_HIT_IN_SUBSTITUTE                    (1 << 26) // Hyperspace Fury
#define FLAG_TWO_STRIKES                          (1 << 27) // A move with this flag will strike twice, and may apply its effect on each hit
#define FLAG_KEEN_EDGE_BOOST                      (1 << 28)
#define FLAG_BONE_BASED                           (1 << 29) // For Bone Zone
#define FLAG_WEATHER_BASED                        (1 << 30) // For Weather Control
#define FLAG_FIELD_BASED                          (1 << 31) // For Field Explorer

// Battle move Flags 2
#define FLAG_AIR_BASED                            (1 << 0) // For Giant Wings
#define FLAG_HORN_BASED                           (1 << 1) // For Mighty Horn
#define FLAG_ALWAYS_CRIT                          (1 << 2) // For the move Frost Breath

// Split defines.
#define SPLIT_PHYSICAL  0x0
#define SPLIT_SPECIAL   0x1
#define SPLIT_STATUS    0x2

// Growth rates
#define GROWTH_MEDIUM_FAST  0
#define GROWTH_ERRATIC      1
#define GROWTH_FLUCTUATING  2
#define GROWTH_MEDIUM_SLOW  3
#define GROWTH_FAST         4
#define GROWTH_SLOW         5

// Body colors for pokedex search
#define BODY_COLOR_RED      0
#define BODY_COLOR_BLUE     1
#define BODY_COLOR_YELLOW   2
#define BODY_COLOR_GREEN    3
#define BODY_COLOR_BLACK    4
#define BODY_COLOR_BROWN    5
#define BODY_COLOR_PURPLE   6
#define BODY_COLOR_GRAY     7
#define BODY_COLOR_WHITE    8
#define BODY_COLOR_PINK     9

#define F_SUMMARY_SCREEN_FLIP_SPRITE 0x80

// Evolution types
#define EVO_MEGA_EVOLUTION                0xffff // Not an actual evolution, used to temporarily mega evolve in battle.
#define EVO_MOVE_MEGA_EVOLUTION           0xfffe // Mega Evolution that checks for a move instead of held item.
#define EVO_PRIMAL_REVERSION              0xfffd // Not an actual evolution, used to undergo primal reversion in battle.
#define EVO_FRIENDSHIP                    1      // Pokémon levels up with friendship ≥ 220
#define EVO_FRIENDSHIP_DAY                2      // Pokémon levels up during the day with friendship ≥ 220
#define EVO_FRIENDSHIP_NIGHT              3      // Pokémon levels up at night with friendship ≥ 220
#define EVO_LEVEL                         4      // Pokémon reaches the specified level
#define EVO_TRADE                         5      // Pokémon is traded
#define EVO_TRADE_ITEM                    6      // Pokémon is traded while it's holding the specified item
#define EVO_ITEM                          7      // specified item is used on Pokémon
#define EVO_LEVEL_ATK_GT_DEF              8      // Pokémon reaches the specified level with attack > defense
#define EVO_LEVEL_ATK_EQ_DEF              9      // Pokémon reaches the specified level with attack = defense
#define EVO_LEVEL_ATK_LT_DEF              10     // Pokémon reaches the specified level with attack < defense
#define EVO_LEVEL_SILCOON                 11     // Pokémon reaches the specified level with a Silcoon personality value
#define EVO_LEVEL_CASCOON                 12     // Pokémon reaches the specified level with a Cascoon personality value
#define EVO_LEVEL_NINJASK                 13     // Pokémon reaches the specified level (special value for Ninjask)
#define EVO_LEVEL_SHEDINJA                14     // Pokémon reaches the specified level (special value for Shedinja)
#define EVO_BEAUTY                        15     // Pokémon levels up with beauty ≥ specified value
#define EVO_LEVEL_FEMALE                  16     // Pokémon reaches the specified level, is female
#define EVO_LEVEL_MALE                    17     // Pokémon reaches the specified level, is male
#define EVO_LEVEL_NIGHT                   18     // Pokémon reaches the specified level, is night
#define EVO_LEVEL_DAY                     19     // Pokémon reaches the specified level, is day
#define EVO_LEVEL_DUSK                    20     // Pokémon reaches the specified level, is dusk (5-6 P.M)
#define EVO_ITEM_HOLD_DAY                 21     // Pokémon levels up, holds specified item at day
#define EVO_ITEM_HOLD_NIGHT               22     // Pokémon levels up, holds specified item at night
#define EVO_MOVE                          23     // Pokémon levels up, knows specified move
#define EVO_MOVE_TYPE                     24     // Pokémon levels up, knows move with specified type
#define EVO_SPECIFIC_MAPSEC               25     // Pokémon levels up on specified mapsec
#define EVO_ITEM_MALE                     26     // specified item is used on a male Pokémon
#define EVO_ITEM_FEMALE                   27     // specified item is used on a female Pokémon
#define EVO_LEVEL_RAIN                    28     // Pokémon reaches the specified level while it's raining
#define EVO_SPECIFIC_MON_IN_PARTY         29     // Pokémon levels up with a specified Pokémon in party
#define EVO_LEVEL_DARK_TYPE_MON_IN_PARTY  30     // Pokémon reaches the specified level with a Dark Type Pokémon in party
#define EVO_TRADE_SPECIFIC_MON            31     // Pokémon is traded for a specified Pokémon
#define EVO_SPECIFIC_MAP                  32     // Pokémon levels up on specified map
#define EVO_ITEM_HOLD                     33     // Pokémon levels up, holds specified item

#define EVOS_PER_MON 10

// Evolution 'modes,' for GetEvolutionTargetSpecies
#define EVO_MODE_NORMAL     0
#define EVO_MODE_TRADE      1
#define EVO_MODE_ITEM_USE   2
#define EVO_MODE_ITEM_CHECK 3 // If an Everstone is being held, still want to show that the stone *could* be used on that Pokémon to evolve

// Form change types
#define FORM_CHANGE_END         0
#define FORM_ITEM_HOLD          1
#define FORM_ITEM_USE           2
#define FORM_MOVE               3
#define FORM_WITHDRAW           4
#define FORM_ITEM_HOLD_ABILITY  5
#define FORM_ITEM_USE_TIME      6

#define NUM_MALE_LINK_FACILITY_CLASSES   8
#define NUM_FEMALE_LINK_FACILITY_CLASSES 8

#define MON_PIC_SIZE (64 * 64 / 2)

#define NUM_ABILITY_SLOTS 3
#define NUM_INNATE_PER_SPECIES 3

#define INNATE_1_LEVEL 1
#define INNATE_2_LEVEL 17 // eg. 17
#define INNATE_3_LEVEL 24 // eg 24


//Move Relearner
#define MOVE_TUTOR_LEVEL_UP_MOVES 0
#define MOVE_TUTOR_EGG_MOVES      1
#define MOVE_TUTOR_TM_MOVES       2
#define MOVE_TUTOR_MOVES          3

//Drain Effect
#define DRAIN_EFFECT_MOVE         0
#define DRAIN_EFFECT_ABILITY      1
#define DRAIN_EFFECT_OTHER        2

//Totem Fights
#define TOTEM_FIGHT_NORMAL        0
#define TOTEM_FIGHT_HAXORUS       1
#define TOTEM_FIGHT_DEWGONG       2
#define TOTEM_FIGHT_BRELOOM       3
#define TOTEM_FIGHT_SANDSLASH     4
#define TOTEM_FIGHT_FERALIGATR    5
#define TOTEM_FIGHT_GYARADOS      6

#endif // GUARD_CONSTANTS_POKEMON_H
