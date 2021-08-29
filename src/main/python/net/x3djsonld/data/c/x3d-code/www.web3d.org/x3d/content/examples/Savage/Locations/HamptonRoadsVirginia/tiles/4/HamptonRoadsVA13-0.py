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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[100,92,83,89,95,89,86,73,74,68,62,75,66,71,64,66,66,77,86,83,80,76,99,97,92,74,82,79,66,68,82,76,79,66,59,64,68,64,72,83,82,78,82,71,87,92,98,82,87,91,91,86,94,81,81,86,63,59,66,62,66,87,87,81,65,63,83,94,98,87,91,91,92,85,93,97,82,75,67,77,56,63,73,85,76,69,68,65,80,87,93,107,97,90,95,96,95,87,81,75,75,84,66,57,61,79,81,63,53,54,84,93,101,100,97,87,86,90,92,88,79,88,84,74,57,61,59,85,79,77,58,51,81,82,92,100,94,88,76,90,92,86,82,73,77,66,54,58,75,72,64,69,53,59,86,86,100,99,95,93,86,88,85,92,74,69,81,66,53,54,64,75,70,53,70,72,82,92,96,95,91,96,90,85,69,90,76,72,71,66,63,51,63,71,64,63,80,85,90,86,91,95,92,85,96,92,80,76,78,72,61,57,57,56,53,58,65,55,66,70,74,84,89,93,91,76,88,91,84,66,68,65,69,66,72,57,53,52,58,56,93,86,73,80,86,95,105,96,75,85,87,83,76,77,72,67,53,60,55,56,50,52,76,79,79,90,91,105,96,96,84,70,83,81,82,75,83,59,63,69,74,52,52,51,99,73,87,93,84,97,89,93,92,84,72,72,78,75,73,64,65,80,87,67,66,59,87,93,79,84,83,95,95,90,81,86,77,64,71,72,59,59,73,74,71,71,60,59,88,98,68,80,92,90,101,97,96,71,81,80,62,66,65,75,75,64,62,65,54,65,91,80,85,90,83,90,93,94,89,87,74,76,70,68,70,81,74,62,58,60,50,60,64,67,79,85,74,89,88,88,79,88,73,76,79,77,78,77,78,64,61,54,53,54,64,67,70,72,84,83,92,91,89,84,73,78,84,79,70,72,73,70,57,53,48,57,63,68,63,76,86,75,89,95,89,87,91,85,82,78,68,69,69,62,63,70,53,52,53,50,68,70,75,87,95,82,89,92,90,74,72,77,65,63,65,66,73,72,51,45,55,55,66,68,77,88,94,82,88,91,92,75,75,77,66,62,65,68,74,74,53,45,56,55],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0))))])
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
