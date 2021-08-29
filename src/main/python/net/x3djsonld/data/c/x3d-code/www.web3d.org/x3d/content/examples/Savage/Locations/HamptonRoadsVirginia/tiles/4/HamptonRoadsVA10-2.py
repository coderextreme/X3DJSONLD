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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[71,79,74,70,64,62,79,86,92,74,80,60,78,78,83,75,75,71,71,68,67,60,61,65,68,69,61,73,85,93,80,78,79,66,67,77,80,75,71,70,64,65,64,61,62,70,65,59,65,76,89,82,76,77,70,72,69,80,78,76,73,73,68,63,57,48,73,70,64,66,79,79,86,84,77,61,67,52,59,68,70,71,69,67,65,66,62,67,74,66,68,75,84,88,82,78,65,59,64,75,49,61,63,74,74,73,70,63,68,64,66,73,83,88,86,84,86,76,60,72,65,75,63,48,79,72,74,70,66,67,59,68,69,76,92,96,88,76,80,71,71,82,73,65,68,49,71,72,70,70,67,63,48,52,85,83,88,89,88,80,76,66,79,82,72,61,71,52,67,68,72,67,67,58,60,59,85,92,89,92,87,85,73,67,76,75,72,76,75,65,53,70,60,67,66,62,62,55,84,88,94,90,85,78,76,77,75,76,73,71,68,69,52,59,64,61,60,55,55,61,90,92,90,85,85,85,69,78,83,78,77,73,75,71,63,51,65,54,55,59,51,51,91,91,87,86,75,80,75,85,83,80,73,74,72,68,62,56,46,51,55,55,49,61,102,103,97,85,85,71,81,80,76,72,81,71,71,65,66,60,49,42,42,51,51,47,98,95,89,90,86,84,96,77,77,73,72,74,72,65,57,58,47,52,42,56,48,50,98,93,83,85,92,90,87,84,74,73,72,68,69,64,61,61,56,57,59,47,44,38,85,84,84,73,77,87,87,86,74,71,64,66,63,60,61,57,56,61,57,56,50,47,87,93,83,79,71,83,83,76,73,70,73,60,54,62,59,60,59,57,57,51,55,53,92,84,85,82,80,71,82,79,72,71,66,64,62,59,61,56,60,52,56,61,46,55,87,88,75,77,80,70,69,74,70,72,72,64,64,59,60,59,51,57,57,56,48,46,89,84,81,70,62,75,52,82,70,68,62,59,71,61,51,52,47,56,51,51,48,48,75,87,79,86,66,77,43,77,67,72,66,55,62,60,53,46,49,47,46,46,43,41,78,75,83,65,54,79,62,73,68,70,68,52,60,60,58,52,33,42,32,41,37,40,74,76,85,62,56,77,62,72,63,70,67,50,59,57,59,52,33,40,32,43,36,39],
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
