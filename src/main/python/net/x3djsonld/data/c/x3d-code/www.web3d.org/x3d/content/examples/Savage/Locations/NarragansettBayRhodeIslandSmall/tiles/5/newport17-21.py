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
        texture=ImageTexture(url=['../../images/5/newport17-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.57529309331769,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[49,51,51,51,52,52,54,54,56,59,62,63,67,70,71,72,73,75,77,77,77,78,79,49,49,49,50,52,52,54,55,57,59,61,62,66,68,70,71,73,74,77,79,79,80,79,48,48,49,49,51,52,52,54,56,58,61,62,64,66,68,71,74,76,78,80,80,79,79,48,48,49,48,49,52,53,55,57,60,61,63,64,66,69,72,72,74,77,78,78,79,79,50,49,49,49,51,54,56,58,61,60,60,62,64,66,67,70,72,74,75,75,76,78,81,50,50,50,50,52,55,57,59,61,58,58,61,64,67,69,69,71,73,75,76,77,78,80,48,49,50,53,54,54,56,58,59,58,59,63,65,69,70,70,71,73,76,78,78,79,79,49,50,52,53,53,54,57,59,60,59,60,62,64,67,68,68,69,71,74,76,77,77,78,53,53,53,52,52,53,57,59,58,57,59,60,62,65,67,68,68,70,71,72,73,76,80,55,55,54,54,54,55,57,58,57,57,57,59,60,62,65,66,68,70,69,69,70,73,79,56,56,54,55,57,58,57,57,58,59,60,61,61,61,62,65,66,68,69,72,73,76,80,56,56,55,55,56,56,55,56,58,63,63,63,63,63,65,68,69,69,72,75,77,81,84,56,56,56,54,54,54,53,55,58,64,66,65,64,64,66,69,70,71,74,77,79,84,87,58,57,56,55,56,57,57,58,60,62,63,65,67,66,66,67,70,74,77,80,81,85,88,59,59,58,58,59,60,59,61,60,59,61,63,65,65,65,67,72,77,80,81,81,85,88,62,60,60,61,62,62,63,62,60,59,60,63,65,67,67,69,73,77,79,81,81,87,89,61,60,60,61,61,60,63,63,62,62,61,63,66,68,71,73,76,78,78,80,84,91,93,61,61,61,62,62,61,63,64,64,64,63,65,67,69,73,75,77,80,80,82,86,92,94,63,64,65,64,63,62,64,65,66,66,63,66,68,71,74,77,78,80,81,82,86,91,94,65,67,67,66,64,64,66,69,68,66,65,65,68,71,72,76,78,80,83,84,88,94,97,64,65,65,65,65,66,68,70,72,71,70,68,70,72,75,78,82,85,86,89,92,93,95,63,65,65,65,65,67,72,73,74,74,72,73,73,74,78,80,83,85,87,90,93,92,92,64,65,65,65,66,67,71,73,74,74,74,74,74,74,78,82,82,85,87,89,93,91,91],
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
