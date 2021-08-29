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
    meta(content='Room.x3d',name='title'),
    meta(content='A simple room containing protoype instances for chair, desk lamp, wall clock, etc.',name='description'),
    meta(content='Frederic Roussille',name='creator'),
    meta(content='1 April 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Room.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  externprodeclare : chair 
    children=[
    WorldInfo(title='Room.x3d'),
    ExternProtoDeclare(name='Chair',url=["Chair.x3d#Chair","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Chair.x3d#Chair","Chair.wrl#Chair","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Chair.wrl#Chair"],
      field=[
      field(accessType='inputOutput',name='diffuseColor',type='SFColor')]),
    ExternProtoDeclare(name='Desk',url=["Desk.x3d#Desk","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Desk.x3d#Desk","Desk.wrl#Desk","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Desk.wrl#Desk"],
      field=[
      field(accessType='inputOutput',name='diffuseColor',type='SFColor')]),
    ExternProtoDeclare(name='WallLamp',url=["WallLamp.x3d#WallLamp","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallLamp.x3d#WallLamp","WallLamp.wrl#WallLamp","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallLamp.wrl#WallLamp"],
      field=[
      field(accessType='inputOutput',name='lampColor',type='SFColor'),
      field(accessType='inputOutput',name='lightColor',type='SFColor'),
      field(accessType='inputOutput',name='lightIntensity',type='SFFloat'),
      field(accessType='inputOutput',name='lightAttenuation',type='SFVec3f'),
      field(accessType='inputOutput',name='radius',type='SFFloat'),
      field(accessType='inputOutput',name='lightLocation',type='SFVec3f')]),
    NavigationInfo(headlight=False),
    Viewpoint(description='entry',orientation=(1,0,0,-0.2),position=(16,23,75)),
    Transform(scale=(0.4,0.4,0.6),
      children=[
      Group(
        #  floor 
        children=[
        Shape(DEF='wall',
          geometry=ElevationGrid(height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],solid=False,xDimension=9,xSpacing=10,zDimension=9,zSpacing=10),
          appearance=Appearance(DEF='wallpaper',
            texture=ImageTexture(url=["WallPaper.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallPaper.jpg"]),
            textureTransform=TextureTransform(scale=(2,2)),
            material=Material(),)),
        #  left wall 
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='wall')]),
        #  right wall 
        Transform(rotation=(0,0,1,1.57),translation=(80,0,0),
          children=[
          Shape(USE='wall')]),
        #  top 
        Transform(translation=(0,80,0),
          children=[
          Shape(USE='wall')]),
        #  front wall 
        Transform(rotation=(1,0,0,1.57),
          children=[
          Shape(
            appearance=Appearance(USE='wallpaper'),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,7,-1,2,3,6,7,-1,4,5,6,3,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(25,0,0),(25,0,-45),(55,0,-45),(55,0,0),(80,0,0),(80,0,-80),(0,0,-80)])))]),
        #  door with its interpalotors and sensors 
        Transform(DEF='transform_door',center=(25,0,0),
          children=[
          Transform(translation=(40,22.5,0),
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(url=["Door.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Door.jpg"])),
              geometry=Box(size=(30,44.5,2))),
            TouchSensor(DEF='touch_door',description='touch door to open/close')]),
          Script(DEF='open_door_js',
            field=[
            field(accessType='inputOnly',name='set_open',type='SFTime'),
            field(accessType='outputOnly',name='keyValue_changed',type='MFRotation'),
            field(accessType='initializeOnly',name='open',type='SFBool',value=False)]),
          TimeSensor(DEF='clock',cycleInterval=4.5),
          OrientationInterpolator(DEF='open_door',key=[0,0.5,1],keyValue=[(0,1,0,0),(0,1,0,0),(0,1,0,0)])]),
        #  link to nps site 
        Anchor(description='link to NPS web page',url=["https://www.nps.edu"],
          children=[
          Transform(translation=(40,22.5,-20),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,0))),
              geometry=Box(size=(30,44.5,1)))])])]),
      #  Door sound 
      Sound(direction=(0,1,1),location=(40,0,0),maxBack=150,maxFront=150,
        source=AudioClip(DEF='grinding_door',description='GrindingDoor',url=["GrindingDoor.wav","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/GrindingDoor.wav"]))]),
    #  chair inserted 
    Transform(scale=(1.5,1.5,1.5),translation=(10,5.3,35),
      children=[
      ProtoInstance(name='Chair',
        fieldValue=[
        fieldValue(name='diffuseColor',value=(0,0.3,0.7))])]),
    #  desk inserted 
    Transform(rotation=(0,1,0,-0.754),scale=(0.8,0.8,0.7),translation=(18,8.1,28),
      children=[
      ProtoInstance(name='Desk')]),
    #  left wall_lamp 
    Transform(rotation=(0,1,0,1.57),scale=(2,2,2),translation=(0.05,23,20),
      children=[
      ProtoInstance(name='WallLamp',
        fieldValue=[
        fieldValue(name='lampColor',value=(0,0,1)),
        fieldValue(name='lightColor',value=(1,1,1)),
        fieldValue(name='lightIntensity',value=0.8),
        fieldValue(name='lightAttenuation',value=(0,0,0)),
        fieldValue(name='radius',value=100),
        fieldValue(name='lightLocation',value=(0,0,5))])]),
    #  right wall_lamp 
    Transform(rotation=(0,1,0,-1.57),scale=(2,2,2),translation=(31.99,23,20),
      children=[
      ProtoInstance(name='WallLamp',
        fieldValue=[
        fieldValue(name='lampColor',value=(0,0,1)),
        fieldValue(name='lightColor',value=(1,1,1)),
        fieldValue(name='lightIntensity',value=0.8),
        fieldValue(name='lightAttenuation',value=(0,0,0)),
        fieldValue(name='radius',value=100),
        fieldValue(name='lightLocation',value=(0,0,-5))])]),
    #  clock inserted on the wall 
    Transform(translation=(16,22.5,0),
      children=[
      Inline(url=["WallClock.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallClock.x3d","WallClock.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallClock.wrl"])]),
    #  desk lamp inserted in the scene 
    Transform(scale=(15,15,15),translation=(16,8.6,25),
      children=[
      Inline(url=["DeskLamp.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DeskLamp.x3d","DeskLamp.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DeskLamp.wrl"])]),
    #  routes for the door 
    ROUTE(fromField='touchTime',fromNode='touch_door',toField='startTime',toNode='clock'),
    ROUTE(fromField='touchTime',fromNode='touch_door',toField='set_open',toNode='open_door_js'),
    ROUTE(fromField='touchTime',fromNode='touch_door',toField='startTime',toNode='grinding_door'),
    ROUTE(fromField='keyValue_changed',fromNode='open_door_js',toField='set_keyValue',toNode='open_door'),
    ROUTE(fromField='fraction_changed',fromNode='clock',toField='set_fraction',toNode='open_door'),
    ROUTE(fromField='value_changed',fromNode='open_door',toField='set_rotation',toNode='transform_door')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Room.py")
