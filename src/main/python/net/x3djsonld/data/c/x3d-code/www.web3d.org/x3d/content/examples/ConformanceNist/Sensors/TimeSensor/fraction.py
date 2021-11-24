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
    meta(content='fraction.x3d',name='title'),
    meta(content='fraction-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test the fraction_changed field of a TimeSensor node. Two TimeSensors with cycleIntervals of 2 and 4 seconds animate a blue and green Sphere geometry respectively along the same distance. Because the cycleInterval of one TimeSensor is half that of the other, the fraction_changed events are routed to one PositionInterpolator twice as fast as the other TimeSensor, and the blue Sphere completes its animation twice as fast as the green Sphere. To verify this, click on the red Sphere to start the animation.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/fraction.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='fraction.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Viewpoint(description='Front View'),
    PositionInterpolator(DEF='INTERP2',key=[0,0.25,0.5,0.75,1],keyValue=[(0,2.5,0),(3,2.5,0),(0,2.5,0),(-3,2.5,0),(0,2.5,0)]),
    PositionInterpolator(DEF='INTERP3',key=[0,0.25,0.5,0.75,1],keyValue=[(0,-2.5,0),(3,-2.5,0),(0,-2.5,0),(-3,-2.5,0),(0,-2.5,0)]),
    Transform(DEF='first_ball',translation=(-5,0,0),
      children=[
      TouchSensor(DEF='TOUCH',description='touch to activate'),
      TimeSensor(DEF='TIME1',cycleInterval=4),
      TimeSensor(DEF='TIME2',cycleInterval=2),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Sphere(),)]),
    Transform(DEF='second_ball',translation=(0,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,0))),
        geometry=Sphere(),)]),
    Transform(DEF='third_ball',translation=(0,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='COLOR',diffuseColor=(0,0,1))),
        geometry=Sphere(),)]),
    ROUTE(fromField='touchTime',fromNode='TOUCH',toField='startTime',toNode='TIME1'),
    ROUTE(fromField='touchTime',fromNode='TOUCH',toField='startTime',toNode='TIME2'),
    ROUTE(fromField='fraction_changed',fromNode='TIME1',toField='set_fraction',toNode='INTERP2'),
    ROUTE(fromField='fraction_changed',fromNode='TIME2',toField='set_fraction',toNode='INTERP3'),
    ROUTE(fromField='value_changed',fromNode='INTERP2',toField='translation',toNode='second_ball'),
    ROUTE(fromField='value_changed',fromNode='INTERP3',toField='translation',toNode='third_ball')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for fraction.py")
