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
    meta(content='Figure28_2AnchorLoadAnotherWorld.x3d',name='title'),
    meta(content='Figure 28.2, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch28/28fig02.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='6 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Anchor parameter/target demonstrations: click left text to load another scene in the same window, or click right text to load another scene in a new window.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter28Anchor/Figure28_2AnchorLoadAnotherWorld.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure28_2AnchorLoadAnotherWorld.x3d'),
    Viewpoint(description='Forward view',position=(0,1.6,5)),
    Viewpoint(DEF='RIGHT_CORNER_DEF_NAME',description='Right corner view',orientation=(0,1,0,0.611),position=(3.5,1.6,3.5)),
    Viewpoint(DEF='LEFT_CORNER_DEF_NAME',description='Left corner view',orientation=(0,1,0,-0.611),position=(-3.5,1.6,3.5)),
    NavigationInfo(avatarSize=[2,1,0.5],headlight=False,speed=2,type=["EXAMINE","WALK","ANY"]),
    Inline(url=["../Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.x3d","../Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.wrl"]),
    Anchor(description='Replace this scene by loading a new world',url=["../../Basic/course/HelloX3dAuthors.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/HelloX3dAuthors.x3d","../../Basic/course/HelloX3dAuthors.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/HelloX3dAuthors.wrl"],
      children=[
      Transform(translation=(-1.75,0.6,0.15),
        children=[
        Collision(enabled=False,
          children=[
          Shape(
            geometry=Text(string=["Click for","new world in","same window"],
              fontStyle=FontStyle(DEF='TextFontStyle',justify=["MIDDLE","MIDDLE"],size=0.2)),
            appearance=Appearance(DEF='TextAppearance',
              material=Material(diffuseColor=(0.1,0.8,0.8),emissiveColor=(0,0.4,0.4),shininess=0.4,specularColor=(0.8,0.8,0.8)))),
          Transform(DEF='BackingBoxForText',translation=(0,-0.175,-0.1),
            children=[
            Shape(
              geometry=Box(size=(1.2,0.75,0.02)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.9,0.9,0.9),emissiveColor=(0.9,0.9,0.9))))])])])]),
    #  Anchor parameter target=_blank launches browser results into a new window 
    Anchor(description='Pop up a new world in a different window',parameter=["target=_blank"],url=["../../Basic/course/HelloX3dAuthors.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/HelloX3dAuthors.x3d","../../Basic/course/HelloX3dAuthors.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/HelloX3dAuthors.wrl"],
      children=[
      Transform(translation=(1.75,0.6,0.15),
        children=[
        Collision(enabled=False,
          children=[
          Shape(
            geometry=Text(string=["Click for","new world in","new window"],
              fontStyle=FontStyle(USE='TextFontStyle')),
            appearance=Appearance(USE='TextAppearance')),
          Transform(USE='BackingBoxForText')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure28_2AnchorLoadAnotherWorld.py")
