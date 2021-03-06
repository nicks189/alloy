/*
 * Copyright(C) 2015, Blake C. Lucas, Ph.D. (img.science@gmail.com)
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

#ifndef INCLUDE_EXAMPLE_MESHOPTIMIZATIONEX_H_
#define INCLUDE_EXAMPLE_MESHOPTIMIZATIONEX_H_

#include <AlloyIntersector.h>
#include "AlloyApplication.h"
#include "CommonShaders.h"
class MeshOptimizationEx: public aly::Application {
protected:
	aly::RegionPtr renderRegion;
	aly::GLFrameBuffer sourceDepthBuffer, targetDepthBuffer;
	aly::DepthAndNormalShader depthAndNormalShader;
	aly::MatcapShader matcapShader;
	aly::Mesh sourceMesh, targetMesh;
	aly::Camera camera;
	aly::WorkerTaskPtr smoothTask;
	aly::WorkerTaskPtr detailTask;

	aly::TextLabelPtr textLabel;
	aly::CompositePtr buttonPanel;
	void smooth(aly::Mesh& mesh);
	aly::Vector3f computeLaplacian(const aly::Mesh& mesh);

	void detailTransfer(aly::Mesh& src, const aly::Mesh& tar,bool aligned);
public:
	MeshOptimizationEx();
	bool init(aly::Composite& rootNode);
	void draw(aly::AlloyContext* context);
};

#endif /* INCLUDE_EXAMPLE_MeshOptimizationEx_H_ */
