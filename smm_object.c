//
//  smm_node.c
//  SMMarble
//  Created on 2023/12/19
//


#include "smm_common.h"
#include "smm_object.h"
#include <string.h>

#define MAX_NODETYPE    7
#define MAX_GRADE       9
#define MAX_NODE        100


static char smmNodeName[SMMNODE_TYPE_MAX][MAX_CHARNAME] = {
       "강의",
       "식당",
       "실험실",
       "집",
       "실험실로이동",
       "음식찬스",
       "측제시간"
};

char* smmObj_getTypeName(int type)
{
      return (char*)smmNodeName[type];
}

typedef enum smmObjGrade {
	smmObjGrade_Ap = 0;
	smmObjGrade_A0,
	smmObjGrade_Am,
	smmObjGrade_Bp,
	smmObjGrade_B0,
	smmObjGrade_Bm,
	smmObjGrade_Cp,
	smmObjGrade_C0,
	smmObjGrade_Cm
} smmObjGrade_e;

//1. 구조체 형식 정의 
typedef struct smmObject {
       char name[MAX_CHARNAME];
       smmObjType_e objType;
       int type;
       int credit;
       int energy;
       smmObjType_e grade;
} smmObject_t;

// smmObject_t smm_node[MAX_NODE];
// static int smmObj_noNode = 0;

//3. 관련 함수 변경 
//object generation
void* smmObj_genObject(char* name, smmObjType_e objType, int type, int credit, int energy, smmObjGrade_e grade)
{
    smmObject_t* ptr;
    
    prt = (smmObject_t*)malloc(sizeof(smmObject_t));
    
    strcpy(prt->name, name);
    prt->objType = objType;
    prt->type = type;
    prt->credit = credit;
    prt->energy = energy;
    prt-> grade = grade;
    
    return ptr;
}

//3. 관련 함수 변경 
char* smmObj_getNodeName(void* obj)
{
    smmObject_t* ptr = (smmObject_t*)odj;
	 
	return ptr->name;
}

//3. 관련 함수 변경 
int smmObj_getNodeType(void* obj)
{
    smmObject_t* ptr = (smmObject_t*)odj;
	
	return ptr->type;
}

int smmObj_getNodeCredit(void* obj)
{
    smmObject_t* ptr = (smmObject_t*)odj;
	
	return ptr->credit;
}

int smmObj_getNodeEnergy(void* obj)
{
    smmObject_t* ptr = (smmObject_t*)odj;
	
	return ptr->energy;
}
