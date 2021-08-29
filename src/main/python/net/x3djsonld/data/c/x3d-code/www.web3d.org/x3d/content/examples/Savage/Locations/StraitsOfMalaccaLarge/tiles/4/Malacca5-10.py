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
        texture=ImageTexture(url=['../../images/4/Malacca5-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-2.674956597161275,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[40,36,35,39,29,34,52,25,35,25,27,26,35,28,53,36,37,28,15,32,43,34,42,37,33,32,42,38,31,21,28,21,47,54,63,50,52,32,30,33,17,45,35,36,46,48,27,27,39,40,48,57,26,45,61,51,44,46,26,28,29,44,28,45,38,25,57,41,32,52,78,62,72,59,57,67,52,41,51,37,39,34,41,42,52,40,39,39,43,64,35,40,62,61,102,75,67,64,38,29,50,44,28,47,49,47,46,41,41,30,67,52,42,64,74,72,75,65,82,45,48,41,44,48,44,60,70,59,57,35,37,32,76,57,68,83,67,59,57,55,66,56,46,76,60,73,63,81,60,38,54,36,25,24,72,83,97,85,89,96,91,73,78,57,63,67,69,54,59,63,53,47,30,15,10,19,82,71,85,76,94,88,71,96,66,57,74,51,50,45,48,45,53,25,30,21,40,39,73,53,67,75,96,88,106,64,66,73,53,50,57,46,36,46,40,18,43,40,35,20,45,53,67,86,117,102,94,78,84,55,55,49,39,26,38,27,20,41,36,38,31,25,50,61,51,99,91,109,72,84,67,81,66,32,22,15,23,17,41,49,14,37,10,15,44,58,64,67,86,102,98,81,57,56,34,29,40,42,22,20,35,9,11,12,6,7,43,39,70,42,53,86,79,99,66,29,22,16,27,21,24,5,6,6,12,9,4,5,56,33,38,52,52,87,70,47,49,50,62,55,37,14,4,26,34,18,14,8,7,6,54,44,37,66,63,55,65,43,35,23,33,21,19,6,13,38,33,13,22,9,22,27,67,40,41,51,67,74,64,57,63,40,35,10,6,36,42,24,24,15,10,5,27,27,38,50,31,56,60,73,48,40,59,59,43,21,47,59,35,22,14,22,19,7,26,26,62,44,25,20,54,74,57,32,53,79,39,40,54,46,23,29,34,29,12,16,24,24,73,71,59,54,27,50,36,23,40,61,42,56,83,47,40,44,46,24,14,30,18,18,23,32,27,26,25,38,29,24,22,45,60,28,49,54,55,41,20,32,31,15,16,16,23,31,28,26,25,39,32,26,20,43,56,28,44,55,49,44,20,33,29,18,16,15],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
