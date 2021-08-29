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
        texture=ImageTexture(url=['../../images/5/newport25-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[84,89,87,87,83,79,72,70,69,70,71,75,80,82,82,81,80,79,76,71,64,63,80,84,84,85,77,73,71,70,69,72,73,75,79,80,79,79,78,76,72,64,59,58,78,75,76,77,75,72,71,70,70,72,74,75,76,77,77,77,75,73,68,61,54,53,75,73,75,75,71,71,70,70,72,74,75,75,75,75,75,74,73,70,65,57,48,46,72,73,75,71,69,70,70,69,72,73,74,74,74,74,73,71,69,66,59,49,38,37,75,75,69,64,64,68,68,68,74,73,73,73,73,73,70,68,65,62,52,38,37,37,69,69,64,59,59,63,65,68,71,72,72,72,72,70,66,62,61,55,44,37,39,39,61,61,63,60,58,59,63,67,69,70,70,69,68,66,60,57,52,43,36,40,41,40,59,59,58,57,56,54,63,64,64,60,59,58,57,58,54,47,41,32,29,30,29,29,65,70,61,58,57,53,52,56,63,67,65,58,47,50,44,39,30,33,35,42,47,46,68,69,60,59,62,63,60,55,47,51,48,48,41,39,37,30,34,38,41,54,54,51,70,67,59,59,65,66,64,61,54,56,49,42,40,35,30,33,39,43,43,54,50,47,65,62,57,59,64,65,62,61,61,56,39,33,36,34,33,35,37,39,41,48,44,44,58,56,55,57,61,59,55,58,58,42,38,41,43,40,37,36,37,38,39,41,49,50,55,55,54,48,47,45,45,49,46,38,39,43,50,46,39,39,42,42,43,44,60,61,52,51,50,52,51,42,40,40,39,38,41,44,45,49,48,51,49,48,51,61,62,64,51,47,47,48,45,42,44,44,40,39,40,42,43,46,54,58,53,58,59,67,72,71,49,45,45,45,45,44,45,43,41,39,39,39,42,47,56,60,60,58,62,75,77,76,48,45,45,46,45,46,45,43,42,41,39,42,43,46,53,59,63,65,67,74,76,76,48,46,50,49,49,48,47,47,48,50,51,51,49,47,53,60,63,68,72,75,78,79,48,48,48,52,51,51,53,55,55,55,56,55,54,51,61,67,69,74,77,82,86,88,49,50,53,56,57,60,60,61,60,62,63,60,58,61,66,70,74,82,82,86,92,92,51,54,57,64,68,71,73,72,72,71,68,65,62,69,72,76,80,88,90,93,94,95,51,55,58,66,70,72,74,74,74,72,70,66,63,70,72,77,81,89,91,94,95,95],
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
