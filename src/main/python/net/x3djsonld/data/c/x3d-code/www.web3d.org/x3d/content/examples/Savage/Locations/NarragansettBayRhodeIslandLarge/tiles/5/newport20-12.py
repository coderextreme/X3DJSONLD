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
        texture=ImageTexture(url=['../../images/5/newport20-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[94,94,95,98,94,97,100,103,107,108,103,99,94,90,85,84,79,72,69,66,62,61,99,100,100,102,101,100,101,103,99,103,102,99,96,94,87,84,80,72,69,67,64,64,102,105,102,102,103,102,100,102,104,103,103,101,98,92,88,83,78,74,68,65,59,59,105,106,106,106,103,103,102,103,103,106,102,100,94,90,86,80,75,72,64,58,52,52,103,104,106,106,103,101,102,102,101,101,97,95,92,87,82,75,72,65,59,53,48,48,104,102,104,102,106,102,100,100,100,100,99,95,90,85,81,76,68,63,57,54,49,48,105,102,103,105,101,104,102,101,102,99,97,92,90,87,85,79,69,63,55,50,53,51,106,104,103,104,104,104,108,105,100,98,97,95,93,90,83,80,73,63,56,54,54,53,109,107,105,101,105,107,107,106,102,100,96,96,93,91,85,82,75,68,58,60,50,49,112,107,104,105,106,105,104,103,100,101,99,96,93,89,87,79,75,67,67,59,56,56,110,105,104,101,102,104,104,103,103,101,99,94,91,87,84,77,73,71,69,60,57,56,107,103,100,102,101,101,101,102,104,101,99,95,90,84,79,76,69,71,71,63,57,56,106,104,99,101,100,99,99,101,100,98,96,94,93,87,80,74,71,70,66,61,58,58,104,101,101,100,98,100,100,100,100,98,95,92,89,85,80,78,74,68,65,61,57,57,105,105,101,99,104,98,100,102,100,96,90,88,81,81,82,80,78,76,70,66,57,56,106,104,104,103,101,103,101,99,93,89,92,89,84,85,84,83,81,80,72,64,58,57,107,106,106,105,107,106,102,96,93,90,89,84,84,85,84,84,87,81,77,68,59,57,108,111,110,110,110,108,102,100,90,83,78,81,83,84,84,88,86,81,76,71,62,62,109,107,110,115,115,109,98,88,81,80,75,81,85,82,83,84,85,79,73,70,64,63,106,111,112,110,107,102,92,81,76,75,76,77,80,78,78,76,81,76,73,70,64,63,105,103,105,104,99,93,84,75,76,73,72,74,78,79,76,72,72,72,71,66,63,62,101,105,99,96,86,80,79,76,73,74,75,75,76,79,75,74,71,71,68,67,63,64,97,99,99,91,82,84,81,80,81,80,79,76,74,75,76,75,72,72,69,67,65,65,96,98,98,90,83,85,81,81,82,81,80,77,74,74,76,76,73,74,68,66,66,65],
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
