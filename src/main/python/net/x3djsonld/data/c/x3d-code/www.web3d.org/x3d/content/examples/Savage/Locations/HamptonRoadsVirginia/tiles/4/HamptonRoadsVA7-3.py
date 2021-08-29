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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[64,62,73,69,72,67,48,53,68,62,74,67,79,69,63,51,44,46,44,48,39,38,77,64,77,73,75,55,50,52,68,57,71,52,60,65,52,47,45,46,43,43,44,39,78,80,82,78,74,57,52,46,44,39,69,72,50,55,32,32,43,43,43,35,38,40,84,85,73,79,80,72,62,55,44,51,39,57,43,53,52,53,39,35,35,33,29,32,71,72,71,65,86,71,67,56,59,66,52,45,53,67,58,54,44,42,32,30,33,34,70,66,65,71,68,80,72,61,62,58,46,59,70,69,66,50,50,46,47,34,35,35,71,75,67,61,61,60,60,59,66,51,56,74,73,70,60,53,49,50,45,50,37,34,78,71,73,80,78,64,62,53,56,64,61,69,68,67,54,56,49,49,49,43,45,42,79,78,79,90,74,73,71,66,63,71,68,70,66,70,60,58,50,55,47,45,49,46,74,84,84,79,69,73,72,73,67,70,76,68,68,62,67,51,50,48,51,51,50,56,76,81,84,70,69,69,70,81,70,65,66,64,66,64,56,60,53,40,49,56,49,53,71,68,83,84,78,62,69,72,69,65,73,69,69,62,57,68,57,48,44,49,56,60,77,82,86,70,73,75,53,54,57,62,68,65,70,67,58,67,57,44,49,47,52,55,66,76,79,77,70,63,62,69,56,71,72,67,65,64,64,63,60,54,43,51,48,49,63,78,74,83,64,66,62,67,52,67,60,63,57,62,66,60,55,48,54,47,42,51,57,69,69,67,58,56,51,54,51,66,53,63,63,64,60,59,58,58,53,51,50,52,65,60,66,67,59,54,51,48,49,53,47,48,51,53,52,54,63,53,52,50,38,43,77,54,56,59,61,56,56,59,68,59,61,43,46,48,47,53,57,63,51,51,44,38,67,76,65,59,63,51,69,66,71,58,65,67,72,53,52,49,54,52,49,49,44,48,59,76,77,71,57,62,72,75,75,65,65,68,71,56,57,44,48,56,49,45,45,44,66,76,79,77,69,72,76,66,76,67,73,73,65,55,56,40,47,51,48,50,53,53,85,78,84,78,65,69,67,71,66,60,64,61,63,52,50,41,37,41,51,49,50,48,84,82,83,79,67,69,69,71,66,60,63,61,61,52,48,41,40,41,51,50,51,48],
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
