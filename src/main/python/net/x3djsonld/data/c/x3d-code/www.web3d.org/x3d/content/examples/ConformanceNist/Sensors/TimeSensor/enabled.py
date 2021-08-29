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
    meta(content='enabled.x3d',name='title'),
    meta(content='enabled-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='With the enabled field set to false, a startTime event sent to a TimeSensor that animates the movement of the red Sphere geometry will not start the TimeSensor. The result should be, indicating the red Sphere with a pointing device does NOT start its movement.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/enabled.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='enabled.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Viewpoint(description='Front View'),
    TimeSensor(DEF='TIME',enabled=False),
    TouchSensor(DEF='TOUCH',description='touch to activate'),
    PositionInterpolator(DEF='INTERP',key=[0,0.25,0.5,0.75,1],keyValue=[(0,0,0),(3,0,0),(0,0,0),(-3,0,0),(0,0,0)]),
    Transform(DEF='BALL',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Sphere(),)]),
    ROUTE(fromField='touchTime',fromNode='TOUCH',toField='startTime',toNode='TIME'),
    ROUTE(fromField='fraction_changed',fromNode='TIME',toField='set_fraction',toNode='INTERP'),
    ROUTE(fromField='value_changed',fromNode='INTERP',toField='translation',toNode='BALL')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for enabled.py")
