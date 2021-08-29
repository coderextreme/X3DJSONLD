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
    meta(content='test_scaleorientX.x3d',name='title'),
    meta(content='test-scaleorientX-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to set different values for the X portion of the scaleOrientation field. Two Transforms with the same scale factor (1 2 3) are defined in the local coordinate system. The test is started by clicking on the text above the geometry. The scaleOrientation value is changed for the right figure only as the animation progresses from an original value of 0 to 1.57 along the X axis. (no changes should be done to the left figure at all). After the animation finishes, the test test should have generated two red boxes, the one to the left should be twice as high as it is wide and three times as deep as it is wide. The righmost one should be twice as deep as it is wide and three times as high as it is wide.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/GroupingNodes/Transform/test_scaleorientX.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='test_scaleorientX.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Group(
      children=[
      Viewpoint(description='Front View',position=(0,0,17)),
      Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-14,0,0)),
      Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-17)),
      Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(17,0,0))]),
    Transform(scale=(0.02,0.02,0.02),translation=(-4,4,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='the-click',ambientIntensity=1,diffuseColor=(1,1,1),emissiveColor=(0,0,1))),
        geometry=Text(string=["CLICK HERE TO START"],
          fontStyle=FontStyle(size=32,style_='BOLD'))),
      TouchSensor(DEF='the-touch',description='touch to activate')]),
    TimeSensor(DEF='text-time'),
    TimeSensor(DEF='the-time',cycleInterval=8),
    OrientationInterpolator(DEF='the-orient',key=[0.2,0.4,0.6,0.8,1],keyValue=[(1,0,0,0.3),(1,0,0,0.6),(1,0,0,0.9),(1,0,0,1.2),(1,0,0,1.57)]),
    ColorInterpolator(DEF='text-color',key=[0,0.5,1],keyValue=[(0,0,1),(1,1,1),(0,0,1)]),
    ColorInterpolator(DEF='scale-color',key=[0.2,0.4,0.6,0.8,0.9,0.95,1],keyValue=[(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(1,1,1)]),
    Transform(scale=(1,2,3),translation=(-3,0,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=IndexedFaceSet(colorIndex=[2,3,1,0,5,4],colorPerVertex=False,coordIndex=[0,1,2,3,-1,1,7,4,2,-1,7,6,5,4,-1,0,3,5,6,-1,3,2,4,5,-1,6,7,1,0,-1],solid=False,
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1),(1,1,0),(0,1,1),(1,0,1)]),
          coord=Coordinate(DEF='UnitCube',point=[(-1,-1,1),(1,-1,1),(1,1,1),(-1,1,1),(1,1,-1),(-1,1,-1),(-1,-1,-1),(1,-1,-1)])))]),
    Transform(scale=(0.02,0.02,0.02),translation=(-11,-4,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1),emissiveColor=(1,1,1))),
        geometry=Text(string=["scale = 1 2 3","scaleOrientation = 0 0 1 0"],
          fontStyle=FontStyle(size=32,style_='BOLD')))]),
    Transform(DEF='the-figure',scale=(1,2,3),scaleOrientation=(1,0,0,0),translation=(1,0,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=IndexedFaceSet(DEF='the-set',colorIndex=[2,3,1,0,5,4],colorPerVertex=False,coordIndex=[0,1,2,3,-1,1,7,4,2,-1,7,6,5,4,-1,0,3,5,6,-1,3,2,4,5,-1,6,7,1,0,-1],solid=False,
          color=Color(color=[(1,0,0),(0,1,0),(0,0,1),(1,1,0),(0,1,1),(1,0,1)]),
          coord=Coordinate(USE='UnitCube')))]),
    Transform(scale=(0.02,0.02,0.02),translation=(3,-4,0),
      children=[
      Shape(
        appearance=Appearance(DEF='the-appearance',
          material=Material(DEF='the-material',diffuseColor=(0,0,0))),
        geometry=Text(DEF='the-text',string=["scale = 1 2 3","scaleOrientation = 1 0 0 1.57"],
          fontStyle=FontStyle(size=32,style_='BOLD')))]),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='text-time'),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='the-time'),
    ROUTE(fromField='fraction_changed',fromNode='text-time',toField='set_fraction',toNode='text-color'),
    ROUTE(fromField='value_changed',fromNode='text-color',toField='emissiveColor',toNode='the-click'),
    ROUTE(fromField='fraction_changed',fromNode='the-time',toField='set_fraction',toNode='the-orient'),
    ROUTE(fromField='value_changed',fromNode='the-orient',toField='scaleOrientation',toNode='the-figure'),
    ROUTE(fromField='fraction_changed',fromNode='the-time',toField='set_fraction',toNode='scale-color'),
    ROUTE(fromField='value_changed',fromNode='scale-color',toField='emissiveColor',toNode='the-material'),
    ROUTE(fromField='value_changed',fromNode='scale-color',toField='diffuseColor',toNode='the-material')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for test_scaleorientX.py")
