###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='BouncingBoxSimulink.x3d',name='title'),
    meta(content='Bounce a flexible Box up and down by adapting an example from Mathworks Matlab using Simulink for animation.',name='description'),
    meta(content='Ben Cheng and Don Brutzman',name='creator'),
    meta(content='Ben Cheng',name='translator'),
    meta(content='1 October 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='BouncingBoxSimulinkLooping.png',name='Image'),
    meta(content='BouncingBoxSimulink.png',name='Image'),
    meta(content='Matlab users can select one of the following Simulink project links to run this demo. Each uses the VRML .wrl version of the scene.',name='info'),
    meta(content='BouncingBoxLooping.slx',name='reference'),
    meta(content='BouncingBoxNoAttenuation.slx',name='reference'),
    meta(content='delete from version control: BouncingBoxSimulinkProject.slx',name='TODO'),
    meta(content='BouncingBoxSimulink.wrl',name='reference'),
    meta(content='MatlabSimulinkBouncingBoxVrmlDemo.mov',name='reference'),
    meta(content='BouncingBoxSimulinkMatlabVRtoolExample.pdf',name='reference'),
    meta(content='BouncingBoxSimulinkMatlabVRtoolExample.doc',name='reference'),
    meta(content='MatlabSimulinkX3D-Web3D2015FastForwardChengBrutzman.pdf',name='reference'),
    meta(content='MatlabSimulinkX3D-Web3D2015FastForwardChengBrutzman.pptx',name='reference'),
    meta(content='SimulinkX3dPosterChengBrutzman2015May14_letter.pdf',name='reference'),
    meta(content='SimulinkX3dPosterChengBrutzman2015May14_letter.pptx',name='reference'),
    meta(content='SimulinkX3dPosterChengBrutzman2015May11_widescreen.pdf',name='reference'),
    meta(content='SimulinkX3dPosterChengBrutzman2015May11_widescreen.pptx',name='reference'),
    meta(content='http://www.mathworks.com/help/sl3d/examples/bouncing-ball.html',name='reference'),
    meta(content='http://www.mathworks.com',name='reference'),
    meta(content='http://www.mathworks.com/products/matlab',name='reference'),
    meta(content='http://www.mathworks.com/products/simulink',name='reference'),
    meta(content='http://www.mathworks.com/products/3d-animation/features.html',name='reference'),
    meta(content='http://www.mathworks.com/examples/3d-animation',name='reference'),
    meta(content='http://www.mathworks.com/products/3d-animation/videos.html',name='reference'),
    meta(content='http://www.mathworks.com/help/sl3d/index.html#build-virtual-reality-worlds',name='reference'),
    meta(content='http://www.mathworks.com/help/sl3d/using-cad-models-with-the-simulink-3d-animation-product.html',name='reference'),
    meta(content='http://www.mathworks.com/help/physmod/sm/mech/vis/visualizing-with-a-virtual-reality-client.html',name='reference'),
    meta(content='The accompanying wish list describes how Matlab and Humusoft should improve their support for X3D, instead of using VRML and being many years out of date.',name='info'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Matlab/MathworksWishList.txt',name='reference'),
    meta(content='MATLAB R2014B for Simulink animation to work',name='requires'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Matlab/BouncingBoxSimulink.x3d',name='identifier'),
    meta(content='http://web3d.org/pipermail/x3d-public_web3d.org/2014-October/002975.html',name='reference'),
    meta(content='Matlab, http://www.mathworks.org',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BouncingBoxSimulink.x3d'),
    Viewpoint(description='Hello Matlab Simulink bouncing box!',orientation=(1,0,0,0.942478),position=(0,-15,18)),
    Viewpoint(description='Closeup view Simulink bouncing box!',orientation=(1,0,0,-0.463648),position=(0,6,12)),
    Background(skyColor=[(0.6,0.784314,1)]),
    NavigationInfo(),
    Transform(DEF='BoxTransform',translation=(0,0,1),
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.419608,0.439216))))]),
    Transform(DEF='GroundPlane',
      children=[
      Shape(
        geometry=Box(size=(10,10,0.02)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BouncingBoxSimulink.py")
