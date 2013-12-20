#ifndef __PAPANAK_GAMEPLAYSTATE_HPP__
#define __PAPANAK_GAMEPLAYSTATE_HPP__

#include <GameState.hpp>

namespace Papanak
{
	class GameplayState : public GameState
	{
	public:
		GameState( );
		virtual ~GameState( );

		virtual ZED_UINT32 Enter( GameStateManger * const &p_pManager );
		virtual ZED_UINT32 Execute( GameStateManager * const &p_pManager );
		virtual ZED_UINT32 Exit( GameStateManager * const &p_pManager );

		virtual ZED_CHAR8 *GetName( ) const;

	private:
	};
}

#endif

