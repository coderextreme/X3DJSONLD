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
    component(level=1,name='DIS'),
    component(level=1,name='Geospatial'),
    meta(content='AutecOpArea.x3d',name='title'),
    meta(content='Operations area top-level scene for AUTEC range Andros Island Bahamas, used by the AUV Workbench to build scenarios using unmanned vehicles.',name='description'),
    meta(content='Don Brutzman, Terry Norbraten, Dale Tourtelotte',name='creator'),
    meta(content='29 May 2009',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/AutecOpArea.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  this scene is georeferenced 
    children=[
    Inline(url=["../../../SavageDefense/Locations/AUTEC/AUTEC.x3d","https://SavageDefense.nps.navy.mil/SavageDefense/Locations/AUTEC/AUTEC.x3d","../../../SavageDefense/Locations/AUTEC/AUTEC.wrl","https://SavageDefense.nps.navy.mil/SavageDefense/Locations/AUTEC/AUTEC.wrl"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AutecOpArea.py")
