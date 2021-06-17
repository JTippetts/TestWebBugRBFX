#include <Urho3D/Engine/Application.h>
#include <Urho3D/Core/Context.h>

using namespace Urho3D;

class Game : public Application
{
	URHO3D_OBJECT(Game, Application);

	public:
	explicit Game(Context *context) : Application(context){}

	void Setup() override
	{
	}
	
	void Start() override
	{
	}
	
	void Stop() override
	{
	}
	
};

URHO3D_DEFINE_APPLICATION_MAIN(Game)