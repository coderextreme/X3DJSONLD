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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(level=1,name='DIS'),
    meta(content='PanamaCityOpArea.x3d',name='title'),
    meta(content='Operations area top-level scene for Panama City Florida, used by the AUV Workbench to build scenarios using unmanned vehicles.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='2 June 2007',name='created'),
    meta(content='3 September 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/PanamaCityOpArea.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(speed=100,type=["EXAMINE","FLY","WALK","ANY"]),
    Inline(DEF='Bathymetry',url=["../../Locations/PanamaCityFlorida/PanamaCity.x3d","https://savage.nps.edu/Savage/Locations/PanamaCityFlorida/PanamaCity.x3d","../../Locations/PanamaCityFlorida/PanamaCity.wrl","https://savage.nps.edu/Savage/Locations/PanamaCityFlorida/PanamaCity.wrl","../../AuvWorkbench/OperatingAreas/SavageArchiveNotAvailable.x3d","https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/SavageArchiveNotAvailable.x3d","../../AuvWorkbench/OperatingAreas/SavageArchiveNotAvailable.wrl","https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/SavageArchiveNotAvailable.wrl"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PanamaCityOpArea.py")
