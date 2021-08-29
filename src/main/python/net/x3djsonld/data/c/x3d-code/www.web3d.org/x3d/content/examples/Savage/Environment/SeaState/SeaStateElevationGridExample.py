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
    meta(content='SeaStateElevationGridExample.x3d',name='title'),
    meta(content='Sea State animation using ElevationGrid.',name='description'),
    meta(content='Don Brutzman, Marcus Simoes and MV3204 class',name='creator'),
    meta(content='25 May 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='unfinished, but in progress...',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Environment/SeaState/SeaStateElevationGridExample.x3d',name='identifier'),
    meta(content='SeaStateExtrusionExample.x3d',name='reference'),
    meta(content='sea state, MFFloat interpolator script',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='hello sea state',orientation=(1,0,0,-0.78),position=(0,5,5)),
    TimeSensor(DEF='WaveClock',cycleInterval=3,loop=True),
    #  WaveHeightCalculationScript 
    Script(DEF='MFFloatInterpolatorScript',
      field=[
      field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
      field(accessType='inputOutput',name='key',type='MFFloat'),
      field(accessType='inputOutput',name='keyValue',type='MFFloat'),
      field(accessType='outputOnly',name='value_changed',type='MFFloat')]),
    Shape(
      geometry=ElevationGrid(DEF='WaveGrid',height=[0,0,0,0,0,0,0,0,0],xDimension=3,zDimension=3),
      appearance=Appearance(
        material=Material(diffuseColor=(0,0.6,0.6)))),
    ROUTE(fromField='fraction_changed',fromNode='WaveClock',toField='set_fraction',toNode='MFFloatInterpolatorScript'),
    ROUTE(fromField='value_changed',fromNode='MFFloatInterpolatorScript',toField='set_height',toNode='WaveGrid')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaStateElevationGridExample.py")
