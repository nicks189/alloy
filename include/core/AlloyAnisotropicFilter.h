/*
 * Copyright(C) 2017, Blake C. Lucas, Ph.D. (img.science@gmail.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef INCLUDE_CORE_ALLOYANISOTROPICFILTER_H_
#define INCLUDE_CORE_ALLOYANISOTROPICFILTER_H_
#include <AlloyImageProcessing.h>

namespace aly{
	enum class AnisotropicKernel {
		Gaussian,
		PeronaMalik,
		Weickert
	};
	void AnisotropicDiffusion(const Image1f& imageIn,Image1f& out,int iterations=4,const AnisotropicKernel& kernel=AnisotropicKernel::Gaussian,float K=0.02f,float dt=1.0f);
	void AnisotropicDiffusion(const Image2f& imageIn,Image2f& out,int iterations=4,const AnisotropicKernel& kernel=AnisotropicKernel::Gaussian,float K=0.02f,float dt=1.0f);
	void AnisotropicDiffusion(const Image3f& imageIn,Image3f& out,int iterations=4,const AnisotropicKernel& kernel=AnisotropicKernel::Gaussian,float K=0.02f,float dt=1.0f);
	void AnisotropicDiffusion(const Image4f& imageIn,Image4f& out,int iterations=4,const AnisotropicKernel& kernel=AnisotropicKernel::Gaussian,float K=0.02f,float dt=1.0f);

}



#endif /* INCLUDE_CORE_ALLOYANISOTROPICFILTER_H_ */
