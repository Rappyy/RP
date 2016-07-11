stock PreloadAnims(playerid)
{
    if(!gPlayerAnimLibsPreloaded[playerid])
    {
        PreloadAnimLib(playerid,"AIRPORT");
        PreloadAnimLib(playerid,"Attractors");
        PreloadAnimLib(playerid,"BAR");
        PreloadAnimLib(playerid,"BASEBALL");
        PreloadAnimLib(playerid,"BD_FIRE");
        PreloadAnimLib(playerid,"benchpress");
        PreloadAnimLib(playerid,"BF_injection");
        PreloadAnimLib(playerid,"BIKED");
        PreloadAnimLib(playerid,"BIKEH");
        PreloadAnimLib(playerid,"BIKELEAP");
        PreloadAnimLib(playerid,"BIKES");
        PreloadAnimLib(playerid,"BIKEV");
        PreloadAnimLib(playerid,"BIKE_DBZ");
        PreloadAnimLib(playerid,"BMX");
        PreloadAnimLib(playerid,"BOX");
        PreloadAnimLib(playerid,"BSKTBALL");
        PreloadAnimLib(playerid,"BUDDY");
        PreloadAnimLib(playerid,"BUS");
        PreloadAnimLib(playerid,"CAMERA");
        PreloadAnimLib(playerid,"CAR");
        PreloadAnimLib(playerid,"CAR_CHAT");
        PreloadAnimLib(playerid,"CASINO");
        PreloadAnimLib(playerid,"CHAINSAW");
        PreloadAnimLib(playerid,"CHOPPA");
        PreloadAnimLib(playerid,"CLOTHES");
        PreloadAnimLib(playerid,"COACH");
        PreloadAnimLib(playerid,"COLT45");
        PreloadAnimLib(playerid,"COP_DVBYZ");
        PreloadAnimLib(playerid,"CRIB");
        PreloadAnimLib(playerid,"DAM_JUMP");
        PreloadAnimLib(playerid,"DANCING");
        PreloadAnimLib(playerid,"DILDO");
        PreloadAnimLib(playerid,"DODGE");
        PreloadAnimLib(playerid,"DOZER");
        PreloadAnimLib(playerid,"DRIVEBYS");
        PreloadAnimLib(playerid,"FAT");
        PreloadAnimLib(playerid,"FIGHT_B");
        PreloadAnimLib(playerid,"FIGHT_C");
        PreloadAnimLib(playerid,"FIGHT_D");
        PreloadAnimLib(playerid,"FIGHT_E");
        PreloadAnimLib(playerid,"FINALE");
        PreloadAnimLib(playerid,"FINALE2");
        PreloadAnimLib(playerid,"Flowers");
        PreloadAnimLib(playerid,"FOOD");
        PreloadAnimLib(playerid,"Freeweights");
        PreloadAnimLib(playerid,"GANGS");
        PreloadAnimLib(playerid,"GHANDS");
        PreloadAnimLib(playerid,"GHETTO_DB");
        PreloadAnimLib(playerid,"goggles");
        PreloadAnimLib(playerid,"GRAFFITI");
        PreloadAnimLib(playerid,"GRAVEYARD");
        PreloadAnimLib(playerid,"GRENADE");
        PreloadAnimLib(playerid,"GYMNASIUM");
        PreloadAnimLib(playerid,"HAIRCUTS");
        PreloadAnimLib(playerid,"HEIST9");
        PreloadAnimLib(playerid,"INT_HOUSE");
        PreloadAnimLib(playerid,"INT_OFFICE");
        PreloadAnimLib(playerid,"INT_SHOP");
        PreloadAnimLib(playerid,"JST_BUISNESS");
        PreloadAnimLib(playerid,"KART");
        PreloadAnimLib(playerid,"KISSING");
        PreloadAnimLib(playerid,"KNIFE");
        PreloadAnimLib(playerid,"LAPDAN1");
        PreloadAnimLib(playerid,"LAPDAN2");
        PreloadAnimLib(playerid,"LAPDAN3");
        PreloadAnimLib(playerid,"LOWRIDER");
        PreloadAnimLib(playerid,"MD_CHASE");
        PreloadAnimLib(playerid,"MEDIC");
        PreloadAnimLib(playerid,"MD_END");
        PreloadAnimLib(playerid,"MISC");
        PreloadAnimLib(playerid,"MTB");
        PreloadAnimLib(playerid,"MUSCULAR");
        PreloadAnimLib(playerid,"NEVADA");
        PreloadAnimLib(playerid,"ON_LOOKERS");
        PreloadAnimLib(playerid,"OTB");
        PreloadAnimLib(playerid,"PARACHUTE");
        PreloadAnimLib(playerid,"PARK");
        PreloadAnimLib(playerid,"PAULNMAC");
        PreloadAnimLib(playerid,"PED");
        PreloadAnimLib(playerid,"PLAYER_DVBYS");
        PreloadAnimLib(playerid,"PLAYIDLES");
        PreloadAnimLib(playerid,"POLICE");
        PreloadAnimLib(playerid,"POOL");
        PreloadAnimLib(playerid,"POOR");
        PreloadAnimLib(playerid,"PYTHON");
        PreloadAnimLib(playerid,"QUAD");
        PreloadAnimLib(playerid,"QUAD_DBZ");
        PreloadAnimLib(playerid,"RIFLE");
        PreloadAnimLib(playerid,"RIOT");
        PreloadAnimLib(playerid,"ROB_BANK");
        PreloadAnimLib(playerid,"ROCKET");
        PreloadAnimLib(playerid,"RUSTLER");
        PreloadAnimLib(playerid,"RYDER");
        PreloadAnimLib(playerid,"SCRATCHING");
        PreloadAnimLib(playerid,"SHAMAL");
        PreloadAnimLib(playerid,"SHOTGUN");
        PreloadAnimLib(playerid,"SILENCED");
        PreloadAnimLib(playerid,"SKATE");
        PreloadAnimLib(playerid,"SPRAYCAN");
        PreloadAnimLib(playerid,"STRIP");
        PreloadAnimLib(playerid,"SUNBATHE");
        PreloadAnimLib(playerid,"SWAT");
        PreloadAnimLib(playerid,"SWEET");
        PreloadAnimLib(playerid,"SWIM");
        PreloadAnimLib(playerid,"SWORD");
        PreloadAnimLib(playerid,"TANK");
        PreloadAnimLib(playerid,"TATTOOS");
        PreloadAnimLib(playerid,"TEC");
        PreloadAnimLib(playerid,"TRAIN");
        PreloadAnimLib(playerid,"TRUCK");
        PreloadAnimLib(playerid,"UZI");
        PreloadAnimLib(playerid,"VAN");
        PreloadAnimLib(playerid,"VENDING");
        PreloadAnimLib(playerid,"VORTEX");
        PreloadAnimLib(playerid,"WAYFARER");
        PreloadAnimLib(playerid,"WEAPONS");
        PreloadAnimLib(playerid,"WUZI");
        PreloadAnimLib(playerid,"SNM");
        PreloadAnimLib(playerid,"BLOWJOBZ");
        PreloadAnimLib(playerid,"SEX");
        PreloadAnimLib(playerid,"BOMBER");
        PreloadAnimLib(playerid,"RAPPING");
        PreloadAnimLib(playerid,"SHOP");
        PreloadAnimLib(playerid,"BEACH");
        PreloadAnimLib(playerid,"SMOKING");
        PreloadAnimLib(playerid,"FOOD");
        PreloadAnimLib(playerid,"ON_LOOKERS");
        PreloadAnimLib(playerid,"DEALER");
        PreloadAnimLib(playerid,"CRACK");
        PreloadAnimLib(playerid,"CARRY");
        PreloadAnimLib(playerid,"COP_AMBIENT");
        PreloadAnimLib(playerid,"PARK");
        PreloadAnimLib(playerid,"INT_HOUSE");
        PreloadAnimLib(playerid,"FOOD");
        gPlayerAnimLibsPreloaded[playerid] = 1;
    }
    return 1;
}
 
CMD:animlist(playerid, params[])
{
    SCM(playerid, COLOR_GREEN, "--- Animation List ---");
    SCM(playerid, COLOR_GREY, "/fall /fallback /injured /akick /push /lowbodypush /handsup /bomb /drunk /getarrested /laugh /sup /tired");
    SCM(playerid, COLOR_GREY, "/basket /headbutt /medic /spray /robman /taichi /lookout /kiss /cellin /cellout /crossarms /lay /stance");
    SCM(playerid, COLOR_GREY, "/deal /crack /smokeanim /groundsit /chat /chat2 /dance /fucku /strip /hide /vomit /eat /chairsit /reload");
    SCM(playerid, COLOR_GREY, "/koface /kostomach /rollfall /carjacked1 /carjacked2 /rcarjack1 /rcarjack2 /lcarjack1 /lcarjack2 /bat /bar");
    SCM(playerid, COLOR_GREY, "/lifejump /exhaust /leftslap /carlock /hoodfrisked /lightcig /tapcig /box /lay2 /chant /finger /gsign /die");
    SCM(playerid, COLOR_GREY, "/shouting /knife /cop /elbow /kneekick /airkick /gkick /gpunch /fstance /lowthrow /highthrow /aim /idle ");
    SCM(playerid, COLOR_GREY, "/pee /lean /run /poli /handsup /sit /breathless /seat /rap /cross /ped /jiggy /gesture /dealerstance /bed");
    SCM(playerid, COLOR_GREY, "/sleep /smoke /urinate /chora /relax /crabs /stop /wash /mourn /fuck /tosteal /cover /yell /dribble /lranim ");
    SCM(playerid, COLOR_GREY, "/followme /greeting /still /hitch /palmbitch /cpranim /giftgiving /slap2 /pump /cheer /riot /dunk /strech");
    SCM(playerid, COLOR_GREY, "/dj /entrenar /foodeat /wave /slapass /dealer /dealstance /inbedright /inbedleft /walk /batidle /idle");
    SCM(playerid, COLOR_GREY, "/wank /sexy /bj /getup /follow /stand /slapped /slapass /yes /celebrate /win /checkout /camera /liftup");
    SCM(playerid, COLOR_GREY, "/thankyou /invite1 /scratch /nod /cry /carsmoke /benddown /shakehead /angry /batidle /plant /joint /cockgun");
    return 1;
}

CMD:camera(playerid, params[])
{
    new type;
    if(sscanf(params,"d",type)) return SyntaxMSG(playerid, "/camera [1-4]");
    switch(type)
    {
        case 1: ApplyAnimation(playerid,"CAMERA","camcrch_idleloop",4.1,0,1,1,1,1);
        case 2: ApplyAnimation(playerid,"CAMERA","camstnd_idleloop",4.1,0,1,1,1,1);
        case 3: ApplyAnimation(playerid,"CAMERA","piccrch_in",4.1,0,1,1,1,1);
        case 4: ApplyAnimation(playerid,"CAMERA","picstnd_in",4.1,0,1,1,1,1);
    }
    return 1;
}

CMD:walk(playerid, params[])
{
    new type;
    if(sscanf(params,"d",type)) return SyntaxMSG(playerid, "/walk [1-18]");
    switch(type)
    {
        case 1: ApplyAnimation(playerid,"PED","WALK_gang1",4.1,1,1,1,1,1);
        case 2: ApplyAnimation(playerid,"PED","WOMAN_walksexy",4.1,1,1,1,1,1);
        case 3: ApplyAnimation(playerid,"PED","WALK_armed",4.1,1,1,1,1,1);
        case 4: ApplyAnimation(playerid,"PED","WALK_civi",4.1,1,1,1,1,1);
        case 5: ApplyAnimation(playerid,"PED","WALK_csaw",4.1,1,1,1,1,1);
        case 6: ApplyAnimation(playerid,"PED","WALK_gang2",4.1,1,1,1,1,1);
        case 7: ApplyAnimation(playerid,"PED","WALK_drunk",4.1,1,1,1,1,1);
        case 8: ApplyAnimation(playerid,"PED","WALK_fat",4.1,1,1,1,1,1);
        case 9: ApplyAnimation(playerid,"PED","WALK_fatold",4.1,1,1,1,1,1);
        case 10: ApplyAnimation(playerid,"PED","WALK_old",4.1,1,1,1,1,1);
        case 11: ApplyAnimation(playerid,"PED","WALK_player",4.1,1,1,1,1,1);
        case 12: ApplyAnimation(playerid,"PED","WALK_rocket",4.1,1,1,1,1,1);
        case 13: ApplyAnimation(playerid,"PED","WALK_shuffle",4.1,1,1,1,1,1);
        case 14: ApplyAnimation(playerid,"PED","WOMAN_walknorm",4.1,1,1,1,1,1);
        case 15: ApplyAnimation(playerid,"PED","WOMAN_walkpro",4.1,1,1,1,1,1);
        case 16: ApplyAnimation(playerid,"PED","WOMAN_walkbusy",4.1,1,1,1,1,1);
        case 17: ApplyAnimation(playerid,"PED","WOMAN_walknorm",4.1,1,1,1,1,1);
        case 18: ApplyAnimation(playerid,"PED","Walk_Wuzi",4.1,1,1,1,1,1);
    }
    return 1;
}

CMD:dunk(playerid, params[])
{
    ApplyAnimation(playerid,"BSKTBALL","BBALL_Dnk",4.0,0,0,0,0,0);
    return 1;
}

CMD:dribble(playerid, params[])
{
    new type;
    if(sscanf(params,"d",type)) return SyntaxMSG(playerid, "/dribble [1-2]");
    switch(type)
    {
        case 1: ApplyAnimation(playerid,"BSKTBALL","BBALL_run",4.1,1,1,1,1,1);
        case 2: ApplyAnimation(playerid,"BSKTBALL","BBALL_walk",4.1,1,1,1,1,1);
        default: SyntaxMSG(playerid, "/dribble [1-2]");
    }
    return 1;
}

CMD:riot(playerid, params[])
{
    ApplyAnimation(playerid,"RIOT","RIOT_CHANT",4.0,1,1,1,1,0);
    return 1;
}

CMD:tired(playerid, params[])
{
    new type;
    if(sscanf(params,"d",type)) return SyntaxMSG(playerid, "/tired [1-2]");
    switch(type)
    {
        case 1: ApplyAnimation(playerid,"PED","IDLE_tired",3.0,1,0,0,0,0);
        case 2: ApplyAnimation(playerid,"FAT","Idle_Tired",3.0,1,0,0,0,0);
        default: SyntaxMSG(playerid, "/tired [1-2]");
    }
    return 1;
}

CMD:gsign(playerid, params[])
{
    new type;
    if(sscanf(params,"d",type)) return SyntaxMSG(playerid, "/gsign [1-6]");
    switch(type)
    {
        case 1: ApplyAnimation(playerid,"GHANDS","gsign1",4.1, 0, 0, 0, 0, 1);
        case 2: ApplyAnimation(playerid,"GHANDS","gsign1LH",4.1, 0, 0, 0, 0, 1);
        case 3: ApplyAnimation(playerid,"GHANDS","gsign2LH", 4.1, 0, 0, 0, 0, 1);
        case 4: ApplyAnimation(playerid,"GHANDS","gsign4",4.1, 0, 0, 0, 0, 1);
        case 5: ApplyAnimation(playerid,"GHANDS","gsign4LH", 4.1, 0, 0, 0, 0, 1);
        case 6: ApplyAnimation(playerid,"GHANDS","gsign5",4.1, 0, 0, 0, 0, 1);
        default: SyntaxMSG(playerid, "/gsign [1-6]");
    }
    return 1;
}

CMD:yell(playerid, params[])
{
    new type;
    if(sscanf(params,"d",type)) return SyntaxMSG(playerid, "/yell [1-3]");
    switch(type)
    {
        case 1: ApplyAnimation(playerid,"ON_LOOKERS","shout_loop",3.0,1,0,0,0,0);
        case 2: ApplyAnimation(playerid,"ON_LOOKERS","shout_01",3.0,1,0,0,0,0);
        case 3: ApplyAnimation(playerid,"ON_LOOKERS","shout_02",3.0,1,0,0,0,0);
        default: SyntaxMSG(playerid, "/yell [1-3]");
    }
    return 1;
}

CMD:stance(playerid, params[])
{
    new type;
    if(sscanf(params,"d",type)) return SyntaxMSG(playerid, "/stance [1-11]");
    switch(type)
    {
        case 1: ApplyAnimation(playerid,"PED","WOMAN_IDLESTANCE",4.0,1,0,0,0,0);
        case 2: ApplyAnimation(playerid,"PED","CAR_HOOKERTALK",4.0,1,0,0,0,0);
        case 3: ApplyAnimation(playerid,"FAT","FatIdle",4.0,1,0,0,0,0);
        case 4: ApplyAnimation(playerid,"WUZI","Wuzi_Stand_Loop",4.0,1,0,0,0,0);
        case 5: ApplyAnimation(playerid,"GRAVEYARD","mrnm_loop",4.0,1,0,0,0,0);
        case 6: ApplyAnimation(playerid,"GRAVEYARD","prst_loopa",4.0,1,0,0,0,0);
        case 7: ApplyAnimation(playerid,"PED","idlestance_fat",4.0,1,0,0,0,0);
        case 8: ApplyAnimation(playerid,"PED","idlestance_old",4.0,1,0,0,0,0);
        case 9: ApplyAnimation(playerid,"PED","turn_l",4.0,1,0,0,0,0);
        case 10: ApplyAnimation(playerid,"BAR","Barcustom_loop",4.0,1,0,0,0,0);
        case 11: ApplyAnimation(playerid,"BAR","Barserve_loop",4.0,1,0,0,0,0);
        default: SyntaxMSG(playerid, "/stance [1-11]");
    }
    return 1;
}

CMD:dealerstance(playerid, params[])
{
    ApplyAnimation(playerid,"DEALER","DEALER_IDLE",4.0,1,0,0,0,0);
    return 1;
}

CMD:cover(playerid, params[])
{
    ApplyAnimation(playerid, "ped", "cower", 3.0, 1, 0, 0, 0, 0);
    return 1;
}

CMD:plant(playerid, params[])
{
    ApplyAnimation(playerid,"BOMBER","BOM_Plant",3.0,0,0,0,0,0);
    return 1;
}

CMD:batidle(playerid, params[])
{
    ApplyAnimation(playerid,"BASEBALL","Bat_IDLE",4.1,1,0,0,1,0);
    return 1;
}

CMD:idle(playerid, params[])
{
    ApplyAnimation(playerid,"STRIP","PUN_LOOP",4.1,1,0,0,1,0);
    return 1;
}

CMD:stretch(playerid, params[])
{
    ApplyAnimation(playerid,"STRIP","PUN_HOLLER",4.1,1,0,0,1,0);
    return 1;
} 
 
CMD:handsup(playerid,params[])
{
    SetPlayerSpecialAction(playerid,SPECIAL_ACTION_HANDSUP);
    return 1;    
}
       
CMD:sit(playerid,params[])
{
    new anim;
    if(sscanf(params, "d", anim)) return SyntaxMSG(playerid, "/sit [1-6]");
    switch(anim)
    {
        case 1: ApplyAnimation(playerid,"BEACH","bather",4.1, 0, 1, 1, 1, 1, 1);
        case 2: ApplyAnimation(playerid,"BEACH","Lay_Bac_Loop",4.1, 0, 1, 1, 1, 1, 1);
        case 3: ApplyAnimation(playerid,"BEACH","ParkSit_W_loop",4.1, 0, 1, 1, 1, 1, 1);
        case 4: ApplyAnimation(playerid,"BEACH","SitnWait_loop_W",4.1, 0, 1, 1, 1, 1, 1);
        case 5: ApplyAnimation(playerid,"BEACH","SitnWait_loop_W",4.1, 0, 1, 1, 1, 1, 1);
        case 6: ApplyAnimation(playerid,"BEACH", "ParkSit_M_loop", 4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
       
CMD:sleep(playerid,params[])
{
    new anim;   
    if(sscanf(params, "d", anim)) return SyntaxMSG(playerid, "/sleep [1-2]");
    switch(anim)
    {
            case 1: ApplyAnimation(playerid,"CRACK","crckdeth4",4.1, 0, 1, 1, 1, 1, 1);
            case 2: ApplyAnimation(playerid,"CRACK","crckidle2",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
CMD:cheer(playerid,params[])
{
    new anim;
    if(sscanf(params, "d", anim)) return SyntaxMSG(playerid, "/cheer [1-8]");
    switch(anim)
    {
        case 1: ApplyAnimation(playerid,"ON_LOOKERS","shout_01",4.1, 0, 1, 1, 1, 1, 1);
        case 2: ApplyAnimation(playerid,"ON_LOOKERS","shout_02",4.1, 0, 1, 1, 1, 1, 1);
        case 3: ApplyAnimation(playerid,"ON_LOOKERS","shout_in",4.1, 0, 1, 1, 1, 1, 1);
        case 4: ApplyAnimation(playerid,"RIOT","RIOT_ANGRY_B",4.1, 0, 1, 1, 1, 1, 1);
        case 5: ApplyAnimation(playerid,"RIOT","RIOT_CHANT",4.1, 0, 1, 1, 1, 1, 1);
        case 6: ApplyAnimation(playerid,"RIOT","RIOT_shout",4.1, 0, 1, 1, 1, 1, 1);
        case 7: ApplyAnimation(playerid,"STRIP","PUN_HOLLER",4.1, 0, 1, 1, 1, 1, 1);
        case 8: ApplyAnimation(playerid,"OTB","wtchrace_win",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
       
 CMD:urinate(playerid,params[])
 { 
    SetPlayerSpecialAction(playerid, 68);
    return 1;
}
       
CMD:dj(playerid,params[])
{
    new anim;
    if(sscanf(params, "d", anim)) return SyntaxMSG(playerid, "/dj [1-4]");
    switch(anim)
    {
        case 1: ApplyAnimation(playerid,"SCRATCHING","scdldlp",4.1, 0, 1, 1, 1, 1, 1);
        case 2: ApplyAnimation(playerid,"SCRATCHING","scdlulp",4.1, 0, 1, 1, 1, 1, 1);
        case 3: ApplyAnimation(playerid,"SCRATCHING","scdrdlp",4.1, 0, 1, 1, 1, 1, 1);
        case 4: ApplyAnimation(playerid,"SCRATCHING","scdrulp",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
       
CMD:breathless(playerid,params[])
{
    new anim;
    if(sscanf(params, "d", anim)) return SyntaxMSG(playerid, "/breathless [1-2]");
    switch(anim)
    {
        case 1: ApplyAnimation(playerid,"PED","IDLE_tired",4.1, 0, 1, 1, 1, 1, 1);
        case 2: ApplyAnimation(playerid,"FAT","IDLE_tired",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
       
CMD:poli(playerid,params[])
{
    new anim;
    if(sscanf(params, "d", anim)) return SyntaxMSG(playerid, "/poli [1-2]");
    switch(anim)
    {
        case 1:ApplyAnimation(playerid,"POLICE","CopTraf_Come",4.1, 0, 1, 1, 1, 1, 1);
        case 2:ApplyAnimation(playerid,"POLICE","CopTraf_Stop",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
       
CMD:seat(playerid,params[])
{
    new anim;
    if(sscanf(params, "d", anim)) return SyntaxMSG(playerid, "/seat [1-7]");
    switch(anim)
    {
        case 1: ApplyAnimation(playerid,"Attractors","Stepsit_in",4.1, 0, 1, 1, 1, 1, 1);
        case 2: ApplyAnimation(playerid,"CRIB","PED_Console_Loop",4.1, 0, 1, 1, 1, 1, 1);
        case 3: ApplyAnimation(playerid,"INT_HOUSE","LOU_In",4.1, 0, 1, 1, 1, 1, 1);
        case 4: ApplyAnimation(playerid,"MISC","SEAT_LR",4.1, 0, 1, 1, 1, 1, 1);
        case 5: ApplyAnimation(playerid,"MISC","Seat_talk_01",4.1, 0, 1, 1, 1, 1, 1);
        case 6: ApplyAnimation(playerid,"MISC","Seat_talk_02",4.1, 0, 1, 1, 1, 1, 1);
        case 7: ApplyAnimation(playerid,"ped","SEAT_down",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
       
CMD:dance(playerid,params[])
{
    new dancestyle;
    if(sscanf(params, "d", dancestyle)) return SyntaxMSG(playerid, "USE: /dance [1-3]");
    switch(dancestyle)
    {
        case 1: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE1);
        case 2: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE2);
        case 3: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE3);
        case 4: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE4);
    }
    return 1;
}
       
CMD:cross(playerid,params[])
{
    new anim;
    if(sscanf(params, "d", anim)) return SyntaxMSG(playerid, "/cross [1-5]"); 
    switch(anim)
    {
        case 1: ApplyAnimation(playerid, "COP_AMBIENT", "Coplook_loop", 4.1, 0, 1, 1, 1, 1, 1);
        case 2: ApplyAnimation(playerid, "DEALER", "DEALER_IDLE", 4.1, 0, 1, 1, 1, 1, 1);
        case 3: ApplyAnimation(playerid, "DEALER", "DEALER_IDLE_01", 4.1, 0, 1, 1, 1, 1, 1);
        case 4: ApplyAnimation(playerid,"GRAVEYARD","mrnM_loop",4.1, 0, 1, 1, 1, 1, 1);
        case 5: ApplyAnimation(playerid,"GRAVEYARD","prst_loopa",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
       
CMD:jiggy(playerid,params[])
{
    new anim;
    if(sscanf(params, "d", anim)) return SyntaxMSG(playerid, "/jiggy [1-10]");
    switch(anim)
    {
        case 1: ApplyAnimation(playerid,"DANCING","DAN_Down_A",4.1, 0, 1, 1, 1, 1, 1);
        case 2: ApplyAnimation(playerid,"DANCING","DAN_Left_A",4.1, 0, 1, 1, 1, 1, 1);
        case 3: ApplyAnimation(playerid,"DANCING","DAN_Loop_A",4.1, 0, 1, 1, 1, 1, 1);
        case 4: ApplyAnimation(playerid,"DANCING","DAN_Right_A",4.1, 0, 1, 1, 1, 1, 1);
        case 5: ApplyAnimation(playerid,"DANCING","DAN_Up_A",4.1, 0, 1, 1, 1, 1, 1);
        case 6: ApplyAnimation(playerid,"DANCING","dnce_M_a",4.1, 0, 1, 1, 1, 1, 1);
        case 7: ApplyAnimation(playerid,"DANCING","dnce_M_b",4.1, 0, 1, 1, 1, 1, 1);
        case 8: ApplyAnimation(playerid,"DANCING","dnce_M_c",4.1, 0, 1, 1, 1, 1, 1);
        case 9: ApplyAnimation(playerid,"DANCING","dnce_M_c",4.1, 0, 1, 1, 1, 1, 1);
        case 10: ApplyAnimation(playerid,"DANCING","dnce_M_d",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
       
CMD:ped(playerid,params[])
{
    new anim;
    if(sscanf(params, "d", anim)) return SyntaxMSG(playerid, "/ped [1-26]");
    switch(anim)
    {
        case 1: ApplyAnimation(playerid,"PED","JOG_femaleA",4.1, 0, 1, 1, 1, 1, 1);
        case 2: ApplyAnimation(playerid,"PED","JOG_maleA",4.1, 0, 1, 1, 1, 1, 1);
        case 3: ApplyAnimation(playerid,"PED","WOMAN_walkfatold",4.1, 0, 1, 1, 1, 1, 1);
        case 4: ApplyAnimation(playerid,"PED","run_fat",4.1, 0, 1, 1, 1, 1, 1);
        case 5: ApplyAnimation(playerid,"PED","run_fatold",4.1, 0, 1, 1, 1, 1, 1);
        case 6: ApplyAnimation(playerid,"PED","run_old",4.1, 0, 1, 1, 1, 1, 1);
        case 7: ApplyAnimation(playerid,"PED","Run_Wuzi",4.1, 0, 1, 1, 1, 1, 1);
        case 8: ApplyAnimation(playerid,"PED","swat_run",4.1, 0, 1, 1, 1, 1, 1);
        case 9: ApplyAnimation(playerid,"PED","WALK_fat",4.1, 0, 1, 1, 1, 1, 1);
        case 10: ApplyAnimation(playerid,"PED","WALK_fatold",4.1, 0, 1, 1, 1, 1, 1);
        case 11: ApplyAnimation(playerid,"PED","WALK_gang1",4.1, 0, 1, 1, 1, 1, 1);
        case 12: ApplyAnimation(playerid,"PED","WALK_gang2",4.1, 0, 1, 1, 1, 1, 1);
        case 13: ApplyAnimation(playerid,"PED","WALK_old",4.1, 0, 1, 1, 1, 1, 1);
        case 14: ApplyAnimation(playerid,"PED","WALK_shuffle",4.1, 0, 1, 1, 1, 1, 1);
        case 15: ApplyAnimation(playerid,"PED","woman_run",4.1, 0, 1, 1, 1, 1, 1);
        case 16: ApplyAnimation(playerid,"PED","WOMAN_runbusy",4.1, 0, 1, 1, 1, 1, 1);
        case 17: ApplyAnimation(playerid,"PED","WOMAN_runfatold",4.1, 0, 1, 1, 1, 1, 1);
        case 18: ApplyAnimation(playerid,"PED","woman_runpanic",4.1, 0, 1, 1, 1, 1, 1);
        case 19: ApplyAnimation(playerid,"PED","WOMAN_runsexy",4.1, 0, 1, 1, 1, 1, 1);
        case 20: ApplyAnimation(playerid,"PED","WOMAN_walkbusy",4.1, 0, 1, 1, 1, 1, 1);
        case 21: ApplyAnimation(playerid,"PED","WOMAN_walkfatold",4.1, 0, 1, 1, 1, 1, 1);
        case 22: ApplyAnimation(playerid,"PED","WOMAN_walknorm",4.1, 0, 1, 1, 1, 1, 1);
        case 23: ApplyAnimation(playerid,"PED","WOMAN_walkold",4.1, 0, 1, 1, 1, 1, 1);
        case 24: ApplyAnimation(playerid,"PED","WOMAN_walkpro",4.1, 0, 1, 1, 1, 1, 1);
        case 25: ApplyAnimation(playerid,"PED","WOMAN_walksexy",4.1, 0, 1, 1, 1, 1, 1);
        case 26: ApplyAnimation(playerid,"PED","WOMAN_walkshop",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
       
CMD:rap(playerid,params[])
{
    new rapstyle;
    if(sscanf(params, "d", rapstyle)) return SyntaxMSG(playerid, "/rap [1-3]");
    switch(rapstyle)
    {
        case 1: ApplyAnimation(playerid,"RAPPING","RAP_A_Loop",4.1, 0, 1, 1, 1, 1, 1);
        case 2: ApplyAnimation(playerid,"RAPPING","RAP_B_Loop",4.1, 0, 1, 1, 1, 1, 1);
        case 3: ApplyAnimation(playerid,"RAPPING","RAP_C_Loop",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
       
CMD:gesture(playerid,params[])
{
    new gesture;
    if(sscanf(params, "d", gesture)) return SyntaxMSG(playerid, "/gesture [1-15]");
    switch(gesture)
    {
        case 1: ApplyAnimation(playerid,"GHANDS","gsign1",4.1, 0, 1, 1, 1, 1, 1);
        case 2: ApplyAnimation(playerid,"GHANDS","gsign1LH",4.1, 0, 1, 1, 1, 1, 1);
        case 3: ApplyAnimation(playerid,"GHANDS","gsign2",4.1, 0, 1, 1, 1, 1, 1);
        case 4: ApplyAnimation(playerid,"GHANDS","gsign2LH",4.1, 0, 1, 1, 1, 1, 1);
        case 5: ApplyAnimation(playerid,"GHANDS","gsign3",4.1, 0, 1, 1, 1, 1, 1);
        case 6: ApplyAnimation(playerid,"GHANDS","gsign3LH",4.1, 0, 1, 1, 1, 1, 1);
        case 7: ApplyAnimation(playerid,"GHANDS","gsign4",4.1, 0, 1, 1, 1, 1, 1);
        case 8: ApplyAnimation(playerid,"GHANDS","gsign4LH",4.1, 0, 1, 1, 1, 1, 1);
        case 9: ApplyAnimation(playerid,"GHANDS","gsign5",4.1, 0, 1, 1, 1, 1, 1);
        case 10: ApplyAnimation(playerid,"GHANDS","gsign5",4.1, 0, 1, 1, 1, 1, 1);
        case 11: ApplyAnimation(playerid,"GHANDS","gsign5LH",4.1, 0, 1, 1, 1, 1, 1);
        case 12: ApplyAnimation(playerid,"GANGS","Invite_No",4.1, 0, 1, 1, 1, 1, 1);
        case 13: ApplyAnimation(playerid,"GANGS","Invite_Yes",4.1, 0, 1, 1, 1, 1, 1);
        case 14: ApplyAnimation(playerid,"GANGS","prtial_gngtlkD",4.1, 0, 1, 1, 1, 1, 1);
        case 15: ApplyAnimation(playerid,"GANGS","smkcig_prtl",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
       
CMD:chora(playerid,params[]) { ApplyAnimation(playerid, "COP_AMBIENT", "Coplook_watch",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:relax(playerid,params[]) { ApplyAnimation(playerid, "CRACK", "crckidle1",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:crabs(playerid,params[]) { ApplyAnimation(playerid,"MISC","Scratchballs_01",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:greeting(playerid,params[]) { ApplyAnimation(playerid,"ON_LOOKERS","Pointup_loop",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:wash(playerid,params[]) { ApplyAnimation(playerid,"BD_FIRE","wash_up",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:mourn(playerid,params[]) { ApplyAnimation(playerid,"GRAVEYARD","mrnF_loop",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:followme(playerid,params[]) { ApplyAnimation(playerid,"WUZI","Wuzi_follow",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:still(playerid,params[]) { ApplyAnimation(playerid,"WUZI","Wuzi_stand_loop", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:hitch(playerid,params[]) { ApplyAnimation(playerid,"MISC","Hiker_Pose", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:palmbitch(playerid,params[]) { ApplyAnimation(playerid,"MISC","bitchslap",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:cpranim(playerid,params[]) { ApplyAnimation(playerid,"MEDIC","CPR",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:giftgiving(playerid,params[]) { ApplyAnimation(playerid,"KISSING","gift_give",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:slap2(playerid,params[]) { ApplyAnimation(playerid,"SWEET","sweet_ass_slap",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:drunk(playerid,params[]) { ApplyAnimation(playerid,"PED","WALK_DRUNK",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:pump(playerid,params[]) { ApplyAnimation(playerid, "BOMBER", "BOM_Plant", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:tosteal(playerid,params[]) { ApplyAnimation(playerid,"ped", "ARRESTgun", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:laugh(playerid,params[]) { ApplyAnimation(playerid, "RAPPING", "Laugh_01", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:lookout(playerid,params[])  { ApplyAnimation(playerid, "SHOP", "ROB_Shifty", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:robman(playerid,params[]) { ApplyAnimation(playerid, "SHOP", "ROB_Loop_Threat", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:hide(playerid,params[]) { ApplyAnimation(playerid, "ped", "cower",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:vomit(playerid,params[]) { ApplyAnimation(playerid, "FOOD", "EAT_Vomit_P", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:eat(playerid,params[]) { ApplyAnimation(playerid, "FOOD", "EAT_Burger", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:crack(playerid,params[]) { ApplyAnimation(playerid, "CRACK", "crckdeth2", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:fuck(playerid,params[]) { ApplyAnimation(playerid,"PED","fucku",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:taichi(playerid,params[]) { ApplyAnimation(playerid,"PARK","Tai_Chi_Loop", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:entrenar(playerid,params[]) { ApplyAnimation(playerid,"PARK","Tai_Chi_Loop", 4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:kiss(playerid,params[]) { ApplyAnimation(playerid,"KISSING","Playa_Kiss_01",4.1, 0, 1, 1, 1, 1, 1); return 1; }

CMD:carjacked1(playerid, params[])
{
    ApplyAnimation(playerid,"PED","CAR_jackedLHS",4.1, 0, 1, 1, 1, 1, 1);   
    return 1;
}
CMD:carjacked2(playerid, params[])
{
    ApplyAnimation(playerid,"PED","CAR_jackedRHS",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}

CMD:cellin(playerid, params[])
{
    SetPlayerSpecialAction(playerid,SPECIAL_ACTION_USECELLPHONE);
    return 1;
}

CMD:cellout(playerid, params[])
{
    SetPlayerSpecialAction(playerid,SPECIAL_ACTION_STOPUSECELLPHONE);
    return 1;
}

CMD:bomb(playerid, params[])
{
    ClearAnimations(playerid);
    ApplyAnimation(playerid, "BOMBER","BOM_Plant_Loop",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
CMD:getarrested(playerid, params[])
{
    ApplyAnimation(playerid,"ped", "ARRESTgun", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
CMD:crossarms(playerid, params[])
{
    ApplyAnimation(playerid, "COP_AMBIENT", "Coplook_loop", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:lay(playerid, params[])
{
    ApplyAnimation(playerid,"BEACH", "bather",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:foodeat(playerid, params[])
{
    ApplyAnimation(playerid, "FOOD", "EAT_Burger", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:wave(playerid, params[])
{
    ApplyAnimation(playerid, "ON_LOOKERS", "wave_loop", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:slapass(playerid, params[])
{
    ApplyAnimation(playerid, "SWEET", "sweet_ass_slap", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:dealer(playerid, params[])
{
    ApplyAnimation(playerid, "DEALER", "DEALER_DEAL", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:groundsit(playerid, params[])
{
        ApplyAnimation(playerid,"BEACH", "ParkSit_M_loop", 4.1, 0, 1, 1, 1, 1, 1);
        return 1;
}
 
CMD:chat(playerid, params[])
{
    new num;
    if(sscanf(params, "i", num)) return SyntaxMSG(playerid, "/chat [1-2]");
    if(num == 1) { ApplyAnimation(playerid,"PED","IDLE_CHAT",4.1, 0, 1, 1, 1, 1, 1); }
    if(num == 2) { ApplyAnimation(playerid,"MISC","Idle_Chat_02",4.1, 0, 1, 1, 1, 1, 1); }
    return 1;
}
 
CMD:fucku(playerid, params[])
{
    ApplyAnimation(playerid,"PED","fucku",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:chairsit(playerid, params[])
{
    ApplyAnimation(playerid,"PED","SEAT_idle",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:fall(playerid, params[])
{
    ApplyAnimation(playerid,"PED","KO_skid_front",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:fallback(playerid, params[])
{
    ApplyAnimation(playerid, "PED","FLOOR_hit_f", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:injured(playerid, params[])
{
    ApplyAnimation(playerid, "SWEET", "Sweet_injuredloop", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:sup(playerid, params[])
{
    new number;
    if(sscanf(params, "i", number)) return SyntaxMSG(playerid, "/sup [1-3]");
    if(number == 1) { ApplyAnimation(playerid,"GANGS","hndshkba",4.1, 0, 1, 1, 1, 1, 1); }
    if(number == 2) { ApplyAnimation(playerid,"GANGS","hndshkda",4.1, 0, 1, 1, 1, 1, 1); }
    if(number == 3) { ApplyAnimation(playerid,"GANGS","hndshkfa_swt",4.1, 0, 1, 1, 1, 1, 1); }
    return 1;
}
 
CMD:push(playerid, params[])
{
    ApplyAnimation(playerid,"GANGS","shake_cara",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:akick(playerid, params)
{
    ApplyAnimation(playerid,"POLICE","Door_Kick",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:lowbodypush(playerid, params[])
{
    ApplyAnimation(playerid,"GANGS","shake_carSH",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:spray(playerid, params[])
{
    ApplyAnimation(playerid,"SPRAYCAN","spraycan_full",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:headbutt(playerid, params[])
{
    ApplyAnimation(playerid,"WAYFARER","WF_Fwd",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:medic(playerid, params[])
{
    ApplyAnimation(playerid,"MEDIC","CPR",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:koface(playerid, params[])
{
    ApplyAnimation(playerid,"PED","KO_shot_face",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:kostomach(playerid, params[])
{
    ApplyAnimation(playerid,"PED","KO_shot_stom",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:lifejump(playerid, params[])
{
    ApplyAnimation(playerid,"PED","EV_dive",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:exhaust(playerid, params[])
{
    ApplyAnimation(playerid,"PED","IDLE_tired",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:leftslap(playerid, params[])
{
    ApplyAnimation(playerid,"PED","BIKE_elbowL",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:rollfall(playerid, params[])
{
    ApplyAnimation(playerid,"PED","BIKE_fallR",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:carlock(playerid, params[])
{
    ApplyAnimation(playerid,"PED","CAR_doorlocked_LHS",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:rcarjack1(playerid, params[])
{
    ApplyAnimation(playerid,"PED","CAR_pulloutL_LHS",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:lcarjack1(playerid, params[])
{
    ApplyAnimation(playerid,"PED","CAR_pulloutL_RHS",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
CMD:rcarjack2(playerid, params[])
{
    ApplyAnimation(playerid,"PED","CAR_pullout_LHS",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:lcarjack2(playerid, params[])
{
    ApplyAnimation(playerid,"PED","CAR_pullout_RHS",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:hoodfrisked(playerid, params[])
{
    ApplyAnimation(playerid,"POLICE","crm_drgbst_01",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:lightcig(playerid, params[])
{
    ApplyAnimation(playerid,"SMOKING","M_smk_in",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:tapcig(playerid, params[])
{
    ApplyAnimation(playerid,"SMOKING","M_smk_tap",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:bat(playerid, params[])
{
    ApplyAnimation(playerid,"BASEBALL","Bat_IDLE",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:box(playerid, params[])
{
    ApplyAnimation(playerid,"GYMNASIUM","GYMshadowbox",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:lay2(playerid, params[])
{
    ApplyAnimation(playerid,"SUNBATHE","Lay_Bac_in",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:chant(playerid, params[])
{
    ApplyAnimation(playerid,"RIOT","RIOT_CHANT",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:finger(playerid, params[])
{
    ApplyAnimation(playerid,"RIOT","RIOT_FUKU",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:shouting(playerid, params[])
{
    ApplyAnimation(playerid,"RIOT","RIOT_shout",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:cop(playerid,params[])
{
    ApplyAnimation(playerid,"SWORD","sword_block",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:elbow(playerid, params[])
{
    ApplyAnimation(playerid,"FIGHT_D","FightD_3",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:kneekick(playerid, params[])
{
    ApplyAnimation(playerid,"FIGHT_D","FightD_2",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:fstance(playerid, params[])
{
    ApplyAnimation(playerid,"FIGHT_D","FightD_IDLE",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:gpunch(playerid, params[])
{
    ApplyAnimation(playerid,"FIGHT_B","FightB_G",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:airkick(playerid, params[])
{
    ApplyAnimation(playerid,"FIGHT_C","FightC_M",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:gkick(playerid, params[])
{
    ApplyAnimation(playerid,"FIGHT_D","FightD_G",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}

CMD:lowthrow(playerid, params[])
{
    ApplyAnimation(playerid,"GRENADE","WEAPON_throwu",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}

CMD:highthrow(playerid, params[])
{
    ApplyAnimation(playerid,"GRENADE","WEAPON_throw",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:dealstance(playerid, params[])
{
    ApplyAnimation(playerid,"DEALER","DEALER_IDLE",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:pee(playerid, params[])
{
    SetPlayerSpecialAction(playerid, 68);
    return 1;
}
 
CMD:knife(playerid, params[])
{
    new nbr;
    if(sscanf(params, "i", nbr)) return SyntaxMSG(playerid, "/knife [1-4]");
    switch(nbr)
    {
        case 1: { ApplyAnimation(playerid,"KNIFE","KILL_Knife_Ped_Damage",4.1, 0, 1, 1, 1, 1, 1); }
        case 2: { ApplyAnimation(playerid,"KNIFE","KILL_Knife_Ped_Die",4.1, 0, 1, 1, 1, 1, 1); }
        case 3: { ApplyAnimation(playerid,"KNIFE","KILL_Knife_Player",4.1, 0, 1, 1, 1, 1, 1); }
        case 4: { ApplyAnimation(playerid,"KNIFE","KILL_Partial",4.1, 0, 1, 1, 1, 1, 1); }
    }
    return 1;
}
 
CMD:basket(playerid, params[])
{
    new ddr;
    if (sscanf(params, "i", ddr)) return SyntaxMSG(playerid, "/basket [1-6]");
    switch(ddr)
    {
        case 1: { ApplyAnimation(playerid,"BSKTBALL","BBALL_idleloop",4.1, 0, 1, 1, 1, 1, 1); }
        case 2: { ApplyAnimation(playerid,"BSKTBALL","BBALL_Jump_Shot",4.1, 0, 1, 1, 1, 1, 1); }
        case 3: { ApplyAnimation(playerid,"BSKTBALL","BBALL_pickup",4.1, 0, 1, 1, 1, 1, 1); }
        case 4: { ApplyAnimation(playerid,"BSKTBALL","BBALL_run",4.1, 0, 1, 1, 1, 1, 1); }
        case 5: { ApplyAnimation(playerid,"BSKTBALL","BBALL_def_loop",4.1, 0, 1, 1, 1, 1, 1); }
        case 6: { ApplyAnimation(playerid,"BSKTBALL","BBALL_Dnk",4.1, 0, 1, 1, 1, 1, 1); }
    }
    return 1;
}
 
CMD:reload(playerid, params[])
{
    new result[128];
    if(sscanf(params, "s[24]", result)) return SyntaxMSG(playerid, "/reload [deagle/smg/ak/m4]");
    if(strcmp(result,"deagle", true) == 0) ApplyAnimation(playerid,"COLT45","colt45_reload",4.1, 0, 1, 1, 1, 1, 1);
    else if(strcmp(result,"smg", true) == 0) ApplyAnimation(playerid,"UZI","UZI_reload",4.1, 0, 1, 1, 1, 1, 1);
    else if(strcmp(result,"ak", true) == 0) ApplyAnimation(playerid,"UZI","UZI_reload",4.1, 0, 1, 1, 1, 1, 1);
    else if(strcmp(result,"m4", true) == 0) ApplyAnimation(playerid,"UZI","UZI_reload",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:aim(playerid, params[])
{
    new lmb;
    if(sscanf(params, "i", lmb)) return SyntaxMSG(playerid, "/aim [1-3]");
    if(lmb == 1) { ApplyAnimation(playerid,"PED","gang_gunstand",4.1, 0, 1, 1, 1, 1, 1); }
    if(lmb == 2) { ApplyAnimation(playerid,"PED","Driveby_L",4.1, 0, 1, 1, 1, 1, 1); }
    if(lmb == 3) { ApplyAnimation(playerid,"PED","Driveby_R",4.1, 0, 1, 1, 1, 1, 1); }
    return 1;
}
 
CMD:lean(playerid, params[])
{
    new mj;
    if(sscanf(params, "i", mj)) return SyntaxMSG(playerid, "/lean [1-2]");
    if(mj == 1) { ApplyAnimation(playerid,"GANGS","leanIDLE",4.1, 0, 1, 1, 1, 1, 1); }
    if(mj == 2) { ApplyAnimation(playerid,"MISC","Plyrlean_loop",4.1, 0, 1, 1, 1, 1, 1); }
    return 1;
}
 
CMD:clearanim(playerid, params[])
{

    ApplyAnimation(playerid, "CARRY", "crry_prtial", 1.0, 0, 0, 0, 0, 0);
    return 1;
}
 
CMD:strip(playerid, params[])
{
    new kj;
    if(sscanf(params, "i", kj)) return SyntaxMSG(playerid, "/strip [1-7]");
    if(kj == 1) { ApplyAnimation(playerid,"STRIP", "strip_A", 4.1, 0, 1, 1, 1, 1, 1 ); }
    if(kj == 2) { ApplyAnimation(playerid,"STRIP", "strip_B", 4.1, 0, 1, 1, 1, 1, 1 ); }
    if(kj == 3) { ApplyAnimation(playerid,"STRIP", "strip_C", 4.1, 0, 1, 1, 1, 1, 1 ); }
    if(kj == 4) { ApplyAnimation(playerid,"STRIP", "strip_D", 4.1, 0, 1, 1, 1, 1, 1 ); }
    if(kj == 5) { ApplyAnimation(playerid,"STRIP", "strip_E", 4.1, 0, 1, 1, 1, 1, 1 ); }
    if(kj == 6) { ApplyAnimation(playerid,"STRIP", "strip_F", 4.1, 0, 1, 1, 1, 1, 1 ); }
    if(kj == 7) { ApplyAnimation(playerid,"STRIP", "strip_G", 4.1, 0, 1, 1, 1, 1, 1 ); }
    return 1;
}
 
CMD:inbedright(playerid, params[])
{
    ApplyAnimation(playerid,"INT_HOUSE","BED_Loop_R",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:inbedleft(playerid, params[])
{
    ApplyAnimation(playerid,"INT_HOUSE","BED_Loop_L",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:wank(playerid, params[])
{
    new choice[32];
    if(sscanf(params, "s[32]", choice)) return SyntaxMSG(playerid, "/wank [1-2]");
    if(strcmp(choice, "1", true) == 0)
    {
        ApplyAnimation(playerid,"PAULNMAC","wank_in",4.1, 0, 1, 1, 1, 1, 1);
    }
    if(strcmp(choice, "2", true) == 0)
    {
        ApplyAnimation(playerid,"PAULNMAC","wank_loop",4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}
CMD:sexy(playerid, params[])
{
    new choice[32];
    if(sscanf(params, "s[32]", choice)) return SyntaxMSG(playerid, "/sexy [1-8]");
    if(strcmp(choice, "1", true) == 0) ApplyAnimation(playerid,"SNM","SPANKING_IDLEW",4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "2", true) == 0) ApplyAnimation(playerid,"SNM","SPANKING_IDLEP",4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "3", true) == 0) ApplyAnimation(playerid,"SNM","SPANKINGW",4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "4", true) == 0) ApplyAnimation(playerid,"SNM","SPANKINGP",4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "5", true) == 0) ApplyAnimation(playerid,"SNM","SPANKEDW",4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "6", true) == 0) ApplyAnimation(playerid,"SNM","SPANKEDP",4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "7", true) == 0) ApplyAnimation(playerid,"SNM","SPANKING_ENDW",4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "8", true) == 0) ApplyAnimation(playerid,"SNM","SPANKING_ENDP",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:bj(playerid, params[])
{
    new choice[32];
    if(sscanf(params, "s[32]", choice)) return SyntaxMSG(playerid, "/bj [1-4]");
    if(strcmp(choice, "1", true) == 0) ApplyAnimation(playerid,"BLOWJOBZ","BJ_COUCH_START_P",4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "2", true) == 0) ApplyAnimation(playerid,"BLOWJOBZ","BJ_COUCH_START_W",4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "3", true) == 0) ApplyAnimation(playerid,"BLOWJOBZ","BJ_COUCH_LOOP_P",4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "4", true) == 0) ApplyAnimation(playerid,"BLOWJOBZ","BJ_COUCH_LOOP_W",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:stand(playerid, params[])
{
    ApplyAnimation(playerid,"WUZI","Wuzi_stand_loop", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:follow(playerid, params[])
{
    ApplyAnimation(playerid,"WUZI","Wuzi_follow",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:getup(playerid, params[])
{
    ApplyAnimation(playerid,"PED","getup",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
CMD:slapped(playerid, params[])
{
    ApplyAnimation(playerid,"SWEET","ho_ass_slapped",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:win(playerid, params[])
{
    new choice[32];
    if(sscanf(params, "s[32]", choice)) return SyntaxMSG(playerid, "/win [1-2]");
    if(strcmp(choice, "1", true) == 0) ApplyAnimation(playerid,"CASINO","cards_win", 4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "2", true) == 0) ApplyAnimation(playerid,"CASINO","Roulette_win", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:celebrate(playerid, params[])
{
    new choice[32];
    if(sscanf(params, "s[32]", choice)) return SyntaxMSG(playerid, "/celebrate [1-2]");
    if(strcmp(choice, "1", true) == 0) ApplyAnimation(playerid,"benchpress","gym_bp_celebrate", 4.1, 0, 1, 1, 1, 1, 1);
    if(strcmp(choice, "2", true) == 0) ApplyAnimation(playerid,"GYMNASIUM","gym_tread_celebrate", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:yes(playerid, params[])
{
    ApplyAnimation(playerid,"CLOTHES","CLO_Buy", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:deal(playerid, params[])
{
    new choice[32];
    if(sscanf(params, "s[32]", choice))
    {
        SyntaxMSG(playerid, "/deal [1-2]");
        return 1;
    }
    if(strcmp(choice, "1", true) == 0)
    {
        ApplyAnimation(playerid, "DEALER", "DEALER_DEAL", 4.1, 0, 1, 1, 1, 1, 1);   
    }
    if(strcmp(choice, "2", true) == 0)
    {
        ApplyAnimation(playerid,"DEALER","DRUGS_BUY", 4.1, 0, 1, 1, 1, 1, 1);   
    }
    return 1;
}
 
CMD:thankyou(playerid, params[])
{
    ApplyAnimation(playerid,"FOOD","SHP_Thank", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:invite1(playerid, params[])
{
    new choice[32];
    if(sscanf(params, "s[32]", choice))
    {
        SyntaxMSG(playerid, "/invite1 [1-2]");
        return 1;
    }
    if(strcmp(choice, "1", true) == 0)
    {
        ApplyAnimation(playerid,"GANGS","Invite_Yes",4.1, 0, 1, 1, 1, 1, 1);   
    }
    if(strcmp(choice, "2", true) == 0)
    {
        ApplyAnimation(playerid,"GANGS","Invite_No",4.1, 0, 1, 1, 1, 1, 1);   
    }
    return 1;
}
 
CMD:scratch(playerid, params[])
{
    ApplyAnimation(playerid,"MISC","Scratchballs_01", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}

CMD:checkout(playerid, params[])
{
    ApplyAnimation(playerid, "GRAFFITI", "graffiti_Chkout", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}

CMD:nod(playerid, params[])
{
    ApplyAnimation(playerid,"COP_AMBIENT","Coplook_nod",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}

CMD:cry(playerid, params[])
{
    new choice[32];
    if(sscanf(params, "s[32]", choice))
    {
        SyntaxMSG(playerid, "/cry [1-2]");
        return 1;
    }
    if(strcmp(choice, "1", true) == 0)
    {
        ApplyAnimation(playerid,"GRAVEYARD","mrnF_loop", 4.1, 0, 1, 1, 1, 1, 1); 
    }
    if(strcmp(choice, "2", true) == 0)
    {
        ApplyAnimation(playerid,"GRAVEYARD","mrnM_loop", 4.1, 0, 1, 1, 1, 1, 1);
    }
    return 1;
}

CMD:bed(playerid, params[])
{
    new choice[32];
    if(sscanf(params, "s[32]", choice))
    {
            SyntaxMSG(playerid, "/bed [1-2]");
            return 1;
    }
    if(strcmp(choice, "1", true) == 0)
    {
            ApplyAnimation(playerid,"INT_HOUSE","BED_In_L",4.1, 0, 1, 1, 1, 1, 1);   
    }
    if(strcmp(choice, "2", true) == 0)
    {
            ApplyAnimation(playerid,"INT_HOUSE","BED_In_R",4.1, 0, 1, 1, 1, 1, 1);   
    }
    if(strcmp(choice, "3", true) == 0)
    {
            ApplyAnimation(playerid,"INT_HOUSE","BED_Loop_L", 4.1, 0, 1, 1, 1, 1, 1);   
    }
    if(strcmp(choice, "4", true) == 0)
    {
            ApplyAnimation(playerid,"INT_HOUSE","BED_Loop_R", 4.1, 0, 1, 1, 1, 1, 1);   
    }
    return 1;
}

CMD:carsmoke(playerid, params[])
{
    ApplyAnimation(playerid,"PED","Smoke_in_car", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
 
CMD:angry(playerid, params[])
{
    ApplyAnimation(playerid,"RIOT","RIOT_ANGRY",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}

CMD:benddown(playerid, params[])
{
    ApplyAnimation(playerid, "BAR", "Barserve_bottle", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}

CMD:shakehead(playerid, params[])
{
    ApplyAnimation(playerid, "MISC", "plyr_shkhead", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}

CMD:cockgun(playerid, params[])
{
    ApplyAnimation(playerid, "SILENCED", "Silence_reload", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}

CMD:bar(playerid, params[])
{
    new choice[32];
    if(sscanf(params, "s[32]", choice))
    {
            SyntaxMSG(playerid, "/bar [1-4]");
            return 1;
    }
    if(strcmp(choice, "1", true) == 0)
    {
            ApplyAnimation(playerid, "BAR", "Barcustom_get", 4.1, 0, 1, 1, 1, 1, 1);   
    }
    if(strcmp(choice, "2", true) == 0)
    {
            ApplyAnimation(playerid,"GHANDS","gsign2LH",4.1, 0, 1, 1, 1, 1, 1);   
    }
    if(strcmp(choice, "2", true) == 0)
    {
            ApplyAnimation(playerid, "BAR", "Barcustom_order", 4.1, 0, 1, 1, 1, 1, 1);   
    }
    if(strcmp(choice, "3", true) == 0)
    {
            ApplyAnimation(playerid, "BAR", "Barserve_give", 4.1, 0, 1, 1, 1, 1, 1);   
    }
    if(strcmp(choice, "4", true) == 0)
    {
            ApplyAnimation(playerid, "BAR", "Barserve_glass", 4.1, 0, 1, 1, 1, 1, 1);   
    }
    return 1;
}

CMD:liftup(playerid, params[])
{
    ApplyAnimation(playerid, "CARRY", "liftup", 4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}
  
CMD:joint(playerid, params[])
{
    ApplyAnimation(playerid,"GANGS","smkcig_prtl",4.1, 0, 1, 1, 1, 1, 1);
    return 1;
}

CMD:die(playerid, params[])
{
    new choice[32];
    if(sscanf(params, "s[32]", choice))
    {
        SyntaxMSG(playerid, "/die [1-2]");
        return 1;
    }
    if(strcmp(choice, "1", true) == 0)
    {
        ApplyAnimation(playerid,"KNIFE","KILL_Knife_Ped_Die",4.1, 0, 1, 1, 1, 1, 1);   
    }
    if(strcmp(choice, "2", true) == 0)
    {
        ApplyAnimation(playerid, "PARACHUTE", "FALL_skyDive_DIE", 4.1, 0, 1, 1, 1, 1, 1);   
    }
    return 1;
}
 
CMD:lranim(playerid, params[])
{
    if(IsInLowRider(playerid))
    {
        new choice;
        if(sscanf(params, "i", choice))
        {
            SyntaxMSG(playerid, "/lranim [0-36]");
            return 1;
        }
        if(GetPlayerState(playerid) == PLAYER_STATE_DRIVER)
        {
            SendClientMessage(playerid, COLOR_GRAD2, "Trebuie sa fii pasager.");
            return 1;
        }
        switch(choice)
        {
            case 0:
            {
                ApplyAnimation(playerid, "LOWRIDER", "F_smklean_loop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 1:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_bdbnce", 4.0, 0, 0, 0, 1, 0, 1);
            }
            case 2:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_hair", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 3:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_hurry", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 4:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_idleloop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 5:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_idle_to_l0", 4.0, 0, 0, 0, 1, 0, 1);
            }
            case 6:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l0_bnce", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 7:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l0_loop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 8:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l0_to_l1", 4.0, 0, 0, 0, 1, 0, 1);
            }
            case 9:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l12_to_l0", 4.0, 0, 0, 0, 1, 0, 1);
            }
            case 10:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l1_bnce", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 11:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l1_loop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 12:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l1_to_l2", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 13:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l2_bnce", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 14:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l2_loop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 15:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l2_to_l3", 4.0, 0, 0, 0, 1, 0, 1);
            }
            case 16:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l345_to_l1", 4.0, 0, 0, 0, 1, 0, 1);
            }
            case 17:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l3_bnce", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 18:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l3_loop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 19:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l3_to_l4", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 20:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l4_bnce", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 21:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l4_loop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 22:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l4_to_l5", 4.0, 0, 0, 0, 1, 0, 1);
            }
            case 23:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l5_bnce", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 24:
            {
                ApplyAnimation(playerid, "LOWRIDER", "lrgirl_l5_loop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 25:
            {
                ApplyAnimation(playerid, "LOWRIDER", "M_smklean_loop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 26:
            {
                ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkB", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 27:
            {
                ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkC", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 28:
            {
                ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkD", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 29:
            {
                ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkF", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 30:
            {
                ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkG", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 31:
            {
                ApplyAnimation(playerid, "LOWRIDER", "prtial_gngtlkH", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 32:
            {
                ApplyAnimation(playerid, "LOWRIDER", "RAP_A_Loop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 33:
            {
                ApplyAnimation(playerid, "LOWRIDER", "RAP_B_Loop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 34:
            {
                ApplyAnimation(playerid, "LOWRIDER", "RAP_C_Loop", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 35:
            {
                ApplyAnimation(playerid, "LOWRIDER", "Sit_relaxed", 4.0, 1, 0, 0, 0, 0, 1);
            }
            case 36:
            {
                ApplyAnimation(playerid, "LOWRIDER", "Tap_hand", 4.0, 1, 0, 0, 0, 0, 1);
            }
        }
    }
    return 1;
}