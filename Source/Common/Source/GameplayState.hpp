#include <GameState.hpp>
#include <GameStateManager.hpp>

namespace Papanak
{
	GameplayState::GameplayState( )
	{
	}

	GameplayState::~GameplayState( )
	{
	}

	ZED_UINT32 GameplayState::Enter( GameStateManager * const &p_pManager )
	{
		return ZED_OK;
	}

	ZED_UINT32 GameplayState::Execute( GameStateManager * const &p_pManager )
	{
		return ZED_OK;
	}

	ZED_UINT32 GameplayState::Exit( GameStateManager * const &p_pManager )
	{
		return ZED_OK;
	}

	ZED_CHAR8 *GameplayState::GetName( ) const
	{
		return "Gameplay";
	}
}

