const struct Evolution gEvolutionTable[NUM_SPECIES][EVOS_PER_MON] =
{
    [SPECIES_BULBASAUR]	 = {{EVO_LEVEL, 16, SPECIES_IVYSAUR}},
    [SPECIES_IVYSAUR]	 = {{EVO_LEVEL, 32, SPECIES_VENUSAUR}},
    [SPECIES_VENUSAUR]	 = {{EVO_MEGA_EVOLUTION, ITEM_VENUSAURITE, SPECIES_MEGA_VENUSAUR}},
    [SPECIES_CHARMANDER] = {{EVO_LEVEL, 16, SPECIES_CHARMELEON}},
    [SPECIES_CHARMELEON] = {{EVO_LEVEL, 36, SPECIES_CHARIZARD}},
    [SPECIES_CHARIZARD]	 = {{EVO_MEGA_EVOLUTION, ITEM_CHARIZARDITE_X, SPECIES_MEGA_CHARIZARD_X},
                            {EVO_MEGA_EVOLUTION, ITEM_CHARIZARDITE_Y, SPECIES_MEGA_CHARIZARD_Y}},
    [SPECIES_SQUIRTLE]	 = {{EVO_LEVEL, 16, SPECIES_WARTORTLE}},
    [SPECIES_WARTORTLE]	 = {{EVO_LEVEL, 36, SPECIES_BLASTOISE}},
    [SPECIES_BLASTOISE]	 = {{EVO_MEGA_EVOLUTION, ITEM_BLASTOISINITE, SPECIES_MEGA_BLASTOISE}},
    [SPECIES_CATERPIE]	 = {{EVO_LEVEL, 7, SPECIES_METAPOD}},
    [SPECIES_METAPOD]	 = {{EVO_LEVEL, 10, SPECIES_BUTTERFREE}},
    [SPECIES_WEEDLE]	 = {{EVO_LEVEL, 7, SPECIES_KAKUNA}},
    [SPECIES_KAKUNA]	 = {{EVO_LEVEL, 10, SPECIES_BEEDRILL}},
    [SPECIES_BEEDRILL]	 = {{EVO_MEGA_EVOLUTION, ITEM_BEEDRILLITE, SPECIES_MEGA_BEEDRILL}},
    [SPECIES_PIDGEY]	 = {{EVO_LEVEL, 18, SPECIES_PIDGEOTTO}},
    [SPECIES_PIDGEOTTO]	 = {{EVO_LEVEL, 36, SPECIES_PIDGEOT}},
    [SPECIES_PIDGEOT]	 = {{EVO_MEGA_EVOLUTION, ITEM_PIDGEOTITE, SPECIES_MEGA_PIDGEOT}},
    [SPECIES_RATTATA]	 = {{EVO_LEVEL, 20, SPECIES_RATICATE}},
    [SPECIES_SPEAROW]	 = {{EVO_LEVEL, 20, SPECIES_FEAROW}},
    [SPECIES_EKANS]	     = {{EVO_LEVEL, 22, SPECIES_ARBOK}},
    [SPECIES_PIKACHU]      = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_RAICHU},
                            {EVO_ITEM, ITEM_NONE,/*ITEM_THUNDER_STONE,*/ SPECIES_ALOLAN_RAICHU}},
    [SPECIES_SANDSHREW]	 = {{EVO_LEVEL, 22, SPECIES_SANDSLASH}},
    [SPECIES_NIDORAN_F]	 = {{EVO_LEVEL, 16, SPECIES_NIDORINA}},
    [SPECIES_NIDORINA]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOQUEEN}},
    [SPECIES_NIDORAN_M]  = {{EVO_LEVEL, 16, SPECIES_NIDORINO}},
    [SPECIES_NIDORINO]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOKING}},
    [SPECIES_CLEFAIRY]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE}},
    [SPECIES_VULPIX]     = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}},
    [SPECIES_JIGGLYPUFF] = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF}},
    [SPECIES_ZUBAT]	     = {{EVO_LEVEL, 22, SPECIES_GOLBAT}},
    [SPECIES_GOLBAT]	 = {{EVO_FRIENDSHIP, 0, SPECIES_CROBAT}},
    [SPECIES_ODDISH]	 = {{EVO_LEVEL, 21, SPECIES_GLOOM}},
    [SPECIES_GLOOM]      = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VILEPLUME},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM}},
    [SPECIES_PARAS]	     = {{EVO_LEVEL, 24, SPECIES_PARASECT}},
    [SPECIES_VENONAT]	 = {{EVO_LEVEL, 31, SPECIES_VENOMOTH}},
    [SPECIES_DIGLETT]	 = {{EVO_LEVEL, 26, SPECIES_DUGTRIO}},
    [SPECIES_MEOWTH]	 = {{EVO_LEVEL, 28, SPECIES_PERSIAN}},
    [SPECIES_PSYDUCK]	 = {{EVO_LEVEL, 33, SPECIES_GOLDUCK}},
    [SPECIES_MANKEY]	 = {{EVO_LEVEL, 28, SPECIES_PRIMEAPE}},
    [SPECIES_GROWLITHE]  = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}},
    [SPECIES_POLIWAG]    = {{EVO_LEVEL, 25, SPECIES_POLIWHIRL}},
    [SPECIES_POLIWHIRL]  = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_POLIWRATH},
                            {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED},
                            {EVO_ITEM_HOLD, ITEM_KINGS_ROCK, SPECIES_POLITOED}},
    [SPECIES_ABRA]	     = {{EVO_LEVEL, 16, SPECIES_KADABRA}},
    [SPECIES_KADABRA]	 = {{EVO_FRIENDSHIP, 0, SPECIES_ALAKAZAM}},
    [SPECIES_ALAKAZAM]	 = {{EVO_MEGA_EVOLUTION, ITEM_ALAKAZITE, SPECIES_MEGA_ALAKAZAM}},
    [SPECIES_MACHOP]	 = {{EVO_LEVEL, 28, SPECIES_MACHOKE}},
    [SPECIES_MACHOKE]	 = {{EVO_FRIENDSHIP, 0, SPECIES_MACHAMP}},
    [SPECIES_BELLSPROUT] = {{EVO_LEVEL, 21, SPECIES_WEEPINBELL}},
    [SPECIES_WEEPINBELL] = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VICTREEBEL}},
    [SPECIES_TENTACOOL]	 = {{EVO_LEVEL, 30, SPECIES_TENTACRUEL}},
    [SPECIES_GEODUDE]	 = {{EVO_LEVEL, 25, SPECIES_GRAVELER}},
    [SPECIES_GRAVELER]	 = {{EVO_TRADE, 0, SPECIES_GOLEM}},
    [SPECIES_PONYTA]	 = {{EVO_LEVEL, 40, SPECIES_RAPIDASH}},
    [SPECIES_SLOWPOKE]   = {{EVO_LEVEL, 37, SPECIES_SLOWBRO},
                            {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING},
                            {EVO_ITEM_HOLD, ITEM_METAL_COAT, SPECIES_SLOWKING}},
    [SPECIES_SLOWBRO]	 = {{EVO_MEGA_EVOLUTION, ITEM_SLOWBRONITE, SPECIES_MEGA_SLOWBRO}},
    [SPECIES_MAGNEMITE]	 = {{EVO_LEVEL, 30, SPECIES_MAGNETON}},
    [SPECIES_MAGNETON]	 = {{EVO_MAP, MAPSEC_NEW_MAUVILLE, SPECIES_MAGNEZONE}},
    [SPECIES_DODUO]	     = {{EVO_LEVEL, 31, SPECIES_DODRIO}},
    [SPECIES_SEEL]	     = {{EVO_LEVEL, 34, SPECIES_DEWGONG}},
    [SPECIES_GRIMER]	 = {{EVO_LEVEL, 38, SPECIES_MUK}},
    [SPECIES_SHELLDER]   = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_CLOYSTER}},
    [SPECIES_GASTLY]	 = {{EVO_LEVEL, 25, SPECIES_HAUNTER}},
    [SPECIES_HAUNTER]	 = {{EVO_FRIENDSHIP, 0, SPECIES_GENGAR}},
    [SPECIES_GENGAR]	 = {{EVO_MEGA_EVOLUTION, ITEM_GENGARITE, SPECIES_MEGA_GENGAR}},
    [SPECIES_ONIX]       = {{EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX},
                            {EVO_ITEM_HOLD, ITEM_METAL_COAT, SPECIES_STEELIX}},
    [SPECIES_DROWZEE]	 = {{EVO_LEVEL, 26, SPECIES_HYPNO}},
    [SPECIES_KRABBY]	 = {{EVO_LEVEL, 28, SPECIES_KINGLER}},
    [SPECIES_VOLTORB]	 = {{EVO_LEVEL, 30, SPECIES_ELECTRODE}},
    [SPECIES_EXEGGCUTE]	 = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR},
                            {EVO_ITEM, ITEM_NONE,/*ITEM_LEAF_STONE,*/ SPECIES_ALOLAN_EXEGGUTOR}},
    [SPECIES_CUBONE]	 = {{EVO_LEVEL, 28, SPECIES_MAROWAK},
                            {EVO_LEVEL_NIGHT, 28, SPECIES_ALOLAN_MAROWAK}},
    [SPECIES_LICKITUNG]	 = {{EVO_MOVE, MOVE_ROLLOUT, SPECIES_LICKILICKY}},
    [SPECIES_KOFFING]	 = {{EVO_LEVEL, 35, SPECIES_WEEZING}},
    [SPECIES_RHYHORN]	 = {{EVO_LEVEL, 42, SPECIES_RHYDON}},
    [SPECIES_RHYDON]	 = {{EVO_TRADE_ITEM, ITEM_PROTECTOR, SPECIES_RHYPERIOR},
                            {EVO_ITEM_HOLD, ITEM_PROTECTOR, SPECIES_RHYPERIOR}},
    [SPECIES_CHANSEY]	 = {{EVO_FRIENDSHIP, 0, SPECIES_BLISSEY}},
    [SPECIES_TANGELA]	 = {{EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_TANGROWTH}},
    [SPECIES_KANGASKHAN] = {{EVO_MEGA_EVOLUTION, ITEM_KANGASKHANITE, SPECIES_MEGA_KANGASKHAN}},
    [SPECIES_HORSEA]	 = {{EVO_LEVEL, 32, SPECIES_SEADRA}},
    [SPECIES_SEADRA]	 = {{EVO_TRADE_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA},
                            {EVO_ITEM_HOLD, ITEM_DRAGON_SCALE, SPECIES_KINGDRA}},
    [SPECIES_GOLDEEN]	 = {{EVO_LEVEL, 33, SPECIES_SEAKING}},
    [SPECIES_STARYU]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}},
    [SPECIES_SCYTHER]    = {{EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR},
                            {EVO_ITEM_HOLD, ITEM_METAL_COAT, SPECIES_SCIZOR}},
    [SPECIES_ELECTABUZZ] = {{EVO_TRADE_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE},
                            {EVO_ITEM_HOLD, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE}},
    [SPECIES_MAGMAR]	 = {{EVO_TRADE_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR},
                            {EVO_ITEM_HOLD, ITEM_MAGMARIZER, SPECIES_MAGMORTAR}},
    [SPECIES_PINSIR]	 = {{EVO_MEGA_EVOLUTION, ITEM_PINSIRITE, SPECIES_MEGA_PINSIR}},
    [SPECIES_MAGIKARP]	 = {{EVO_LEVEL, 20, SPECIES_GYARADOS}},
    [SPECIES_GYARADOS]	 = {{EVO_MEGA_EVOLUTION, ITEM_GYARADOSITE, SPECIES_MEGA_GYARADOS}},
    [SPECIES_EEVEE]      = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                            {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                            {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                            {EVO_FRIENDSHIP_DAY, 0, SPECIES_ESPEON},
                            {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_UMBREON},
                            {EVO_MAP, MAPSEC_PETALBURG_WOODS, SPECIES_LEAFEON},
                            {EVO_MAP, MAPSEC_SHOAL_CAVE, SPECIES_GLACEON},
                            {EVO_MOVE_TYPE, TYPE_FAIRY, SPECIES_SYLVEON}},
    [SPECIES_PORYGON]	 = {{EVO_TRADE_ITEM, ITEM_UP_GRADE, SPECIES_PORYGON2},
                            {EVO_ITEM_HOLD, ITEM_UP_GRADE, SPECIES_PORYGON2}},
    [SPECIES_OMANYTE]	 = {{EVO_LEVEL, 40, SPECIES_OMASTAR}},
    [SPECIES_KABUTO]	 = {{EVO_LEVEL, 40, SPECIES_KABUTOPS}},
    [SPECIES_AERODACTYL]	 = {{EVO_MEGA_EVOLUTION, ITEM_AERODACTYLITE, SPECIES_MEGA_AERODACTYL}},
    [SPECIES_DRATINI]	 = {{EVO_LEVEL, 30, SPECIES_DRAGONAIR}},
    [SPECIES_DRAGONAIR]	 = {{EVO_LEVEL, 55, SPECIES_DRAGONITE}},
    [SPECIES_MEWTWO]	 = {{EVO_MEGA_EVOLUTION, ITEM_MEWTWONITE_X, SPECIES_MEGA_MEWTWO_X},
                            {EVO_MEGA_EVOLUTION, ITEM_MEWTWONITE_Y, SPECIES_MEGA_MEWTWO_Y}},
    [SPECIES_CHIKORITA]	 = {{EVO_LEVEL, 16, SPECIES_BAYLEEF}},
    [SPECIES_BAYLEEF]	 = {{EVO_LEVEL, 32, SPECIES_MEGANIUM}},
    [SPECIES_CYNDAQUIL]	 = {{EVO_LEVEL, 14, SPECIES_QUILAVA}},
    [SPECIES_QUILAVA]	 = {{EVO_LEVEL, 36, SPECIES_TYPHLOSION}},
    [SPECIES_TOTODILE]	 = {{EVO_LEVEL, 18, SPECIES_CROCONAW}},
    [SPECIES_CROCONAW]	 = {{EVO_LEVEL, 30, SPECIES_FERALIGATR}},
    [SPECIES_SENTRET]	 = {{EVO_LEVEL, 15, SPECIES_FURRET}},
    [SPECIES_HOOTHOOT]	 = {{EVO_LEVEL, 20, SPECIES_NOCTOWL}},
    [SPECIES_LEDYBA]	 = {{EVO_LEVEL, 18, SPECIES_LEDIAN}},
    [SPECIES_SPINARAK]	 = {{EVO_LEVEL, 22, SPECIES_ARIADOS}},
    [SPECIES_CHINCHOU]	 = {{EVO_LEVEL, 27, SPECIES_LANTURN}},
    [SPECIES_PICHU]	     = {{EVO_FRIENDSHIP, 0, SPECIES_PIKACHU}},
    [SPECIES_CLEFFA]	 = {{EVO_FRIENDSHIP, 0, SPECIES_CLEFAIRY}},
    [SPECIES_IGGLYBUFF]	 = {{EVO_FRIENDSHIP, 0, SPECIES_JIGGLYPUFF}},
    [SPECIES_TOGEPI]	 = {{EVO_FRIENDSHIP, 0, SPECIES_TOGETIC}},
    [SPECIES_TOGETIC]	 = {{EVO_ITEM, ITEM_SHINY_STONE, SPECIES_TOGEKISS}},
    [SPECIES_NATU]	     = {{EVO_LEVEL, 25, SPECIES_XATU}},
    [SPECIES_MAREEP]	 = {{EVO_LEVEL, 15, SPECIES_FLAAFFY}},
    [SPECIES_FLAAFFY]	 = {{EVO_LEVEL, 30, SPECIES_AMPHAROS}},
    [SPECIES_AMPHAROS]	 = {{EVO_MEGA_EVOLUTION, ITEM_AMPHAROSITE, SPECIES_MEGA_AMPHAROS}},
    [SPECIES_MARILL]	 = {{EVO_LEVEL, 18, SPECIES_AZUMARILL}},
    [SPECIES_HOPPIP]	 = {{EVO_LEVEL, 18, SPECIES_SKIPLOOM}},
    [SPECIES_SKIPLOOM]	 = {{EVO_LEVEL, 27, SPECIES_JUMPLUFF}},
    [SPECIES_AIPOM]	     = {{EVO_MOVE, MOVE_DOUBLE_HIT, SPECIES_AMBIPOM}},
    [SPECIES_SUNKERN]    = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA}},
    [SPECIES_YANMA]	     = {{EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_YANMEGA}},
    [SPECIES_WOOPER]	 = {{EVO_LEVEL, 20, SPECIES_QUAGSIRE}},
    [SPECIES_MURKROW]	 = {{EVO_ITEM, ITEM_DUSK_STONE, SPECIES_HONCHKROW}},
    [SPECIES_MISDREAVUS] = {{EVO_ITEM, ITEM_DUSK_STONE, SPECIES_MISMAGIUS}},
    [SPECIES_PINECO]	 = {{EVO_LEVEL, 31, SPECIES_FORRETRESS}},
    [SPECIES_GLIGAR]	 = {{EVO_ITEM_HOLD_NIGHT, ITEM_RAZOR_FANG, SPECIES_GLISCOR}},
    [SPECIES_STEELIX]	 = {{EVO_MEGA_EVOLUTION, ITEM_STEELIXITE, SPECIES_MEGA_STEELIX}},
    [SPECIES_SNUBBULL]	 = {{EVO_LEVEL, 23, SPECIES_GRANBULL}},
    [SPECIES_SCIZOR]	 = {{EVO_MEGA_EVOLUTION, ITEM_SCIZORITE, SPECIES_MEGA_SCIZOR}},
    [SPECIES_HERACROSS]	 = {{EVO_MEGA_EVOLUTION, ITEM_HERACRONITE, SPECIES_MEGA_HERACROSS}},
    [SPECIES_SNEASEL]	 = {{EVO_ITEM_HOLD_NIGHT, ITEM_RAZOR_CLAW, SPECIES_WEAVILE}},
    [SPECIES_TEDDIURSA]	 = {{EVO_LEVEL, 30, SPECIES_URSARING}},
    [SPECIES_SLUGMA]	 = {{EVO_LEVEL, 38, SPECIES_MAGCARGO}},
    [SPECIES_SWINUB]	 = {{EVO_LEVEL, 33, SPECIES_PILOSWINE}},
    [SPECIES_PILOSWINE]	 = {{EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_MAMOSWINE}},
    [SPECIES_REMORAID]	 = {{EVO_LEVEL, 25, SPECIES_OCTILLERY}},
    [SPECIES_HOUNDOUR]	 = {{EVO_LEVEL, 24, SPECIES_HOUNDOOM}},
    [SPECIES_HOUNDOOM]	 = {{EVO_MEGA_EVOLUTION, ITEM_HOUNDOOMINITE, SPECIES_MEGA_HOUNDOOM}},
    [SPECIES_PHANPY]	 = {{EVO_LEVEL, 25, SPECIES_DONPHAN}},
    [SPECIES_PORYGON2]	 = {{EVO_TRADE_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z},
                            {EVO_ITEM_HOLD, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z}},
    [SPECIES_TYROGUE]	 = {{EVO_LEVEL_ATK_LT_DEF, 20, SPECIES_HITMONCHAN},
                            {EVO_LEVEL_ATK_GT_DEF, 20, SPECIES_HITMONLEE},
                            {EVO_LEVEL_ATK_EQ_DEF, 20, SPECIES_HITMONTOP}},
    [SPECIES_SMOOCHUM]	 = {{EVO_LEVEL, 30, SPECIES_JYNX}},
    [SPECIES_ELEKID]	 = {{EVO_LEVEL, 30, SPECIES_ELECTABUZZ}},
    [SPECIES_MAGBY]	     = {{EVO_LEVEL, 30, SPECIES_MAGMAR}},
    [SPECIES_LARVITAR]	 = {{EVO_LEVEL, 30, SPECIES_PUPITAR}},
    [SPECIES_PUPITAR]	 = {{EVO_LEVEL, 55, SPECIES_TYRANITAR}},
    [SPECIES_TYRANITAR]	 = {{EVO_MEGA_EVOLUTION, ITEM_TYRANITARITE, SPECIES_MEGA_TYRANITAR}},
    [SPECIES_TREECKO]	 = {{EVO_LEVEL, 16, SPECIES_GROVYLE}},
    [SPECIES_GROVYLE]	 = {{EVO_LEVEL, 36, SPECIES_SCEPTILE}},
    [SPECIES_SCEPTILE]	 = {{EVO_MEGA_EVOLUTION, ITEM_SCEPTILITE, SPECIES_MEGA_SCEPTILE}},
    [SPECIES_TORCHIC]	 = {{EVO_LEVEL, 16, SPECIES_COMBUSKEN}},
    [SPECIES_COMBUSKEN]	 = {{EVO_LEVEL, 36, SPECIES_BLAZIKEN}},
    [SPECIES_BLAZIKEN]	 = {{EVO_MEGA_EVOLUTION, ITEM_BLAZIKENITE, SPECIES_MEGA_BLAZIKEN}},
    [SPECIES_MUDKIP]	 = {{EVO_LEVEL, 16, SPECIES_MARSHTOMP}},
    [SPECIES_MARSHTOMP]	 = {{EVO_LEVEL, 36, SPECIES_SWAMPERT}},
    [SPECIES_SWAMPERT]	 = {{EVO_MEGA_EVOLUTION, ITEM_SWAMPERTITE, SPECIES_MEGA_SWAMPERT}},
    [SPECIES_POOCHYENA]	 = {{EVO_LEVEL, 18, SPECIES_MIGHTYENA}},
    [SPECIES_ZIGZAGOON]	 = {{EVO_LEVEL, 20, SPECIES_LINOONE}},
    [SPECIES_WURMPLE]	 = {{EVO_LEVEL_SILCOON, 7, SPECIES_SILCOON},
                            {EVO_LEVEL_CASCOON, 7, SPECIES_CASCOON}},
    [SPECIES_SILCOON]	 = {{EVO_LEVEL, 10, SPECIES_BEAUTIFLY}},
    [SPECIES_CASCOON]	 = {{EVO_LEVEL, 10, SPECIES_DUSTOX}},
    [SPECIES_LOTAD]	     = {{EVO_LEVEL, 14, SPECIES_LOMBRE}},
    [SPECIES_LOMBRE]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO}},
    [SPECIES_SEEDOT]	 = {{EVO_LEVEL, 14, SPECIES_NUZLEAF}},
    [SPECIES_NUZLEAF]    = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SHIFTRY}},
    [SPECIES_NINCADA]	 = {{EVO_LEVEL_NINJASK, 20, SPECIES_NINJASK},
                            {EVO_LEVEL_SHEDINJA, 20, SPECIES_SHEDINJA}},
    [SPECIES_TAILLOW]	 = {{EVO_LEVEL, 22, SPECIES_SWELLOW}},
    [SPECIES_SHROOMISH]	 = {{EVO_LEVEL, 23, SPECIES_BRELOOM}},
    [SPECIES_WINGULL]	 = {{EVO_LEVEL, 25, SPECIES_PELIPPER}},
    [SPECIES_SURSKIT]	 = {{EVO_LEVEL, 22, SPECIES_MASQUERAIN}},
    [SPECIES_WAILMER]	 = {{EVO_LEVEL, 40, SPECIES_WAILORD}},
    [SPECIES_SKITTY]     = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_DELCATTY}},
    [SPECIES_BALTOY]	 = {{EVO_LEVEL, 36, SPECIES_CLAYDOL}},
    [SPECIES_NOSEPASS]	 = {{EVO_MAP, MAPSEC_NEW_MAUVILLE, SPECIES_PROBOPASS}},
    [SPECIES_SABLEYE]	 = {{EVO_MEGA_EVOLUTION, ITEM_SABLENITE, SPECIES_MEGA_SABLEYE}},
    [SPECIES_BARBOACH]	 = {{EVO_LEVEL, 30, SPECIES_WHISCASH}},
    [SPECIES_CORPHISH]	 = {{EVO_LEVEL, 30, SPECIES_CRAWDAUNT}},
    [SPECIES_FEEBAS]	 = {{EVO_BEAUTY, 170, SPECIES_MILOTIC},
                            {EVO_ITEM_HOLD, ITEM_PRISM_SCALE, SPECIES_MILOTIC}},
    [SPECIES_CARVANHA]	 = {{EVO_LEVEL, 30, SPECIES_SHARPEDO}},
    [SPECIES_SHARPEDO]	 = {{EVO_MEGA_EVOLUTION, ITEM_SHARPEDONITE, SPECIES_MEGA_SHARPEDO}},
    [SPECIES_TRAPINCH]	 = {{EVO_LEVEL, 35, SPECIES_VIBRAVA}},
    [SPECIES_VIBRAVA]	 = {{EVO_LEVEL, 45, SPECIES_FLYGON}},
    [SPECIES_MAKUHITA]	 = {{EVO_LEVEL, 24, SPECIES_HARIYAMA}},
    [SPECIES_ELECTRIKE]	 = {{EVO_LEVEL, 26, SPECIES_MANECTRIC}},
    [SPECIES_MANECTRIC]	 = {{EVO_MEGA_EVOLUTION, ITEM_MANECTITE, SPECIES_MEGA_MANECTRIC}},
    [SPECIES_NUMEL]	     = {{EVO_LEVEL, 33, SPECIES_CAMERUPT}},
    [SPECIES_CAMERUPT]	 = {{EVO_MEGA_EVOLUTION, ITEM_CAMERUPTITE, SPECIES_MEGA_CAMERUPT}},
    [SPECIES_SPHEAL]	 = {{EVO_LEVEL, 32, SPECIES_SEALEO}},
    [SPECIES_SEALEO]	 = {{EVO_LEVEL, 44, SPECIES_WALREIN}},
    [SPECIES_CACNEA]	 = {{EVO_LEVEL, 32, SPECIES_CACTURNE}},
    [SPECIES_SNORUNT]	 = {{EVO_LEVEL, 42, SPECIES_GLALIE},
                            {EVO_ITEM_FEMALE, ITEM_DAWN_STONE, SPECIES_FROSLASS}},
    [SPECIES_GLALIE]	 = {{EVO_MEGA_EVOLUTION, ITEM_GLALITITE, SPECIES_MEGA_GLALIE}},
    [SPECIES_AZURILL]	 = {{EVO_FRIENDSHIP, 0, SPECIES_MARILL}},
    [SPECIES_SPOINK]	 = {{EVO_LEVEL, 32, SPECIES_GRUMPIG}},
    [SPECIES_MAWILE]	 = {{EVO_MEGA_EVOLUTION, ITEM_MAWILITE, SPECIES_MEGA_MAWILE}},
    [SPECIES_MEDITITE]	 = {{EVO_LEVEL, 37, SPECIES_MEDICHAM}},
    [SPECIES_MEDICHAM]	 = {{EVO_MEGA_EVOLUTION, ITEM_MEDICHAMITE, SPECIES_MEGA_MEDICHAM}},
    [SPECIES_SWABLU]	 = {{EVO_LEVEL, 35, SPECIES_ALTARIA}},
    [SPECIES_ALTARIA]	 = {{EVO_MEGA_EVOLUTION, ITEM_ALTARIANITE, SPECIES_MEGA_ALTARIA}},
    [SPECIES_WYNAUT]	 = {{EVO_LEVEL, 15, SPECIES_WOBBUFFET}},
    [SPECIES_DUSKULL]	 = {{EVO_LEVEL, 37, SPECIES_DUSCLOPS}},
    [SPECIES_DUSCLOPS]	 = {{EVO_TRADE_ITEM, ITEM_REAPER_CLOTH, SPECIES_DUSKNOIR},
                            {EVO_ITEM_HOLD, ITEM_REAPER_CLOTH, SPECIES_DUSKNOIR}},
    [SPECIES_ROSELIA]	 = {{EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ROSERADE}},
    [SPECIES_SLAKOTH]	 = {{EVO_LEVEL, 18, SPECIES_VIGOROTH}},
    [SPECIES_VIGOROTH]	 = {{EVO_LEVEL, 36, SPECIES_SLAKING}},
    [SPECIES_GULPIN]	 = {{EVO_LEVEL, 26, SPECIES_SWALOT}},
    [SPECIES_WHISMUR]	 = {{EVO_LEVEL, 20, SPECIES_LOUDRED}},
    [SPECIES_LOUDRED]	 = {{EVO_LEVEL, 40, SPECIES_EXPLOUD}},
    [SPECIES_CLAMPERL]   = {{EVO_TRADE_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                            {EVO_TRADE_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS},
                            {EVO_ITEM_HOLD, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                            {EVO_ITEM_HOLD, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS}},
    [SPECIES_ABSOL]	     = {{EVO_MEGA_EVOLUTION, ITEM_ABSOLITE, SPECIES_MEGA_ABSOL}},
    [SPECIES_SHUPPET]	 = {{EVO_LEVEL, 37, SPECIES_BANETTE}},
    [SPECIES_BANETTE]	 = {{EVO_MEGA_EVOLUTION, ITEM_BANETTITE, SPECIES_MEGA_BANETTE}},
    [SPECIES_ARON]	     = {{EVO_LEVEL, 32, SPECIES_LAIRON}},
    [SPECIES_LAIRON]	 = {{EVO_LEVEL, 42, SPECIES_AGGRON}},
    [SPECIES_AGGRON]	 = {{EVO_MEGA_EVOLUTION, ITEM_AGGRONITE, SPECIES_MEGA_AGGRON}},
    [SPECIES_LILEEP]	 = {{EVO_LEVEL, 40, SPECIES_CRADILY}},
    [SPECIES_ANORITH]	 = {{EVO_LEVEL, 40, SPECIES_ARMALDO}},
    [SPECIES_RALTS]	     = {{EVO_LEVEL, 20, SPECIES_KIRLIA}},
    [SPECIES_KIRLIA]	 = {{EVO_LEVEL, 30, SPECIES_GARDEVOIR},
                            {EVO_ITEM_MALE, ITEM_DAWN_STONE, SPECIES_GALLADE}},
    [SPECIES_GARDEVOIR]	 = {{EVO_MEGA_EVOLUTION, ITEM_GARDEVOIRITE, SPECIES_MEGA_GARDEVOIR}},
    [SPECIES_BAGON]	 = {{EVO_LEVEL, 30, SPECIES_SHELGON}},
    [SPECIES_SHELGON]	 = {{EVO_LEVEL, 50, SPECIES_SALAMENCE}},
    [SPECIES_SALAMENCE]	 = {{EVO_MEGA_EVOLUTION, ITEM_SALAMENCITE, SPECIES_MEGA_SALAMENCE}},
    [SPECIES_BELDUM]	 = {{EVO_LEVEL, 20, SPECIES_METANG}},
    [SPECIES_METANG]	 = {{EVO_LEVEL, 45, SPECIES_METAGROSS}},
    [SPECIES_METAGROSS]	 = {{EVO_MEGA_EVOLUTION, ITEM_METAGROSSITE, SPECIES_MEGA_METAGROSS}},
    [SPECIES_LATIAS]	 = {{EVO_MEGA_EVOLUTION, ITEM_LATIASITE, SPECIES_MEGA_LATIAS}},
    [SPECIES_LATIOS]	 = {{EVO_MEGA_EVOLUTION, ITEM_LATIOSITE, SPECIES_MEGA_LATIOS}},

	// Gens 4-7
	[SPECIES_TURTWIG]	 = {{EVO_LEVEL, 18, SPECIES_GROTLE}},
	[SPECIES_GROTLE]	 = {{EVO_LEVEL, 32, SPECIES_TORTERRA}},
	[SPECIES_CHIMCHAR]	 = {{EVO_LEVEL, 14, SPECIES_MONFERNO}},
	[SPECIES_MONFERNO]	 = {{EVO_LEVEL, 36, SPECIES_INFERNAPE}},
	[SPECIES_PIPLUP]	 = {{EVO_LEVEL, 16, SPECIES_PRINPLUP}},
	[SPECIES_PRINPLUP]	 = {{EVO_LEVEL, 36, SPECIES_EMPOLEON}},
	[SPECIES_STARLY]	 = {{EVO_LEVEL, 14, SPECIES_STARAVIA}},
	[SPECIES_STARAVIA]	 = {{EVO_LEVEL, 34, SPECIES_STARAPTOR}},
	[SPECIES_BIDOOF]	 = {{EVO_LEVEL, 15, SPECIES_BIBAREL}},
	[SPECIES_KRICKETOT]	 = {{EVO_LEVEL, 10, SPECIES_KRICKETUNE}},
	[SPECIES_SHINX]	     = {{EVO_LEVEL, 15, SPECIES_LUXIO}},
	[SPECIES_LUXIO]	     = {{EVO_LEVEL, 30, SPECIES_LUXRAY}},
	[SPECIES_BUDEW]	     = {{EVO_FRIENDSHIP, 0, SPECIES_ROSELIA}},
	[SPECIES_CRANIDOS]	 = {{EVO_LEVEL, 30, SPECIES_RAMPARDOS}},
	[SPECIES_SHIELDON]	 = {{EVO_LEVEL, 30, SPECIES_BASTIODON}},
	[SPECIES_BURMY]	     = {{EVO_LEVEL_FEMALE, 20, SPECIES_WORMADAM},
                            {EVO_LEVEL_MALE, 20, SPECIES_MOTHIM}},
    [SPECIES_BURMY_SANDY]= {{EVO_LEVEL_FEMALE, 20, SPECIES_WORMADAM_SANDY},
                            {EVO_LEVEL_MALE, 20, SPECIES_MOTHIM}},
    [SPECIES_BURMY_TRASH]= {{EVO_LEVEL_FEMALE, 20, SPECIES_WORMADAM_TRASH},
                            {EVO_LEVEL_MALE, 20, SPECIES_MOTHIM}},
	[SPECIES_COMBEE]	 = {{EVO_LEVEL_FEMALE, 21, SPECIES_VESPIQUEN}},
	[SPECIES_BUIZEL]	 = {{EVO_LEVEL, 26, SPECIES_FLOATZEL}},
	[SPECIES_CHERUBI]	 = {{EVO_LEVEL, 25, SPECIES_CHERRIM}},
	[SPECIES_SHELLOS]	 = {{EVO_LEVEL, 30, SPECIES_GASTRODON}},
	[SPECIES_DRIFLOON]	 = {{EVO_LEVEL, 28, SPECIES_DRIFBLIM}},
	[SPECIES_BUNEARY]	 = {{EVO_FRIENDSHIP, 0, SPECIES_LOPUNNY}},
	[SPECIES_LOPUNNY]	 = {{EVO_MEGA_EVOLUTION, ITEM_NONE,/*ITEM_LOPUNNITE*/ SPECIES_MEGA_LOPUNNY}},
	[SPECIES_GLAMEOW]	 = {{EVO_LEVEL, 38, SPECIES_PURUGLY}},
	[SPECIES_CHINGLING]	 = {{EVO_FRIENDSHIP_NIGHT, 0, SPECIES_CHIMECHO}},
	[SPECIES_STUNKY]	 = {{EVO_LEVEL, 34, SPECIES_SKUNTANK}},
	[SPECIES_BRONZOR]	 = {{EVO_LEVEL, 35, SPECIES_BRONZONG}},
	[SPECIES_BONSLY]	 = {{EVO_MOVE, MOVE_MIMIC, SPECIES_SUDOWOODO}},
	[SPECIES_MIMEJR]	 = {{EVO_MOVE, MOVE_MIMIC, SPECIES_MR_MIME}},
	[SPECIES_HAPPINY]	 = {{EVO_ITEM_HOLD_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY}},
	[SPECIES_GIBLE] 	 = {{EVO_LEVEL, 24, SPECIES_GABITE}},
	[SPECIES_GABITE]	 = {{EVO_LEVEL, 48, SPECIES_GARCHOMP}},
	[SPECIES_GARCHOMP]	 = {{EVO_MEGA_EVOLUTION, ITEM_GARCHOMPITE, SPECIES_MEGA_GARCHOMP}},
	[SPECIES_MUNCHLAX]	 = {{EVO_FRIENDSHIP, 0, SPECIES_SNORLAX}},
	[SPECIES_RIOLU]	     = {{EVO_FRIENDSHIP, 0, SPECIES_LUCARIO}},
	[SPECIES_LUCARIO]	 = {{EVO_MEGA_EVOLUTION, ITEM_LUCARIONITE, SPECIES_MEGA_LUCARIO}},
	[SPECIES_HIPPOPOTAS] = {{EVO_LEVEL, 34, SPECIES_HIPPOWDON}},
	[SPECIES_SKORUPI]	 = {{EVO_LEVEL, 40, SPECIES_DRAPION}},
	[SPECIES_CROAGUNK]	 = {{EVO_LEVEL, 37, SPECIES_TOXICROAK}},
	[SPECIES_FINNEON]	 = {{EVO_LEVEL, 31, SPECIES_LUMINEON}},
	[SPECIES_MANTYKE]	 = {{EVO_SPECIFIC_MON_IN_PARTY, SPECIES_REMORAID, SPECIES_MANTINE}},
	[SPECIES_SNOVER]	 = {{EVO_LEVEL, 40, SPECIES_ABOMASNOW}},
	[SPECIES_ABOMASNOW]	 = {{EVO_MEGA_EVOLUTION, ITEM_ABOMASITE, SPECIES_MEGA_ABOMASNOW}},
	[SPECIES_GALLADE]	 = {{EVO_MEGA_EVOLUTION, ITEM_GALLADITE, SPECIES_MEGA_GALLADE}},
	[SPECIES_SNIVY] 	 = {{EVO_LEVEL, 17, SPECIES_SERVINE}},
	[SPECIES_SERVINE]	 = {{EVO_LEVEL, 36, SPECIES_SERPERIOR}},
	[SPECIES_TEPIG] 	 = {{EVO_LEVEL, 17, SPECIES_PIGNITE}},
	[SPECIES_PIGNITE]	 = {{EVO_LEVEL, 36, SPECIES_EMBOAR}},
	[SPECIES_OSHAWOTT]	 = {{EVO_LEVEL, 17, SPECIES_DEWOTT}},
	[SPECIES_DEWOTT]	 = {{EVO_LEVEL, 36, SPECIES_SAMUROTT}},
	[SPECIES_PATRAT]	 = {{EVO_LEVEL, 20, SPECIES_WATCHOG}},
	[SPECIES_LILLIPUP]	 = {{EVO_LEVEL, 16, SPECIES_HERDIER}},
	[SPECIES_HERDIER]	 = {{EVO_LEVEL, 32, SPECIES_STOUTLAND}},
	[SPECIES_PURRLOIN]	 = {{EVO_LEVEL, 20, SPECIES_LIEPARD}},
	[SPECIES_PANSAGE]	 = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SIMISAGE}},
	[SPECIES_PANSEAR]	 = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_SIMISEAR}},
	[SPECIES_PANPOUR]	 = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_SIMIPOUR}},
	[SPECIES_MUNNA] 	 = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_MUSHARNA}},
	[SPECIES_PIDOVE]	 = {{EVO_LEVEL, 21, SPECIES_TRANQUILL}},
	[SPECIES_TRANQUILL]	 = {{EVO_LEVEL_MALE, 32, SPECIES_UNFEZANT},
                            {EVO_LEVEL_FEMALE, 32, SPECIES_UNFEZANT}},
	[SPECIES_BLITZLE]	 = {{EVO_LEVEL, 27, SPECIES_ZEBSTRIKA}},
	[SPECIES_ROGGENROLA] = {{EVO_LEVEL, 25, SPECIES_BOLDORE}},
	[SPECIES_BOLDORE]	 = {{EVO_FRIENDSHIP, 0, SPECIES_GIGALITH}},
	[SPECIES_WOOBAT]	 = {{EVO_FRIENDSHIP, 0, SPECIES_SWOOBAT}},
	[SPECIES_DRILBUR]	 = {{EVO_LEVEL, 31, SPECIES_EXCADRILL}},
	[SPECIES_AUDINO]	 = {{EVO_MEGA_EVOLUTION, ITEM_AUDINITE, SPECIES_MEGA_AUDINO}},
	[SPECIES_TIMBURR]	 = {{EVO_LEVEL, 25, SPECIES_GURDURR}},
	[SPECIES_GURDURR]	 = {{EVO_FRIENDSHIP, 0, SPECIES_CONKELDURR}},
	[SPECIES_TYMPOLE]	 = {{EVO_LEVEL, 25, SPECIES_PALPITOAD}},
	[SPECIES_PALPITOAD]	 = {{EVO_LEVEL, 36, SPECIES_SEISMITOAD}},
	[SPECIES_SEWADDLE]	 = {{EVO_LEVEL, 20, SPECIES_SWADLOON}},
	[SPECIES_SWADLOON]	 = {{EVO_FRIENDSHIP, 0, SPECIES_LEAVANNY}},
	[SPECIES_VENIPEDE]	 = {{EVO_LEVEL, 22, SPECIES_WHIRLIPEDE}},
	[SPECIES_WHIRLIPEDE] = {{EVO_LEVEL, 30, SPECIES_SCOLIPEDE}},
	[SPECIES_COTTONEE]	 = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_WHIMSICOTT}},
	[SPECIES_PETILIL]	 = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_LILLIGANT}},
	[SPECIES_SANDILE]	 = {{EVO_LEVEL, 29, SPECIES_KROKOROK}},
	[SPECIES_KROKOROK]	 = {{EVO_LEVEL, 40, SPECIES_KROOKODILE}},
	[SPECIES_DARUMAKA]	 = {{EVO_LEVEL, 35, SPECIES_DARMANITAN}},
	[SPECIES_DWEBBLE]	 = {{EVO_LEVEL, 34, SPECIES_CRUSTLE}},
	[SPECIES_SCRAGGY]	 = {{EVO_LEVEL, 39, SPECIES_SCRAFTY}},
	[SPECIES_YAMASK]	 = {{EVO_LEVEL, 34, SPECIES_COFAGRIGUS}},
	[SPECIES_TIRTOUGA]	 = {{EVO_LEVEL, 37, SPECIES_CARRACOSTA}},
	[SPECIES_ARCHEN]	 = {{EVO_LEVEL, 37, SPECIES_ARCHEOPS}},
	[SPECIES_TRUBBISH]	 = {{EVO_LEVEL, 36, SPECIES_GARBODOR}},
	[SPECIES_ZORUA]	     = {{EVO_LEVEL, 30, SPECIES_ZOROARK}},
	[SPECIES_MINCCINO]	 = {{EVO_ITEM, ITEM_SHINY_STONE, SPECIES_CINCCINO}},
	[SPECIES_GOTHITA]	 = {{EVO_LEVEL, 32, SPECIES_GOTHORITA}},
	[SPECIES_GOTHORITA]	 = {{EVO_LEVEL, 41, SPECIES_GOTHITELLE}},
	[SPECIES_SOLOSIS]	 = {{EVO_LEVEL, 32, SPECIES_DUOSION}},
	[SPECIES_DUOSION]	 = {{EVO_LEVEL, 41, SPECIES_REUNICLUS}},
	[SPECIES_DUCKLETT]	 = {{EVO_LEVEL, 35, SPECIES_SWANNA}},
	[SPECIES_VANILLITE]	 = {{EVO_LEVEL, 35, SPECIES_VANILLISH}},
	[SPECIES_VANILLISH]	 = {{EVO_LEVEL, 47, SPECIES_VANILLUXE}},
	[SPECIES_DEERLING]	 = {{EVO_LEVEL, 34, SPECIES_SAWSBUCK}},
	[SPECIES_KARRABLAST] = {{EVO_SPECIFIC_MON_IN_PARTY, SPECIES_SHELMET, SPECIES_ESCAVALIER}},
	[SPECIES_FOONGUS]	 = {{EVO_LEVEL, 39, SPECIES_AMOONGUSS}},
	[SPECIES_FRILLISH]	 = {{EVO_LEVEL, 40, SPECIES_JELLICENT}},
	[SPECIES_JOLTIK]	 = {{EVO_LEVEL, 36, SPECIES_GALVANTULA}},
	[SPECIES_FERROSEED]	 = {{EVO_LEVEL, 40, SPECIES_FERROTHORN}},
	[SPECIES_KLINK]	     = {{EVO_LEVEL, 28, SPECIES_KLANG}},
	[SPECIES_KLANG] 	 = {{EVO_LEVEL, 39, SPECIES_KLINKLANG}},
	[SPECIES_TYNAMO]	 = {{EVO_LEVEL, 20, SPECIES_EELEKTRIK}},
	[SPECIES_EELEKTRIK]	 = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_EELEKTROSS}},
	[SPECIES_ELGYEM]	 = {{EVO_LEVEL, 42, SPECIES_BEHEEYEM}},
	[SPECIES_LITWICK]	 = {{EVO_LEVEL, 41, SPECIES_LAMPENT}},
	[SPECIES_LAMPENT]	 = {{EVO_ITEM, ITEM_DUSK_STONE, SPECIES_CHANDELURE}},
	[SPECIES_AXEW]	     = {{EVO_LEVEL, 38, SPECIES_FRAXURE}},
	[SPECIES_FRAXURE]	 = {{EVO_LEVEL, 48, SPECIES_HAXORUS}},
	[SPECIES_CUBCHOO]	 = {{EVO_LEVEL, 37, SPECIES_BEARTIC}},
	[SPECIES_SHELMET]	 = {{EVO_SPECIFIC_MON_IN_PARTY, SPECIES_KARRABLAST, SPECIES_ACCELGOR}},
	[SPECIES_MIENFOO]	 = {{EVO_LEVEL, 40, SPECIES_MIENSHAO}},
	[SPECIES_GOLETT]	 = {{EVO_LEVEL, 43, SPECIES_GOLURK}},
	[SPECIES_PAWNIARD]	 = {{EVO_LEVEL, 42, SPECIES_BISHARP}},
	[SPECIES_RUFFLET]	 = {{EVO_LEVEL, 34, SPECIES_BRAVIARY}},
	[SPECIES_VULLABY]	 = {{EVO_LEVEL, 34, SPECIES_MANDIBUZZ}},
	[SPECIES_DEINO]	     = {{EVO_LEVEL, 40, SPECIES_ZWEILOUS}},
	[SPECIES_ZWEILOUS]	 = {{EVO_LEVEL, 54, SPECIES_HYDREIGON}},
	[SPECIES_LARVESTA]	 = {{EVO_LEVEL, 49, SPECIES_VOLCARONA}},
	[SPECIES_CHESPIN]	 = {{EVO_LEVEL, 16, SPECIES_QUILLADIN}},
	[SPECIES_QUILLADIN]	 = {{EVO_LEVEL, 36, SPECIES_CHESNAUGHT}},
	[SPECIES_FENNEKIN]	 = {{EVO_LEVEL, 16, SPECIES_BRAIXEN}},
	[SPECIES_BRAIXEN]	 = {{EVO_LEVEL, 36, SPECIES_DELPHOX}},
	[SPECIES_FROAKIE]	 = {{EVO_LEVEL, 16, SPECIES_FROGADIER}},
	[SPECIES_FROGADIER]	 = {{EVO_LEVEL, 36, SPECIES_GRENINJA}},
	[SPECIES_BUNNELBY]	 = {{EVO_LEVEL, 20, SPECIES_DIGGERSBY}},
	[SPECIES_FLETCHLING] = {{EVO_LEVEL, 17, SPECIES_FLETCHINDER}},
	[SPECIES_FLETCHINDER]= {{EVO_LEVEL, 35, SPECIES_TALONFLAME}},
	[SPECIES_SCATTERBUG] = {{EVO_LEVEL, 9, SPECIES_SPEWPA}},
	[SPECIES_SPEWPA]	 = {{EVO_LEVEL, 12, SPECIES_VIVILLON}},
	[SPECIES_LITLEO]	 = {{EVO_LEVEL_MALE, 35, SPECIES_PYROAR},
                            {EVO_LEVEL_FEMALE, 35, SPECIES_PYROAR}},
	[SPECIES_FLABEBE]	 = {{EVO_LEVEL, 19, SPECIES_FLOETTE}},
	[SPECIES_FLOETTE]	 = {{EVO_ITEM, ITEM_SHINY_STONE, SPECIES_FLORGES}},
	[SPECIES_SKIDDO]	 = {{EVO_LEVEL, 32, SPECIES_GOGOAT}},
	[SPECIES_PANCHAM]	 = {{EVO_LEVEL_DARK_TYPE_MON_IN_PARTY, 32, SPECIES_PANGORO}},
	[SPECIES_ESPURR]	 = {{EVO_LEVEL_MALE, 25, SPECIES_MEOWSTIC},
                            {EVO_LEVEL_FEMALE, 25, SPECIES_MEOWSTIC_F}},
	[SPECIES_HONEDGE]	 = {{EVO_LEVEL, 35, SPECIES_DOUBLADE}},
	[SPECIES_DOUBLADE]	 = {{EVO_ITEM, ITEM_DUSK_STONE, SPECIES_AEGISLASH}},
	[SPECIES_SPRITZEE]	 = {{EVO_TRADE_ITEM, ITEM_SACHET, SPECIES_AROMATISSE},
                            {EVO_ITEM_HOLD, ITEM_SACHET, SPECIES_AROMATISSE}},
	[SPECIES_SWIRLIX]	 = {{EVO_TRADE_ITEM, ITEM_WHIPPED_DREAM, SPECIES_SLURPUFF},
                            {EVO_ITEM_HOLD, ITEM_WHIPPED_DREAM, SPECIES_SLURPUFF}},
	[SPECIES_INKAY]	     = {{EVO_LEVEL, 30, SPECIES_MALAMAR}},
	[SPECIES_BINACLE]	 = {{EVO_LEVEL, 39, SPECIES_BARBARACLE}},
	[SPECIES_SKRELP]	 = {{EVO_LEVEL, 37, SPECIES_DRAGALGE}},
	[SPECIES_CLAUNCHER]	 = {{EVO_LEVEL, 37, SPECIES_CLAWITZER}},
	[SPECIES_HELIOPTILE] = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_HELIOLISK}},
	[SPECIES_TYRUNT]	 = {{EVO_LEVEL_DAY, 39, SPECIES_TYRANTRUM}},
	[SPECIES_AMAURA]	 = {{EVO_LEVEL_NIGHT, 39, SPECIES_AURORUS}},
	[SPECIES_GOOMY] 	 = {{EVO_LEVEL, 40, SPECIES_SLIGGOO}},
	[SPECIES_SLIGGOO]	 = {{EVO_LEVEL_RAIN, 50, SPECIES_GOODRA}},
	[SPECIES_PHANTUMP]	 = {{EVO_FRIENDSHIP, 0, SPECIES_TREVENANT}},
	[SPECIES_PUMPKABOO]	 = {{EVO_FRIENDSHIP, 0, SPECIES_GOURGEIST}},
	[SPECIES_BERGMITE]	 = {{EVO_LEVEL, 37, SPECIES_AVALUGG}},
	[SPECIES_NOIBAT]	 = {{EVO_LEVEL, 48, SPECIES_NOIVERN},
                            {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_NOIVERN}},
	[SPECIES_DIANCIE]	 = {{EVO_MEGA_EVOLUTION, ITEM_DIANCITE, SPECIES_MEGA_DIANCIE}},
	[SPECIES_ROWLET]	 = {{EVO_LEVEL, 17, SPECIES_DARTRIX}},
	[SPECIES_DARTRIX]	 = {{EVO_LEVEL, 34, SPECIES_DECIDUEYE}},
	[SPECIES_LITTEN]	 = {{EVO_LEVEL, 17, SPECIES_TORRACAT}},
	[SPECIES_TORRACAT]	 = {{EVO_LEVEL, 34, SPECIES_INCINEROAR}},
	[SPECIES_POPPLIO]	 = {{EVO_LEVEL, 17, SPECIES_BRIONNE}},
	[SPECIES_BRIONNE]	 = {{EVO_LEVEL, 34, SPECIES_PRIMARINA}},
	[SPECIES_PIKIPEK]	 = {{EVO_LEVEL, 14, SPECIES_TRUMBEAK}},
	[SPECIES_TRUMBEAK]	 = {{EVO_LEVEL, 28, SPECIES_TOUCANNON}},
	[SPECIES_YUNGOOS]	 = {{EVO_LEVEL_DAY, 20, SPECIES_GUMSHOOS}},
	[SPECIES_GRUBBIN]	 = {{EVO_LEVEL, 20, SPECIES_CHARJABUG}},
	[SPECIES_CHARJABUG]	 = {{EVO_MAP, MAPSEC_NEW_MAUVILLE, SPECIES_VIKAVOLT}},
	[SPECIES_CRABRAWLER] = {{EVO_MAP, 67, SPECIES_CRABOMINABLE}},
	[SPECIES_CUTIEFLY]	 = {{EVO_LEVEL, 25, SPECIES_RIBOMBEE}},
	[SPECIES_ROCKRUFF]	 = {{EVO_LEVEL_DAY, 25, SPECIES_LYCANROC},
                            {EVO_LEVEL_NIGHT, 25, SPECIES_LYCANROC_MIDNIGHT},
                            {EVO_LEVEL_DUSK, 25, SPECIES_LYCANROC_DUSK}},
	[SPECIES_MAREANIE]	 = {{EVO_LEVEL, 38, SPECIES_TOXAPEX}},
	[SPECIES_MUDBRAY]	 = {{EVO_LEVEL, 30, SPECIES_MUDSDALE}},
	[SPECIES_DEWPIDER]	 = {{EVO_LEVEL, 22, SPECIES_ARAQUANID}},
	[SPECIES_FOMANTIS]	 = {{EVO_LEVEL_DAY, 34, SPECIES_LURANTIS}},
	[SPECIES_MORELULL]	 = {{EVO_LEVEL, 24, SPECIES_SHIINOTIC}},
	[SPECIES_SALANDIT]	 = {{EVO_LEVEL_FEMALE, 33, SPECIES_SALAZZLE}},
	[SPECIES_STUFFUL]	 = {{EVO_LEVEL, 27, SPECIES_BEWEAR}},
	[SPECIES_BOUNSWEET]	 = {{EVO_LEVEL, 18, SPECIES_STEENEE}},
	[SPECIES_STEENEE]	 = {{EVO_MOVE, MOVE_STOMP, SPECIES_TSAREENA}},
	[SPECIES_WIMPOD]	 = {{EVO_LEVEL, 30, SPECIES_GOLISOPOD}},
	[SPECIES_SANDYGAST]	 = {{EVO_LEVEL, 42, SPECIES_PALOSSAND}},
	[SPECIES_TYPE_NULL]	 = {{EVO_FRIENDSHIP, 0, SPECIES_SILVALLY}},
	[SPECIES_JANGMO_O]	 = {{EVO_LEVEL, 35, SPECIES_HAKAMO_O}},
	[SPECIES_HAKAMO_O]	 = {{EVO_LEVEL, 45, SPECIES_KOMMO_O}},
	[SPECIES_COSMOG]	 = {{EVO_LEVEL, 43, SPECIES_COSMOEM}},
	[SPECIES_COSMOEM]	 = {{EVO_LEVEL_DAY, 53, SPECIES_SOLGALEO},
                            {EVO_LEVEL_NIGHT, 53, SPECIES_LUNALA}},
	[SPECIES_POIPOLE]	 = {{EVO_MOVE, MOVE_DRAGON_PULSE, SPECIES_NAGANADEL}},

    [SPECIES_ALOLAN_RATTATA]	 = {{EVO_LEVEL_NIGHT, 20, SPECIES_ALOLAN_RATICATE}},
    [SPECIES_ALOLAN_SANDSHREW]	 = {{EVO_ITEM, ITEM_ICE_STONE, SPECIES_ALOLAN_SANDSLASH}},
    [SPECIES_ALOLAN_VULPIX]      = {{EVO_ITEM, ITEM_ICE_STONE, SPECIES_ALOLAN_NINETALES}},
    [SPECIES_ALOLAN_DIGLETT]	 = {{EVO_LEVEL, 26, SPECIES_ALOLAN_DUGTRIO}},
    [SPECIES_ALOLAN_MEOWTH]	     = {{EVO_FRIENDSHIP, 28, SPECIES_ALOLAN_PERSIAN}},
    [SPECIES_ALOLAN_GEODUDE]	 = {{EVO_LEVEL, 25, SPECIES_ALOLAN_GRAVELER}},
    [SPECIES_ALOLAN_GRAVELER]	 = {{EVO_TRADE, 0, SPECIES_ALOLAN_GOLEM}},
    [SPECIES_ALOLAN_GRIMER]	     = {{EVO_LEVEL, 38, SPECIES_ALOLAN_MUK}},
};
