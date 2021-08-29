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
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoLOD(center=(41.839201031939915,-71.57136730636591,0.0),range=12301.135,child1Url=['../../tiles/4/newport14-4.x3d'],child2Url=['../../tiles/4/newport14-5.x3d'],child3Url=['../../tiles/4/newport15-4.x3d'],child4Url=['../../tiles/4/newport15-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[101,89,86,86,86,100,96,103,101,98,97,103,138,151,155,152,148,148,131,119,122,118,86,86,86,86,86,103,122,121,117,89,103,112,141,149,157,149,147,136,129,126,138,141,86,86,86,86,86,121,122,132,129,116,102,105,114,143,149,151,137,134,124,133,140,133,105,125,107,86,86,125,136,129,133,126,131,103,104,147,154,145,143,141,140,141,133,132,114,122,96,86,86,120,142,121,145,132,109,99,124,152,145,140,140,141,133,119,114,115,134,123,107,87,86,86,123,100,120,99,103,101,128,149,149,146,153,147,132,126,125,123,139,120,111,98,86,86,107,111,110,111,110,116,143,156,158,149,149,143,145,127,109,103,137,144,109,86,86,86,96,109,117,144,125,128,148,167,149,134,131,125,119,105,95,88,145,114,104,86,86,86,97,110,125,141,139,131,140,150,141,119,106,104,127,121,98,103,147,130,111,107,86,86,86,106,126,124,119,123,129,144,136,124,128,130,119,122,110,107,149,126,115,97,86,86,86,91,120,124,115,123,121,142,156,148,146,142,124,115,96,104,141,116,103,102,105,87,86,104,109,111,123,123,119,151,176,163,139,139,115,108,109,98,127,107,118,119,113,86,86,102,103,121,140,129,124,136,147,115,112,108,108,110,126,129,118,99,104,112,108,86,94,99,118,135,146,133,128,136,115,115,108,115,121,128,112,111,97,106,96,98,87,87,87,97,103,98,104,109,103,108,119,108,134,138,127,105,82,82,110,94,87,91,98,103,102,99,92,92,94,111,119,115,139,92,119,122,106,88,93,100,115,106,88,89,112,111,109,104,93,92,92,116,148,120,114,94,94,95,93,96,88,83,124,113,126,102,105,111,122,110,118,95,92,120,139,135,122,125,88,88,94,105,93,101,145,105,96,104,106,120,118,103,116,107,98,117,108,102,95,97,94,101,99,104,93,101,117,102,117,118,124,127,118,108,103,109,118,105,98,92,82,82,90,89,119,112,98,89,120,103,119,121,126,119,110,121,112,120,116,102,110,101,82,93,88,85,79,79,91,100,120,104,118,123,124,119,109,121,112,122,115,103,112,101,82,93,90,82,79,80,89,99],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
