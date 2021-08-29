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
        texture=ImageTexture(url=['../../images/5/newport28-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[115,109,103,94,81,77,78,74,74,71,68,67,65,63,63,58,54,54,52,54,52,52,106,99,93,82,80,86,84,81,76,72,72,73,69,63,59,57,55,53,50,51,50,51,94,92,86,87,91,90,81,81,76,71,66,68,67,64,63,57,54,50,50,51,54,54,95,92,90,92,92,91,96,86,82,76,72,65,60,57,58,56,55,52,50,55,59,60,94,93,95,96,96,95,89,90,86,82,76,69,63,58,54,55,53,50,50,51,57,58,95,98,98,100,100,99,98,93,86,82,77,69,61,55,51,52,53,50,50,54,62,63,94,103,105,108,104,97,95,89,84,80,73,68,62,54,49,45,46,48,50,54,64,65,96,99,106,109,108,101,94,87,82,72,75,69,61,52,47,45,44,46,51,56,60,61,98,100,106,104,99,96,93,86,76,69,67,64,58,48,46,44,42,42,46,50,54,55,93,100,104,101,97,94,85,78,73,64,53,52,49,47,54,48,42,39,40,45,46,46,94,97,98,92,88,84,75,71,64,58,58,58,56,49,45,44,43,39,35,35,33,33,89,92,90,84,78,74,69,65,62,58,59,59,60,53,49,44,38,37,35,33,30,30,83,85,81,76,73,67,63,60,61,61,68,69,61,58,55,48,41,40,38,31,30,30,84,78,75,68,68,63,60,61,62,77,78,71,62,56,50,48,48,48,40,30,29,29,85,80,72,70,66,63,64,66,66,76,72,66,58,50,52,55,57,52,42,31,30,29,83,84,80,77,73,67,66,66,68,71,68,61,55,53,56,59,60,55,48,37,32,31,95,92,86,83,78,78,74,71,68,70,69,60,56,56,59,59,53,49,45,40,32,31,95,95,97,93,92,88,82,77,78,71,69,62,58,56,56,54,53,53,38,31,26,25,104,102,99,99,97,92,85,83,77,76,68,60,55,57,57,58,57,48,31,28,25,24,104,105,104,102,97,92,87,84,77,69,64,58,52,50,53,54,44,33,29,30,31,31,111,110,103,97,94,87,87,76,75,68,59,54,46,41,40,35,34,30,30,32,31,32,108,101,94,87,83,77,73,67,61,57,53,47,41,38,34,31,33,29,28,29,31,31,99,92,83,73,67,67,64,70,68,62,53,45,40,37,33,31,29,29,29,29,37,36,98,91,80,70,66,68,67,73,70,63,54,45,39,36,33,30,29,29,29,30,39,38],
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
