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
    meta(content='MinefieldSearchBackground.x3d',name='title'),
    meta(content='Unchanging portions of background environment used to build a 4-AUV minefield search scene.',name='description'),
    meta(content='Don Brutzman, Arlene Guest and UW3303 class',name='creator'),
    meta(content='26 May 2004',name='created'),
    meta(content='22 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UW3303MinefieldSearch/MinefieldSearchBackground.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  ====================================== 
    children=[
    ExternProtoDeclare(appinfo='Circular set of compass bearings that follow the active viewpoint set at 360/36 = 10 degree intervals. North = +X axis East = +Z axis up = +Y axis.',name='CameraCompass36',url=["../../Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass36","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass36","../../Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass36","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass36"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f'),
      field(accessType='inputOutput',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',name='labelColor',type='SFColor')]),
    #  ====================================== 
    #  Main scene begins here 
    WorldInfo(title='UW3303 Minefield Search'),
    Group(DEF='EnvironmentGroup',
      children=[
      Background(groundAngle=[0.1,1.309,1.570796],groundColor=[(0,0,0),(0,0.1,0.3),(0,0.2,0.5),(0,0.3,0.8)],skyAngle=[0.1,0.15,1.309,1.571],skyColor=[(0.4,0.4,0.1),(0.4,0.4,0.1),(0,0.1,0.3),(0,0.2,0.6),(0.8,0.8,0.8)]),
      ProtoInstance(name='CameraCompass36',
        fieldValue=[
        fieldValue(name='enabled',value=True),
        fieldValue(name='positionOffsetFromCamera',value=(0,0.8,0)),
        fieldValue(name='markerColor',value=(0.9,0.9,0.9)),
        fieldValue(name='labelColor',value=(0.9,0.9,0.9))]),
      Inline(DEF='CoordinateAxes',url=["../../../Savage/Tools/Authoring/CoordinateAxes.x3d","../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"])]
      #  Grid showing boxes 
      #  Sea Surface 
      #  Bathymetry (assume constant -20), likely including adjacent land 
      )])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MinefieldSearchBackground.py")
