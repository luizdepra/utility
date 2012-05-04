/*
 *  ____                 _         _               _     
 * |  _ \ __ ___      __/ \   _ __| | ____ _ _ __ (_)___ 
 * | |_) / _` \ \ /\ / / _ \ | '__| |/ / _` | '_ \| / __|
 * |  _ < (_| |\ V  V / ___ \| |  |   < (_| | | | | \__ \
 * |_| \_\__,_| \_/\_/_/   \_\_|  |_|\_\__,_|_| |_|_|___/
 *
 * THE BEER-WARE LICENSE" (Revision 42):
 * RawArkanis wrote this file. As long as you retain this notice you can do
 * whatever you want with this stuff. If we meet some day, and you think this
 * stuff is worth it, you can buy me a beer in return.
 *     Luiz F. A. de Pra
 */

#ifndef __SCENEMANAGER_H__
#define __SCENEMANAGER_H__

#include <map>
#include <string>

#include "Scene.h"

namespace RawArkanis
{

	class SceneManager
	{
	public:
		SceneManager(void);
		~SceneManager(void);

		void addScene(Scene *scene);
		void removeScene(std::string name);

		void changeCurrentScene(std::string name);
		Scene *getCurrentScene();
		Scene *getScene(std::string name);

		void update();
		void draw();
	
	private:
		std::map<std::string, Scene *> _sceneList;
		std::string _currentSceneName;
	};

}

#endif

