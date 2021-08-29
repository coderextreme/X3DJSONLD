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
    meta(content='test_simc1_attenuation.x3d',name='title'),
    meta(content='test-simc1-attenuation-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to apply attenuation values to a set of simple geometry. The second index of the attenuation field is set to 0.2, which should cause the attenuation to decrease inversively proportional to the distance from the light. The light brightness should decrease as the objects move away from the light.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Lights/SpotLight/test_simc1_attenuation.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='test_simc1_attenuation.x3d'),
    Viewpoint(description='Front View',position=(0,0,15)),
    Background(groundColor=[(0,0,0)],skyColor=[(1,0,0)]),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    PointLight(on=False),
    DirectionalLight(on=False),
    Transform(scale=(0.02,0.02,0.02),translation=(-2.7,2.5,0),
      children=[
      Shape(
        appearance=Appearance(DEF='the-appearance',
          material=Material(DEF='the-click',ambientIntensity=1,emissiveColor=(0,0,1))),
        geometry=Text(string=["CLICK HERE TO START"],
          fontStyle=FontStyle(size=32,style_='BOLD'))),
      TouchSensor(DEF='the-touch',description='touch to activate')]),
    SpotLight(attenuation=(0,0.2,0),beamWidth=1.57079,cutOffAngle=1.57079,location=(0,0,10),radius=101),
    TimeSensor(DEF='text-time'),
    TimeSensor(DEF='the-time',cycleInterval=8),
    ColorInterpolator(DEF='text-color',key=[0,0.5,1],keyValue=[(0,0,1),(1,1,1),(0,0,1)]),
    PositionInterpolator(DEF='box-position',key=[0,0.2,0.6,1],keyValue=[(6.14,0,0),(6.14,0,-10),(6.14,0,-30),(6.14,0,-50)]),
    PositionInterpolator(DEF='sphere-position',key=[0,0.2,0.6,1],keyValue=[(-4.85,0,0),(-4.85,0,-10),(-4.85,0,-30),(-4.85,0,-50)]),
    PositionInterpolator(DEF='cone-position',key=[0,0.2,0.6,1],keyValue=[(-1.47,0,0),(-1.47,0,-10),(-1.47,0,-30),(-1.47,0,-50)]),
    PositionInterpolator(DEF='cylinder-position',key=[0,0.2,0.6,1],keyValue=[(2.31,0,0),(2.31,0,-10),(2.31,0,-30),(2.31,0,-50)]),
    Transform(DEF='box-plane',translation=(6.14221,0,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Box(),)]),
    Transform(DEF='sphere-plane',translation=(-4.85,0,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Sphere(),)]),
    Transform(DEF='cone-plane',translation=(-1.47,0,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cone(),)]),
    Transform(DEF='cylinder-plane',translation=(2.31,0,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(),)]),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='text-time'),
    ROUTE(fromField='fraction_changed',fromNode='text-time',toField='set_fraction',toNode='text-color'),
    ROUTE(fromField='value_changed',fromNode='text-color',toField='emissiveColor',toNode='the-click'),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='the-time'),
    ROUTE(fromField='fraction_changed',fromNode='the-time',toField='set_fraction',toNode='sphere-position'),
    ROUTE(fromField='value_changed',fromNode='sphere-position',toField='translation',toNode='sphere-plane'),
    ROUTE(fromField='fraction_changed',fromNode='the-time',toField='set_fraction',toNode='cone-position'),
    ROUTE(fromField='value_changed',fromNode='cone-position',toField='translation',toNode='cone-plane'),
    ROUTE(fromField='fraction_changed',fromNode='the-time',toField='set_fraction',toNode='box-position'),
    ROUTE(fromField='value_changed',fromNode='box-position',toField='translation',toNode='box-plane'),
    ROUTE(fromField='fraction_changed',fromNode='the-time',toField='set_fraction',toNode='cylinder-position'),
    ROUTE(fromField='value_changed',fromNode='cylinder-position',toField='translation',toNode='cylinder-plane')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for test_simc1_attenuation.py")
