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
    meta(content='SanDiegoOpArea.x3d',name='title'),
    meta(content='Operations area top-level scene for Monterey Bay California, used by the AUV Workbench to build scenarios using unmanned vehicles.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='15 September 2010',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/SanDiegoOpArea.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Note that the geoCoords must match the AUV Workbench c_geo.xml file in /configuration/template 
    children=[
    GeoLocation(geoCoords=(32.67,-117.23,0),
      geoOrigin=GeoOrigin(DEF='DEPRECATED',geoCoords=(32.67,-117.23,0.0)),
      #  <DirectionalLight ambientIntensity='0.1' direction='-3 -3 0'/> 
      #  the following scene is not geospatially referenced 
      children=[
      Inline(url=["../../../Savage/Locations/SanDiegoCalifornia/SanDiego.x3d","https://savage.nps.edu/Savage/Locations/SanDiegoCalifornia/SanDiego.x3d","../../../Savage/Locations/SanDiegoCalifornia/SanDiego.wrl","https://savage.nps.edu/Savage/Locations/SanDiegoCalifornia/SanDiego.wrl"])]),
    GeoViewpoint(DEF='OverheadViewpoint',description='San Diego Bay Operations Area',orientation=(-1,0,0,1.57),position=(32.67,-117.23,2000)),
    GeoViewpoint(DEF='IntermediateViewpoint',description='500m altitude',position=(32.67,-117.23,500)),
    GeoViewpoint(DEF='LowerViewpoint',description='250m altitude',position=(32.63,-117.22,250)),
    NavigationInfo(DEF='FastNI',speed=1000.0,type=["FLY","ANY"]),
    NavigationInfo(DEF='SlowNI',speed=100.0),
    ROUTE(fromField='isBound',fromNode='OverheadViewpoint',toField='set_bind',toNode='FastNI')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SanDiegoOpArea.py")
