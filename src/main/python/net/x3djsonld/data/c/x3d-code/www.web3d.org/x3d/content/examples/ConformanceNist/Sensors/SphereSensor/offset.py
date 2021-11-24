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
    meta(content='Test the function of SphereSensors offset field. The world includes 3 SphereSensors, each associated with its own Box geometry. Each box has a red X, green Y, and blue Z axis. The left Box geometry has an offset value of -90 degrees X rotation. The center Box has an offset of +90 degrees Y rotation. The right Box has an offset of -90 degrees Z rotation. When the left Box geometry is selected by the pointing device (by holding down the primary pointing device button while indicating the geometry), it should "snap" to its offset position, and the red line should extend from the right face of the box, along the X axis, the green line should extend from the rear face, along the Z axis, and the blue line should extend vertically from the top face, along to the Z axis. Indicating the central Box should result in: the red line should extend from the rear face of the Box, along the Z axis, the green line should extend from the top face of the box, along the Y axis, and the blue line should extend from the right face of the box, along the X axis. Indicating the the right Box should result in: the red line should extend from the bottom face, along the Y axis, the green line should extend from the right face, along the X axis, and the blue line should extend from the front face, along the Z axis. All geometry should "snap" to its original offset position each time it is selected.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/SphereSensor/offset.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='offset.x3d'),
    NavigationInfo(type=["WALK","FLY","ANY"]),
    Viewpoint(description='Front View'),
    Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-10)),
    Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,10,0)),
    Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-10,0)),
    Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(10,0,0)),
    Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-10,0,0)),
    Group(
      children=[
      Transform(
        children=[
        Transform(
          children=[
          SphereSensor(DEF='MIDDLE_SENSOR',autoOffset=False,description='click and drag to rotate',offset=(0,1,0,1.57)),
          Transform(DEF='MIDDLE_BOX',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,0))),
              geometry=Box(),),
            Shape(DEF='AXIS',
              geometry=IndexedLineSet(colorIndex=[0,1,2],colorPerVertex=False,coordIndex=[0,1,-1,0,2,-1,0,3,-1],
                color=Color(color=[(1,0,0),(0,1,0),(0,0,1)]),
                coord=Coordinate(point=[(0,0,0),(2,0,0),(0,2,0),(0,0,2)])))])]),
        Transform(translation=(-4.5,0,0),
          children=[
          SphereSensor(DEF='LEFT_SENSOR',autoOffset=False,description='click and drag to rotate',offset=(1,0,0,-1.57)),
          Transform(DEF='LEFT_BOX',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,0))),
              geometry=Box(),),
            Shape(USE='AXIS')])]),
        Transform(translation=(4.5,0,0),
          children=[
          SphereSensor(DEF='RIGHT_SENSOR',autoOffset=False,description='click and drag to rotate',offset=(0,0,1,-1.57)),
          Transform(DEF='RIGHT_BOX',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,0))),
              geometry=Box(),),
            Shape(USE='AXIS')])])])]),
    ROUTE(fromField='rotation_changed',fromNode='LEFT_SENSOR',toField='rotation',toNode='LEFT_BOX'),
    ROUTE(fromField='rotation_changed',fromNode='MIDDLE_SENSOR',toField='rotation',toNode='MIDDLE_BOX'),
    ROUTE(fromField='rotation_changed',fromNode='RIGHT_SENSOR',toField='rotation',toNode='RIGHT_BOX')])
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
