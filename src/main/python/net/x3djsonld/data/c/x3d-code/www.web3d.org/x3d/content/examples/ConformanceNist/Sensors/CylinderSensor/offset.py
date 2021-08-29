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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='offset.x3d',name='title'),
    meta(content='offset-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test the function of CylinderSensors offset field, when autoOffset is false. The offset field (from left to right) is set at -3.14, -1.57, 0, 1.57 and 3.14 radians. The result is that the geometry will initially rotate by these amounts respectively, when the pointing device indicates each geometry. The results (when each geometry is selected) should be, from left to right when viewed from the front: Box 1s GREEN face should face the viewer. Box 2 should face the viewer at a 45 degree angle, with a RED left face and a YELLOW right face at 45 degrees to the viewer. Box 3 RED face should face forward Box 4 should face the viewer at a 45 degree angle, with a BLUE left face and a RED right face at 45 degrees to the viewer. Box 5s GREEN face should face forward',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/CylinderSensor/offset.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='offset.x3d'),
    NavigationInfo(type=["WALK","FLY","ANY"]),
    Group(
      children=[
      Viewpoint(description='Front View',position=(0,2,20)),
      Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,20,0)),
      Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-20)),
      Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-20,0)),
      Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(20,0,0)),
      Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-20,0,0))]),
    Group(
      children=[
      Transform(
        children=[
        Shape(DEF='AXIS',
          appearance=Appearance(
            material=Material(emissiveColor=(1,1,1))),
          geometry=IndexedLineSet(colorIndex=[0],colorPerVertex=False,coordIndex=[0,1],
            color=Color(color=[(1,1,1)]),
            coord=Coordinate(point=[(0,2,0),(0,-2,0)]))),
        Transform(DEF='MYCYLINDER1',translation=(-6,0,0),
          children=[
          CylinderSensor(DEF='CYLINDER1SENSOR',autoOffset=False,description='click and drag to rotate',offset=-3.14),
          Shape(USE='AXIS'),
          Shape(DEF='MYCYLINDER',
            appearance=Appearance(
              material=Material(),),
            geometry=IndexedFaceSet(colorPerVertex=False,coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1],
              color=Color(color=[(1,0,0),(0,1,0),(0,0,1),(1,1,0),(1,1,1),(1,1,1)]),
              coord=Coordinate(point=[(-1,1,1),(-1,-1,1),(1,1,1),(1,-1,1),(1,1,-1),(1,-1,-1),(-1,1,-1),(-1,-1,-1)])))]),
        Transform(DEF='MYCYLINDER2',translation=(-3,0,0),
          children=[
          CylinderSensor(DEF='CYLINDER2SENSOR',autoOffset=False,description='click and drag to rotate',offset=-0.758),
          Shape(USE='AXIS'),
          Shape(USE='MYCYLINDER')]),
        Transform(DEF='MYCYLINDER3',
          children=[
          CylinderSensor(DEF='CYLINDER3SENSOR',autoOffset=False,description='click and drag to rotate'),
          Shape(USE='AXIS'),
          Shape(USE='MYCYLINDER')]),
        Transform(DEF='MYCYLINDER4',translation=(3,0,0),
          children=[
          CylinderSensor(DEF='CYLINDER4SENSOR',autoOffset=False,description='click and drag to rotate',offset=0.758),
          Shape(USE='AXIS'),
          Shape(USE='MYCYLINDER')]),
        Transform(DEF='MYCYLINDER5',translation=(6,0,0),
          children=[
          CylinderSensor(DEF='CYLINDER5SENSOR',autoOffset=False,description='click and drag to rotate',offset=3.14),
          Shape(USE='AXIS'),
          Shape(USE='MYCYLINDER')])])]),
    ROUTE(fromField='rotation_changed',fromNode='CYLINDER1SENSOR',toField='rotation',toNode='MYCYLINDER1'),
    ROUTE(fromField='rotation_changed',fromNode='CYLINDER2SENSOR',toField='rotation',toNode='MYCYLINDER2'),
    ROUTE(fromField='rotation_changed',fromNode='CYLINDER3SENSOR',toField='rotation',toNode='MYCYLINDER3'),
    ROUTE(fromField='rotation_changed',fromNode='CYLINDER4SENSOR',toField='rotation',toNode='MYCYLINDER4'),
    ROUTE(fromField='rotation_changed',fromNode='CYLINDER5SENSOR',toField='rotation',toNode='MYCYLINDER5')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for offset.py")
