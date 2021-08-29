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
        texture=ImageTexture(url=['../../images/5/newport28-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[67,67,67,67,67,67,67,68,69,71,73,77,78,79,80,81,81,82,82,83,82,83,83,66,66,66,65,65,65,66,66,67,69,71,75,77,78,78,79,80,80,80,81,80,80,80,65,65,64,64,63,63,64,65,65,67,69,73,75,76,77,78,78,78,79,79,79,78,78,62,63,62,61,61,61,62,63,64,65,67,71,72,73,75,75,76,76,77,78,78,77,77,60,60,60,59,60,60,60,61,63,64,66,68,69,70,70,70,72,70,72,76,77,76,77,58,58,58,58,59,59,59,60,62,64,65,66,67,67,67,68,68,68,70,74,75,76,76,57,57,57,58,58,58,58,59,61,63,64,65,66,66,67,67,68,68,69,72,74,75,76,56,56,56,57,57,57,58,58,60,61,63,64,66,66,67,67,68,68,70,73,74,75,76,54,54,54,55,56,57,57,58,59,60,62,64,65,66,66,67,68,69,71,73,74,75,76,50,52,52,53,55,55,56,57,58,60,61,63,64,65,66,67,68,69,71,73,74,75,75,48,49,50,52,53,54,56,57,58,59,61,62,63,64,65,67,68,69,71,72,73,74,74,46,47,49,51,53,55,56,57,59,60,61,62,63,64,65,66,68,69,70,71,72,73,74,45,47,49,52,54,55,57,58,59,60,61,62,63,64,65,66,68,69,70,71,72,73,74,43,46,49,52,54,55,56,58,59,60,61,62,63,63,64,66,67,69,70,71,72,74,74,42,44,47,50,52,54,56,57,58,60,61,62,63,63,64,65,67,69,70,72,73,74,75,40,42,46,49,51,53,55,56,58,59,60,61,62,63,64,66,67,69,71,72,73,73,74,39,41,44,47,50,51,54,55,57,58,60,61,62,62,64,65,67,70,71,72,72,72,73,38,40,43,46,48,50,52,54,56,58,59,60,61,61,62,64,67,69,71,71,71,71,72,36,39,41,44,46,47,49,52,54,57,58,60,60,61,61,63,65,67,68,69,70,71,72,35,38,40,42,44,45,47,50,52,55,57,59,60,61,61,62,63,65,66,67,68,69,71,34,37,39,41,42,44,46,49,52,54,56,58,60,61,61,62,62,63,63,64,66,68,70,32,35,38,40,42,44,47,50,53,55,58,59,60,61,61,62,62,61,61,62,64,66,68,31,34,37,40,42,44,47,51,53,56,59,60,60,61,61,61,61,61,60,61,63,65,68],
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
