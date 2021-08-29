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
    meta(content='test_directioncom.x3d',name='title'),
    meta(content='test-directioncom-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to set the direction field to a range of values on a a complex geometry (Extrusion) The geometry is drawn in the local coordinate system and it should be a doughnut like "figure". The direction of the light is changed as the animation progresses. The animation is started by clicking on the text above the geometry. The direction values used are 0 0 1,1 0 0, 0 0 -1,-1 0 0.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Lights/DirectionalLight/test_directioncom.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='test_directioncom.x3d'),
    Group(
      children=[
      Viewpoint(description='Front View',position=(0,0,23)),
      Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-13))]),
    Background(groundColor=[(0,0,0)],skyColor=[(0.5,0,0)]),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    SpotLight(beamWidth=1.570796,cutOffAngle=.785398,on=False),
    PointLight(on=False),
    Transform(scale=(0.02,0.02,0.02),translation=(-3.7,6,6),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='the-click',ambientIntensity=1,emissiveColor=(0,0,1))),
        geometry=Text(string=["CLICK HERE TO START"],
          fontStyle=FontStyle(size=32,style_='BOLD'))),
      TouchSensor(DEF='the-touch',description='touch to activate')]),
    TimeSensor(DEF='the-time',cycleInterval=5),
    TimeSensor(DEF='text-time'),
    PositionInterpolator(DEF='the-direction',key=[0.25,0.5,0.75,1],keyValue=[(0,0,1),(1,0,0),(0,0,-1),(-1,0,0)]),
    ColorInterpolator(DEF='text-color',key=[0,0.5,1],keyValue=[(0,0,1),(1,1,1),(0,0,1)]),
    Group(
      children=[
      DirectionalLight(DEF='the-light',ambientIntensity=1,direction=(0,0,1)),
      Transform(rotation=(1,0,0,1.57),translation=(0,1,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Extrusion(beginCap=False,crossSection=[(1,0),(0.75,0.66),(0.5,0.87),(0.25,0.97),(0,1),(-0.25,0.97),(-0.5,0.87),(-0.75,0.66),(-1,0),(-0.75,-0.66),(-0.5,-0.87),(-0.25,-0.97),(0.25,-0.97),(0.5,-0.87),(0.75,-0.66),(1,0)],endCap=False,solid=False,spine=[(0,5,3.317),(0.25,5,3.307),(0.5,5,3.279),(0.75,5,3.231),(1,5,3.162),(1.25,5,3.072),(1.5,5,2.958),(1.75,5,2.817),(2,5,2.646),(2.25,5,2.437),(2.5,5,2.179),(2.9,5,1.609),(3.3,5,0.332),(3.3,5,-0.332),(2.9,5,-1.609),(2.5,5,-2.179),(2.25,5,-2.437),(2,5,-2.646),(1.75,5,-2.817),(1.5,5,-2.958),(1.25,5,-3.072),(1,5,-3.162),(0.75,5,-3.231),(0.5,5,-3.279),(0.25,5,-3.307),(0,5,-3.317),(-0.25,5,-3.307),(-0.5,5,-3.279),(-0.75,5,-3.231),(-1,5,-3.162),(-1.25,5,-3.072),(-1.5,5,-2.958),(-1.75,5,-2.817),(-2,5,-2.646),(-2.25,5,-2.437),(-2.5,5,-2.179),(-2.9,5,-1.609),(-3.3,5,-0.332),(-3.3,5,0.332),(-2.9,5,1.609),(-2.5,5,2.179),(-2.25,5,2.437),(-2,5,2.646),(-1.75,5,2.817),(-1.5,5,2.958),(-1.25,5,3.072),(-1,5,3.162),(-0.75,5,3.231),(-0.5,5,3.279),(-0.25,5,3.307),(0,5,3.317),(0.25,5,3.307)]))])]),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='the-time'),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='text-time'),
    ROUTE(fromField='fraction_changed',fromNode='text-time',toField='set_fraction',toNode='text-color'),
    ROUTE(fromField='value_changed',fromNode='text-color',toField='emissiveColor',toNode='the-click'),
    ROUTE(fromField='fraction_changed',fromNode='the-time',toField='set_fraction',toNode='the-direction'),
    ROUTE(fromField='value_changed',fromNode='the-direction',toField='direction',toNode='the-light')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for test_directioncom.py")
