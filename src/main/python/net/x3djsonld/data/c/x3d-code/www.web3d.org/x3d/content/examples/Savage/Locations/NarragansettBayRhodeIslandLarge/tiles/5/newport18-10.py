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
        texture=ImageTexture(url=['../../images/5/newport18-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[57,52,55,52,51,55,56,53,47,44,50,52,53,54,57,56,56,51,50,50,53,53,53,55,58,58,56,57,56,58,55,51,48,49,53,59,58,52,51,48,49,52,51,48,54,55,58,58,58,59,60,58,60,54,50,51,55,56,53,50,47,47,45,47,47,47,54,58,62,62,65,64,59,59,59,56,52,48,51,49,47,47,47,44,45,49,52,52,57,60,64,67,72,69,66,61,57,56,52,50,47,46,45,44,43,43,43,46,54,54,59,64,69,74,76,72,66,63,59,53,50,49,47,45,44,44,44,46,46,48,48,48,65,67,67,73,75,74,71,65,57,55,52,50,53,46,46,44,45,45,45,49,50,50,68,71,72,75,76,80,71,66,59,58,54,50,48,48,46,46,46,48,48,46,45,46,68,70,75,78,79,78,73,67,66,59,57,52,50,49,47,45,45,45,45,45,46,45,66,73,75,83,81,77,74,71,67,61,58,58,54,51,49,46,44,45,45,43,44,44,67,72,81,84,82,77,75,71,66,64,63,62,55,50,50,47,46,47,47,42,42,43,71,71,78,82,84,79,74,69,68,66,64,61,56,53,48,48,47,47,48,43,44,44,72,73,76,78,80,79,75,72,67,65,61,56,54,51,50,50,49,47,45,45,44,44,69,70,72,75,78,77,71,67,65,63,61,55,52,52,47,49,49,49,47,45,45,46,67,69,71,74,76,73,71,67,62,60,55,53,51,48,52,50,48,52,49,47,47,48,70,70,71,72,75,73,71,63,60,53,52,50,49,51,53,52,52,51,51,51,50,49,75,73,73,73,73,72,66,60,56,50,46,48,50,54,53,54,52,52,55,55,51,50,75,76,74,73,70,67,61,57,50,46,46,47,52,49,52,52,55,53,56,59,54,53,74,77,71,67,65,60,57,53,50,46,50,50,48,49,49,54,59,59,60,60,61,60,71,72,69,68,64,59,55,50,50,50,50,48,48,51,54,60,62,65,65,63,62,62,66,62,71,69,65,61,56,52,52,51,50,49,52,54,61,63,67,70,70,66,67,67,67,61,65,61,56,56,55,54,52,53,50,53,56,58,65,70,75,77,78,72,68,67,67,66,62,60,59,57,54,54,55,56,53,56,58,68,70,73,78,81,81,80,75,73,67,65,62,60,58,56,54,55,56,56,54,56,60,68,70,74,79,81,82,81,75,74],
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
