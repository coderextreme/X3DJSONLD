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

newModel=X3D(profile='Interchange',version='3.2',
  head=head(
    children=[
    meta(content='CarDemoWorldModel.x3d',name='title'),
    meta(content='Example scene for RigidBodyPhysics component',name='description'),
    meta(content='Alan Hudson and Justin Couch',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 January 2008',name='created'),
    meta(content='30 December 2008',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.xj3d.org/extensions/index.html#Physics',name='reference'),
    meta(content='originals/car/main.x3dv',name='reference'),
    meta(content='originals/car/worldModel.x3dv',name='reference'),
    meta(content='http://www.xj3d.org/extensions/rigid_physics_examples.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/rigid_physics.html',name='reference'),
    meta(content='under development',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/CarDemoWorldModel.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Xj3D converter, http://www.xj3d.org',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CarDemoWorldModel.x3d'),
    Transform(DEF='Ramp1',rotation=(0.0,0.0,-1.0,0.135494),translation=(347.056,4.87479,-376.17),
      children=[
      Shape(
        appearance=Appearance(DEF='RAMP',
          texture=ImageTexture(DEF='TEXAG_1',url=["originals/car/textures/wall-stone-001.jpg","https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/wall-stone-001.jpg"])),
        geometry=Box(size=(90.0,1.0,70.0)))]),
    Transform(DEF='Ramp2',translation=(301.193,1.4,-376.315),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='TEXAG_1')),
        geometry=IndexedFaceSet(DEF='_0',coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1],creaseAngle=0.5,texCoordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1],
          coord=Coordinate(point=[(-1.5,10.0,35.0),(-1.5,-10.0,35.0),(1.5,10.0,35.0),(1.5,-10.0,35.0),(1.5,10.0,-35.0),(1.5,-10.0,-35.0),(-1.5,10.0,-35.0),(-1.5,-10.0,-35.0)]),
          texCoord=TextureCoordinate(point=[(0.478571,0.642857),(0.478571,0.357143),(0.521429,0.642857),(0.521429,0.357143),(0.478571,0.642857),(0.478571,0.357143),(0.521429,0.642857),(0.521429,0.357143)])))]),
    Transform(DEF='TallBuilding',translation=(-163.719,24.0,-590.325),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(DEF='TEXAG_3',url=["originals/car/textures/019619.jpg","https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/019619.jpg"])),
        geometry=IndexedFaceSet(DEF='_1',coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,1,7,5,3,-1],creaseAngle=0.5,texCoordIndex=[0,1,3,2,-1,4,5,7,6,-1,8,9,11,10,-1,12,13,15,14,-1,16,17,19,18,-1],
          coord=Coordinate(point=[(-20.0,24.0,20.0),(-20.0,-24.0,20.0),(20.0,24.0,20.0),(20.0,-24.0,20.0),(20.0,24.0,-20.0),(20.0,-24.0,-20.0),(-20.0,24.0,-20.0),(-20.0,-24.0,-20.0)]),
          texCoord=TextureCoordinate(point=[(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0)])))]),
    Transform(translation=(-163.719,24.0,-590.325),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(DEF='TEXAG_4',url=["originals/car/textures/stone0.gif","https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/stone0.gif"]),
          textureTransform=TextureTransform(scale=(20.0,20.0))),
        geometry=IndexedFaceSet(DEF='_2',coordIndex=[0,1,2,3,-1],creaseAngle=0.5,texCoordIndex=[0,1,2,3,-1],
          coord=Coordinate(point=[(-20.0,24.0,-20.0),(-20.0,24.0,20.0),(20.0,24.0,20.0),(20.0,24.0,-20.0)]),
          texCoord=TextureCoordinate(point=[(0.0,1.0),(0.0,0.0),(1.0,0.0),(1.0,1.0)])))]),
    Transform(DEF='SmallBuilding-001',translation=(-101.759,19.0,-451.126),
      children=[
      Transform(DEF='SmallBuilding',
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(USE='TEXAG_3')),
            geometry=IndexedFaceSet(coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,1,7,5,3,-1],creaseAngle=0.5,texCoordIndex=[0,1,3,2,-1,4,5,7,6,-1,8,9,11,10,-1,12,13,15,14,-1,16,17,19,18,-1],
              coord=Coordinate(point=[(-20.0,19.0,20.0),(-20.0,-19.0,20.0),(20.0,19.0,20.0),(20.0,-19.0,20.0),(20.0,19.0,-20.0),(20.0,-19.0,-20.0),(-20.0,19.0,-20.0),(-20.0,-19.0,-20.0)]),
              texCoord=TextureCoordinate(point=[(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0),(0.0,1.0),(0.0,0.0),(1.0,1.0),(1.0,0.0)])))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(USE='TEXAG_4'),
              textureTransform=TextureTransform(scale=(20.0,20.0))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],creaseAngle=0.5,texCoordIndex=[0,1,2,3,-1],
              coord=Coordinate(point=[(-20.0,19.0,-20.0),(-20.0,19.0,20.0),(20.0,19.0,20.0),(20.0,19.0,-20.0)]),
              texCoord=TextureCoordinate(point=[(0.0,1.0),(0.0,0.0),(1.0,0.0),(1.0,1.0)])))])])]),
    Transform(DEF='SmallBuilding-002',translation=(-314.972,19.0,-656.376),
      children=[
      Transform(USE='SmallBuilding')]),
    Transform(DEF='SmallBuilding-003',translation=(-314.723,19.0,-580.647),
      children=[
      Transform(USE='SmallBuilding')]),
    Transform(DEF='SmallBuilding-004',translation=(-269.737,19.0,-452.626),
      children=[
      Transform(USE='SmallBuilding')]),
    Transform(DEF='SmallBuilding-005',translation=(-217.782,19.0,-450.082),
      children=[
      Transform(USE='SmallBuilding')]),
    Transform(DEF='SmallBuilding-006',translation=(-83.8395,19.0,-351.859),
      children=[
      Transform(USE='SmallBuilding')]),
    Transform(DEF='SmallBuilding-007',translation=(-348.799,19.0,-511.969),
      children=[
      Transform(USE='SmallBuilding')]),
    Transform(DEF='SmallBuilding-008',translation=(-23.9812,19.0,-501.768),
      children=[
      Transform(USE='SmallBuilding')]),
    Transform(DEF='SmallBuilding-009',translation=(-101.759,19.0,-451.126),
      children=[
      Transform(USE='SmallBuilding')]),
    Transform(DEF='Ground',translation=(125.0,0.0,-360.0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(DEF='TEXAG_7',url=["originals/car/textures/grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/grass.jpg"]),
          textureTransform=TextureTransform(scale=(100.0,100.0))),
        geometry=IndexedFaceSet(coordIndex=[0,4,5,3,-1,4,6,12,16,7,5,-1,17,13,8,11,14,18,10,9,-1,6,8,13,12,-1,11,1,15,14,-1,17,9,7,16,-1,19,2,10,18,-1],solid=False,
          coord=Coordinate(point=[(-625.0,0.0,-500.0),(-625.0,0.0,500.0),(625.0,0.0,500.0),(625.0,0.0,-500.0),(-625.0,0.0,225.99),(625.0,0.0,225.99),(-625.194,0.0,303.572),(624.806,0.0,294.933),(-625.0,0.0,352.657),(625.0,0.0,352.657),(625.0,0.0,412.38),(-625.0,0.0,412.38),(-442.167,0.0,302.307),(-442.167,0.0,352.657),(-442.313,0.0,412.38),(-442.313,0.0,500.0),(449.668,0.0,296.143),(449.668,0.0,352.657),(449.828,0.0,412.38),(449.828,0.0,500.0)])))]),
    Transform(DEF='Sand',translation=(125.0,0.0,-360.0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(DEF='TEXAG_8',url=["originals/car/textures/sand2.jpg","https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/sand2.jpg"]),
          textureTransform=TextureTransform(rotation=1.57079,scale=(10.0,50.0))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,4,5,6,7,-1],solid=False,texCoordIndex=[0,1,2,3,-1,4,5,6,7,-1],
          coord=Coordinate(point=[(-442.313,0.0,500.0),(449.828,0.0,500.0),(449.828,0.0,412.38),(-442.313,0.0,412.38),(-442.167,0.0,352.657),(449.668,0.0,352.657),(449.668,0.0,296.143),(-442.167,0.0,302.307)]),
          texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(1.0,0.0982132),(0.0,0.0982132),(1.63647E-4,0.165157),(0.999821,0.165157),(0.999821,0.228503),(1.63647E-4,0.221594)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CarDemoWorldModel.py")
