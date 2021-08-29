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
    meta(content='Figure09_5FourStackingBlocksWithAxes.x3d',name='title'),
    meta(content='Figure 9.5, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch09/09fig05.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='9 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Four stacking blocks, select and drag to see each of them. Coordinate axes are superimposed to show X3D/VRML directions.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter09SensingViewer/Figure09_5FourStackingBlocksWithAxes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure09_5FourStackingBlocksWithAxes.x3d'),
    Viewpoint(description='Hello Cubes.',position=(0,0,15)),
    #  Dragging Orderly Cubes. Superfluous Group nodes removed. 
    Transform(DEF='BLOCK_1_TRANSFORM',
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(
          material=Material(diffuseColor=(.5,.5,.5),emissiveColor=(.5,0,0)))),
      PlaneSensor(DEF='BLOCK_1_SENSOR',description='Click and drag to move box',maxPosition=(3,3),minPosition=(-3,-3)),
      #  Note that we are connecting a translation (Vec3F) output to a translation (Vec3F) input in these ROUTEs. 
      ROUTE(fromField='translation_changed',fromNode='BLOCK_1_SENSOR',toField='set_translation',toNode='BLOCK_1_TRANSFORM')]),
    Transform(DEF='BLOCK_2_TRANSFORM',
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(
          material=Material(diffuseColor=(.5,.5,.5),emissiveColor=(0,.5,0)))),
      PlaneSensor(DEF='BLOCK_2_SENSOR',description='Click and drag to move box',maxPosition=(3,3),minPosition=(-3,-3),offset=(2.5,0,0)),
      ROUTE(fromField='translation_changed',fromNode='BLOCK_2_SENSOR',toField='set_translation',toNode='BLOCK_2_TRANSFORM')]),
    Transform(DEF='BLOCK_3_TRANSFORM',
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(
          material=Material(diffuseColor=(.5,.5,.5),emissiveColor=(0,0,.5)))),
      PlaneSensor(DEF='BLOCK_3_SENSOR',description='Click and drag to move box',maxPosition=(3,3),minPosition=(-3,-3),offset=(-1.5,-2,0)),
      ROUTE(fromField='translation_changed',fromNode='BLOCK_3_SENSOR',toField='set_translation',toNode='BLOCK_3_TRANSFORM')]),
    Transform(DEF='BLOCK_4_TRANSFORM',
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(
          material=Material(diffuseColor=(.5,.5,.5),emissiveColor=(.5,.5,0)))),
      PlaneSensor(DEF='BLOCK_4_SENSOR',description='Click and drag to move box',maxPosition=(3,3),minPosition=(-3,-3),offset=(.75,4,0)),
      ROUTE(fromField='translation_changed',fromNode='BLOCK_4_SENSOR',toField='set_translation',toNode='BLOCK_4_TRANSFORM')]),
    #  Adding this Inline reference to another scene superimposes X3D/VRML coordinate system axes. 
    Switch(DEF='Hider',whichChoice=0,
      children=[
      Transform(scale=(4,4,4),
        children=[
        Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure09_5FourStackingBlocksWithAxes.py")
