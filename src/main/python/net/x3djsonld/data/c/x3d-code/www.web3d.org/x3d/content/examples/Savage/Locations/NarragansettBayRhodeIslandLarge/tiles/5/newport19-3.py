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
        texture=ImageTexture(url=['../../images/5/newport19-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[48,44,38,39,38,38,39,40,43,43,42,45,48,57,74,85,100,112,119,127,131,132,39,40,39,40,38,37,44,43,44,41,43,44,51,59,72,90,104,109,112,126,131,130,40,40,40,40,41,42,38,42,42,45,46,46,53,58,72,86,98,107,115,125,124,123,42,40,43,43,42,39,40,42,43,53,49,51,56,61,70,83,97,106,115,123,121,119,53,52,50,44,41,40,40,42,44,46,45,52,61,76,74,82,90,99,112,115,113,112,57,56,53,49,48,48,49,43,39,44,51,51,56,66,71,80,88,101,108,112,111,110,61,63,56,52,51,52,47,44,43,45,50,49,53,66,66,75,82,98,101,96,93,92,59,59,59,57,55,49,43,45,49,50,51,50,50,55,66,76,77,89,83,83,85,85,53,57,55,50,45,47,50,53,57,52,50,54,56,58,66,68,70,75,78,81,82,82,55,50,45,47,45,46,46,45,51,50,52,62,71,73,78,76,76,70,80,77,79,78,58,55,51,50,48,46,43,45,46,48,63,69,71,77,78,76,79,76,75,81,80,80,57,51,48,42,43,42,44,47,45,54,58,63,69,76,79,80,79,78,76,78,89,91,48,41,43,43,44,45,46,44,48,56,56,68,74,72,72,78,78,77,71,77,81,83,46,42,43,47,45,49,47,45,50,54,60,64,66,67,67,76,75,70,72,75,82,84,45,47,50,49,50,50,49,47,48,51,61,62,67,66,78,69,72,72,75,76,82,85,54,53,52,50,56,56,53,51,49,52,61,60,61,69,68,67,72,76,74,75,86,88,54,58,59,60,57,57,57,54,50,52,57,60,66,65,65,66,66,71,75,82,90,91,58,60,61,61,59,54,54,55,53,56,57,59,57,58,59,62,65,71,75,86,89,90,62,61,62,61,57,58,57,53,50,52,60,54,55,56,58,57,63,65,71,83,91,94,60,61,62,60,55,59,51,52,55,56,54,58,59,61,61,67,64,69,71,75,85,86,63,66,63,61,58,56,51,49,57,59,60,62,65,67,70,71,71,71,76,73,90,93,65,64,62,62,61,50,53,52,60,64,65,70,69,70,68,71,73,77,76,73,86,88,66,66,60,56,53,53,52,54,63,69,70,73,74,68,72,78,77,83,81,79,86,88,68,64,61,58,52,51,52,56,64,69,70,72,73,69,73,80,77,84,82,79,86,88],
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
