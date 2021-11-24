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
    meta(content='multi_sensor.x3d',name='title'),
    meta(content='multi_sensor-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Two unique (not instances of) ProximitySensor node are associated with two unique Sphere geometry. The left ProximitySensor (whose bounding box is represented by the IndexedLineSet box), should route its events to change the Color of the left Sphere from white to blue when the viewers avatar enters its bounding box. The right ProximitySensor should change the color of the right Sphere from white to red when activated. The central "overlapping" area, when entered by the viewers avatar, should concurrently activate both ProximitySensors, and generate seperate events for both of them. The result is, both Spheres should change from white to their respective colors of blue (left) and red (right).',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/ProximitySensor/multi_sensor.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='multi_sensor.x3d'),
    Viewpoint(description='Outside ProximitySensors'),
    Viewpoint(description='Inside Left ProximitySensor',position=(-1.5,0,0)),
    Viewpoint(description='Outside ProximitySensors'),
    Viewpoint(description='Inside Overlap Area',position=(0,0,0)),
    Viewpoint(description='Outside ProximitySensors'),
    Viewpoint(description='Inside Right ProximitySensor',position=(1.5,0,0)),
    Transform(translation=(-1.5,0,0),
      children=[
      TimeSensor(DEF='TIME1',cycleInterval=2),
      ColorInterpolator(DEF='INTERP_COLOR1',key=[0,0.5,1],keyValue=[(1,1,1),(1,1,1),(0,0,1)]),
      ProximitySensor(DEF='PROX_SENSOR1',size=(4,4,4)),
      Transform(DEF='FRAME',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(emissiveColor=(1,1,1))),
          geometry=IndexedLineSet(coordIndex=[0,1,-1,1,2,-1,2,3,-1,3,0,-1,4,5,-1,5,6,-1,6,7,-1,7,4,-1,1,5,-1,2,6,-1,0,4,-1,7,3,-1],
            coord=Coordinate(point=[(-2,-2,-2),(2,-2,-2),(2,2,-2),(-2,2,-2),(-2,-2,2),(2,-2,2),(2,2,2),(-2,2,2)])))]),
      Transform(DEF='BALL',translation=(0,0,-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='COLOR1',diffuseColor=(0,0,1))),
          geometry=Sphere(),)])]),
    Transform(translation=(1.5,0,0),
      children=[
      TimeSensor(DEF='TIME2',cycleInterval=3),
      ColorInterpolator(DEF='INTERP_COLOR2',key=[0,0.5,1],keyValue=[(1,1,1),(1,1,1),(1,0,0)]),
      ProximitySensor(DEF='PROX_SENSOR2',size=(4,4,4)),
      Transform(USE='FRAME'),
      Transform(translation=(0,0,-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='COLOR2',diffuseColor=(1,0,0))),
          geometry=Sphere(),)])]),
    ROUTE(fromField='enterTime',fromNode='PROX_SENSOR1',toField='startTime',toNode='TIME1'),
    ROUTE(fromField='fraction_changed',fromNode='TIME1',toField='set_fraction',toNode='INTERP_COLOR1'),
    ROUTE(fromField='value_changed',fromNode='INTERP_COLOR1',toField='diffuseColor',toNode='COLOR1'),
    ROUTE(fromField='exitTime',fromNode='PROX_SENSOR1',toField='stopTime',toNode='TIME1'),
    ROUTE(fromField='enterTime',fromNode='PROX_SENSOR2',toField='startTime',toNode='TIME2'),
    ROUTE(fromField='fraction_changed',fromNode='TIME2',toField='set_fraction',toNode='INTERP_COLOR2'),
    ROUTE(fromField='value_changed',fromNode='INTERP_COLOR2',toField='diffuseColor',toNode='COLOR2'),
    ROUTE(fromField='exitTime',fromNode='PROX_SENSOR2',toField='stopTime',toNode='TIME2')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for multi_sensor.py")
