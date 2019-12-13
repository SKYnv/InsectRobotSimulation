#pragma once
#include "cinder/app/App.h"
#include "cinder/gl/gl.h"
#include "Node.h"
#include "Mesh.h"
class DebugRenderer 
{
public:
	DebugRenderer() {}
	void setup(NodeRef root);
	void update();


	void draw();
	void showRenderWindow();
	void updateCamera();
	ci::CameraPersp	mCam;
	NodeRef mRoot;


	ci::gl::FboRef			mFbo;

	ci::CameraPersp			mLightCam;
	ci::vec3				mLightPos;
	ci::gl::GlslProgRef		mGlsl;
	ci::gl::Texture2dRef	mShadowMapTex;
	int	fboSize = 2048;


	MeshRef	floor;
	
	float cameraDistance = 1000;
	float cameraTheta = 1;
	float cameraPhi = 1;
};