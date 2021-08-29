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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    #  javascript code for rotation calculations was derived from: 
    meta(content='ChangingFog.x3d',name='title'),
    meta(content="A Fog node that adjusts as the viewer's orientation and position changes. This is a good candidate to become a Prototype since Fog does not automatically bind when inlined.",name='description'),
    meta(content='Matthew Braun',name='creator'),
    meta(content='20 September 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://astronomy.swin.edu.au/pbourke/geometry/rotate/',name='reference'),
    meta(content='Copyright (c) Matthew Braun 2001',name='rights'),
    meta(content='Fog',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/ChangingFog.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ChangingFog.x3d'),
    NavigationInfo(avatarSize=[0.01,0,0]),
    Viewpoint(description='Start',fieldOfView=0.9,position=(0,0,0)),
    Viewpoint(description='Looking up from start',orientation=(1,0,0,1.57),position=(0,0,0)),
    Viewpoint(description='10m above, looking straight up',orientation=(1,0,0,1.57),position=(0,10,0)),
    Viewpoint(description='10m above start',position=(0,10,0)),
    Viewpoint(description='10m above, looking straight down',orientation=(1,0,0,-1.57),position=(0,10,0)),
    Viewpoint(description='10m below, looking down',orientation=(1,0,0,-1.57),position=(0,-10,0)),
    Viewpoint(description='10m below start',position=(0,-10,0)),
    Viewpoint(description='10m below, looking up',orientation=(1,0,0,1.57),position=(0,-10,0)),
    Fog(DEF='Water',color=(0.2,0.2,0.4),fogType='EXPONENTIAL'),
    #  Proximity sensor must be large enough to encompass the entire scene 
    ProximitySensor(DEF='ProxSensor',size=(1000,1000,1000)),
    #  TimeSensor triggering reduces frequency of calculations for performance reasons. 
    TimeSensor(DEF='Clock',loop=True),
    Script(DEF='ChangeVisibility',
      field=[
      field(accessType='inputOnly',name='get_clock_hit',type='SFTime'),
      field(accessType='initializeOnly',name='run_script',type='SFBool',value=False),
      field(accessType='inputOnly',name='get_depth',type='SFVec3f'),
      field(accessType='outputOnly',name='visibility_changed',type='SFFloat'),
      field(accessType='inputOnly',name='set_visibility',type='SFRotation')]
      #  <field accessType='initializeOnly' name='checked' type='SFBool' value='false'/> <field accessType='initializeOnly' name='moved' type='SFBool' value='false'/> 
      ),
    ROUTE(fromField='cycleTime',fromNode='Clock',toField='get_clock_hit',toNode='ChangeVisibility'),
    ROUTE(fromField='position_changed',fromNode='ProxSensor',toField='get_depth',toNode='ChangeVisibility'),
    ROUTE(fromField='orientation_changed',fromNode='ProxSensor',toField='set_visibility',toNode='ChangeVisibility'),
    ROUTE(fromField='visibility_changed',fromNode='ChangeVisibility',toField='visibilityRange',toNode='Water'),
    #  A set of arrows is used to show visibility and direction 
    Transform(DEF='Pointer',translation=(0,0,-15),
      children=[
      Transform(translation=(0,4,0),
        children=[
        Shape(
          geometry=Cone(bottomRadius=0.4),
          appearance=Appearance(DEF='ShapeApp',
            material=Material(ambientIntensity=0.8,diffuseColor=(1,1,0.3),shininess=0.6)))]),
      Shape(
        geometry=Cylinder(height=6,radius=0.2),
        appearance=Appearance(USE='ShapeApp'))]),
    Transform(translation=(0,10,0),
      children=[
      Transform(USE='Pointer')]),
    Transform(translation=(0,-10,0),
      children=[
      Transform(USE='Pointer')]),
    #  A pair of disks used to show visibility 
    Transform(translation=(0,15,0),
      children=[
      Shape(DEF='Disk',
        geometry=Cylinder(height=0.01),
        appearance=Appearance(USE='ShapeApp'))]),
    Transform(translation=(0,-15,0),
      children=[
      Shape(USE='Disk')]),
    #  An indexed face set box used to bound the working area 
    Transform(scale=(20,20,20),
      children=[
      Shape(DEF='IFSBox',
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(ccw=False,colorIndex=[0,2,2,2,2,1],colorPerVertex=False,coordIndex=[0,1,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0],
          coord=Coordinate(point=[(-1.0,1.0,1.0),(1.0,1.0,1.0),(1.0,1.0,-1.0),(-1.0,1.0,-1.0),(-1.0,-1.0,1.0),(1.0,-1.0,1.0),(1.0,-1.0,-1.0),(-1.0,-1.0,-1.0)]),
          color=Color(color=[(1,1,1),(0,0,0),(0.2,0.2,0.8)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ChangingFog.py")
