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
        texture=ImageTexture(url=['../../images/5/newport17-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[32,31,28,33,36,37,40,47,50,52,53,51,51,39,36,35,37,35,40,39,43,43,28,28,32,36,38,41,46,57,59,53,56,48,46,39,36,39,32,35,37,39,38,38,44,47,47,46,40,45,58,59,59,56,56,48,41,37,37,35,35,39,37,37,39,40,43,42,42,43,48,56,60,66,62,60,51,45,41,39,47,34,41,42,42,45,44,44,42,44,47,49,59,64,66,68,67,61,54,46,39,38,38,39,49,46,46,43,44,44,45,47,48,54,63,69,71,66,65,59,53,47,43,41,41,44,40,42,44,48,48,48,44,46,52,57,68,69,70,74,65,59,52,51,44,42,39,44,43,48,44,45,43,43,47,45,53,59,65,72,69,67,65,59,52,49,49,47,47,46,42,43,44,44,40,39,46,50,56,67,67,72,71,68,61,57,53,52,49,50,46,47,45,45,45,42,41,40,50,58,59,67,71,67,69,70,68,59,52,54,53,51,51,50,45,45,42,40,39,38,57,63,69,71,77,76,70,68,65,62,61,55,51,53,53,52,49,45,44,41,40,40,68,71,73,80,81,82,74,73,68,64,57,53,55,49,49,49,52,47,40,43,45,45,75,77,85,90,86,90,79,74,70,61,59,56,54,53,52,52,51,44,46,45,47,47,81,91,93,92,87,83,79,78,69,66,59,61,56,55,54,53,47,46,47,46,51,52,88,95,97,95,97,88,82,72,66,62,61,58,55,52,52,46,45,44,53,58,58,60,98,101,103,94,97,90,78,69,62,60,61,56,55,53,48,47,43,49,55,54,55,55,101,102,103,98,94,89,77,70,61,56,55,56,52,51,46,45,47,53,54,50,47,48,106,107,100,100,98,85,77,65,58,56,57,53,50,50,48,47,44,52,53,48,52,53,102,107,103,99,93,87,76,67,59,58,56,51,47,49,52,49,54,50,47,50,49,49,107,108,103,99,91,82,72,63,60,52,54,51,49,47,43,51,61,63,55,56,50,49,108,107,102,97,91,77,67,60,60,55,52,47,48,45,50,53,55,63,65,59,52,51,105,102,99,94,80,71,65,59,53,52,49,46,48,46,48,54,53,53,62,61,57,55,105,102,98,86,79,68,63,54,50,49,48,48,42,47,47,45,48,49,55,62,61,63,105,102,98,85,79,67,61,53,50,48,47,47,43,45,47,44,49,48,56,59,61,62],
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
