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
        texture=ImageTexture(url=['../../images/5/newport25-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[103,109,111,109,109,107,105,101,98,94,93,92,92,94,93,91,91,90,89,86,83,84,105,108,109,107,107,105,103,100,96,96,91,91,91,92,91,87,88,88,90,87,80,80,106,104,104,103,103,102,103,97,95,94,93,91,90,90,86,88,88,88,87,82,78,78,101,100,99,98,100,100,99,97,94,94,92,90,91,93,91,81,83,81,80,76,75,75,100,97,94,95,96,96,95,94,93,91,90,90,91,97,96,88,76,72,72,72,72,72,95,94,92,90,94,93,93,93,94,94,90,90,94,100,95,80,71,70,70,73,75,75,91,91,89,91,91,91,92,93,92,91,90,91,99,101,91,74,70,70,70,78,70,69,90,90,87,88,90,90,91,92,91,90,91,95,103,99,87,71,70,70,69,66,62,61,89,88,89,86,89,91,90,91,90,91,94,101,105,94,83,72,71,70,68,61,59,59,92,90,83,83,86,90,89,90,91,93,96,101,100,85,74,72,73,69,66,68,65,65,89,86,81,82,86,86,88,89,92,97,97,98,88,74,72,71,69,67,66,71,67,68,82,80,80,81,81,83,84,88,94,94,91,87,75,72,72,73,71,68,67,67,68,70,80,78,79,80,82,84,85,86,84,81,77,73,70,71,78,75,70,68,66,62,64,65,79,77,77,79,82,87,92,97,97,91,77,71,69,74,76,69,65,60,61,58,59,58,83,76,75,77,81,85,90,94,93,83,68,66,65,69,70,63,60,59,56,55,55,55,85,81,76,73,81,84,88,90,82,67,61,58,60,66,64,65,63,57,55,54,52,52,73,72,72,72,72,75,77,73,62,60,55,54,55,70,70,66,60,55,54,53,51,51,72,73,66,70,70,72,76,66,59,57,58,55,54,68,70,63,58,54,53,51,51,49,73,67,62,62,62,72,71,58,62,69,60,55,54,65,66,60,56,53,51,51,49,48,69,64,61,60,60,69,61,58,68,70,62,55,54,60,57,54,51,51,51,50,49,48,64,64,58,58,58,59,58,69,78,73,68,61,54,53,52,51,51,49,48,48,48,48,60,62,58,58,58,58,59,66,72,78,77,71,64,56,54,51,51,51,51,50,49,49,61,58,58,59,60,59,62,69,76,84,84,75,68,63,57,55,54,54,54,53,51,51,62,58,58,61,61,60,63,71,78,85,86,74,68,63,57,55,54,54,54,53,51,51],
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
