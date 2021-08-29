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
    meta(content='Figure28_1AnchorViewpointsDungeon.x3d',name='title'),
    meta(content='Figure 28.1, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch28/28fig02.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='30 October 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A dungeon destination world. Click either anchored Cone to switch viewpoints. Anchor viewpoint DEF names are indicated by the url, similar to HTML bookmarks on a page.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter28Anchor/Figure28_1AnchorViewpointsDungeon.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure28_1AnchorViewpointsDungeon.x3d'),
    Viewpoint(description='Forward view',position=(0,1.6,5)),
    Viewpoint(DEF='RIGHT_CORNER_DEF_NAME',description='Right corner view',orientation=(0,1,0,0.611),position=(3.5,1.6,3.5)),
    Viewpoint(DEF='LEFT_CORNER_DEF_NAME',description='Left corner view',orientation=(0,1,0,-0.611),position=(-3.5,1.6,3.5)),
    NavigationInfo(avatarSize=[2,1,0.5],headlight=False,speed=2,type=["WALK","EXAMINE","ANY"]),
    Inline(url=["../Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.x3d","../Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.wrl"]),
    Anchor(description='Click for right corner viewpoint',url=["#RIGHT_CORNER_DEF_NAME"],
      children=[
      Transform(rotation=(-0.95,0.22,0.22,1.62),translation=(1.75,0.6,0.15),
        children=[
        Collision(enabled=False,
          children=[
          Shape(
            geometry=Cone(bottomRadius=0.1,height=0.5),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.4,0.8),emissiveColor=(0,0.1,0.2),shininess=0.4,specularColor=(0.8,0.8,0.8))))])])]),
    Anchor(description='Click for left corner viewpoint',url=["#LEFT_CORNER_DEF_NAME"],
      children=[
      Transform(rotation=(-0.95,-0.22,-0.22,1.62),translation=(-1.75,0.6,0.15),
        children=[
        Collision(enabled=False,
          children=[
          Shape(
            geometry=Cone(bottomRadius=0.1,height=0.5),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.8,0.4),emissiveColor=(0,0.2,0.1),shininess=0.4,specularColor=(0.8,0.8,0.8))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure28_1AnchorViewpointsDungeon.py")
