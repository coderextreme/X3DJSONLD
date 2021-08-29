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
        texture=ImageTexture(url=['../../images/5/newport18-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[48,51,52,50,51,53,53,53,55,54,51,56,55,53,53,51,47,46,51,50,50,50,46,48,54,55,55,54,53,54,57,56,54,57,56,58,56,58,57,55,56,55,52,50,50,51,54,56,55,55,56,54,52,55,60,63,65,65,63,63,61,60,62,59,54,53,55,52,55,57,57,53,55,58,57,62,66,67,69,67,67,66,68,65,61,61,59,57,56,54,56,55,58,59,59,58,60,65,72,72,71,70,71,68,64,64,61,56,56,56,57,59,56,60,60,63,59,62,67,69,72,75,75,72,70,65,58,56,54,52,52,52,57,57,60,60,57,62,62,66,69,73,76,76,77,74,68,59,55,52,50,49,48,49,58,57,57,58,57,64,66,65,70,73,73,77,75,70,67,60,55,49,46,49,52,52,61,59,59,55,58,60,63,64,67,75,75,76,76,72,66,61,53,45,44,49,53,53,63,63,63,63,61,59,60,61,63,72,73,72,72,72,65,61,58,53,48,51,52,53,63,61,62,63,67,60,59,61,62,66,70,72,69,65,64,63,61,61,59,53,56,57,67,66,64,64,64,59,59,58,59,64,66,68,67,65,63,62,61,64,63,60,60,60,66,65,63,64,64,60,56,58,58,59,62,63,65,66,64,64,64,62,61,61,60,60,65,64,60,61,58,57,55,55,57,58,62,64,65,69,68,63,63,60,59,53,52,52,63,60,59,58,55,56,56,58,57,57,62,64,63,65,64,64,63,64,62,60,50,49,60,59,60,58,57,55,57,59,61,59,63,64,64,64,63,63,64,65,62,58,53,53,59,61,59,58,57,57,57,59,61,63,64,67,66,65,67,67,64,62,61,55,54,54,59,59,57,60,62,61,62,61,62,64,64,65,65,64,64,64,64,63,61,61,53,50,59,59,61,63,63,62,62,60,62,64,67,66,66,65,64,66,68,63,62,57,47,45,63,61,62,60,62,62,62,61,64,64,65,66,68,69,69,67,64,60,54,48,45,44,62,62,60,61,60,63,61,63,64,66,66,66,66,66,66,68,64,59,56,48,41,40,60,61,60,58,58,62,62,60,62,64,65,67,70,69,69,67,63,65,59,54,48,47,63,62,63,62,59,58,60,59,59,63,67,69,71,72,74,73,71,66,60,60,55,54,64,62,63,62,61,58,60,59,59,64,67,69,71,73,75,73,71,68,61,59,55,54],
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
