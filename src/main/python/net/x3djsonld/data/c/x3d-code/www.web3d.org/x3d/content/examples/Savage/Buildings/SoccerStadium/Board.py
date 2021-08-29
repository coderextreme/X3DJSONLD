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
    meta(content='Board.x3d',name='title'),
    meta(content='Board showing score',name='description'),
    meta(content='LT Christos Kalogrias - Hellenic Navy',name='creator'),
    meta(content='19 September 2003',name='created'),
    meta(content='26 November 2015',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/SoccerStadium/Board.x3d',name='identifier'),
    meta(content='X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='BoardView',position=(0,0,4)),
    Transform(
      children=[
      Transform(DEF='Case',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Extrusion(crossSection=[(0.1,0.25),(0.1,-0.25),(-0.1,-0.25),(-0.1,0.25),(0.1,0.25)],spine=[(2,1,0),(2,-1,0),(-2,-1,0),(-2,1,0),(2,1,0)])),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.2,0.2))),
          geometry=Box(size=(4,2,0.05))),
        Transform(DEF='Leg',translation=(-1,-1.5,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=1,radius=0.1))]),
        Transform(translation=(2,0,0),
          children=[
          Transform(USE='Leg')])]),
      Transform(scale=(0.15,0.15,0.15),translation=(-1.5,0.5,0),
        children=[
        Inline(url=["../../../Basic/StudentProjects/WallClock.x3d","http://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallClock.x3d","../../../Basic/StudentProjects/WallClock.wrl","http://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallClock.wrl"])]),
      Transform(scale=(0.2,0.2,0.2),translation=(-0.6,0.6,0.1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9))),
          geometry=Text(string=["AEK FC - OLYMPIAKOS FC"])),
        Transform(translation=(0,-1.5,0.1),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.9))),
            geometry=Text(string=["4 0"],
              fontStyle=FontStyle(justify=["BEGIN","MIDDLE"],size=1.2)))]),
        Transform(translation=(0,-3,0.1),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.9))),
            geometry=Text(string=["12\' OKKAS"],
              fontStyle=FontStyle(justify=["BEGIN","MIDDLE"],size=0.6)))]),
        Transform(translation=(0,-3.8,0.1),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.9))),
            geometry=Text(string=["25\' LIMBEROPOYLOS"],
              fontStyle=FontStyle(justify=["BEGIN","MIDDLE"],size=0.6)))]),
        Transform(translation=(0,-4.6,0.1),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.9))),
            geometry=Text(string=["45\' OKKAS"],
              fontStyle=FontStyle(justify=["BEGIN","MIDDLE"],size=0.6)))]),
        Transform(translation=(0,-5.4,0.1),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.9))),
            geometry=Text(string=["58\' TSARTAS"],
              fontStyle=FontStyle(justify=["BEGIN","MIDDLE"],size=0.6)))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Board.py")
