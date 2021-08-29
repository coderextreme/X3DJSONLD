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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='test_intensitysim.x3d',name='title'),
    meta(content='test-intensitysim-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to set the intensity field to a range of values on simple geometry (cone, sphere, cylinder and box). one row of the simple geometry is drawn in the local coordinate system. The intensity of the light should increase as the animation progresses. The animation is started by clicking on the text above the geometry. The intensity ranges from 0 to 1.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Lights/DirectionalLight/test_intensitysim.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='test_intensitysim.x3d'),
    Group(
      children=[
      Viewpoint(description='Front View',position=(0,0,15)),
      Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-15,0,0)),
      Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(15,0,0)),
      Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,15,0))]),
    Background(groundColor=[(0,0,0)],skyColor=[(1,0,0)]),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    PointLight(on=False),
    SpotLight(beamWidth=1.570796,cutOffAngle=.785398,on=False),
    Transform(scale=(0.02,0.02,0.02),translation=(-2,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='the-click',ambientIntensity=1,emissiveColor=(0,0,1))),
        geometry=Text(string=["CLICK HERE TO START"],
          fontStyle=FontStyle(size=32,style_='BOLD'))),
      TouchSensor(DEF='the-touch',description='touch to activate')]),
    TimeSensor(DEF='the-time',cycleInterval=8),
    TimeSensor(DEF='text-time'),
    ScalarInterpolator(DEF='the-intensity',key=[0.1,0.2,0.4,0.6,0.8,1],keyValue=[0,0.2,0.4,0.6,0.8,1]),
    ColorInterpolator(DEF='text-color',key=[0,0.5,1],keyValue=[(0,0,1),(1,1,1),(0,0,1)]),
    Group(
      children=[
      DirectionalLight(DEF='the-light',intensity=0),
      Transform(translation=(6.14221,0.0694613,-0.000999451),
        children=[
        Shape(
          appearance=Appearance(DEF='the-appearance',
            material=Material(),),
          geometry=Box(),)]),
      Transform(translation=(-4.85443,0.0694381,-0.00149918),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Sphere(),)]),
      Transform(translation=(-1.47341,0.036672,-0.00175095),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Cone(),)]),
      Transform(translation=(2.31094,0.0694206,-0.00187683),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Cylinder(),)])]),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='the-time'),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='text-time'),
    ROUTE(fromField='fraction_changed',fromNode='text-time',toField='set_fraction',toNode='text-color'),
    ROUTE(fromField='value_changed',fromNode='text-color',toField='emissiveColor',toNode='the-click'),
    ROUTE(fromField='fraction_changed',fromNode='the-time',toField='set_fraction',toNode='the-intensity'),
    ROUTE(fromField='value_changed',fromNode='the-intensity',toField='intensity',toNode='the-light')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for test_intensitysim.py")
