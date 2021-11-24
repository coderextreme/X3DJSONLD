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
    meta(content='offsettrue.x3d',name='title'),
    meta(content='offsettrue-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test the function of SphereSensors offset field when autoOffset is true. The world includes a SphereSensor associated with its own Box geometry. The Box has a red X, green Y, and blue Z axis. The Box has a default offset of 0 degrees. Indicating the Box with the pointing device should result in: the red line should extend from the right face of the Box, along the X axis, the green line should extend from the top face of the box, along the Y axis, and the blue line should extend from the front face of the box, along the Z axis. All subsequent drags of the Box should NOT "snap" the geometry back to its original orienatation, but should simply continue to drag from the current geometry orientation.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/SphereSensor/offsettrue.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='offsettrue.x3d'),
    NavigationInfo(type=["WALK","FLY","ANY"]),
    Viewpoint(description='Front View'),
    Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-10)),
    Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,10,0)),
    Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-10,0)),
    Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(10,0,0)),
    Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-10,0,0)),
    Group(
      children=[
      SphereSensor(DEF='MIDDLE_SENSOR',description='click and drag to rotate'),
      Transform(DEF='MIDDLE_BOX',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,0))),
          geometry=Box(),),
        Shape(DEF='AXIS',
          geometry=IndexedLineSet(colorIndex=[0,1,2],colorPerVertex=False,coordIndex=[0,1,-1,0,2,-1,0,3,-1],
            coord=Coordinate(point=[(0,0,0),(2,0,0),(0,2,0),(0,0,2)]),
            color=Color(color=[(1,0,0),(0,1,0),(0,0,1)])))])]),
    ROUTE(fromField='rotation_changed',fromNode='MIDDLE_SENSOR',toField='rotation',toNode='MIDDLE_BOX')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for offsettrue.py")
