#ifndef __PAPANAK_GAMESTATE_HPP__
#define __PAPANAK_GAMESTATE_HPP__

#include <System/DataTypes.hpp>

namespace Papanak
{
	class GameStateManager;

	class GameState
	{
	public:
		virtual ~GameState( );

		virtual ZED_UINT32 Enter( GameStateManager * const &p_pManager ) = 0;
		virtual ZED_UINT32 Execute( GameStateManager * const &p_pManager ) = 0;
		virtual ZED_UINT32 Exit( GameStateManager * const &p_pManager ) = 0;

		virtual ZED_CHAR8 *GetName( ) const = 0;

	protected:
	};
}

#endif

