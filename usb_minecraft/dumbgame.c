	//Copyright 2012 <>< Charles Lohr, under the MIT-x11 or NewBSD license.  You choose.

//Your game code goes here.
//This file is complete sphagetti code, you'll probably want to gut it for your project.

//The following functions are exposed to you for use:

//For receving packets
//static void Rbuffer( uint8_t * buffer, uint8_t size );
//static uint16_t Rshort()
//static uint32_t Rint()
//static void Rstring( char * data, int16_t maxlen )
//static int16_t Rdouble()  
//static int16_t Rfloat()

//For sending packets
//Sbyte( uint8_t o )
//static void Sint( uint32_t o )
//static void Sshort( uint16_t o )
//static void Sstring( const unsigned char * str, uint8_t len )
//static void Sbuffer( const uint8_t * buf, uint8_t len )
//static void Sdouble( int16_t i )
//static void Sfloat( int16_t i )

//Utility
//static void Str10Print( char * str, uint8_t val )  //fixed 3-digit one-byte readout
//static void Str16Print( char * str, uint8_t val )  //fixed 2-digit one-byte readout
//static void StrTack( char * str, uint16_t * optr, const char * strin ) //Send  ((NOTE))
//static void SignUp( uint8_t x, uint8_t y, uint8_t z, const char* st, uint8_t val ) //Update a specific sign
//static void SblockInternal( uint8_t x, uint8_t y, uint8_t z, uint8_t bt, uint8_t meta ) //Update a specific block


/* General notes for writing the game portion:
    1) You have a limited send-size, it's around 512 bytes.  Split up your commands among multiple packets.
	2) Do not send when receiving.  Add extra flags to the player structure to send when it's time to send.
*/

#include "dumbcraft.h"
#include "dumbutils.h"
#include <string.h>
#include <avr/pgmspace.h>

#include "ws2812.h"


void InitDumbgame()
{
	//no code.
}

void DoCustomPreloadStep( )
{
	struct Player * p = &Players[playerid];

//	printf( "Custom preload.\n" );
//	SblockInternal( 16, 64, 16, 89, 0 );
	SblockInternal( 3, 64, 2, 63, 12 ); //create sign
	SignTextUp( 3, 64, 2, "Trigger", "<><" );

	p->custom_preload_step = 0;

/*	StartSend();
	SignTextUp( 3, 64, 1, "Latch", "<><" );


*/

	//actually spawns
	p->x = (1<<FIXEDPOINT)/2;
	p->y = 100*(1<<FIXEDPOINT);
	p->stance = p->y + (1<<FIXEDPOINT);
	p->z = (1<<FIXEDPOINT)/2;
	p->need_to_send_lookupdate = 1;
}

void PlayerTickUpdate( )
{
	//printf( "%f %f %f\n", SetDouble(p->x), SetDouble(p->y), SetDouble(p->z) );
	struct Player * p = &Players[playerid];
	if( ( dumbcraft_tick & 0x0f ) == 0 )
	{
		p->need_to_send_keepalive = 1;

		if( p->y < 0 )
		{
			p->x = (1<<FIXEDPOINT)/2;
			p->y = 100*(1<<FIXEDPOINT);
			p->stance = p->y + (1<<FIXEDPOINT);
			p->z = (1<<FIXEDPOINT)/2;
			p->need_to_send_lookupdate = 1;
		}
	}
}

void PlayerBlockAction( uint8_t status, uint8_t x, uint8_t y, uint8_t z, uint8_t face )
{
}

void PlayerChangeSlot( uint8_t slotno )
{
}


uint8_t didflip;
uint8_t sel = 0;
uint8_t toup = 0;

const uint8_t PROGMEM wools[48] = {
	0xDD, 0xDD, 0xDD,
	0xDB, 0x7D, 0x3E,
	0xB3, 0x50, 0xBC,
	0x6B, 0x8A, 0xC9,
	0xB1, 0xA6, 0x27,
	0x41, 0xAE, 0x38,
	0xD0, 0x84, 0x99,
	0x40, 0x40, 0x40,
	0x9A, 0xA1, 0xA1,
	0x2E, 0x6E, 0x89,
	0x7E, 0x3D, 0xB5,
	0x2E, 0x38, 0x8D,
	0x4F, 0x32, 0x1F,
	0x35, 0x46, 0x1B,
	0x96, 0x34, 0x30,
	0x19, 0x16, 0x16,
};

void GameTick()
{


	if( didflip )
	{
		StartSend();
		Sbyte( 0x29 ); //effect
		Sstring( "random.click", -1 );
		Sint( (uint16_t)(4<<3) );
		Sint( (uint16_t)(64<<3) );
		Sint( (uint16_t)(sel<<3) );
		Sfloat( 32 ); //100% volume
		Sbyte( 63 ); //100% speed
		DoneSend();
		didflip = 0;

		SetManyWS( pgm_read_byte( &wools[sel*3+0] ), pgm_read_byte( &wools[sel*3+1] ), pgm_read_byte( &wools[sel*3+2] ), 20 );
	}
}

void PlayerClick( uint8_t x, uint8_t y, uint8_t z, uint8_t dir )
{
	if( z >= 0 && z < 16 && x == 4 )
	{
		toup = sel = z;
		didflip = 1;
	}
/*
	struct Player * p = &Players[playerid];
//printf( "PC: %d %d %d %d\n", playerid, x, y, z );

	if( z == 2 && x == 4 )
	{
#ifdef __AVR__
		uint8_t * t = (uint8_t*)( (intptr_t)(regaddr_set + 0x20) );
		*t = regval_set;
#endif
		hasset_value = 10;
		didflip = 2;		
	}
	else if( z == 1 && x == 4 )
	{

		latch_setting_value = !latch_setting_value;
		didflip = 2;
		
	}
	else if( z >= 4 && z < 12 )
	{
		z-=4;
		switch( x )
		{
		case 4: regaddr_set ^= (1<<z); didflip=3; break;
		case 7: regval_set ^= (1<<z); didflip=3; break;
		case 10: regaddr_get ^= (1<<z); didflip=3; break;
		}
	}

	if( didflip )
	{
		flipx = x;
		flipy = y;
		flipz = z;
	}
*/
}

void PlayerUpdate( )
{
	uint8_t i;
	struct Player * p = &Players[playerid];

	if( p->update_number >= 64 )
	{
		p->update_number = 64;

			uint8_t pu = toup&0x0f;//(p->update_number&0x0f);
			if( p->update_number >= 80 ) p->update_number = 64;
			SblockInternal( 4, 64, pu, 69, (sel == pu)?17:9 );
			SblockInternal( 3, 64, pu, 35, (pu&0x0f) );
			toup++;
			//->update_number &= 0xf | 64;
	}
/*
	if( latch_setting_value )
	{
#ifdef __AVR__
		uint8_t * t = (uint8_t*)(intptr_t)(regaddr_set + 0x20);
		*t = regval_set;
#endif
	}
	if( hasset_value )
	{
		hasset_value--;
	}
	SblockInternal( 4, 64, 2, 69, hasset_value?6:14 );
	SblockInternal( 4, 64, 1, 69, latch_setting_value?6:14 );

	switch( p->update_number & 7 )
	{
	case 0:
		SblockInternal( 3, 64, 3, 68, 2 ); //create sign
		SignUp( 3, 64, 3, "Addr", regaddr_set );
		for( i = 0; i < 8; i++ )
		{
			SblockInternal( 4, 64, i+4, 69, ((regaddr_set)&(1<<i))?17:9 );
			SblockInternal( 3, 64, i+4, 35, ((regaddr_set)&(1<<i))?0:15 );
		}
		break;
	case 1:
		SblockInternal( 6, 64, 3, 68, 2 ); //create sign
		SignUp( 6, 64, 3, "Value", regval_set );
		for( i = 0; i < 8; i++ )
		{
			SblockInternal( 7, 64, i+4, 69, ((regval_set)&(1<<i))?17:9 );
			SblockInternal( 6, 64, i+4, 35, ((regval_set)&(1<<i))?0:15 );
		}
		break;
	case 2:
		SblockInternal( 9, 64, 3, 68, 2 ); //create sign
		SignUp( 9, 64, 3, "Read", regaddr_get );
		for( i = 0; i < 8; i++ )
		{
			SblockInternal( 10, 64, i+4, 69, ((regaddr_get)&(1<<i))?17:9 );
			SblockInternal( 9, 64, i+4, 35, ((regaddr_get)&(1<<i))?0:15 );
		}
		break;
	case 3:
	{
		SblockInternal( 12, 64, 3, 68, 2 ); //create sign
#ifdef __AVR__
		regval_get = *((uint8_t*)(intptr_t)(regaddr_get+0x20));
#endif
		SignUp( 12, 64, 3, "Read Value", regval_get );
		for( i = 0; i < 8; i++ )
		{
			SblockInternal( 12, 64, i+4, 35, ((regval_get)&(1<<i))?0:15 );
		}
		break;
	}
	default:
		break;
	}
*/
}


void SetServerName( const char * stname );

uint8_t ClientHandleChat( char * chat, uint8_t chatlen )
{
	return chatlen;
}


