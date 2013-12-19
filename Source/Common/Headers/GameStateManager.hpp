#ifndef __PAPANAK_GAMESTATEMANAGER_HPP__
#define __PAPANAK_GAMESTATEMANAGER_HPP__

#include <System/DataTypes.hpp>
#include <stack>
#include <map>

namespace Papanak
{
	class GameState;

	class GameStateManager
	{
	public:
		GameStateManager( );
		~GameStateManager( );

		ZED_UINT32 RegisterGameState( GameState * const &p_pGameState );

		ZED_UINT32 Push( const ZED_CHAR8 *p_pGameStateName );
		ZED_UINT32 Pop( );

		ZED_UINT32 SwitchState( const ZED_CHAR8 *p_pGameStateName );

		ZED_UINT32 Execute( ) const;

	private:
		typedef std::stack< GameState * > GameStateStack;
		typedef std::map< ZED_CHAR8 *, GameState > GameStateMap;

		GameStateStack	m_GameStates;
		GameStateMap	m_NamesStateMap;
	};
}

#endif

