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

#ifndef __SCENE_H__
#define __SCENE_H__

#include <string>

namespace RawArkanis
{
	class Scene
	{
	public:
		Scene(std::string name);
		~Scene();

		std::string getName();

		virtual void update() = 0;
		virtual void draw() = 0;

	private:
		std::string _name;

	};

}

#endif
