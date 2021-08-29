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
        texture=ImageTexture(url=['../../images/5/newport22-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[67,65,60,71,69,65,62,57,59,62,57,53,53,52,52,53,47,47,56,69,67,66,54,49,65,78,74,66,62,62,61,61,58,58,57,56,54,54,52,51,52,59,61,60,46,51,55,58,60,63,62,63,62,61,61,60,56,59,54,52,52,51,49,52,57,57,48,52,61,69,73,69,64,66,65,63,65,61,60,57,56,54,55,57,56,53,53,54,48,51,55,65,67,65,65,64,64,64,62,62,64,65,61,62,63,63,61,57,52,52,45,48,53,59,61,61,62,62,63,65,64,65,63,64,68,64,64,67,65,59,54,54,45,54,59,66,66,67,66,64,64,65,65,67,67,63,70,68,70,75,71,62,58,56,47,60,68,73,72,73,72,68,66,69,67,68,71,73,72,72,73,80,74,62,60,59,49,62,72,77,76,77,77,72,71,75,74,68,70,71,70,70,74,76,73,62,61,60,51,58,66,72,74,76,79,77,77,80,79,75,70,70,71,72,74,74,73,62,61,61,56,58,63,69,73,75,79,83,81,84,84,81,75,72,75,75,75,73,69,62,60,60,62,62,65,69,72,74,79,83,88,92,90,85,80,77,78,75,77,76,72,66,62,62,65,68,67,68,71,73,77,82,88,93,95,92,84,85,79,76,78,77,73,68,65,64,62,67,69,70,70,68,72,77,83,85,88,89,86,86,81,78,79,77,74,67,63,63,56,62,65,67,66,65,66,68,76,79,80,80,82,83,82,80,82,78,74,69,62,61,46,53,57,59,60,59,60,64,69,69,72,76,79,80,82,83,86,80,76,71,67,66,38,44,49,51,56,57,58,61,66,67,71,75,77,79,83,86,85,80,77,73,66,65,31,36,41,43,47,51,56,59,63,67,71,74,76,78,84,86,83,80,77,74,69,68,22,28,31,36,42,51,56,60,63,66,70,74,75,78,83,84,82,79,74,73,71,70,10,14,24,31,38,47,53,58,62,65,71,72,74,82,84,83,81,78,71,67,67,67,5,14,21,26,34,42,47,54,60,62,65,69,74,83,84,82,80,75,68,62,62,62,1,6,16,22,30,39,48,57,61,61,59,64,74,85,82,80,78,73,68,62,61,61,1,1,9,16,26,35,46,58,60,60,58,63,71,78,78,77,73,71,68,64,62,62,1,1,8,15,25,34,45,58,60,59,58,63,71,76,77,76,72,70,68,65,63,63],
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
