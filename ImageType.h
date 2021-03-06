#pragma once

#include <fstream>

#include "Image.h"
#include "Scene.h"
class ImageType
{
	public: 
		virtual ~ImageType() {};
		virtual Image* Read(std::ifstream*, Scene* scene, InputHandler* input) = 0;
		virtual void Write(Image*, std::ofstream*) = 0;
		static Image* Read(std::string path, std::string extension, Scene* scene, InputHandler* input);
		static void Write(Image* img, std::string path, std::string extension);
};

