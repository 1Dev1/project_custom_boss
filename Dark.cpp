/* ScriptData
SDName: boss_Dark
SD%Complete: 7%
SDComment:
SDCategory: Custom boss Dark
EndScriptData
*/

//Yell Haye Boss

#define SAY_MORDAN_BOSS_1 "Matne Entekhabi 1 ..."
#define SAY_MORDAN_BOSS_2 "Matne Entekhabi 2 ..."
#define SAY_ENTER_COMBAT_1 "Matne Entekhabi 1 ..."
#define SAY_ENTER_COMBAT_2 "Matne Entekhabi 2 ..."

#include "ScriptPCH.h"

class boss_dark() : public Creaturescript
{
public:
	boss_dark CreatureScript("boss_dark")	{ }

	struct boss_darkAI: public scriptedAI
	{
	  npc_boss_darkAI(Creature * c) : ScriptedAI(c) { }
	  
	  	void reset()
		{
    		me->RestoreDisplayId();
		}
		
		void JustDied()
		{
		me->MonsterYell(SAY_MORDAN_BOSS_1, LANG_UNIVERSAL, NULL);
		}
		
		void EnterCombat()
    		{
    		me->MonsterYell(SAY_ENTER_COMBAT_1, LANG_UNIVERSAL, NULL);
    		}
		
	};
CreatureAI* GetAI(Creature* c) const OVERRIDE
    {
        return new boss_darkAI(creature);
    }
};
     
void AddSC_boss_dark()
{
    new boss_dark();
}
