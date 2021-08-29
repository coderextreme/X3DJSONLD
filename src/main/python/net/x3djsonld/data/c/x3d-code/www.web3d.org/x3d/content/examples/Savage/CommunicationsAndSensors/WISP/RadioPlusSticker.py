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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='RadioPlusSticker.x3d',name='title'),
    meta(content='A smartbridges radio box, produced as a MV4204 class project. Total height 6 inches.',name='description'),
    meta(content='Mark Sullivan',name='creator'),
    meta(content='6 August 2003',name='created'),
    meta(content='3 October 2015',name='modified'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/WISP/RadioPlusSticker.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='RadioPlusSticker',position=(0,0,1)),
    Group(
      children=[
      Transform(DEF='RadioBox',
        children=[
        Shape(
          appearance=Appearance(),
          geometry=Box(size=(.15,.15,.02)))]),
      Transform(DEF='StickerforRadioFace',translation=(0,0,.01),
        children=[
        Shape(
          appearance=Appearance(
            #  Sticker for front of radio 
            texture=ImageTexture(url=["aPPO.gif","https://savage.nps.edu/Savage/CommunicationsAndSensors/WISP/aPPO.gif"])),
          geometry=IndexedFaceSet(DEF='RadioSticker',coordIndex=[3,2,1,0],solid=False,texCoordIndex=[0,1,2,3],
            coord=Coordinate(point=[(-.075,-.075,.001),(-.075,.075,.001),(.075,.075,.001),(.075,-.075,.001)]),
            texCoord=TextureCoordinate(point=[(1,0),(1,1),(0,1),(0,0)])))]),
      Transform(translation=(.028,-.082,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.6,.6,.6))),
          geometry=Cylinder(height=.015,radius=.012))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RadioPlusSticker.py")
