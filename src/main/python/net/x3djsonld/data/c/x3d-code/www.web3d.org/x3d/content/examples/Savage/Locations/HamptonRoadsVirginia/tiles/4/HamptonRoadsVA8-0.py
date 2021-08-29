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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[86,89,82,60,85,77,95,93,105,109,96,107,93,105,89,99,92,84,66,80,89,81,86,73,66,65,81,95,92,79,99,90,106,110,94,90,93,94,100,96,72,67,71,85,69,60,61,97,81,90,75,92,83,83,107,111,99,89,95,79,93,90,73,76,60,67,72,62,83,70,57,73,69,77,65,83,96,102,104,102,88,86,80,88,78,88,81,70,72,70,70,66,79,60,83,67,71,82,95,100,83,102,96,90,72,80,93,81,78,80,95,89,74,81,54,72,66,71,78,90,96,98,73,97,99,91,83,79,79,86,84,88,84,99,91,87,66,68,54,84,58,86,101,84,89,90,94,90,81,65,76,73,87,77,94,85,90,83,75,82,79,72,69,75,77,74,82,89,85,85,99,77,62,62,70,65,80,68,70,79,59,60,56,65,50,57,65,73,81,92,82,79,97,81,76,72,50,54,82,79,63,64,84,68,71,72,69,75,66,67,80,76,82,76,87,85,75,78,62,61,88,90,74,87,91,86,80,95,82,88,78,57,69,84,78,75,73,70,74,64,81,57,102,85,83,90,101,97,96,86,83,79,76,51,51,50,79,81,63,54,54,65,66,55,106,92,105,96,100,96,100,89,75,50,65,53,58,53,50,53,61,50,54,54,54,52,107,96,97,99,91,92,91,88,70,64,73,66,72,59,66,57,62,59,59,65,51,53,101,102,91,87,79,79,63,89,71,77,79,63,62,68,75,75,72,56,73,73,64,59,104,88,92,69,85,80,58,85,79,79,80,76,54,75,80,74,63,71,86,80,57,62,106,93,87,67,84,94,80,71,74,91,90,74,55,72,69,78,82,93,77,72,72,59,93,88,79,86,101,94,71,77,89,95,77,72,79,82,74,85,86,90,78,88,70,67,88,74,85,109,99,93,72,92,97,88,72,69,58,83,80,97,105,84,93,94,66,65,90,86,96,92,99,90,76,93,103,86,75,60,71,82,86,96,92,97,101,91,77,64,102,93,96,94,94,79,72,98,91,73,73,79,72,93,92,105,99,103,106,81,72,69,111,97,92,97,93,95,77,80,92,93,75,94,60,81,97,103,111,109,100,95,76,83,111,96,93,97,92,96,79,82,91,95,76,92,61,82,98,103,112,110,101,95,77,83],
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
