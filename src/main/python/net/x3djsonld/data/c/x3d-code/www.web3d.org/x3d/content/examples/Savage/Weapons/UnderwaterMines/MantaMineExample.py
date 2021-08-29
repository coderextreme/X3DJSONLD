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
    meta(content='MantaMineExample.x3d',name='title'),
    meta(content='Example instance: Italian Manta bottom mine, with truncated cone and handling padeyes.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='15 October 2001',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Weapons/UnderwaterMines/MantaMineExample.x3d',name='identifier'),
    meta(content='MantaInert.jpg',name='photo'),
    meta(content='minelocator.jpg',name='photo'),
    meta(content='Mine1.jpg',name='photo'),
    meta(content='Mine2.jpg',name='photo'),
    meta(content='img055.gif',name='photo'),
    meta(content='http://www.cisatlantic.com/trimix/strike/minelocator.jpg',name='photo'),
    meta(content='http://www.cisatlantic.com/trimix/strike/Mine1.jpg',name='photo'),
    meta(content='http://www.cisatlantic.com/trimix/strike/Mine2.jpg',name='photo'),
    meta(content='http://www.fas.org/man/dod-101/navy/docs/swos/cmd/miw/Sp6-4-1/img055.gif',name='photo'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Manta underwater mine',name='MantaMine',url=["MantaMinePrototype.x3d#MantaMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/MantaMinePrototype.x3d#MantaMine","MantaMinePrototype.wrl#MantaMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/MantaMinePrototype.wrl#MantaMine"],
      field=[
      field(accessType='inputOutput',appinfo='useful for visual classification',name='MineColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='describe each instance',name='viewpointDescription',type='SFString')]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,0.2,0.4),(0.05,0.25,0.6),(0.1,0.2,0.4)],skyAngle=[1.309,1.571],skyColor=[(0.1,0.1,0.4),(0.1,0.125,0.4),(0.1,0.1,0.3)]),
    ProtoInstance(name='MantaMine',
      fieldValue=[
      fieldValue(name='viewpointDescription',value='Manta mine 10m')]),
    Viewpoint(description='Manta mine 50m (LOD breakpoint)',position=(0,0,50)),
    Viewpoint(description='Manta mine 99m (LOD breakpoint 100m)',position=(0,0,99)),
    Viewpoint(description='Manta mine 999m (LOD breakpoint 1000m hides internal viewpoints)',position=(0,0,999))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MantaMineExample.py")
