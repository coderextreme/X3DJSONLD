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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport30-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[99,89,92,95,93,99,95,94,95,100,103,106,113,118,117,124,133,130,134,139,150,150,87,87,94,93,93,95,98,97,97,102,99,104,106,104,109,118,122,126,127,131,137,138,87,87,87,87,94,94,97,95,95,97,101,106,105,105,107,105,110,114,112,113,122,122,87,87,87,87,87,96,97,94,95,96,102,101,106,102,104,100,101,98,103,103,105,106,87,87,87,89,87,87,87,102,92,98,98,104,102,101,98,97,89,98,100,98,101,102,87,87,87,89,87,87,87,102,99,98,102,103,108,106,94,92,92,92,101,99,100,101,88,87,87,88,88,91,92,86,102,109,111,111,103,96,92,92,92,92,92,98,96,98,91,97,96,97,101,98,97,95,97,103,109,105,99,93,92,92,92,92,92,92,92,92,101,102,105,105,105,103,101,97,98,98,100,100,94,92,92,92,92,92,92,92,92,92,111,110,110,106,104,102,103,101,105,98,102,96,92,92,92,92,92,92,92,92,92,92,110,113,112,110,106,103,102,106,109,99,98,93,92,92,92,92,92,92,92,92,92,92,114,115,115,109,107,107,106,104,103,102,104,98,92,92,92,92,92,92,92,92,92,92,111,112,113,109,111,110,108,104,104,105,102,98,98,92,92,92,92,92,92,92,92,92,111,113,113,112,111,111,109,112,106,106,102,99,104,96,92,92,92,92,92,92,92,92,109,109,110,112,112,112,113,112,109,108,104,104,102,102,100,94,92,92,92,92,92,92,108,110,108,113,115,114,114,116,114,110,108,115,110,106,102,102,92,92,92,92,92,92,111,108,113,118,115,118,119,116,111,111,116,109,113,115,111,107,95,92,92,92,92,92,110,113,116,119,122,122,118,114,111,110,108,113,109,119,120,112,104,101,92,92,92,92,113,116,121,119,125,119,115,112,109,109,113,114,119,116,118,112,103,97,99,92,92,92,115,119,120,119,118,115,112,112,109,109,110,113,116,123,116,111,102,99,98,94,101,101,108,116,117,124,122,117,113,108,110,107,110,113,119,119,111,111,106,101,99,95,97,97,116,119,121,119,119,118,114,111,105,104,110,112,116,115,114,110,106,106,99,104,96,95,119,122,125,122,119,116,111,107,107,105,109,112,112,115,110,109,112,105,103,103,97,97,120,123,125,123,120,116,112,105,106,106,110,113,111,112,108,110,112,106,104,106,97,97],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
