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
    meta(content='Hut.x3d',name='title'),
    meta(content='Hut for the playground - look around or rest here if you want.',name='description'),
    meta(content='Kok Keng Ng',name='creator'),
    meta(content='20 September 2002',name='created'),
    meta(content='3 June 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/Hut.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Hut view',orientation=(0,1,0,1.575),position=(1.5,0.5,-2)),
    Transform(scale=(0.5,0.5,0.5),translation=(0,0,0.25),
      children=[
      Group(DEF='HUTRoof',
        children=[
        Transform(DEF='roof1',center=(0,4,0),rotation=(1,0,0,1),scale=(1,1,0.01),translation=(0,3.5,-3.35),
          children=[
          Shape(DEF='ROOFPart1',
            geometry=Cone(bottomRadius=4.5,height=5.25),
            appearance=Appearance(DEF='ROOFApp',
              material=Material(diffuseColor=(1,0.2,0.2)),
              texture=ImageTexture(DEF='wood',url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/PlayGround/wood.jpg"])))]),
        Transform(DEF='ROOFPart2',center=(0,4,-9),rotation=(1,0,0,-1),scale=(1,1,0.02),translation=(0,3.4,3.25),
          children=[
          Shape(USE='ROOFPart1')]),
        Transform(DEF='ROOFPart3',center=(0,4,0),rotation=(0,0,1,-1),scale=(0.02,1,1),translation=(1.2,3.5,-4.5),
          children=[
          Shape(USE='ROOFPart1')]),
        Transform(DEF='ROOFPart4',center=(0,4,0),rotation=(0,0,1,1),scale=(0.02,1,1),translation=(-1.2,3.5,-4.5),
          children=[
          Shape(USE='ROOFPart1')])])]),
    Transform(
      children=[
      Group(DEF='HUTPillars',
        children=[
        Transform(translation=(-2,0,0),
          children=[
          Shape(DEF='PILLAR',
            geometry=Box(size=(0.2,4,0.2)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.6,0)),
              texture=ImageTexture(USE='wood')))]),
        Transform(translation=(2,0,0),
          children=[
          Shape(USE='PILLAR')]),
        Transform(translation=(-2,0,-4),
          children=[
          Shape(USE='PILLAR')]),
        Transform(translation=(2,0,-4),
          children=[
          Shape(USE='PILLAR')])])]),
    Transform(
      children=[
      Group(DEF='HUTPanel',
        children=[
        Transform(translation=(-1.5,-0.5,0),
          children=[
          Shape(DEF='HUTBar',
            geometry=Box(size=(0.8,1,0.1)),
            appearance=Appearance(DEF='WOOD2App',
              texture=ImageTexture(USE='wood'),
              material=Material(diffuseColor=(0.9,0.7,0.3))))]),
        Transform(translation=(-0.5,-.5,0),
          children=[
          Shape(USE='HUTBar')]),
        Transform(translation=(0.5,-0.5,0),
          children=[
          Shape(USE='HUTBar')]),
        Transform(translation=(1.5,-0.5,0),
          children=[
          Shape(USE='HUTBar')]),
        Transform(
          children=[
          Shape(DEF='HUTBar2',
            appearance=Appearance(USE='WOOD2App'),
            geometry=Box(size=(3.8,0.2,0.2)))]),
        Transform(translation=(0,-1.1,0),
          children=[
          Shape(USE='HUTBar2')]),
        Transform(),
        Transform(),])]),
    Transform(rotation=(0,1,0,1.575),translation=(2,0,-2),
      children=[
      Group(USE='HUTPanel')]),
    Transform(translation=(0,0,-4),
      children=[
      Group(USE='HUTPanel')]),
    Transform(
      children=[
      Group(DEF='HUTFloor',
        children=[
        Transform(translation=(0,-1.1,-0.6),
          children=[
          Shape(DEF='HURFloorPanel',
            geometry=Box(size=(3.8,0.1,0.9)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.2)),
              texture=ImageTexture(USE='wood')))]),
        Transform(translation=(0,-1.1,-1.55),
          children=[
          Shape(USE='HURFloorPanel')]),
        Transform(translation=(0,-1.1,-2.5),
          children=[
          Shape(USE='HURFloorPanel')]),
        Transform(translation=(0,-1.1,-3.45),
          children=[
          Shape(USE='HURFloorPanel')]),
        Transform(),
        Transform(),])]),
    Transform(rotation=(0,1,0,1.575),translation=(-2,-1.1,-2),
      children=[
      Shape(USE='HUTBar2')]),
    Transform(rotation=(0,1,0,1.575),scale=(0.3,1,1),translation=(-2,0,-0.675),
      children=[
      Shape(USE='HUTBar2')]),
    Transform(rotation=(0,1,0,1.575),scale=(0.33,1,1),translation=(-2,0,-3.275),
      children=[
      Shape(USE='HUTBar2')]),
    Transform(rotation=(0,0,1,1.575),scale=(0.33,1,1),translation=(-2.0,-0.525,-2.55),
      children=[
      Shape(USE='HUTBar2')]),
    Transform(rotation=(0,0,1,1.575),scale=(0.33,1,1),translation=(-2.0,-0.525,-1.35),
      children=[
      Shape(USE='HUTBar2')]),
    Transform(),
    Transform(),
    Transform(),])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Hut.py")
