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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='MineTrainingShape.x3d',name='title'),
    meta(content='U.S. Navy Mark VI static mine diplayed on the NPS campus.',name='description'),
    meta(content='Marlon Heron and Don Brutzman',name='creator'),
    meta(content='2 February 2015',name='created'),
    meta(content='14 February 2015',name='modified'),
    meta(content='Determine if this shape is used in any training minefields at sea.',name='TODO'),
    meta(content='http://en.wikipedia.org/wiki/Naval_mine',name='reference'),
    meta(content='MineTrainingShapeNpsPhoto.jpg',name='Image'),
    meta(content='Contact Mine, http://www.maritime.org/doc/minedisposal/p02ch2pg02.htm',name='reference'),
    meta(content='Mark 6 Mine, http://www.maritime.org/doc/minedisposal/p02ch2pg05.htm',name='reference'),
    meta(content='British Mines, http://www.navweaps.com/Weapons/WAMBR_Mines.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/UnderwaterMines/MineTrainingShape.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(1,1,1)]),
    Group(
      children=[
      Shape(DEF='MineBody',
        geometry=Sphere(radius=1.5),
        appearance=Appearance(
          material=Material(diffuseColor=(.1,.1,.1),transparency=.05)))]),
    Transform(DEF='CenterRing',rotation=(0,0,1,1.570796),translation=(0,1.59,0),
      children=[
      Shape(
        geometry=Cylinder(height=0.05,radius=0.1,side=False),
        appearance=Appearance(
          material=Material(diffuseColor=(.1,.1,.1)),
          texture=ImageTexture(DEF='MineTrainingShapeCenterRing',url=["MineTrainingShapeCenterRing.jpg","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/MineTrainingShapeCenterRing.jpg"]))),
      Shape(
        geometry=Cylinder(bottom=False,height=0.05,radius=0.1,solid=False,top=False),
        appearance=Appearance(
          material=Material(diffuseColor=(.1,.1,.1))))]),
    Group(
      children=[
      Transform(DEF='HertzHorn1',rotation=(0,0,1,-0.785398),translation=(0.85,1.25,0),
        children=[
        Shape(DEF='HertzHornShape',
          geometry=Cylinder(height=0.65,radius=0.1),
          appearance=Appearance(
            material=Material(diffuseColor=(.1,.1,.1))))]),
      Transform(DEF='HertzHorn2',rotation=(0,1,0,1.256637),
        children=[
        Transform(USE='HertzHorn1')]),
      Transform(DEF='HertzHorn3',rotation=(0,1,0,2.513274),
        children=[
        Transform(USE='HertzHorn1')]),
      Transform(DEF='HertzHorn4',rotation=(0,1,0,3.769911),
        children=[
        Transform(USE='HertzHorn1')]),
      Transform(DEF='HertzHorn5',rotation=(0,1,0,5.026548),
        children=[
        Transform(USE='HertzHorn1')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MineTrainingShape.py")
