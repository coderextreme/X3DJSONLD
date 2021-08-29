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
    meta(content='multisensor.x3d',name='title'),
    meta(content='multisensor-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test if a CylinderSensor grabs all further motion events from pointing device when the sensor generates "isActive" true event for primitive geometry. The Box geometry has an associated CylinderSensor that routes its "rotation_changed" events to that geometrys Transform node. As a result, pressing the primary pointing device button while over the Box should rotate that geometry. In addition, a TouchSensor is assocated with the Box geometry and a PointLight, but is nested "higher" in the sensor hierarchy. Passing the primary pointing device over the Box should route and isActive event to a PointLight and illuminate the IndexedFaceSets. Dragging the pointing device over the Box geometry and holding the primary pointing device button down should generate an isActive = true event for the CylinderSensor and prevent the TouchSensor from activating (and the PointLight from coming ON), When the button is released, and the cursor is over the Box, the PointLight should turn on.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/CylinderSensor/multisensor.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='multisensor.x3d'),
    NavigationInfo(type=["WALK","FLY","ANY"]),
    Group(
      children=[
      Viewpoint(description='Front View',position=(0,0,20)),
      Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-20)),
      Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,20,0)),
      Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-20,0)),
      Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(20,0,0)),
      Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-20,0,0))]),
    Group(
      children=[
      PointLight(DEF='LIGHT',location=(0,0,2),on=False),
      Transform(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5))),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
            coord=Coordinate(point=[(-10,-6,-8),(10,-6,-8),(10,6,-8),(-10,6,-8)]))),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5))),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
            coord=Coordinate(point=[(-10,-6,-8),(-10,-6,6),(10,-6,6),(10,-6,-8)])))]),
      Transform(
        children=[
        TouchSensor(DEF='TOUCH',description='touch to activate'),
        Transform(DEF='MYBOX',
          children=[
          CylinderSensor(DEF='BOXSENSOR',description='click and drag to rotate'),
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,0))),
            geometry=Box(),)])])]),
    ROUTE(fromField='rotation_changed',fromNode='BOXSENSOR',toField='set_rotation',toNode='MYBOX'),
    ROUTE(fromField='isOver',fromNode='TOUCH',toField='on',toNode='LIGHT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for multisensor.py")
