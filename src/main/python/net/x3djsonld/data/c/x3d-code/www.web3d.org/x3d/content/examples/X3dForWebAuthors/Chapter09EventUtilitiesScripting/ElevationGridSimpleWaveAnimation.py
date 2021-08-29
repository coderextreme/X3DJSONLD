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
    meta(content='ElevationGridSimpleWaveAnimation.x3d',name='title'),
    meta(content='Simple Javascript animation of ElevationGrid',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='2 December 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='ElevationGridSimpleWaveAnimation.png',name='Image'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/ElevationGridSimpleWaveAnimation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ElevationGridSimpleWaveAnimation.x3d'),
    Viewpoint(description='Wave view',orientation=(1,0,0,-0.358771),position=(0,3,8)),
    Background(groundColor=[(1,1,1)],skyColor=[(1,1,1)]),
    #  Shift zero-based ElevationGrid to left, centering it 
    Transform(translation=(-4,0,0),
      children=[
      Shape(
        geometry=ElevationGrid(DEF='GridSurface',height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],solid=False,xDimension=9,zDimension=3),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.5,1))))]),
    TimeSensor(DEF='Clock',cycleInterval=5,loop=True),
    Script(DEF='WaveGenerationScript',
      field=[
      field(accessType='inputOnly',appinfo='provide value and trigger new computation',name='newInputValue',type='SFFloat'),
      field(accessType='outputOnly',appinfo='provide values to ElevationGrid',name='gridOutput',type='MFFloat'),
      field(accessType='initializeOnly',appinfo='wave variation',name='waveStep',type='SFTime',value=0.1)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='newInputValue',toNode='WaveGenerationScript'),
    ROUTE(fromField='gridOutput',fromNode='WaveGenerationScript',toField='set_height',toNode='GridSurface')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ElevationGridSimpleWaveAnimation.py")
