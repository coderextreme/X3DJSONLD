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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='Pdm1BottomMineExample.x3d',name='title'),
    meta(content='Russian bottom mine triggered by tilt bar (whisker); example use of prototype.',name='description'),
    meta(content='Don Brutzman and Jeff Weekley, LAX Gate 65',name='creator'),
    meta(content='20 March 2001',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='Pdm1BottomMinePrototype.x3d',name='reference'),
    meta(content='Pdm1AssembledMine97cm.jpg',name='photo'),
    meta(content='Pdm1Fuse.jpg',name='photo'),
    meta(content='Pdm1FuseBoxLabel.jpg',name='photo'),
    meta(content='Pdm1MineBoxLabel.jpg',name='photo'),
    meta(content='Pdm1MineCaseAnchorFrame.jpg',name='photo'),
    meta(content='http://www.fas.org/man/dod-101/navy/docs/swos/cmd/miw/Sp6-4-1/sld065.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Pdm1BottomMineExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='PDM-1 underwater mine',name='Pdm1BottomMine',url=["Pdm1BottomMinePrototype.x3d#Pdm1BottomMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Pdm1BottomMinePrototype.x3d#Pdm1BottomMine","Pdm1BottomMinePrototype.wrl#Pdm1BottomMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Pdm1BottomMinePrototype.wrl#Pdm1BottomMine"],
      field=[
      field(accessType='inputOutput',appinfo='useful for classification',name='mineColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='customize to match each instance',name='viewpointDescription',type='SFString')]),
    Background(skyColor=[(0,0.3,1.0)]),
    ProtoInstance(name='Pdm1BottomMine',
      fieldValue=[
      fieldValue(name='mineColor',value=(0.4,0.3,0.1)),
      fieldValue(name='viewpointDescription',value='PDM-1 closeup 1.5m')]),
    Viewpoint(description='PDM-1 example',position=(0,0.5,5))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Pdm1BottomMineExample.py")
