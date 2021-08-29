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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='RoomDesired.x3d',name='title'),
    meta(content='X3D Follower example',name='description'),
    meta(content='Herbert Stocker',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='18 April 2006',name='created'),
    meta(content='2 December 2011',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/room-desired.wrl',name='reference'),
    meta(content='Stocker_06_Followers.pdf',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers',name='reference'),
    meta(content='X3D version 3.2 or greater',name='requires'),
    meta(content='X3D Follower Chaser Damper',name='subject'),
    meta(content='under development',name='warning'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-1.2-X3D-AbstractSpecification/Part01/components/followers.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Followers/RoomDesired.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='RoomDesired.x3d'),
    ExternProtoDeclare(name='Selection',url=["urn:inet:blaxxun.com:node:Selection","originals/bitmanagement-nodes.x3d#Selection","https://www.web3d.org/x3d/content/examples/Basic/Followers/originals/bitmanagement-nodes.x3d#Selection","originals/bitmanagement-nodes.wrl#Selection","https://www.web3d.org/x3d/content/examples/Basic/Followers/originals/bitmanagement-nodes.wrl#Selection"],
      field=[
      field(accessType='inputOutput',name='select',type='SFBool'),
      field(accessType='inputOnly',name='addChildren',type='MFNode'),
      field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f'),
      field(accessType='inputOnly',name='removeChildren',type='MFNode'),
      field(accessType='inputOutput',name='children',type='MFNode'),
      field(accessType='initializeOnly',name='proxy',type='SFNode'),
      field(accessType='initializeOnly',name='bboxSize',type='SFVec3f'),
      field(accessType='inputOutput',name='collide',type='SFBool')]),
    Background(skyColor=[(0.1,0.2,0.3)]),
    Viewpoint(description='inside',fieldOfView=0.785,orientation=(-1.0,-0.0,0.0,0.105),position=(-0.0,1.7,7.985)),
    Viewpoint(description='outside',fieldOfView=0.785,orientation=(-1.0,0.0,0.0,0.105),position=(0.0,2.068,13.879)),
    NavigationInfo(avatarSize=[0.25,1.2,0.75],headlight=False),
    DirectionalLight(intensity=0.5),
    PointLight(location=(2.5,1.0,0.0),radius=20.0),
    DirectionalLight(direction=(0.0,-1.0,0.0)),
    DirectionalLight(intensity=0.5),
    Group(
      children=[
      TouchSensor(DEF='TouchFloor',description='Touch to move picture here'),
      Shape(
        appearance=Appearance(
          textureTransform=TextureTransform(scale=(17.0,17.0)),
          texture=ImageTexture(url=["floor.png","https://www.web3d.org/x3d/content/examples/Basic/Followers/floor.png"])),
        geometry=Box(size=(10.0,0.1,10.0)))]),
    Group(
      children=[
      TouchSensor(DEF='TouchWallFront',description='Touch to move picture here'),
      Transform(translation=(0.0,1.5,-5.0),
        children=[
        Shape(DEF='ShWall',
          appearance=Appearance(
            material=Material(ambientIntensity=0.0567,diffuseColor=(0.52,0.51,0.45),emissiveColor=(0.28,0.27,0.24),shininess=0.53,specularColor=(0.76,0.78,0.54))),
          geometry=Box(size=(10.0,3.0,0.1)))])]),
    Group(
      children=[
      TouchSensor(DEF='TouchWallLeft',description='Touch to move picture here'),
      Transform(rotation=(0.0,1.0,0.0,-1.571),translation=(-5.0,1.5,0.0),
        children=[
        Shape(USE='ShWall')])]),
    Group(
      children=[
      TouchSensor(DEF='TouchWallRight',description='Touch to move picture here'),
      Transform(rotation=(0.0,1.0,0.0,1.571),translation=(5.0,1.5,0.0),
        children=[
        Shape(USE='ShWall')])]),
    Group(
      children=[
      TouchSensor(DEF='TouchRoof',description='Touch to move picture here'),
      Transform(translation=(0.0,3.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0567,diffuseColor=(0.522,0.451,0.447),emissiveColor=(0.306,0.235,0.176),shininess=0.53,specularColor=(0.761,0.541,0.584))),
          geometry=Box(size=(10.0,0.1,10.0)))])]),
    ProtoInstance(name='Selection',
      fieldValue=[
      fieldValue(name='select',value=False),
      fieldValue(name='children',
        children=[
        Transform(DEF='TransInd',scale=(3.5,3.0,3.0),
          children=[
          Transform(scale=(0.223,0.341,0.5),
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(url=["Photo.jpg","https://www.web3d.org/x3d/content/examples/Basic/Followers/Photo.jpg"])),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,4,5,6,7,-1,4,0,3,7,-1,5,1,0,4,-1,6,2,1,5,-1,7,3,2,6,-1],solid=False,texCoordIndex=[0,1,2,3,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1],
                texCoord=TextureCoordinate(DEF='SquareTextureCoordinatePoints',point=[(0,0),(1,0),(1,1),(0,1)]),
                coord=Coordinate(point=[(-1.0,-1.0,0.03),(1.0,-1.0,0.03),(1.0,1.0,0.03),(-1.0,1.0,0.03),(-1.0,-1.0,0.0),(1.0,-1.0,0.0),(1.0,1.0,0.0),(-1.0,1.0,0.0)]))),
            Shape(
              appearance=Appearance(
                texture=ImageTexture(url=["Shadow.png","https://www.web3d.org/x3d/content/examples/Basic/Followers/Shadow.png"])),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
                texCoord=TextureCoordinate(USE='SquareTextureCoordinatePoints'),
                coord=Coordinate(point=[(-1.15,-1.15,0.01),(1.15,-1.15,0.01),(1.15,1.15,0.01),(-1.15,1.15,0.01)])))])])])]),
    Script(DEF='Worker',
      field=[
      field(accessType='inputOnly',name='set_hitPoint',type='SFVec3f'),
      field(accessType='inputOnly',name='touchedWallLeft',type='SFTime'),
      field(accessType='outputOnly',name='indPos',type='SFVec3f'),
      field(accessType='inputOnly',name='touchedWallRight',type='SFTime'),
      field(accessType='initializeOnly',name='cRoomDepth',type='SFFloat',value=9.9),
      field(accessType='initializeOnly',name='cPaintingWidth',type='SFFloat',value=1.561),
      field(accessType='initializeOnly',name='cFloorY',type='SFFloat',value=0.05),
      field(accessType='initializeOnly',name='cPaintingHeight',type='SFFloat',value=2.046),
      field(accessType='inputOnly',name='touchedWallFront',type='SFTime'),
      field(accessType='inputOnly',name='touchedFloor',type='SFTime'),
      field(accessType='inputOnly',name='touchedRoof',type='SFTime'),
      field(accessType='outputOnly',name='indOri',type='SFRotation'),
      field(accessType='initializeOnly',name='cRoomHeight',type='SFFloat',value=2.9),
      field(accessType='initializeOnly',name='cRoomWidth',type='SFFloat',value=9.9),
      field(accessType='initializeOnly',name='lastHitPoint',type='SFVec3f',value=(0.0,0.0,0.0))]),
    ROUTE(fromField='hitPoint_changed',fromNode='TouchFloor',toField='set_hitPoint',toNode='Worker'),
    ROUTE(fromField='hitPoint_changed',fromNode='TouchWallLeft',toField='set_hitPoint',toNode='Worker'),
    ROUTE(fromField='hitPoint_changed',fromNode='TouchWallRight',toField='set_hitPoint',toNode='Worker'),
    ROUTE(fromField='hitPoint_changed',fromNode='TouchWallFront',toField='set_hitPoint',toNode='Worker'),
    ROUTE(fromField='hitPoint_changed',fromNode='TouchRoof',toField='set_hitPoint',toNode='Worker'),
    ROUTE(fromField='touchTime',fromNode='TouchFloor',toField='touchedFloor',toNode='Worker'),
    ROUTE(fromField='touchTime',fromNode='TouchWallLeft',toField='touchedWallLeft',toNode='Worker'),
    ROUTE(fromField='touchTime',fromNode='TouchWallRight',toField='touchedWallRight',toNode='Worker'),
    ROUTE(fromField='touchTime',fromNode='TouchWallFront',toField='touchedWallFront',toNode='Worker'),
    ROUTE(fromField='touchTime',fromNode='TouchRoof',toField='touchedRoof',toNode='Worker'),
    PositionChaser(DEF='PaintingPositionChaser'),
    ROUTE(fromField='indPos',fromNode='Worker',toField='set_destination',toNode='PaintingPositionChaser'),
    ROUTE(fromField='indOri',fromNode='Worker',toField='set_destination',toNode='PaintingPositionChaser'),
    ROUTE(fromField='value_changed',fromNode='PaintingPositionChaser',toField='translation',toNode='TransInd'),
    ROUTE(fromField='value_changed',fromNode='PaintingPositionChaser',toField='rotation',toNode='TransInd')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RoomDesired.py")
