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
        texture=ImageTexture(url=['../../images/5/newport22-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[71,63,63,63,62,60,56,51,50,49,48,45,42,40,36,35,34,34,36,36,38,39,70,63,63,66,67,65,63,57,51,49,46,44,42,42,39,37,37,37,39,38,40,40,67,64,63,63,63,63,61,55,52,48,48,47,46,43,40,39,37,38,42,43,47,47,65,65,63,63,62,61,60,53,48,48,48,51,45,43,42,43,46,47,45,51,54,54,67,66,66,64,65,65,61,57,53,50,51,48,48,48,50,50,50,53,53,59,61,61,69,68,66,66,66,65,61,60,59,56,51,50,50,52,55,58,60,63,63,67,66,66,69,68,66,66,65,64,63,63,62,62,56,55,56,59,60,66,68,68,60,71,71,71,66,66,66,67,67,66,65,66,65,63,63,60,60,61,63,68,71,72,66,73,69,68,66,66,66,67,67,67,67,66,65,63,63,65,65,64,66,66,70,70,64,69,67,66,66,66,68,67,67,67,66,64,64,65,66,66,65,64,63,63,66,65,64,67,67,67,65,65,65,66,66,66,65,66,65,64,65,65,63,64,63,59,61,63,65,60,58,57,65,65,65,67,66,67,67,65,65,65,68,63,63,65,62,62,60,61,59,58,56,55,65,65,63,64,65,66,67,67,68,75,72,69,69,66,63,62,61,59,59,56,55,55,65,65,64,65,67,68,70,71,73,77,76,75,72,68,69,66,63,58,56,54,53,53,66,66,67,67,70,72,73,75,76,76,79,77,74,68,67,66,62,56,57,53,53,53,66,69,70,72,74,75,75,77,78,76,76,76,73,68,68,61,57,55,54,51,49,48,72,74,74,77,77,76,78,82,80,75,72,72,68,67,62,58,57,53,51,49,48,48,79,79,79,77,78,80,82,82,79,76,72,68,62,62,63,61,58,56,49,46,48,47,83,81,79,79,80,83,84,85,81,77,73,68,65,66,66,65,58,56,53,50,48,48,82,82,81,82,84,84,85,83,83,80,76,73,74,72,69,64,60,60,52,50,50,50,83,83,83,85,85,83,81,80,81,80,77,78,78,76,70,69,64,62,59,55,54,54,82,82,83,82,81,80,80,79,78,80,79,78,76,75,74,72,67,62,59,60,62,62,80,81,81,79,78,79,78,78,77,76,75,77,77,74,74,70,66,63,61,59,57,56,80,81,80,79,78,78,78,77,77,75,75,77,76,74,73,69,66,62,61,60,57,55],
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
