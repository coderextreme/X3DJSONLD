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
        texture=ImageTexture(url=['../../images/5/newport12-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[52,53,54,54,55,56,54,54,58,62,65,66,64,62,61,61,61,63,62,62,62,59,59,53,55,55,55,57,58,59,59,60,61,62,63,64,64,62,63,65,66,63,63,64,65,64,55,56,57,57,56,58,60,60,59,58,60,64,63,62,62,64,66,66,64,63,65,65,65,55,56,58,57,57,58,58,60,61,59,59,63,63,63,65,67,67,67,67,65,66,65,64,57,59,59,59,60,58,56,57,61,60,59,64,65,65,68,69,68,68,69,68,68,67,67,58,58,59,60,61,59,55,54,56,60,63,65,67,68,70,69,68,70,70,70,70,69,68,56,55,55,59,62,62,59,57,60,64,67,67,67,68,70,70,70,72,71,69,69,70,72,55,55,55,58,60,63,62,62,64,67,69,69,67,68,71,71,71,72,73,71,71,73,75,55,56,56,57,58,59,61,63,65,68,68,66,67,69,72,73,74,75,76,75,74,74,73,55,54,55,57,58,59,62,64,65,66,66,66,69,71,73,72,73,75,76,76,77,77,75,54,54,55,58,58,60,64,65,64,65,66,67,70,71,72,73,75,74,74,77,77,78,76,55,57,56,57,59,62,65,66,64,65,66,67,68,69,72,73,76,75,75,75,78,79,80,56,55,54,55,59,62,63,65,66,67,68,68,68,70,69,70,73,76,77,78,81,81,82,56,56,55,55,59,60,61,63,66,67,67,67,68,70,69,69,72,76,79,80,81,82,82,55,57,57,57,57,58,59,61,63,66,67,67,68,71,71,69,73,78,81,80,82,82,81,54,54,56,57,57,58,59,61,64,66,66,68,70,72,73,74,77,79,81,83,84,83,81,52,53,55,58,58,58,58,60,62,64,66,70,73,72,74,77,79,79,81,83,82,82,82,52,52,55,57,57,56,57,60,62,65,69,73,73,73,76,77,78,79,80,83,83,82,84,53,53,54,54,56,56,60,62,64,66,69,71,72,71,74,75,77,77,79,81,82,82,81,53,53,54,54,55,58,62,64,64,63,66,69,71,70,71,74,75,76,78,79,80,82,81,52,54,54,57,57,60,63,63,62,61,64,67,70,70,71,73,74,75,75,77,79,83,83,53,54,54,60,61,59,60,61,60,63,64,65,68,70,71,72,73,74,75,77,79,82,82,54,54,56,61,61,58,58,60,60,63,64,65,67,69,70,71,72,74,76,77,79,81,81],
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
