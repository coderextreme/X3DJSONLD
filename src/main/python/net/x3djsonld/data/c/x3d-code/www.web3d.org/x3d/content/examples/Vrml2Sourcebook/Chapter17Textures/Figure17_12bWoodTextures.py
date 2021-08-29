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
    meta(content='Figure17_12bWoodTextures.x3d',name='title'),
    meta(content='Figure 17.12b, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch17/17fig12b.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='28 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Six different wood types created by coloring a grayscale wood texture.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/Figure17_12bWoodTextures.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure17_12bWoodTextures.x3d'),
    Viewpoint(description='Wood greyscale texture with different colors',position=(1.75,0,5)),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.35,0.23)),
          texture=ImageTexture(DEF='WOOD',url=["wood_g.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/wood_g.jpg"])),
        geometry=IndexedFaceSet(DEF='SQUARE',coordIndex=[0,1,2,3],
          coord=Coordinate(point=[(0,1,0),(0,0,0),(1.1,0,0),(1.1,1,0)]))),
      Transform(translation=(1.25,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.45,0.23)),
            texture=ImageTexture(USE='WOOD')),
          geometry=IndexedFaceSet(USE='SQUARE'))]),
      Transform(translation=(2.5,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.55,0.23)),
            texture=ImageTexture(USE='WOOD')),
          geometry=IndexedFaceSet(USE='SQUARE'))]),
      Transform(translation=(0,-1.25,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.65,0.53)),
            texture=ImageTexture(USE='WOOD')),
          geometry=IndexedFaceSet(USE='SQUARE'))]),
      Transform(translation=(1.25,-1.25,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.55,0.43)),
            texture=ImageTexture(USE='WOOD')),
          geometry=IndexedFaceSet(USE='SQUARE'))]),
      Transform(translation=(2.5,-1.25,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.55,0.53)),
            texture=ImageTexture(USE='WOOD')),
          geometry=IndexedFaceSet(USE='SQUARE'))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure17_12bWoodTextures.py")
