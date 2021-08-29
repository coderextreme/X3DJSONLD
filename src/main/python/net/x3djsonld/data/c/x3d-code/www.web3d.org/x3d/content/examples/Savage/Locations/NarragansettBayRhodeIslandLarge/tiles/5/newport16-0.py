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
        texture=ImageTexture(url=['../../images/5/newport16-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[95,103,110,113,111,116,120,119,116,114,109,100,92,82,77,72,71,71,74,79,78,78,92,98,103,107,109,113,115,115,114,109,104,99,93,87,81,78,75,75,75,74,76,75,94,96,101,104,106,109,110,112,110,107,105,104,100,95,90,86,81,78,78,78,76,75,104,102,100,102,105,108,108,112,111,109,110,108,105,100,97,92,87,84,80,82,80,79,108,106,104,108,110,111,114,113,111,115,114,111,104,99,100,96,91,89,89,87,87,87,109,110,112,112,114,112,112,116,116,112,113,109,103,101,102,102,101,99,95,93,91,91,113,111,112,112,113,112,109,112,115,112,108,106,108,107,107,106,106,104,104,101,101,100,116,114,113,112,105,108,106,102,102,107,108,110,110,115,112,107,108,107,108,107,108,108,109,113,113,111,106,106,103,95,100,106,108,110,109,106,102,107,110,112,111,109,109,109,110,109,105,104,101,100,104,105,99,102,102,108,111,104,100,96,97,102,102,103,103,103,117,109,103,98,98,99,98,102,104,103,100,104,106,106,102,99,101,96,100,104,105,106,120,114,108,105,105,102,100,97,98,97,99,101,104,105,104,101,98,100,99,104,108,109,113,114,114,113,113,107,104,98,97,93,97,97,97,100,103,101,97,96,97,100,105,105,117,117,117,120,118,112,106,104,101,100,97,95,93,96,98,100,98,96,97,96,104,106,111,112,114,115,116,117,112,108,104,102,95,92,92,92,92,92,96,99,100,98,98,100,109,107,110,105,110,112,114,115,110,108,104,92,92,92,92,92,92,97,97,93,93,95,107,107,110,103,97,107,112,112,112,109,107,101,92,92,92,92,92,92,92,92,92,93,109,111,107,103,97,97,107,113,111,106,100,92,96,98,92,92,92,92,92,92,92,92,110,104,97,103,97,97,97,100,105,103,92,95,100,104,104,100,93,92,92,92,92,92,109,98,97,97,97,97,97,97,97,97,96,100,103,105,107,102,98,92,92,92,92,92,98,101,97,97,97,97,97,97,97,97,97,98,101,105,106,107,100,93,92,92,92,92,97,96,97,97,97,97,97,97,97,97,97,97,103,106,109,109,107,105,99,92,92,92,98,97,97,97,97,97,97,97,97,97,97,98,105,109,111,109,107,107,105,101,98,97,98,97,97,97,97,97,97,97,97,97,97,98,105,109,112,109,108,107,105,101,99,99],
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
