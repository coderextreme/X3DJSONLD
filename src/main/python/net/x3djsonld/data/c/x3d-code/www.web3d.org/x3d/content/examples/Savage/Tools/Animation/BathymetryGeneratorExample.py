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
    meta(content='BathymetryGeneratorExample.x3d',name='title'),
    meta(content='Example scene of the BathymetryGenerator prototype.',name='description'),
    meta(content='Jane Wu',name='creator'),
    meta(content='12 February 2002',name='created'),
    meta(content='22 February 2010',name='modified'),
    meta(content='bathymetry generator',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/BathymetryGeneratorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='BathymetryGenerator',url=["BathymetryGeneratorPrototype.x3d#BathymetryGenerator","https://savage.nps.edu/Savage/Tools/Animation/BathymetryGeneratorPrototype.x3d#BathymetryGenerator","BathymetryGeneratorPrototype.wrl#BathymetryGenerator","https://savage.nps.edu/Savage/Tools/Animation/BathymetryGeneratorPrototype.wrl#BathymetryGenerator"],
      field=[
      field(accessType='initializeOnly',name='positionArray',type='MFVec3f'),
      field(accessType='initializeOnly',name='colorSchemeDepthRangeArray',type='MFVec2f'),
      field(accessType='initializeOnly',name='colorSchemeColorArray',type='MFColor'),
      field(accessType='initializeOnly',name='beamWidth',type='SFFloat'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    Viewpoint(description='MainView',position=(0,-50,200)),
    ProtoInstance(name='BathymetryGenerator',
      fieldValue=[
      fieldValue(name='positionArray',value=[(0,0,0),(10,-4,0),(25,-6,0),(30,-8,5),(38,-15,5),(45,-18,5),(55,-22,5),(60,-25,15),(60,-27,22),(55,-30,35),(48,-35,35),(35,-35,35),(25,-45,35),(20,-55,35),(15,-70,35),(3,-70,35),(-5,-72,40),(-5,-75,50),(0,-80,55),(15,-75,55),(30,-70,55),(35,-60,55),(40,-50,55),(50,-34,55),(65,-23,70)]),
      fieldValue(name='traceEnabled',value=True)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BathymetryGeneratorExample.py")
