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
        texture=ImageTexture(url=['../../images/5/newport15-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[29,28,23,24,27,34,39,53,59,56,56,62,58,55,48,38,38,43,47,45,52,52,26,29,25,26,33,37,50,60,64,59,58,58,56,53,50,37,38,45,47,47,44,45,25,25,26,30,38,41,56,65,66,61,59,55,53,49,43,38,36,42,47,49,44,43,29,27,30,34,38,43,62,68,67,64,59,56,55,47,47,39,37,45,55,50,45,45,32,34,34,37,42,49,64,72,72,66,62,57,56,53,56,44,41,42,58,54,52,52,34,37,34,42,51,58,67,72,71,68,65,63,60,56,53,43,41,42,54,57,53,52,34,34,38,48,55,59,65,70,71,67,64,63,61,60,55,47,41,41,49,50,45,45,34,37,43,49,56,61,64,69,70,65,65,64,64,61,59,48,41,41,41,48,46,45,34,38,44,48,51,56,63,67,66,64,65,62,60,56,52,46,41,41,41,47,44,43,38,37,41,46,50,56,61,60,62,62,60,57,55,51,46,41,41,41,41,42,44,44,40,37,40,44,50,58,61,57,59,57,55,54,49,46,44,41,41,41,41,55,47,46,41,41,40,42,49,54,59,55,54,51,49,50,45,42,41,41,41,41,43,57,57,56,40,42,42,42,43,45,52,51,52,43,43,46,43,42,40,41,41,41,45,60,60,60,43,46,43,42,44,45,43,42,43,43,42,44,44,44,41,41,41,41,53,66,64,63,43,43,44,43,43,43,43,43,43,43,43,43,43,43,43,41,43,51,62,71,68,68,42,44,47,46,44,43,43,43,43,43,43,43,43,43,45,50,57,65,73,74,70,70,42,47,45,44,42,43,43,43,43,43,43,43,44,53,61,69,68,77,79,77,75,74,39,44,45,45,43,43,44,43,43,43,43,45,50,56,65,78,81,85,87,85,81,80,35,39,40,44,47,44,43,43,42,42,43,43,52,62,70,78,83,86,85,83,81,81,36,42,42,43,47,46,47,48,46,45,44,43,50,67,74,80,84,85,85,81,73,71,35,39,42,46,52,51,49,50,50,49,47,44,51,61,71,81,82,83,79,72,67,65,36,40,47,49,52,56,58,53,55,52,45,45,50,58,69,81,77,76,69,64,65,65,40,41,44,47,52,56,60,60,54,52,48,50,58,51,62,71,70,67,67,60,51,50,40,41,44,46,51,55,60,59,54,53,49,50,58,50,60,69,69,66,66,58,49,48],
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
