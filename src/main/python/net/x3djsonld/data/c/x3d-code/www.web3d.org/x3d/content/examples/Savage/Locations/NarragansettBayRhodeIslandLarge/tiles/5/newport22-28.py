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
        texture=ImageTexture(url=['../../images/5/newport22-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[66,60,66,68,67,65,71,70,71,76,81,83,82,80,76,72,66,61,61,61,61,61,60,55,56,62,69,70,69,70,71,75,79,82,83,78,73,69,67,61,61,61,61,61,57,55,56,59,62,68,72,70,74,76,78,80,79,78,75,69,63,61,61,61,61,61,54,56,58,62,59,60,59,70,77,76,76,78,77,75,73,70,64,61,61,61,61,61,52,55,59,62,59,58,58,60,70,73,73,74,76,75,71,71,66,61,61,61,61,61,54,53,58,58,58,62,59,59,64,68,70,68,69,69,65,65,65,62,61,61,61,61,56,59,56,61,61,64,61,66,63,65,65,64,62,62,62,61,61,61,61,61,61,61,59,58,61,58,64,64,62,69,69,65,62,62,62,62,61,61,61,61,61,61,61,61,60,59,60,67,68,62,61,63,67,66,61,61,61,62,63,64,62,61,61,61,61,61,61,59,58,67,73,66,65,62,63,68,63,62,61,61,67,66,64,62,61,61,62,62,60,58,59,60,74,65,68,68,68,64,64,61,61,61,65,67,63,62,61,61,64,64,62,59,58,60,64,64,67,71,66,64,65,62,66,68,61,65,63,61,61,61,63,64,64,58,55,60,56,60,65,68,67,64,65,65,67,64,62,69,67,61,61,61,63,64,63,60,55,55,55,56,62,62,64,65,65,66,71,70,65,68,68,65,61,61,63,63,61,60,55,56,55,55,58,60,61,63,63,64,70,72,67,73,63,64,62,63,64,65,66,62,60,57,55,54,56,56,58,55,60,59,62,67,62,60,62,61,65,68,70,70,65,61,62,57,56,53,53,52,52,52,52,60,62,67,57,56,61,59,69,69,70,70,68,60,57,55,54,53,52,52,52,52,52,55,60,59,54,53,53,55,61,66,74,74,70,63,57,55,53,53,52,52,52,52,52,52,55,59,53,53,52,55,61,70,74,75,67,66,60,54,52,52,52,52,52,52,52,55,57,56,53,54,53,53,59,69,68,68,62,65,61,54,52,52,52,52,52,52,52,56,53,53,55,55,55,54,57,60,61,62,61,62,63,54,52,52,52,51,51,51,51,52,52,52,54,55,56,54,53,55,57,57,62,61,60,55,52,52,52,52,51,51,50,51,51,51,52,53,54,54,53,52,53,54,63,61,60,56,52,52,52,52,51,51,50,51,51,51,52,53,54,54,53,52,53,54],
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
