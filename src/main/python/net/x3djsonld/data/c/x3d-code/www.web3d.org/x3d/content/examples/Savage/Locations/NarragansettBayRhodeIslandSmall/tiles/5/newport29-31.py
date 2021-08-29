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
        texture=ImageTexture(url=['../../images/5/newport29-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.672143386647825,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[68,70,74,80,85,85,84,83,82,82,81,81,80,79,79,76,75,73,71,69,67,65,64,67,69,74,80,84,84,83,82,82,81,80,80,79,78,77,75,74,73,71,69,68,66,65,66,69,72,78,82,82,82,81,81,80,79,79,78,76,75,73,73,72,71,70,68,66,65,66,69,72,77,79,79,80,80,79,79,78,77,77,75,74,72,71,71,71,70,68,67,66,66,69,71,74,76,77,77,77,77,77,76,76,75,73,72,71,71,70,70,69,68,67,66,65,68,69,72,73,74,74,75,75,75,75,74,74,72,71,71,70,69,69,69,68,68,67,64,66,67,69,70,71,72,73,73,73,73,73,73,71,70,70,69,69,68,68,69,69,68,63,64,65,66,67,69,70,71,72,72,72,72,71,70,69,68,68,68,67,67,68,70,69,61,62,63,64,65,66,68,69,70,71,72,71,70,69,68,68,67,67,67,66,67,68,68,58,59,60,61,62,64,66,67,69,70,71,71,70,68,68,67,67,67,66,66,65,65,65,56,57,58,59,60,62,64,66,67,69,70,70,70,69,68,67,67,67,66,65,64,63,62,54,56,57,59,60,62,64,66,67,68,69,69,69,69,68,68,67,67,66,65,64,63,62,53,55,57,59,60,62,64,66,67,67,67,68,68,68,68,68,68,67,66,65,64,62,62,52,54,56,59,60,62,64,66,67,68,68,68,68,68,68,67,67,67,67,66,64,62,62,51,54,56,59,61,63,65,67,69,69,68,68,67,67,67,67,67,68,68,66,64,62,61,50,53,55,58,61,63,65,67,69,69,69,68,67,67,67,67,66,67,68,66,64,62,61,49,52,55,58,60,63,65,67,68,69,69,68,68,67,67,67,66,66,66,65,63,61,61,49,52,54,57,60,62,65,66,68,68,69,69,68,68,67,67,66,66,65,64,62,61,61,48,51,54,57,60,62,64,66,67,68,69,69,69,68,67,67,66,65,64,62,61,61,60,47,51,54,57,60,62,64,66,67,68,69,69,69,68,67,67,66,65,63,62,61,60,60,47,51,54,57,60,62,64,66,67,68,69,70,70,69,68,67,66,65,63,62,60,59,59,46,50,54,57,60,62,64,66,67,68,69,70,70,69,68,68,67,66,64,62,60,59,58,45,50,53,57,59,62,64,66,68,69,70,70,70,69,69,68,67,66,64,62,60,59,58],
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
