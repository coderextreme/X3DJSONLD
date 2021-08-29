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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='Doors.x3d',name='title'),
    meta(content='Two doors activated by different fields from a TouchSensor node.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='6 June 2006',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter08UserInteractivity/Doors.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Doors.x3d'),
    Background(skyColor=[(1,1,1)]),
    NavigationInfo(type=["WALK","ANY"]),
    Viewpoint(description='Initial default',position=(0,1.4,10)),
    Viewpoint(description='Book View',position=(0,1.4,4.5)),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.6,.2,0),shininess=0),
          texture=ImageTexture(url=["brick_3.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter08UserInteractivity/brick_3.jpg","http://www.dei.isep.ipp.pt/~losa/public/cg/UniversalMedia/textures/urban/brick_3.jpg"])),
        geometry=IndexedFaceSet(DEF='Wall',coordIndex=[0,1,2,3,-1,0,3,8,11,-1,4,5,6,7,-1,8,9,10,11,-1,12,15,14,13,-1,12,23,20,15,-1,16,19,18,17,-1,20,23,22,21,-1,0,1,13,12,-1,2,14,15,3,-1,4,16,17,5,-1,7,6,18,19,-1,8,20,21,9,-1,11,10,22,23,-1,0,11,23,12,-1,1,13,14,2,-1,3,15,16,4,-1,7,19,20,8,-1,5,17,18,6,-1,9,21,22,10,-1],
          coord=Coordinate(point=[(-2,3,0),(-2,0,0),(-1.5,0,0),(-1.5,2.25,0),(-.5,2.25,0),(-.5,0,0),(.5,0,0),(.5,2.25,0),(1.5,2.25,0),(1.5,0,0),(2,0,0),(2,3,0),(-2,3,-.1),(-2,0,-.1),(-1.5,0,-.1),(-1.5,2.25,-.1),(-.5,2.25,-.1),(-.5,0,-.1),(.5,0,-.1),(.5,2.25,-.1),(1.5,2.25,-.1),(1.5,0,-.1),(2,0,-.1),(2,3,-.1)])))]),
    Transform(DEF='DoorLeftTransform',center=(-.5,0,0),translation=(-1,1.125,-.05),
      children=[
      Group(DEF='Door',
        children=[
        Shape(DEF='DoorShape',
          appearance=Appearance(DEF='DoorApp',
            material=Material(DEF='DoorMat',diffuseColor=(0,.7,0)),
            texture=ImageTexture(DEF='DoorImage',url=["door_1.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter08UserInteractivity/door_1.jpg","http://www.dei.isep.ipp.pt/~losa/public/cg/UniversalMedia/textures/urban/door_1.jpg"])),
          geometry=IndexedFaceSet(DEF='DoorGeometry',coordIndex=[0,1,2,3,-1,4,7,6,5,-1,0,1,5,4,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,6,4,-1],
            coord=Coordinate(point=[(-.5,-1.125,.05),(.5,-1.125,.05),(.5,1.125,.05),(-.5,1.125,.05),(-.5,-1.125,-.05),(.5,-1.125,-.05),(.5,1.125,-.05),(-.5,1.125,-.05)]),
            texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1),(0,0),(1,0),(1,1),(0,1),(1,0),(.95,0),(1,.95),(.95,.95),(1,0),(.95,0),(1,.95),(.95,.95),(1,0),(.95,0),(1,.95),(.95,.95),(1,0),(.95,0),(1,.95),(.95,.95)])))]),
      OrientationInterpolator(DEF='MoverLeft',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,-1)]),
      TimeSensor(DEF='TimerLeft',cycleInterval=3),
      TimeTrigger(DEF='TriggerLeft'),
      BooleanFilter(DEF='FilterLeft'),
      TouchSensor(DEF='TouchLeft',description='touch to activate'),
      ROUTE(fromField='isActive',fromNode='TouchLeft',toField='set_boolean',toNode='FilterLeft'),
      ROUTE(fromField='inputTrue',fromNode='FilterLeft',toField='set_boolean',toNode='TriggerLeft'),
      ROUTE(fromField='triggerTime',fromNode='TriggerLeft',toField='startTime',toNode='TimerLeft'),
      ROUTE(fromField='fraction_changed',fromNode='TimerLeft',toField='set_fraction',toNode='MoverLeft'),
      ROUTE(fromField='value_changed',fromNode='MoverLeft',toField='rotation',toNode='DoorLeftTransform')]),
    Transform(DEF='DoorRight',center=(-.5,0,0),translation=(1,1.125,-.05),
      children=[
      Group(USE='Door'),
      OrientationInterpolator(DEF='MoverRight',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,-1)]),
      TimeSensor(DEF='TimerRight',cycleInterval=3),
      TouchSensor(DEF='TouchRight',description='touch to activate'),
      ROUTE(fromField='touchTime',fromNode='TouchRight',toField='startTime',toNode='TimerRight'),
      ROUTE(fromField='fraction_changed',fromNode='TimerRight',toField='set_fraction',toNode='MoverRight'),
      ROUTE(fromField='value_changed',fromNode='MoverRight',toField='rotation',toNode='DoorRight')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Doors.py")
