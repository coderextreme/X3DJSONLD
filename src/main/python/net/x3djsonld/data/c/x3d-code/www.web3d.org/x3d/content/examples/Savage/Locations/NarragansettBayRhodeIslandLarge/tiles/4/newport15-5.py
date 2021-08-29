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
    GeoLOD(center=(41.86339110810791,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-10.x3d'],child2Url=['../../tiles/5/newport30-11.x3d'],child3Url=['../../tiles/5/newport31-10.x3d'],child4Url=['../../tiles/5/newport31-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[115,115,120,124,122,130,149,161,162,163,159,149,145,146,136,125,122,113,113,99,91,93,116,118,116,120,120,131,153,171,171,170,163,151,145,143,136,124,117,110,108,101,99,98,126,119,120,122,126,131,148,165,178,167,150,133,122,137,142,127,113,113,103,113,111,111,133,128,125,119,121,126,139,157,155,139,126,112,114,111,115,115,112,110,111,108,122,125,142,137,133,127,123,123,142,145,127,117,108,108,108,108,108,108,108,110,109,120,131,130,148,147,134,125,131,141,140,115,114,116,115,108,108,108,108,114,121,121,127,127,116,116,149,133,132,122,126,131,124,119,115,118,118,116,120,128,126,124,126,132,119,111,109,107,115,114,108,111,117,110,109,115,115,114,116,127,134,144,136,131,123,114,110,99,82,79,104,109,112,106,103,103,108,121,120,108,113,120,131,141,134,133,119,101,99,87,80,81,93,102,114,109,112,104,112,140,135,108,95,109,128,124,127,125,104,94,88,91,94,96,97,115,120,129,132,127,126,119,127,104,92,96,101,108,114,93,91,94,90,91,94,95,94,111,125,138,143,132,118,112,116,105,98,92,91,92,93,93,95,93,85,86,92,89,92,107,119,139,142,145,129,116,116,113,97,106,95,89,86,89,91,92,95,87,81,85,92,105,123,134,144,139,138,135,120,116,123,92,92,87,85,88,93,92,107,89,88,98,92,107,125,128,129,127,129,124,107,109,121,100,91,86,86,89,95,97,97,86,88,94,102,115,126,121,112,112,111,98,102,99,101,104,94,90,93,105,89,100,101,91,93,99,106,111,113,110,105,103,96,87,84,98,83,95,92,93,110,116,120,107,108,100,94,93,114,112,110,103,102,97,89,92,82,82,82,89,90,89,97,119,120,118,114,107,92,92,117,112,105,99,99,94,89,86,87,82,82,93,92,81,89,96,107,96,88,99,93,87,117,104,102,100,107,103,99,90,82,82,89,87,81,88,88,81,76,81,77,89,89,99,105,104,111,117,114,111,98,82,82,82,88,96,92,88,87,80,74,76,85,88,93,101,102,105,112,118,114,112,98,82,82,82,88,96,93,90,88,82,74,74,86,87,94,100],
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
