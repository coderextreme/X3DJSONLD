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
        texture=ImageTexture(url=['../../images/5/newport14-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[38,34,36,41,41,43,47,50,53,55,57,62,68,70,69,67,65,64,59,55,48,47,44,44,41,41,42,46,48,46,45,50,55,61,66,68,66,63,64,60,54,50,47,47,49,45,43,43,43,44,44,45,47,49,54,57,57,59,64,62,57,55,52,45,40,40,58,52,46,41,43,44,44,45,47,50,52,52,56,58,58,59,55,51,47,40,37,37,62,60,53,47,43,44,46,44,43,48,52,53,55,56,56,53,49,45,40,40,40,40,64,60,53,48,44,44,45,45,47,47,51,54,54,55,54,53,48,44,41,41,42,42,63,56,53,49,45,40,40,43,46,47,52,53,51,51,51,50,46,41,38,44,46,45,63,62,55,47,44,43,45,44,46,49,51,52,52,51,50,47,43,41,46,50,52,52,65,61,57,50,44,42,42,46,48,52,54,53,53,53,51,47,44,46,51,51,54,55,68,61,55,54,47,44,48,49,49,52,52,53,53,52,52,47,48,49,51,56,59,59,65,59,57,53,51,51,49,47,48,52,53,52,52,48,46,47,53,56,57,60,60,60,64,57,56,52,54,51,46,47,49,52,54,53,52,49,47,52,56,59,58,58,60,59,61,58,54,54,52,49,48,47,50,50,51,53,52,50,50,52,53,57,61,57,53,53,62,57,55,52,49,49,47,48,47,48,51,50,49,45,48,54,58,60,64,58,54,53,62,60,59,56,53,47,45,48,49,51,52,50,48,47,47,49,51,52,52,54,55,55,61,64,61,59,55,52,49,49,48,50,49,51,50,50,51,51,53,55,58,60,60,59,62,60,64,59,56,53,51,50,50,53,53,56,58,58,58,59,67,69,71,67,67,67,63,58,61,60,56,56,56,55,58,61,60,60,63,66,68,71,77,79,79,78,73,73,62,62,59,57,53,56,60,61,63,66,71,70,73,75,77,83,85,88,87,85,83,83,65,65,64,59,57,57,60,64,71,74,75,75,79,83,87,92,90,92,94,93,92,93,66,68,66,60,61,60,62,68,71,77,79,81,84,91,96,97,93,98,98,99,100,100,66,67,66,63,60,59,62,68,74,77,82,84,89,95,100,98,100,105,105,108,108,107,67,67,65,64,61,64,67,72,77,77,81,85,92,98,102,102,105,110,113,116,114,113,67,68,65,64,61,64,67,72,77,76,81,85,93,99,102,103,106,110,114,117,116,115],
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
