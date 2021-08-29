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
        texture=ImageTexture(url=['../../images/5/newport29-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[98,91,80,70,66,68,67,73,70,63,54,45,39,36,33,30,29,29,29,30,39,38,85,74,68,69,74,74,78,79,71,61,52,42,37,33,31,30,29,31,34,36,41,41,71,75,80,85,84,83,81,78,70,62,50,40,37,33,29,30,30,32,34,37,40,40,80,85,91,91,91,88,83,81,70,59,46,39,36,31,29,31,30,35,33,32,34,35,91,95,102,101,93,87,77,72,66,56,51,50,37,33,32,31,37,35,32,31,31,32,96,105,105,102,93,86,78,66,58,49,47,39,34,33,32,38,48,39,33,35,35,37,107,113,111,102,93,79,74,57,49,42,40,37,34,34,35,42,51,43,38,42,43,45,105,106,110,99,86,72,58,44,42,41,40,37,35,35,36,36,43,43,44,46,44,45,107,107,103,89,75,63,50,42,41,39,37,37,35,37,37,40,45,48,49,51,51,52,102,97,88,77,62,48,41,40,41,37,36,36,36,38,41,42,53,62,66,64,58,58,89,84,70,58,49,42,38,40,40,38,36,36,39,39,44,51,57,68,72,67,63,62,71,67,60,53,45,42,37,38,37,38,39,42,41,41,44,46,57,67,67,68,67,67,61,53,48,42,39,41,37,41,35,39,40,42,45,46,49,48,54,65,66,66,64,63,51,46,40,38,38,42,43,38,42,42,41,41,45,51,53,55,55,62,64,64,64,63,46,46,40,38,39,39,41,43,44,46,43,45,51,55,57,58,61,64,63,63,63,63,49,45,44,42,42,42,40,43,47,46,50,56,57,56,56,64,69,68,66,63,63,63,51,47,46,44,44,41,46,50,49,46,50,51,50,51,56,66,71,68,64,63,63,63,45,44,47,48,45,48,53,54,52,50,49,50,51,54,58,63,67,65,63,62,63,63,44,47,47,48,49,56,57,55,56,53,52,54,58,59,60,62,62,62,62,62,62,62,50,50,48,52,57,58,61,62,57,57,55,57,58,61,63,63,60,60,61,61,62,62,59,58,60,61,65,65,59,65,60,59,61,61,60,66,65,60,60,60,61,62,63,63,67,69,74,72,71,70,68,67,63,64,66,64,65,65,60,61,60,60,61,62,63,63,78,83,87,84,80,75,70,67,65,66,64,64,63,60,60,64,61,60,61,61,61,62,79,85,88,85,81,76,70,67,65,65,63,64,63,59,60,65,61,60,61,61,61,61],
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
