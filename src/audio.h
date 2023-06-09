/*
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#ifndef PSXF_GUARD_AUDIO_H
#define PSXF_GUARD_AUDIO_H

#include "psx.h"

//XA enumerations
typedef enum
{
	XA_Menu,   //MENU.XA
	XA_1, //1.XA
	XA_2, //2.XA
	XA_3, //3.XA
	XA_4, //4.XA
	XA_5, //5.XA
	XA_6, //6.XA
	XA_7, //7.XA
	XA_8, //8.XA
	
	XA_Max,
} XA_File;

typedef enum
{
	//MENU.XA
	XA_GettinFreaky, //Gettin' Freaky
	XA_GameOver,     //Game Over
	//1.XA
	XA_BiteVreen, //Bite Vreen
	XA_RestlessVreen,   //Restless Vreen
	//2.XA
	XA_UnlikelyRivalsVloo, //Unlikely Rivals Vloo
	XA_BiteVloo,   //Bite Vloo
	//3.XA
	XA_GuyVloo, //Guy Vloo
	XA_MidnightVloo,   //Midnight Vloo
	//4.XA
	XA_AmusiaLullaby, //Amusia Lullaby
	XA_DeathTollLullaby,   //Death Toll Lullaby
	//5.XA
	XA_ShitnoLullaby, //Shitno Lullaby
	XA_BrimstoneLullaby,   //Brimstone Lullaby
	//6.XA
	XA_YieldMF, //Yield MF
	XA_ChecksumMF,   //Checksum MF
	//7.XA
	XA_DissonanceMF, //Dissonance MF
	XA_PickUpMF,   //Pick Up MF
	//8.XA
	XA_DakotaMF, //Dakota MF
	XA_WarforgedMF,   //Warforged MF
	
	XA_TrackMax,
} XA_Track;

//Audio functions
u32 Audio_GetLength(XA_Track lengthtrack);
void Audio_Init(void);
void Audio_Quit(void);
void Audio_Reset(void);
void Audio_PlayXA_Track(XA_Track track, u8 volume, u8 channel, boolean loop);
void Audio_SeekXA_Track(XA_Track track);
void Audio_PauseXA(void);
void Audio_ResumeXA(void);
void Audio_StopXA(void);
void Audio_ChannelXA(u8 channel);
s32 Audio_TellXA_Sector(void);
s32 Audio_TellXA_Milli(void);
boolean Audio_PlayingXA(void);
void Audio_WaitPlayXA(void);
void Audio_ProcessXA(void);
void findFreeChannel(void);
u32 Audio_LoadVAGData(u32 *sound, u32 sound_size);
void AudioPlayVAG(int channel, u32 addr);
void Audio_PlaySoundOnChannel(u32 addr, u32 channel, int volume);
void Audio_PlaySound(u32 addr, int volume);
u32 VAG_IsPlaying(u32 channel);
void Audio_ClearAlloc(void);

#endif
