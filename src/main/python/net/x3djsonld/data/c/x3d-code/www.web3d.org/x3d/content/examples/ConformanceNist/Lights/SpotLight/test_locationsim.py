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
    meta(content='test_locationsim.x3d',name='title'),
    meta(content='test-locationsim-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to apply different location field values to a simple geometry (Sphere). A set of spheres arranged in circular pattern along the XY plane are drawn in the local coordinate system. A SpotLight is defined at location 0 6 1 and its location field is changed as the animation progresses. The test is started by clicking on the tests above the geometry. The intensity is set to 1 and the cutOffAngle and beamWidth fields are set to 0.5 and 0.4 respectively.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Lights/SpotLight/test_locationsim.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='test_locationsim.x3d'),
    Group(
      children=[
      Viewpoint(description='Front View',position=(0,0,20))]),
    DirectionalLight(on=False),
    PointLight(on=False),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    Background(groundColor=[(0,0,0)],skyColor=[(1,0,0)]),
    Transform(scale=(0.02,0.02,0.02),translation=(-3,7,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='the-click',ambientIntensity=1,emissiveColor=(0,0,1))),
        geometry=Text(string=["CLICK HERE TO START"],
          fontStyle=FontStyle(size=32,style_='BOLD'))),
      TouchSensor(DEF='the-touch',description='touch to activate')]),
    SpotLight(DEF='the-light',beamWidth=0.4,cutOffAngle=0.5,location=(0,6,1),radius=50),
    TimeSensor(DEF='text-time'),
    TimeSensor(DEF='the-time',cycleInterval=8),
    PositionInterpolator(DEF='the-location',key=[0.03,0.06,0.09,0.12,0.15,0.18,0.21,0.24,0.27,0.3,0.33,0.36,0.39,0.42,0.45,0.48,0.51,0.54,0.57,0.6,0.63,0.66,0.69,0.72,0.75,0.78,0.81,0.84,0.88,0.93,0.96,1],keyValue=[(0,6,1),(1,5.916,1),(2,5.657,1),(3,5.196,1),(4,4.472,1),(5,3.317,1),(5.5,2.398,1),(5.9,1.091,1),(6,0,1),(5.9,-1.091,1),(5.5,-2.398,1),(5,-3.317,1),(4,-4.472,1),(3,-5.196,1),(2,-5.657,1),(1,-5.916,1),(0,-6,1),(-1,-5.916,1),(-2,-5.657,1),(-3,-5.196,1),(-4,-4.472,1),(-5,-3.317,1),(-5.5,-2.398,1),(-5.9,-1.091,1),(-6,0,1),(-5.9,1.091,1),(-5.5,2.398,1),(-5,3.317,1),(-4,4.472,1),(-3,5.196,1),(-2,5.657,1),(-1,5.916,1)]),
    ColorInterpolator(DEF='text-color',key=[0,0.5,1],keyValue=[(0,0,1),(1,1,1),(0,0,1)]),
    Transform(translation=(0,6,0),
      children=[
      Shape(
        appearance=Appearance(DEF='the-appearance',
          material=Material(),),
        geometry=Sphere(DEF='the-sphere',radius=0.4))]),
    Transform(translation=(1,5.916,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(2,5.657,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(3,5.196,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(4,4.472,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(5,3.317,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(5.5,2.398,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(6,0,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(0,-6,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(1,-5.916,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(2,-5.657,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(3,-5.196,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(4,-4.472,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(5,-3.317,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(5.5,-2.398,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-1,5.916,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-2,5.657,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-3,5.196,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-4,4.472,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-5,3.317,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-5.5,2.398,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-6,0,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-1,-5.916,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-2,-5.657,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-3,-5.196,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-4,-4.472,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-5,-3.317,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-5.5,-2.398,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-5.9,1.091,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(5.9,1.091,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(5.9,-1.091,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    Transform(translation=(-5.9,-1.091,0),
      children=[
      Shape(
        appearance=Appearance(USE='the-appearance'),
        geometry=Sphere(USE='the-sphere'))]),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='the-time'),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='text-time'),
    ROUTE(fromField='fraction_changed',fromNode='text-time',toField='set_fraction',toNode='text-color'),
    ROUTE(fromField='value_changed',fromNode='text-color',toField='emissiveColor',toNode='the-click'),
    ROUTE(fromField='fraction_changed',fromNode='the-time',toField='set_fraction',toNode='the-location'),
    ROUTE(fromField='value_changed',fromNode='the-location',toField='location',toNode='the-light')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for test_locationsim.py")
