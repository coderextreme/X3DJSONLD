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
        texture=ImageTexture(url=['../../images/5/newport31-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[84,88,86,85,85,82,81,80,84,84,83,82,78,75,69,57,45,40,37,31,28,28,83,85,88,88,86,84,84,89,89,90,89,84,79,72,64,52,41,37,35,29,29,29,85,87,89,89,93,90,90,92,92,90,84,79,74,67,58,46,38,37,32,30,31,32,91,90,97,96,96,98,92,99,97,89,82,75,68,62,52,42,39,37,33,29,34,35,92,100,105,103,101,98,97,101,95,88,78,70,63,54,45,40,37,36,31,32,44,46,98,102,102,106,103,101,99,94,88,81,73,64,53,45,42,39,36,37,31,34,44,46,100,103,104,101,102,99,96,82,80,73,64,54,45,42,41,39,36,32,32,39,49,50,98,101,103,98,94,91,84,74,67,62,57,47,45,43,42,36,33,32,37,45,48,49,98,100,94,93,82,74,67,67,61,53,49,46,43,40,36,32,31,36,45,50,52,52,93,91,90,85,74,69,59,54,53,51,47,44,40,35,33,32,36,42,52,55,56,56,86,83,81,76,70,57,53,54,50,48,44,38,37,35,34,39,40,44,51,54,58,59,76,69,63,58,61,51,49,48,47,46,41,38,34,33,36,41,43,46,55,65,66,67,69,61,59,54,48,49,49,49,46,43,38,35,35,36,40,43,46,52,58,67,71,71,62,58,58,54,53,51,51,48,46,37,37,43,40,44,45,50,55,60,64,64,71,72,62,63,59,58,54,52,52,48,45,38,40,43,43,47,51,54,57,61,69,73,74,75,55,59,56,54,55,55,49,50,45,39,37,42,44,43,50,53,61,72,80,80,81,82,55,54,57,54,52,50,46,43,40,39,39,43,47,47,47,52,58,73,84,87,89,90,58,56,52,54,52,51,40,38,39,40,43,49,57,52,52,55,66,76,85,92,93,93,53,53,52,51,49,44,43,38,40,42,51,60,63,66,65,63,67,78,85,91,96,97,50,48,51,48,45,43,40,40,42,51,61,67,68,71,72,74,78,87,93,89,91,91,51,51,49,48,48,44,41,40,43,50,61,70,77,81,84,88,89,92,96,97,97,97,61,54,54,54,47,42,40,40,44,54,65,74,85,92,96,99,101,104,105,100,99,99,63,61,60,54,49,43,42,42,48,58,69,79,87,93,98,102,106,112,111,106,106,106,64,62,63,56,48,43,42,43,49,58,69,79,86,93,98,102,107,112,111,107,107,107],
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
