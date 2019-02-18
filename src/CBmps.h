#ifndef CBmps_h_included
#define CBmps_h_included
/*********************************

SDL initializer and bitmap loader

CBmps structure and handling funcs

2000/6/4

*********************************/


/********************
�C���N���[�h�t�@�C��
********************/

#include "SDL.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/********************
	�萔��`
********************/

//�t�@�C�����̍ő咷(bytes)
#define MAX_FILENAME 255+1
#define MAX_RECT 64

/********************
	�\����
********************/



//�摜�f�[�^
typedef struct{
	int index;
	SDL_Surface **bmp;
	int nums;
}CBmps;


CBmps* CBmpsInit(int);
int CBmpsFree(CBmps *);
int CBmpsLoad(CBmps *, char *);
int CBmpsLoadWzNum(CBmps* ,char *,int);
int CBmpsConvert(CBmps* );
int CBmpsSetTransparent(CBmps* ,int,int,int);
int CBmpsLoadFromFileWithDir(CBmps *,char *,char *);
#define CBmpsLoadFromFile(A,B)	CBmpsLoadFromFileWithDir(A,B,"./");
SDL_Surface* CScreenInitDefault(void);
SDL_Surface* CScreenInitDefaultHW(void);
SDL_Surface* CScreenInit(int,int,int,int);
int CBmpsBlit(CBmps *,SDL_Surface *,int,int,int);


#endif
