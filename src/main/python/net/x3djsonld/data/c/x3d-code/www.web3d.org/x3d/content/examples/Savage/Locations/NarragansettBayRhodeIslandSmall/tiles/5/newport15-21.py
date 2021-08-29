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
        texture=ImageTexture(url=['../../images/5/newport15-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.55915137776267,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[53,53,53,53,53,53,53,53,55,64,66,68,71,71,69,72,75,73,69,66,66,67,68,53,53,53,53,53,53,53,53,57,60,63,67,69,68,67,69,70,69,67,66,66,67,69,53,53,53,53,53,53,53,54,58,61,62,64,66,64,65,67,67,67,67,67,68,69,69,53,53,53,53,53,53,53,54,60,62,60,62,63,64,66,67,67,65,66,68,70,70,71,53,53,53,53,53,53,53,55,62,63,62,64,64,64,66,67,69,66,66,68,72,74,74,53,53,53,53,53,53,53,64,67,67,65,67,62,60,65,66,69,67,67,68,72,76,75,53,53,53,53,53,53,54,65,69,72,71,68,63,61,65,66,68,68,69,69,69,73,74,53,53,53,53,53,55,63,65,67,69,69,67,66,66,69,68,68,67,69,69,71,74,76,53,53,53,53,54,57,64,64,65,65,64,65,66,69,69,68,69,71,74,75,76,75,73,53,53,53,54,57,62,63,64,66,69,68,65,66,68,69,70,72,75,78,78,77,74,74,53,54,55,56,63,66,65,66,68,70,69,69,70,70,70,71,71,73,74,74,72,73,75,53,55,62,64,67,69,67,66,67,68,70,73,75,73,71,70,70,70,69,70,72,73,74,55,59,64,66,69,68,67,68,67,68,73,77,78,76,73,69,69,70,70,70,71,74,74,59,65,69,71,70,70,70,70,68,67,71,75,75,73,70,69,70,71,72,72,71,74,77,68,70,72,74,72,72,72,70,68,67,69,71,72,71,68,69,71,72,73,75,74,75,78,69,69,71,73,72,72,72,70,69,69,69,70,71,71,69,70,71,73,74,75,75,76,77,66,69,71,71,70,70,72,72,72,71,71,70,71,72,71,72,73,74,76,78,77,77,77,67,68,69,69,69,71,73,72,73,73,73,71,72,72,73,72,74,76,75,76,78,80,79,67,67,69,70,70,73,73,73,74,73,73,73,72,72,72,73,75,75,74,75,77,78,80,68,69,70,71,72,73,74,74,73,73,73,73,74,74,74,74,75,75,75,76,77,79,83,70,71,71,71,72,72,73,73,72,72,72,74,75,75,75,77,77,77,79,79,80,82,84,70,70,70,70,72,73,73,73,72,72,73,75,76,77,77,78,80,81,81,81,81,83,84,70,70,70,71,72,74,74,73,72,73,74,75,77,77,78,78,80,80,80,81,81,83,85],
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
