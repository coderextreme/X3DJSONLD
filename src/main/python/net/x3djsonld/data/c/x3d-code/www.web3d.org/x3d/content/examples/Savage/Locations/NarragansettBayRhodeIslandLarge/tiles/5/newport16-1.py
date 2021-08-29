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
        texture=ImageTexture(url=['../../images/5/newport16-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[78,76,72,69,67,70,67,64,61,55,52,48,45,39,38,40,40,39,40,38,42,44,75,73,72,69,66,64,61,62,59,54,47,45,48,49,48,46,44,42,41,42,46,47,75,72,71,69,66,65,62,59,55,54,52,51,52,51,49,47,46,49,45,47,48,48,79,77,73,68,67,62,61,61,56,52,49,50,53,55,52,51,49,48,48,49,50,50,87,85,78,72,69,66,62,60,53,50,51,52,51,51,53,54,56,55,51,46,51,53,91,89,84,81,79,75,71,65,62,56,52,54,55,52,57,56,59,55,54,52,58,59,100,97,96,89,85,86,81,75,71,68,69,71,72,66,64,62,58,56,53,59,54,54,108,106,104,101,96,90,89,88,85,80,82,78,74,70,66,62,62,56,57,58,58,59,109,108,107,105,101,98,96,95,95,91,83,78,77,77,72,69,64,62,57,58,73,73,103,104,104,103,103,100,96,91,89,91,88,85,82,78,73,67,66,65,63,62,62,63,106,110,112,112,112,105,102,98,95,90,88,85,80,74,71,68,68,62,62,62,63,63,109,111,115,116,112,109,104,96,93,88,89,86,77,73,68,67,62,62,62,62,63,65,105,111,119,121,119,117,111,103,95,90,84,79,73,64,63,64,62,62,62,62,62,64,106,113,117,122,123,119,112,107,104,97,88,75,67,62,61,62,62,62,62,62,70,72,100,108,114,123,126,122,118,110,104,99,87,66,62,62,63,62,62,62,62,62,61,63,95,106,114,117,117,114,114,112,106,100,92,88,81,71,63,63,63,62,62,63,71,71,93,101,109,114,118,115,110,111,107,104,103,99,86,75,63,63,63,64,65,71,78,79,92,98,108,112,109,111,109,111,110,105,99,90,78,72,70,69,68,73,77,83,83,83,92,95,102,105,109,109,106,105,106,104,95,88,83,80,77,73,72,76,85,84,85,85,92,92,94,97,99,104,105,103,102,96,94,91,89,83,75,75,78,81,87,90,81,81,92,92,92,92,92,96,99,98,96,95,88,89,86,87,82,80,82,85,88,86,84,83,92,92,92,92,92,93,96,96,94,88,86,84,85,84,85,84,84,84,83,81,78,77,97,93,92,92,92,92,92,90,88,84,82,81,83,81,83,84,84,84,78,76,71,70,99,95,92,92,92,92,92,90,87,83,81,81,82,81,83,84,84,82,75,76,70,69],
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
