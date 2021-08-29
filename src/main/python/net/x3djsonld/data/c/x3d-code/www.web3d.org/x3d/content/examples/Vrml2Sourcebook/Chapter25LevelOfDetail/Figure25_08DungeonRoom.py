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
    meta(content='Figure25_08DungeonRoom.x3d',name='title'),
    meta(content='Figure 25.8, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch25/25fig08.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='3 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A dungeon room.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_08DungeonRoom.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure25_08DungeonRoom.x3d'),
    Viewpoint(description='Dungeon room',position=(0,2,10)),
    NavigationInfo(headlight=False),
    PointLight(color=(0.6,0.6,0.3)),
    Group(
      children=[
      Transform(translation=(0,0,2.5),
        children=[
        Inline(DEF='Floor',url=["Figure25_06DungeonRoomFloor.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_06DungeonRoomFloor.x3d","Figure25_06DungeonRoomFloor.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_06DungeonRoomFloor.wrl"])]),
      Transform(translation=(0,0,-2.5),
        children=[
        Inline(USE='Floor')]),
      Transform(translation=(0,3.5,2.5),
        children=[
        Inline(USE='Floor')]),
      Transform(translation=(0,3.5,-2.5),
        children=[
        Inline(USE='Floor')]),
      Transform(translation=(-5,0,0),
        children=[
        Transform(translation=(0,0,2.5),
          children=[
          Inline(DEF='Wall',url=["Figure25_07DungeonRoomWall.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_07DungeonRoomWall.x3d","Figure25_07DungeonRoomWall.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_07DungeonRoomWall.wrl"])]),
        Transform(translation=(0,0,-2.5),
          children=[
          Inline(USE='Wall')]),
        Transform(rotation=(0,1,0,1.57),translation=(0,2.25,0),
          children=[
          PointLight(ambientIntensity=0.4,attenuation=(0,0.6,0),color=(1,0.4,0.2),intensity=0.8,location=(0,0.25,0.2),radius=10),
          Inline(DEF='Torch',url=["Figure25_05ThreeTorchesSingleLOD.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_05ThreeTorchesSingleLOD.x3d","Figure25_05ThreeTorchesSingleLOD.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_05ThreeTorchesSingleLOD.wrl"])])]),
      Transform(translation=(5,0,0),
        children=[
        Transform(translation=(0,0,2.5),
          children=[
          Inline(USE='Wall')]),
        Transform(translation=(0,0,-2.5),
          children=[
          Inline(USE='Wall')]),
        Transform(rotation=(0,1,0,-1.57),translation=(0,2.25,0),
          children=[
          PointLight(ambientIntensity=0.4,attenuation=(0,0.6,0),color=(1,0.4,0.2),intensity=0.8,location=(0,0.25,0.2),radius=10),
          Inline(USE='Torch')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure25_08DungeonRoom.py")
