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
    meta(content='SphericalMineExample.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='26 June 2000',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Weapons/UnderwaterMines/SphericalMineExample.x3d',name='identifier'),
    meta(content='Example use of SphericalMine prototype.',name='description'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  shape X Y Z R H # grid indices 
    children=[
    ExternProtoDeclare(appinfo='Spherical floating mine moored to bottom',name='SphericalMine',url=["../../Weapons/UnderwaterMines/SphericalMinePrototype.x3d#SphericalMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/SphericalMinePrototype.x3d#SphericalMine","../../Weapons/UnderwaterMines/SphericalMinePrototype.wrl#SphericalMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/SphericalMinePrototype.wrl#SphericalMine"],
      field=[
      field(accessType='initializeOnly',appinfo='Description for each mine contact.',name='description',type='SFString'),
      field(accessType='inputOutput',appinfo='Mine color can be used to indicate status (found/unknown/disabled/) tactic etc.',name='color',type='SFColor'),
      field(accessType='inputOutput',appinfo='Location of mine center in local world coordinates.',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Scale factor to change spherical mine size default diameter = 1m.',name='scale',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Bounding box for collision detection of mine.',name='bboxCenter',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Top and bottom endpoints of line tether that anchors this mine to the bottom.',name='tetherPoints',type='MFVec3f'),
      field(accessType='outputOnly',appinfo='proximityIsActive can be used to activate information or interaction when the viewer nears the mine.',name='proximityIsActive',type='SFBool'),
      field(accessType='inputOutput',appinfo='proximitySize provides overall box dimensions for proximity; thus (10 10 10) yields approximate radius 5 to 7 meters.',name='proximitySize',type='SFVec3f')]),
    Viewpoint(description='Three mines',orientation=(0,1,0,2.5),position=(24,-15,-15)),
    ProtoInstance(name='SphericalMine',
      fieldValue=[
      fieldValue(name='description',value='Spherical Mine #1'),
      fieldValue(name='translation',value=(5,-20,15)),
      fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
    ProtoInstance(name='SphericalMine',
      fieldValue=[
      fieldValue(name='description',value='Spherical Mine 2'),
      fieldValue(name='translation',value=(5,-15,10)),
      fieldValue(name='tetherPoints',value=[(0,0,0),(0,-10,0)])]),
    ProtoInstance(name='SphericalMine',
      fieldValue=[
      fieldValue(name='description',value='Spherical Mine #3'),
      fieldValue(name='translation',value=(5,-10,5)),
      fieldValue(name='tetherPoints',value=[(0,0,0),(0,-15,0)])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SphericalMineExample.py")
