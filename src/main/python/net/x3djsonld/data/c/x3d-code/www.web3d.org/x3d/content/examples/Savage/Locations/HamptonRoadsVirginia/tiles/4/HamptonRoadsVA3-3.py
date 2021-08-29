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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[66,60,65,62,69,60,76,74,68,71,48,48,48,48,48,55,48,74,70,71,61,53,67,63,62,63,71,77,77,81,70,62,60,49,53,59,55,50,48,61,55,54,43,39,64,70,60,65,71,77,86,88,75,67,63,65,56,63,64,60,57,40,34,43,53,58,75,72,69,79,77,84,87,92,82,76,79,65,70,72,75,68,64,54,57,56,63,61,87,81,71,89,78,82,94,99,96,96,75,84,78,72,63,62,56,67,54,62,63,65,86,80,80,80,84,79,93,92,91,94,92,86,84,78,79,77,59,74,61,60,51,58,79,83,87,86,93,97,90,83,94,96,95,90,86,86,75,70,58,71,67,69,60,59,82,95,96,87,80,90,90,78,84,94,92,88,88,82,74,76,76,76,64,62,66,62,89,90,96,92,84,83,82,74,79,89,81,85,84,79,68,78,80,68,53,60,57,57,88,91,86,83,74,86,87,74,76,83,90,80,71,75,72,66,74,69,57,58,58,55,93,89,84,85,78,72,84,68,73,90,86,82,75,70,73,63,76,72,61,54,60,59,93,92,80,80,86,86,63,70,69,85,87,86,67,69,67,65,69,69,63,58,55,56,90,85,82,67,78,84,66,70,73,67,81,78,70,68,71,60,68,62,61,61,57,57,91,89,81,78,73,70,71,65,61,61,63,76,71,66,61,66,61,59,60,57,59,54,80,84,82,77,74,64,65,64,73,64,56,60,60,65,56,59,56,60,62,61,65,64,73,88,76,67,71,72,72,68,84,77,70,63,68,74,63,54,61,63,56,57,61,68,72,66,71,83,77,73,83,79,83,87,80,68,74,73,69,66,53,50,59,56,53,53,73,77,64,87,76,75,84,88,89,92,80,88,84,73,65,69,62,61,54,64,57,46,87,78,86,90,79,85,90,103,91,89,84,86,83,71,67,69,67,61,60,49,47,48,92,88,90,82,90,88,99,90,87,80,76,76,80,69,62,63,68,64,63,58,57,48,90,94,89,93,93,96,98,105,92,83,65,65,72,63,58,58,68,69,61,61,58,53,91,87,81,89,94,88,79,94,97,77,71,69,70,63,60,62,71,65,56,60,49,49,92,86,80,88,94,87,82,94,93,78,70,70,72,63,62,64,69,66,56,59,50,49],
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
