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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='simple.x3d',name='title'),
    meta(content='simple-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test of basic OrientationInterpolator functionality. An OrientationInterpolator node is used to change the orientation of a Box geometry. The fraction_changed field of a TimeSensor node is used to change the orientation from keyValues of 0, 90, 180, 270 and 360 degrees about the X, Y and Z axes. Each keyValue has a corresponding, different key. The value_changed field is routed to the set_rotation field of the Transform node of the geometry. The result thould be: The Box should rotate about the X axis one full revolution, the about the Y axis, then about the Z axis. All three revolutions should complete every 5 seconds.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Interpolators/OrientationInterpolator/simple.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='simple.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    TimeSensor(DEF='TIME',cycleInterval=5,loop=True),
    OrientationInterpolator(DEF='ORIENT',key=[0,0.1,0.18,0.24,0.3,0.36,0.42,0.48,0.54,0.6,0.66,0.72,0.78,0.84,0.9],keyValue=[(1,0,0,0),(1,0,0,1.57),(1,0,0,3.14),(1,0,0,4.71),(1,0,0,6.28),(0,1,0,0),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,4.71),(0,1,0,6.28),(0,0,1,0),(0,0,1,1.57),(0,0,1,3.14),(0,0,1,4.71),(0,0,1,6.28)]),
    Group(
      children=[
      Transform(DEF='TRANS',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='COLOR',diffuseColor=(1,0,0))),
          geometry=Box(),)])]),
    ROUTE(fromField='fraction_changed',fromNode='TIME',toField='set_fraction',toNode='ORIENT'),
    ROUTE(fromField='value_changed',fromNode='ORIENT',toField='set_rotation',toNode='TRANS')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for simple.py")
