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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[110,112,104,98,82,88,83,83,88,88,84,87,73,94,88,83,89,92,77,83,72,75,111,92,89,89,101,82,91,97,82,88,94,91,87,89,85,85,92,100,91,82,70,80,110,103,97,102,94,88,93,102,88,92,91,86,91,88,91,86,84,87,91,84,84,84,104,116,102,109,102,87,97,97,101,87,85,87,87,79,92,85,76,79,91,96,85,96,112,108,107,104,106,96,92,96,91,86,85,84,85,79,82,86,70,82,90,86,98,97,101,102,99,101,103,101,99,100,97,99,92,73,80,78,80,80,73,81,77,86,97,95,98,99,96,107,107,108,109,97,93,90,78,83,79,74,69,77,79,67,74,81,88,89,97,86,92,105,106,100,100,101,90,89,92,76,69,65,68,70,71,65,66,77,92,92,87,103,102,93,103,94,99,101,94,74,79,77,79,76,81,70,66,68,81,88,88,82,79,104,93,92,98,100,93,91,91,95,88,90,86,82,82,82,66,76,74,76,77,74,74,91,93,95,96,93,101,105,103,99,97,91,91,85,80,82,82,70,71,72,66,71,74,96,72,86,99,97,103,93,89,84,86,92,89,84,86,79,73,70,72,69,68,64,85,92,69,93,103,98,91,94,87,84,85,88,89,80,76,78,78,66,62,58,67,63,89,86,68,84,93,103,92,91,83,91,86,76,86,86,76,74,71,70,71,66,57,60,94,81,87,79,101,96,95,98,85,91,80,83,78,82,81,80,87,73,74,72,64,66,93,72,76,94,97,91,94,94,100,99,84,89,79,79,85,87,79,76,85,74,68,73,81,65,91,85,92,86,97,97,102,100,87,92,88,75,85,85,88,82,81,71,69,61,74,73,82,81,85,89,89,93,98,101,89,91,80,86,70,83,91,84,73,70,60,56,74,65,75,85,80,89,81,80,92,98,90,99,88,77,66,78,81,72,78,68,68,76,62,55,66,83,81,92,75,83,94,93,92,101,82,81,69,69,81,79,80,77,69,69,61,56,71,79,81,76,87,86,84,90,97,100,99,83,82,82,71,80,88,79,76,81,79,59,52,66,81,76,81,90,78,89,94,104,97,78,72,79,67,78,75,90,88,84,78,57,53,67,80,76,82,92,76,88,94,103,97,78,71,81,66,76,78,91,86,85],
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
