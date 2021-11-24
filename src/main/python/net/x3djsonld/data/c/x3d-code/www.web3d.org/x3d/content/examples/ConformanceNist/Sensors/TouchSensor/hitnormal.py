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
    meta(content='hitnormal.x3d',name='title'),
    meta(content='hitnormal-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test hitNormal field. A TouchSensor is associated with a white Box geometry. A SpotLight is inside the Box geometry. Four red Spheres are above, below, to the left and right of the Box. The hitNormal_changed event from the TouchSensor is routed to the direction field of the SpotLight. The result is, when the pointing device is over the top, bottom, left or right face of the Box, the direction of that faces normal is routed to the SpotLight (turning the light). When the top face is indicated, the top Sphere should be illuminated. When the bottom face is indicated, the bottom Sphere should be illuminated. The same is true for the right and left faces.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TouchSensor/hitnormal.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='hitnormal.x3d'),
    Group(
      children=[
      NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
      Viewpoint(description='Front View'),
      Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-10)),
      Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,10,0)),
      Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-10,0)),
      Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(10,0,0)),
      Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-10,0,0)),
      SpotLight(DEF='MYSPOT',beamWidth=1.570796,cutOffAngle=.785398),
      TouchSensor(DEF='MYTOUCH'),
      Transform(translation=(4,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Sphere(),)]),
      Transform(translation=(-4,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Sphere(),)]),
      Transform(translation=(0,4,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Sphere(),)]),
      Transform(translation=(0,-4,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Sphere(),)]),
      Transform(rotation=(1,1,0,0.785),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,4,5,6,7,-1,7,6,1,0,-1,3,2,5,4,-1,7,0,3,4,-1,1,6,5,2,-1],
            coord=Coordinate(point=[(-2,2,2),(-2,-2,2),(2,-2,2),(2,2,2),(2,2,-2),(2,-2,-2),(-2,-2,-2),(-2,2,-2)])))])]),
    ROUTE(fromField='hitNormal_changed',fromNode='MYTOUCH',toField='set_direction',toNode='MYSPOT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for hitnormal.py")
