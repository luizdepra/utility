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

#include "SceneManager.h"

namespace RawArkanis
{

	SceneManager::SceneManager(void)
		: _currentSceneName("")
	{
	}

	SceneManager::~SceneManager(void)
	{
	}

	void SceneManager::addScene(Scene *scene)
	{
		_sceneList[scene->getName()] = scene;
	}

	void SceneManager::removeScene(std::string name)
	{
		Scene *scene = _sceneList[name];
		_sceneList.erase(name);
		delete scene;
	}

	void SceneManager::changeCurrentScene(std::string name)
	{
		_currentSceneName = name;
	}

	Scene *SceneManager::getCurrentScene()
	{
		return _sceneList[_currentSceneName];
	}
	
	Scene *SceneManager::getScene(std::string name)
	{
		return _sceneList[name];
	}
	
	void SceneManager::update()
	{
		if (_currentSceneName != "")
		{
			_sceneList[_currentSceneName]->update();
		}
	}

	void SceneManager::draw()
	{
		if (_currentSceneName != "")
		{
			_sceneList[_currentSceneName]->draw();
		}
	}

}
