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
        texture=ImageTexture(url=['../../images/5/newport18-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[53,53,51,51,49,50,51,53,50,51,57,59,59,55,56,53,56,53,51,48,48,48,48,51,54,50,50,49,52,54,54,56,53,50,52,53,52,56,59,53,49,50,46,46,47,48,52,50,50,53,55,53,55,58,54,48,43,47,53,52,55,52,53,52,50,50,52,52,49,53,50,49,51,49,49,50,47,50,50,48,47,51,51,53,54,56,55,55,54,49,51,53,54,50,48,48,50,46,44,46,50,52,49,52,53,55,54,57,56,56,48,50,51,52,50,51,53,56,51,47,49,46,37,40,54,60,57,59,57,57,57,57,50,51,51,52,50,47,50,53,50,48,51,52,44,53,61,53,57,60,61,58,56,57,46,47,50,47,50,49,53,51,52,53,55,55,55,55,57,55,60,62,65,64,59,58,45,44,45,48,55,57,54,52,53,55,54,54,57,54,55,59,61,62,64,67,62,61,44,44,43,48,51,53,51,52,56,60,57,56,57,59,57,59,60,63,63,62,64,63,43,43,44,46,51,54,52,52,55,56,57,60,60,60,60,60,60,64,65,64,63,63,44,43,45,46,48,48,52,55,56,58,58,58,62,63,62,65,64,63,66,64,66,67,44,44,44,46,48,52,53,54,56,56,59,65,69,66,64,66,68,66,64,63,66,66,46,47,45,49,49,52,57,53,56,61,63,66,66,64,67,68,69,70,67,65,65,65,48,46,47,50,52,53,53,56,55,58,64,69,67,67,69,69,68,70,67,66,64,63,49,47,49,48,48,48,51,57,57,56,62,65,68,68,71,69,69,69,65,61,59,60,50,49,49,50,49,49,52,52,54,58,62,66,69,72,71,71,68,65,65,62,59,59,53,51,52,49,50,50,50,52,55,61,65,66,70,72,71,71,71,68,65,64,59,59,60,57,51,50,48,52,52,56,59,61,64,69,75,75,72,72,70,67,70,66,60,59,62,59,52,52,50,54,54,56,60,66,67,71,75,77,77,76,74,69,66,64,63,63,67,60,55,53,51,53,55,60,63,64,72,75,74,78,81,77,74,73,69,65,62,62,67,62,56,51,52,56,59,59,62,66,70,76,78,82,79,77,77,74,71,66,61,60,73,63,59,54,54,57,59,56,59,63,70,77,81,84,81,81,78,74,69,67,64,63,74,64,60,53,55,57,59,57,58,63,70,77,82,83,81,81,78,75,69,67,64,64],
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
