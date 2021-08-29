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
    meta(content='jumpcut_collision.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test jumpcut transition with a Collision node. This world contains a collision node that should NOT send events during a jumpcut. The initial Viewpoint in this world is in front of a red Box geometry. A second Viewpoint exists BEHIND the red Box geometry. Indicating the Box with the pointing device should cause a "jumpcut" from the front to rear Viewpoint. During this jumcput, collision detection should be disabled. As a result, the Box geometry should remain a red color, indicating that no collision detection took place during the jumpcut. If the red Box turns yellow, then that indicates that collision detection occured during the jumpcut, and the browser fails the test.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/jumpcut_collision.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='jumpcut_collision.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Background(groundAngle=[1.57],groundColor=[(0,0.5,0),(0,0.5,0)],skyColor=[(0,0,1)]),
    Viewpoint(DEF='VIEW1',description='Front View',position=(0,0,15)),
    Viewpoint(DEF='VIEW2',description='Behind Origin',position=(0,0,-20)),
    TimeSensor(DEF='TIME0',cycleInterval=2),
    ColorInterpolator(DEF='COLOR_INTERP',key=[0,0.5,1],keyValue=[(1,1,0),(1,1,0),(1,1,0)]),
    TouchSensor(DEF='TOUCH',description='touch to activate'),
    Collision(DEF='COLLIDE1',
      children=[
      Transform(DEF='TRANS1',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='BOX1',diffuseColor=(1,0,0))),
          geometry=Box(size=(3,3,3)))])]),
    Transform(DEF='TRANS2',translation=(0,0,-100),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='BOX2',diffuseColor=(0,1,1))),
        geometry=Box(size=(50,50,50)))]),
    ROUTE(fromField='isOver',fromNode='TOUCH',toField='set_bind',toNode='VIEW2'),
    ROUTE(fromField='collideTime',fromNode='COLLIDE1',toField='startTime',toNode='TIME0'),
    ROUTE(fromField='fraction_changed',fromNode='TIME0',toField='set_fraction',toNode='COLOR_INTERP'),
    ROUTE(fromField='value_changed',fromNode='COLOR_INTERP',toField='set_diffuseColor',toNode='BOX1')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for jumpcut_collision.py")
